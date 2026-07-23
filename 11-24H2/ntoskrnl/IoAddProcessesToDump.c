/*
 * XREFs of IoAddProcessesToDump @ 0x14059D088
 * Callers:
 *     IopLiveDumpAddProcesses @ 0x140594FE0 (IopLiveDumpAddProcesses.c)
 *     IopAddLiveDumpPagesToPartialKernelDump @ 0x14059D2EC (IopAddLiveDumpPagesToPartialKernelDump.c)
 * Callees:
 *     MmAddRangeToCrashDump @ 0x140678B70 (MmAddRangeToCrashDump.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IoAddProcessesToDump(__int64 a1, __int64 a2)
{
  __int64 *v2; // rbx
  unsigned int v5; // edi
  int v6; // eax

  v2 = (__int64 *)PsActiveProcessHead;
  v5 = 0;
  while ( v2 != &PsActiveProcessHead )
  {
    v6 = MmAddRangeToCrashDump(a1, v2 - 59, 2112LL);
    if ( v6 < 0
      || (v6 = MmAddRangeToCrashDump(a1, v2[33], 2008LL), v6 < 0)
      || a2 && (v6 = guard_dispatch_icall_no_overrides(a1, v2 - 59), v6 < 0) )
    {
      if ( v6 == -1073741789 )
        return 0LL;
      v5 = v6;
    }
    v2 = (__int64 *)*v2;
  }
  return v5;
}
