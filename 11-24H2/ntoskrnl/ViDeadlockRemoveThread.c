/*
 * XREFs of ViDeadlockRemoveThread @ 0x140B9BF9C
 * Callers:
 *     ViDeadlockRemoveMemoryRangeThreads @ 0x1406126F8 (ViDeadlockRemoveMemoryRangeThreads.c)
 *     ViDeadlockEmptyDatabase @ 0x140B9B23C (ViDeadlockEmptyDatabase.c)
 *     VfDeadlockReleaseResource @ 0x140BA95AC (VfDeadlockReleaseResource.c)
 *     VfDeadlockAcquireResource @ 0x140BAA3C4 (VfDeadlockAcquireResource.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x1406109F4 (VfReportIssueWithOptions.c)
 *     VfUtilAddressRangeRemove @ 0x140B8518C (VfUtilAddressRangeRemove.c)
 *     ViDeadlockPreprocessOptions @ 0x140B9BBC4 (ViDeadlockPreprocessOptions.c)
 */

__int64 __fastcall ViDeadlockRemoveThread(ULONG_PTR a1, int a2)
{
  _QWORD *v3; // r9
  __int64 v4; // rdx
  _QWORD *v5; // rcx
  unsigned __int64 v6; // r8
  __int64 result; // rax
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // r8

  if ( !*((_DWORD *)ViDeadlockGlobals + 8196)
    && *((int *)ViDeadlockGlobals + 8282) <= 1024
    && !a2
    && *(_DWORD *)(a1 + 40) )
  {
    ViDeadlockPreprocessOptions(byte_140E0EA8C, "Terminated thread 0x%p owns lock.", 4106LL, *(_QWORD *)a1, a1, 0LL);
    VfReportIssueWithOptions(0xC4u, 0x100AuLL, *(_QWORD *)a1, a1, 0LL, byte_140E0EA8C);
  }
  v3 = ViDeadlockGlobals;
  --*((_QWORD *)ViDeadlockGlobals + 2051);
  v4 = *(_QWORD *)(a1 + 24);
  if ( *(_QWORD *)(v4 + 8) != a1 + 24 || (v5 = *(_QWORD **)(a1 + 32), *v5 != a1 + 24) )
    __fastfail(3u);
  *v5 = v4;
  *(_QWORD *)(v4 + 8) = v5;
  v6 = *(_QWORD *)a1 >> 12;
  result = 1023 * (v6 / 0x3FF);
  v8 = 16 * (v6 % 0x3FF);
  v9 = 2 * (v6 % 0x3FF + 1026);
  if ( *(_QWORD *)(v8 + v3[2050]) != v8 + v3[2050] )
    return VfUtilAddressRangeRemove(&v3[v9], *(_QWORD *)a1, 1944LL);
  v3[v9] = 0LL;
  v3[v9 + 1] = 0LL;
  return result;
}
