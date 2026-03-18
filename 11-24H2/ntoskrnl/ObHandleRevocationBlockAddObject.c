/*
 * XREFs of ObHandleRevocationBlockAddObject @ 0x1409AAE30
 * Callers:
 *     ObpCreateHandle @ 0x14084DAA0 (ObpCreateHandle.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLock @ 0x14025E260 (ExfReleasePushLock.c)
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO @ 0x1403C3480 (OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO.c)
 */

void __fastcall ObHandleRevocationBlockAddObject(struct _EX_RUNDOWN_REF *a1, __int64 a2)
{
  char v3; // r14
  __int64 v4; // rdi
  BOOLEAN v5; // al
  struct _KTHREAD *CurrentThread; // rdx
  signed __int64 *v7; // rbx
  BOOLEAN v8; // r12
  _QWORD *v9; // rax
  _QWORD *v10; // rbp
  struct _EX_RUNDOWN_REF **Count; // rax
  signed __int64 v12; // rax
  signed __int64 v13; // rdx
  signed __int64 v14; // rtt

  v3 = 0;
  v4 = OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO(a2 - 48);
  v5 = ExAcquireRundownProtection(a1 + 3);
  CurrentThread = KeGetCurrentThread();
  v7 = (signed __int64 *)&a1[2];
  v8 = v5;
  --CurrentThread->KernelApcDisable;
  v9 = KeAbPreAcquire((__int64)&a1[2], 0LL);
  v10 = v9;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&a1[2], 0LL) )
    ExfAcquirePushLockExclusiveEx(&a1[2].Count, (__int64)v9, (__int64)&a1[2]);
  if ( v10 )
    *((_BYTE *)v10 + 10) = 1;
  if ( !_InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 16), (signed __int64)a1, 0LL) )
  {
    Count = (struct _EX_RUNDOWN_REF **)a1[1].Count;
    if ( *Count != a1 )
      __fastfail(3u);
    *(_QWORD *)v4 = a1;
    v3 = 1;
    *(_QWORD *)(v4 + 8) = Count;
    *Count = (struct _EX_RUNDOWN_REF *)v4;
    a1[1].Count = v4;
  }
  _m_prefetchw(v7);
  v12 = *v7;
  v13 = *v7 - 16;
  if ( (*v7 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v13 = 0LL;
  if ( (v12 & 2) != 0 || (v14 = *v7, v14 != _InterlockedCompareExchange64(v7, v13, v12)) )
    ExfReleasePushLock(&a1[2].Count);
  KeAbPostRelease((ULONG_PTR)&a1[2]);
  KeLeaveCriticalRegion();
  if ( v8 )
  {
    if ( !v3 )
      ExReleaseRundownProtection_0(a1 + 3);
  }
}
