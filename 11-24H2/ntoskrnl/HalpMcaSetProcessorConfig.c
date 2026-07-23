/*
 * XREFs of HalpMcaSetProcessorConfig @ 0x140B6D5A8
 * Callers:
 *     HalpMceInitProcessor @ 0x140B6D428 (HalpMceInitProcessor.c)
 *     HalpMcaResumeProcessorConfig @ 0x140B6D4AC (HalpMcaResumeProcessorConfig.c)
 * Callees:
 *     HalpMcaProcessorBankConfig @ 0x14047804C (HalpMcaProcessorBankConfig.c)
 *     HalpWheaWriteMsrStatus @ 0x140478250 (HalpWheaWriteMsrStatus.c)
 *     HalpWheaWriteMsrControl @ 0x14047829C (HalpWheaWriteMsrControl.c)
 *     HalpIsLmceSupported @ 0x1404F7DEC (HalpIsLmceSupported.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpMcaSetProcessorConfig(__int64 a1, __int64 a2)
{
  unsigned int v4; // edi
  unsigned int v5; // esi
  __int64 v6; // r14
  char v7; // cl
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdx
  __int64 result; // rax
  unsigned __int64 v12; // rax

  if ( HalpMcaEnabled )
  {
    if ( (guard_dispatch_icall_no_overrides(a2, 377LL) & 0x100) != 0 )
      guard_dispatch_icall_no_overrides(a2, 379LL);
    if ( HalpIsLmceSupported() )
    {
      ++HalpLmceSupportedCount;
      guard_dispatch_icall_no_overrides(a2, 1232LL);
      guard_dispatch_icall_no_overrides(a2, 1232LL);
    }
    else
    {
      ++HalpLmceNotSupportedCount;
    }
    if ( !HalpMcaNumberOfBanks )
    {
      v12 = __readmsr(0x179u);
      HalpMcaNumberOfBanks = v12;
    }
    v4 = 0;
    v5 = (unsigned __int8)HalpMcaNumberOfBanks;
    if ( HalpMcaNumberOfBanks )
    {
      v6 = a1 + 84;
      do
      {
        if ( !HalpMcaBanksValidOnBoot || PshedIsSystemWheaEnabled() )
          HalpWheaWriteMsrStatus(a2, v4);
        HalpWheaWriteMsrControl(a2, v4);
        HalpMcaProcessorBankConfig(a2, v4++);
        v6 += 28LL;
      }
      while ( v4 < v5 );
    }
  }
  v7 = HalpMceEnabled;
  v8 = __readcr4();
  v9 = v8;
  v10 = v8 | 0x40;
  result = v9 ^ 0x40;
  if ( !v7 )
    v10 = result;
  __writecr4(v10);
  return result;
}
