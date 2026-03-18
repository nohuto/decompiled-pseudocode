/*
 * XREFs of ObDeassignSecurity @ 0x14084B510
 * Callers:
 *     ObpRemoveObjectRoutine @ 0x14084AB80 (ObpRemoveObjectRoutine.c)
 *     WmipSecurityMethod @ 0x1409A5180 (WmipSecurityMethod.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ObDeassignSecurity(__int64 *a1)
{
  __int64 v1; // rbx
  char v2; // si
  unsigned int v3; // esi
  _QWORD *v4; // rbx
  signed __int64 v5; // rax
  signed __int64 v6; // rcx
  signed __int64 v7; // rtt
  struct _KTHREAD *CurrentThread; // r12
  unsigned __int64 *v10; // rbp
  _QWORD **v11; // r14
  __int64 *v12; // rax
  __int64 *v13; // r15
  signed __int64 v14; // rax
  _QWORD *i; // rcx

  v1 = *a1;
  v2 = *a1;
  *a1 = 0LL;
  v3 = (v2 & 0xF) + 1;
  v4 = (_QWORD *)((v1 & 0xFFFFFFFFFFFFFFF0uLL) - 32);
  _m_prefetchw(v4 + 1);
  v5 = v4[1];
  while ( 1 )
  {
    v6 = v5 - v3;
    if ( v6 <= 0 )
      break;
    v7 = v5;
    v5 = _InterlockedCompareExchange64(v4 + 1, v6, v5);
    if ( v7 == v5 )
      return 0LL;
  }
  if ( v6 )
    __fastfail(0xEu);
  CurrentThread = KeGetCurrentThread();
  v10 = (unsigned __int64 *)((char *)&ObsSecurityDescriptorCache + 16 * (unsigned __int8)*((_DWORD *)v4 + 4));
  --CurrentThread->KernelApcDisable;
  v11 = (_QWORD **)(v10 + 1);
  v12 = KeAbPreAcquire((__int64)v10, 0LL);
  v13 = v12;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v10, 0LL) )
    ExfAcquirePushLockExclusiveEx(v10, v12, (__int64)v10);
  if ( v13 )
    *((_BYTE *)v13 + 10) = 1;
  v14 = _InterlockedExchangeAdd64(v4 + 1, -v3) - v3;
  if ( v14 > 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v10);
    KeAbPostRelease((ULONG_PTR)v10);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
  }
  else
  {
    if ( v14 )
      __fastfail(0xEu);
    for ( i = *v11; i != v4; i = (_QWORD *)*i )
      v11 = (_QWORD **)i;
    *v11 = (_QWORD *)*v4;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v10);
    KeAbPostRelease((ULONG_PTR)v10);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    ExFreePoolWithTag(v4, 0x6353624Fu);
  }
  return 0LL;
}
