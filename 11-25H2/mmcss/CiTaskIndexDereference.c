/*
 * XREFs of CiTaskIndexDereference @ 0x1C0003CB0
 * Callers:
 *     CiCreateTaskIndexClientFromThread @ 0x1C000CC90 (CiCreateTaskIndexClientFromThread.c)
 *     CiDispatchCreateTaskIndexClient @ 0x1C000CEB0 (CiDispatchCreateTaskIndexClient.c)
 *     CiThreadCreate @ 0x1C000D720 (CiThreadCreate.c)
 *     CiThreadCleanup @ 0x1C000DF90 (CiThreadCleanup.c)
 *     CiDispatchClose @ 0x1C000E390 (CiDispatchClose.c)
 * Callees:
 *     CiSchedulerRemoveTaskIndex @ 0x1C0003D50 (CiSchedulerRemoveTaskIndex.c)
 *     CiAcquireTaskIndexListLock @ 0x1C000D700 (CiAcquireTaskIndexListLock.c)
 *     CiTaskIndexRemove @ 0x1C000E670 (CiTaskIndexRemove.c)
 *     CiReleaseTaskIndexListLock @ 0x1C000E6B0 (CiReleaseTaskIndexListLock.c)
 */

void __fastcall CiTaskIndexDereference(_QWORD *P)
{
  signed __int64 v2; // rax
  signed __int64 v3; // rtt
  signed __int64 v4; // rax
  bool v5; // cc
  signed __int64 v6; // rax

  _m_prefetchw(P + 6);
  v2 = P[6];
  while ( v2 - 1 > 0 )
  {
    v3 = v2;
    v2 = _InterlockedCompareExchange64(P + 6, v2 - 1, v2);
    if ( v3 == v2 )
      return;
  }
  if ( v2 != 1 )
    __fastfail(0xEu);
  CiAcquireTaskIndexListLock();
  v4 = _InterlockedExchangeAdd64(P + 6, 0xFFFFFFFFFFFFFFFFuLL);
  v5 = v4 <= 1;
  v6 = v4 - 1;
  if ( v5 )
  {
    if ( v6 )
      __fastfail(0xEu);
    CiTaskIndexRemove(P);
    CiReleaseTaskIndexListLock();
    if ( P )
    {
      CiSchedulerRemoveTaskIndex(P);
      ExFreePoolWithTag(P, 0);
    }
  }
  else
  {
    CiReleaseTaskIndexListLock();
  }
}
