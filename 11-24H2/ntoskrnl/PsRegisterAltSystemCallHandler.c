/*
 * XREFs of PsRegisterAltSystemCallHandler @ 0x140779BC0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLock @ 0x14025E260 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

__int64 __fastcall PsRegisterAltSystemCallHandler(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v5; // rax
  signed __int8 v6; // cf
  _QWORD *v7; // rdi
  signed __int64 v8; // rax
  signed __int64 v9; // rdx
  ULONG_PTR v10; // rtt
  ULONG_PTR v11; // rcx

  v2 = (int)a2;
  if ( !a1 || a2 >= 2 )
    KeBugCheckEx(0x1E0u, 2uLL, 0LL, 0LL, 0LL);
  if ( !a2 )
    KeBugCheckEx(0x1E0u, 3uLL, 0LL, 0LL, 0LL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = KeAbPreAcquire((__int64)&PsAltSystemCallRegistrationLock, 0LL);
  v6 = _interlockedbittestandset64((volatile signed __int32 *)&PsAltSystemCallRegistrationLock, 0LL);
  v7 = v5;
  if ( v6 )
    ExfAcquirePushLockExclusiveEx(
      &PsAltSystemCallRegistrationLock,
      (__int64)v5,
      (__int64)&PsAltSystemCallRegistrationLock);
  if ( v7 )
    *((_BYTE *)v7 + 10) = 1;
  _m_prefetchw(&PsAltSystemCallRegistrationLock);
  v8 = PsAltSystemCallRegistrationLock;
  v9 = PsAltSystemCallRegistrationLock - 16;
  if ( PsAltSystemCallHandlers[v2] )
  {
    if ( (PsAltSystemCallRegistrationLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v9 = 0LL;
    if ( (PsAltSystemCallRegistrationLock & 2) != 0
      || (v10 = PsAltSystemCallRegistrationLock,
          v10 != _InterlockedCompareExchange64(
                   (volatile signed __int64 *)&PsAltSystemCallRegistrationLock,
                   v9,
                   PsAltSystemCallRegistrationLock)) )
    {
      ExfReleasePushLock(&PsAltSystemCallRegistrationLock);
    }
    KeAbPostRelease((ULONG_PTR)&PsAltSystemCallRegistrationLock);
    KeLeaveCriticalRegion();
    KeBugCheckEx(0x1E0u, 1uLL, PsAltSystemCallHandlers[v2], 0LL, 0LL);
  }
  v11 = PsAltSystemCallRegistrationLock & 0xFFFFFFFFFFFFFFF0uLL;
  PsAltSystemCallHandlers[v2] = a1;
  if ( v11 <= 0x10 )
    v9 = 0LL;
  if ( (v8 & 2) != 0
    || v8 != _InterlockedCompareExchange64((volatile signed __int64 *)&PsAltSystemCallRegistrationLock, v9, v8) )
  {
    ExfReleasePushLock(&PsAltSystemCallRegistrationLock);
  }
  KeAbPostRelease((ULONG_PTR)&PsAltSystemCallRegistrationLock);
  KeLeaveCriticalRegion();
  return 0LL;
}
