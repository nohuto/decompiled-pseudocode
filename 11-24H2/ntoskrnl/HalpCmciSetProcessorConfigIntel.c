/*
 * XREFs of HalpCmciSetProcessorConfigIntel @ 0x140478870
 * Callers:
 *     HalpCmciSetProcessorConfig @ 0x140478794 (HalpCmciSetProcessorConfig.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall HalpCmciSetProcessorConfigIntel(__int64 a1, char a2, __int64 a3)
{
  int v5; // eax
  unsigned int v6; // edi
  __int64 v7; // rbp
  unsigned __int64 v8; // rax

  if ( !HalpMcaNumberOfBanks )
  {
    v8 = __readmsr(0x179u);
    HalpMcaNumberOfBanks = v8;
  }
  LOBYTE(v5) = HalpMcaNumberOfBanks;
  if ( HalpMcaNumberOfBanks )
  {
    v6 = 640;
    v7 = (unsigned __int8)HalpMcaNumberOfBanks;
    do
    {
      LOBYTE(v5) = guard_dispatch_icall_no_overrides(a3, v6);
      if ( a2 )
      {
        v5 = guard_dispatch_icall_no_overrides(a3, v6);
        if ( (v5 & 0x40000000) != 0 )
          LOBYTE(v5) = guard_dispatch_icall_no_overrides(a3, v6);
      }
      ++v6;
      --v7;
    }
    while ( v7 );
  }
  return v5;
}
