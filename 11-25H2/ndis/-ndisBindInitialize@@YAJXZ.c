/*
 * XREFs of ?ndisBindInitialize@@YAJXZ @ 0x140198D4C
 * Callers:
 *     DriverEntry @ 0x140196234 (DriverEntry.c)
 * Callees:
 *     ?ndisBindBuilderCleanup@@YAXXZ @ 0x140150784 (-ndisBindBuilderCleanup@@YAXXZ.c)
 *     ??0KPushLock@@QEAA@XZ @ 0x1401735C0 (--0KPushLock@@QEAA@XZ.c)
 *     ?ndisBindBuilderInitialize@@YAJXZ @ 0x140198DF0 (-ndisBindBuilderInitialize@@YAJXZ.c)
 */

__int64 ndisBindInitialize(void)
{
  __int64 result; // rax
  KPushLock *PoolWithTag; // rdx
  KPushLock *v2; // rdx
  KPushLock *v3; // rdx
  __int64 v4; // rdx

  result = ndisBindBuilderInitialize();
  if ( !(_DWORD)result )
  {
    PoolWithTag = (KPushLock *)ExAllocatePoolWithTag(PagedPool, 0x38uLL, 0x6762444Eu);
    if ( PoolWithTag )
    {
      *(_OWORD *)&PoolWithTag->m_Lock.0 = 0LL;
      *(_OWORD *)&PoolWithTag[2].m_Lock.0 = 0LL;
      *(_OWORD *)&PoolWithTag[4].m_Lock.0 = 0LL;
      PoolWithTag[6].m_Lock.Value = 0LL;
      KPushLock::KPushLock(PoolWithTag);
      KPushLock::KPushLock(v2 + 1);
      KPushLock::KPushLock(v3 + 2);
      *(_DWORD *)(v4 + 24) = 0;
      *(_DWORD *)(v4 + 28) = 0;
      *(_QWORD *)(v4 + 32) = 0LL;
      *(_DWORD *)(v4 + 40) = 0;
      *(_DWORD *)(v4 + 44) = 0;
      *(_QWORD *)(v4 + 48) = 0LL;
      result = 0LL;
      qword_140127130 = v4;
    }
    else
    {
      qword_140127130 = 0LL;
      ndisBindBuilderCleanup();
      return 3221225626LL;
    }
  }
  return result;
}
