/*
 * XREFs of IoAddProcessesToDump @ 0x1405A0164
 * Callers:
 *     IopLiveDumpAddProcesses @ 0x140598060 (IopLiveDumpAddProcesses.c)
 *     IopAddLiveDumpPagesToPartialKernelDump @ 0x1405A03BC (IopAddLiveDumpPagesToPartialKernelDump.c)
 * Callees:
 *     MmAddRangeToCrashDump @ 0x140677990 (MmAddRangeToCrashDump.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IoAddProcessesToDump(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rbx
  unsigned int v7; // edi
  int v8; // eax
  __int64 v9; // r9

  v3 = (__int64 *)PsActiveProcessHead;
  v7 = 0;
  while ( v3 != &PsActiveProcessHead )
  {
    v8 = MmAddRangeToCrashDump(a1, v3 - 59, 2112LL);
    if ( v8 < 0
      || (v8 = MmAddRangeToCrashDump(a1, v3[33], 2000LL), v8 < 0)
      || a2 && (v8 = guard_dispatch_icall_no_overrides(a1, v3 - 59, a3, v9), v8 < 0) )
    {
      if ( v8 == -1073741789 )
        return 0LL;
      v7 = v8;
    }
    v3 = (__int64 *)*v3;
  }
  return v7;
}
