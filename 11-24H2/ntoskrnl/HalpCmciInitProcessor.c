/*
 * XREFs of HalpCmciInitProcessor @ 0x140478374
 * Callers:
 *     HalpInitializeCmc @ 0x140B4DB28 (HalpInitializeCmc.c)
 *     HalpMcaResumeProcessorConfig @ 0x140B6D4AC (HalpMcaResumeProcessorConfig.c)
 *     HalpCmciInit @ 0x140B6E1D8 (HalpCmciInit.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140284900 (KeInsertQueueDpc.c)
 *     HalpGetCpuVendor @ 0x140478774 (HalpGetCpuVendor.c)
 *     HalpCmciSetProcessorConfig @ 0x140478794 (HalpCmciSetProcessorConfig.c)
 *     HalpGetMcaPcrContext @ 0x1404787C8 (HalpGetMcaPcrContext.c)
 *     HalpCmciPollProcessor @ 0x140478818 (HalpCmciPollProcessor.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     HalpIsCmciImplementedAMD @ 0x140B4E39C (HalpIsCmciImplementedAMD.c)
 */

BOOLEAN __fastcall HalpCmciInitProcessor(__int64 a1, __int64 a2)
{
  char v4; // si
  __int64 v5; // rcx
  unsigned __int8 CurrentIrql; // bp
  __int64 v7; // rdx
  __int64 McaPcrContext; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdi
  BOOLEAN result; // al

  v4 = 1;
  if ( (unsigned __int8)HalpGetCpuVendor(a1, a2) == 1 && !(unsigned __int8)HalpIsCmciImplementedAMD() )
  {
    HalpMcaPollForCmc = 1;
    v4 = 0;
  }
  CurrentIrql = KeGetCurrentIrql();
  v7 = 15LL;
  __writecr8(0xFuLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v5) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v5, 15LL);
  }
  if ( !HalpCmciRevertToPolledMode )
  {
    if ( *(_BYTE *)(a1 + 48) == 5 )
      goto LABEL_6;
    HalpMcaPollForCmc = 1;
  }
  v4 = 0;
LABEL_6:
  LOBYTE(v7) = v4;
  HalpCmciSetProcessorConfig(a1, v7, a2);
  McaPcrContext = HalpGetMcaPcrContext(a2);
  v12 = McaPcrContext;
  if ( McaPcrContext && v4 )
  {
    *(_DWORD *)(McaPcrContext + 120) = 0;
    *(_BYTE *)(McaPcrContext + 128) = 0;
  }
  if ( KiIrqlFlags )
  {
    LOBYTE(v9) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v9);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  if ( v4 )
  {
    result = HalpMcaWheaReady;
    if ( HalpMcaWheaReady )
    {
      result = KeGetCurrentIrql();
      if ( result > 2u )
      {
        if ( v12 && *(_QWORD *)(v12 + 16) )
        {
          if ( *(_QWORD *)(v12 + 24) )
            return KeInsertQueueDpc((PRKDPC)(v12 + 48), 0LL, 0LL);
        }
      }
      else
      {
        return HalpCmciPollProcessor(a2, v9, v10, v11);
      }
    }
  }
  return result;
}
