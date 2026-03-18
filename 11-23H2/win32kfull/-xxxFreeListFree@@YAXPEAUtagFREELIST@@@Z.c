/*
 * XREFs of ?xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x1C01F9FA8
 * Callers:
 *     ?xxxCleanupDdeConv@@YAXPEAUtagWND@@@Z @ 0x1C01F9968 (-xxxCleanupDdeConv@@YAXPEAUtagWND@@@Z.c)
 *     xxxDDETrackGetMessageHook @ 0x1C01FA884 (xxxDDETrackGetMessageHook.c)
 *     xxxDDETrackPostHook @ 0x1C01FAA84 (xxxDDETrackPostHook.c)
 *     xxxDDETrackWindowDying @ 0x1C01FAE60 (xxxDDETrackWindowDying.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C00AD510 (PushW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C011E7DC (W32GetThreadWin32Thread.c)
 *     xxxClientFreeDDEHandle @ 0x1C0211E90 (xxxClientFreeDDEHandle.c)
 */

void __fastcall xxxFreeListFree(struct tagFREELIST *a1)
{
  struct tagFREELIST *v1; // rbx
  int v2; // edi
  __int64 ThreadWin32Thread; // rax
  struct tagFREELIST *v4; // rcx
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]

  if ( a1 )
  {
    v6 = 0LL;
    v1 = a1;
    v5 = 0LL;
    v2 = *(_DWORD *)(gptiCurrent + 488LL) & 1;
    do
    {
      PushW32ThreadLock((__int64)v1, &v5, (__int64)FreeListFree);
      if ( !v2 )
        xxxClientFreeDDEHandle(*((_QWORD *)v1 + 1), *((unsigned int *)v1 + 4));
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)(ThreadWin32Thread + 16) = v5;
      v4 = v1;
      v1 = *(struct tagFREELIST **)v1;
      Win32FreePool(v4);
    }
    while ( v1 );
  }
}
