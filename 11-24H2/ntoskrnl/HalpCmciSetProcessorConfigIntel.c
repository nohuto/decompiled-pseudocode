/*
 * XREFs of HalpCmciSetProcessorConfigIntel @ 0x14047D6E0
 * Callers:
 *     HalpCmciSetProcessorConfig @ 0x14047D604 (HalpCmciSetProcessorConfig.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall HalpCmciSetProcessorConfigIntel(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rsi
  __int64 v8; // rax
  unsigned int v9; // edi
  __int64 v10; // rbp
  unsigned __int64 v11; // rax
  __int64 v12; // rcx

  v7 = a2 != 0 ? 0x40000000 : 0;
  if ( !HalpMcaNumberOfBanks )
  {
    v11 = __readmsr(0x179u);
    HalpMcaNumberOfBanks = v11;
  }
  LOBYTE(v8) = HalpMcaNumberOfBanks;
  if ( HalpMcaNumberOfBanks )
  {
    v9 = 640;
    v10 = (unsigned __int8)HalpMcaNumberOfBanks;
    do
    {
      LOBYTE(v8) = guard_dispatch_icall_no_overrides(a3, v9, v7, a4);
      if ( a2 )
      {
        v8 = guard_dispatch_icall_no_overrides(a3, v9, 0LL, a4);
        if ( (v8 & 0x40000000) != 0 )
        {
          v12 = *(_DWORD *)(a1 + 68) & 0x3FFF;
          if ( (*(_DWORD *)(a1 + 68) & 0x3FFF) == 0 )
            v12 = 1LL;
          LOBYTE(v8) = guard_dispatch_icall_no_overrides(a3, v9, v12 | v8 & 0xFFFFFFFFFFFFC000uLL, a4);
        }
      }
      ++v9;
      --v10;
    }
    while ( v10 );
  }
  return v8;
}
