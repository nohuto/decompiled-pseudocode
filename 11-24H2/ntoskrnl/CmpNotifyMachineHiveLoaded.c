/*
 * XREFs of CmpNotifyMachineHiveLoaded @ 0x140667888
 * Callers:
 *     CmpFinishSystemHivesLoad @ 0x1407CA230 (CmpFinishSystemHivesLoad.c)
 * Callees:
 *     ExfReleasePushLock @ 0x14025E260 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     CmpWorkItemQueueWork @ 0x1403A68B0 (CmpWorkItemQueueWork.c)
 */

__int64 __fastcall CmpNotifyMachineHiveLoaded(unsigned int a1)
{
  __int64 v1; // rsi
  volatile signed __int32 *v2; // rbx
  _QWORD *v3; // rax
  _QWORD *v4; // rdi
  wchar_t **v5; // rdi
  wchar_t *v6; // rcx
  __int64 v7; // rax
  signed __int64 v8; // rax
  signed __int64 v9; // rdx
  signed __int64 v10; // rtt

  v1 = 23LL * a1;
  v2 = (volatile signed __int32 *)&CmpMachineHiveList[v1 + 18];
  v3 = KeAbPreAcquire((__int64)v2, 0LL);
  v4 = v3;
  if ( _interlockedbittestandset64(v2, 0LL) )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&CmpMachineHiveList[v1 + 18],
      (__int64)v3,
      (__int64)&CmpMachineHiveList[v1 + 18]);
  if ( v4 )
    *((_BYTE *)v4 + 10) = 1;
  v5 = &CmpMachineHiveList[v1 + 19];
  while ( 1 )
  {
    v6 = *v5;
    if ( *v5 == (wchar_t *)v5 )
      break;
    if ( *((wchar_t ***)v6 + 1) != v5 || (v7 = *(_QWORD *)v6, *(wchar_t **)(*(_QWORD *)v6 + 8LL) != v6) )
      __fastfail(3u);
    *v5 = (wchar_t *)v7;
    *(_QWORD *)(v7 + 8) = v5;
    *((_BYTE *)v6 + 109) = 0;
    CmpWorkItemQueueWork((PWORK_QUEUE_ITEM)(v6 + 8));
  }
  _m_prefetchw((const void *)v2);
  v8 = *(_QWORD *)v2;
  v9 = *(_QWORD *)v2 - 16LL;
  if ( (*(_QWORD *)v2 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v9 = 0LL;
  if ( (v8 & 2) != 0
    || (v10 = *(_QWORD *)v2, v10 != _InterlockedCompareExchange64((volatile signed __int64 *)v2, v9, v8)) )
  {
    ExfReleasePushLock(&CmpMachineHiveList[v1 + 18]);
  }
  return KeAbPostRelease((ULONG_PTR)&CmpMachineHiveList[v1 + 18]);
}
