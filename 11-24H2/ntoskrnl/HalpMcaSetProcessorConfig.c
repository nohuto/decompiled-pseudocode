/*
 * XREFs of HalpMcaSetProcessorConfig @ 0x140B68F1C
 * Callers:
 *     HalpMceInitProcessor @ 0x140B687E8 (HalpMceInitProcessor.c)
 *     HalpPostSleepMP @ 0x140B6886C (HalpPostSleepMP.c)
 *     HalpMcaResumeProcessorConfig @ 0x140B68E20 (HalpMcaResumeProcessorConfig.c)
 * Callees:
 *     HalpMcaProcessorBankConfig @ 0x14047CEBC (HalpMcaProcessorBankConfig.c)
 *     HalpWheaWriteMsrStatus @ 0x14047D0C0 (HalpWheaWriteMsrStatus.c)
 *     HalpWheaWriteMsrControl @ 0x14047D10C (HalpWheaWriteMsrControl.c)
 *     HalpIsLmceSupported @ 0x1404FA50C (HalpIsLmceSupported.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpMcaSetProcessorConfig(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // r9
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // r9
  unsigned int v10; // edi
  unsigned int v11; // esi
  __int64 v12; // r14
  char v13; // cl
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rdx
  __int64 result; // rax
  unsigned __int64 v18; // rax

  if ( HalpMcaEnabled )
  {
    if ( (guard_dispatch_icall_no_overrides(a2, 377LL, 0LL, a4) & 0x100) != 0 )
      guard_dispatch_icall_no_overrides(a2, 379LL, *(_QWORD *)(a1 + 56), v6);
    if ( HalpIsLmceSupported() )
    {
      ++HalpLmceSupportedCount;
      v8 = guard_dispatch_icall_no_overrides(a2, 1232LL, 0LL, v7);
      guard_dispatch_icall_no_overrides(a2, 1232LL, v8 | 1, v9);
    }
    else
    {
      ++HalpLmceNotSupportedCount;
    }
    if ( !HalpMcaNumberOfBanks )
    {
      v18 = __readmsr(0x179u);
      HalpMcaNumberOfBanks = v18;
    }
    v10 = 0;
    v11 = (unsigned __int8)HalpMcaNumberOfBanks;
    if ( HalpMcaNumberOfBanks )
    {
      v12 = a1 + 84;
      do
      {
        if ( !HalpMcaBanksValidOnBoot || PshedIsSystemWheaEnabled() )
          HalpWheaWriteMsrStatus(a2, v10);
        HalpWheaWriteMsrControl(a2, v10);
        HalpMcaProcessorBankConfig(a2, v10++);
        v12 += 28LL;
      }
      while ( v10 < v11 );
    }
  }
  v13 = HalpMceEnabled;
  v14 = __readcr4();
  v15 = v14;
  v16 = v14 | 0x40;
  result = v15 ^ 0x40;
  if ( !v13 )
    v16 = result;
  __writecr4(v16);
  return result;
}
