/*
 * XREFs of ?CleanUpRoutingInfoForThread@CoreMessagingKPort@@QEAAXQEAUtagTHREADINFO@@@Z @ 0x1401A7B7C
 * Callers:
 *     xxxDestroyThreadInfo @ 0x14015F444 (xxxDestroyThreadInfo.c)
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14006B060 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14006B0F4 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 */

void __fastcall CoreMessagingKPort::CleanUpRoutingInfoForThread(CoreMessagingKPort *this, PETHREAD *a2)
{
  struct W32_PUSH_LOCK *v4; // rbx
  unsigned int ThreadId; // ebp
  char *v6; // rcx
  char *v7; // rdi

  v4 = (CoreMessagingKPort *)((char *)this + 8);
  ThreadId = (unsigned int)PsGetThreadId(*a2);
  W32AcquirePushLockExclusiveEx(v4, 0);
  v6 = (char *)this + 16;
  v7 = (char *)this + 32;
  while ( v6 != v7 )
  {
    if ( *(_QWORD *)v6 && *((_DWORD *)v6 + 2) == ThreadId )
    {
      *(_OWORD *)v6 = 0LL;
      a2[170] = (PETHREAD)((unsigned __int64)a2[170] & 0xFFFFFEFFFFFFFFFFuLL);
    }
    v6 += 16;
  }
  W32ReleasePushLockExclusiveEx(v4, 0LL);
}
