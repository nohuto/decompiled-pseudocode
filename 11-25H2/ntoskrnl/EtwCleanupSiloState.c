/*
 * XREFs of EtwCleanupSiloState @ 0x140796EEC
 * Callers:
 *     PspDeleteServerSiloGlobals @ 0x14076302C (PspDeleteServerSiloGlobals.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     KeBugCheck @ 0x1404F9260 (KeBugCheck.c)
 *     EtwpCleanupSiloState @ 0x140797D1C (EtwpCleanupSiloState.c)
 */

__int64 __fastcall EtwCleanupSiloState(_QWORD *P)
{
  unsigned int i; // edx
  unsigned int j; // esi
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v5; // r14
  __int64 *v6; // rbp
  unsigned int k; // ecx

  if ( !P )
LABEL_20:
    KeBugCheck(0x11Du);
  for ( i = 0; i < *((_DWORD *)P + 4); ++i )
  {
    if ( *(_QWORD *)(P[57] + 8LL * i) != 1LL )
      goto LABEL_20;
  }
  for ( j = 0; j < 0x40; ++j )
  {
    CurrentThread = KeGetCurrentThread();
    v5 = &P[7 * j + 58];
    --CurrentThread->KernelApcDisable;
    v6 = KeAbPreAcquire((__int64)(v5 + 6), 0LL);
    if ( _InterlockedCompareExchange64(v5 + 6, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v5 + 6, 0, v6, (unsigned __int64)(v5 + 6));
    if ( v6 )
      *((_BYTE *)v6 + 10) = 1;
    for ( k = 0; k < 3; ++k )
    {
      if ( (signed __int64 *)v5[2 * k] != &v5[2 * k] )
        goto LABEL_20;
    }
    if ( _InterlockedCompareExchange64(v5 + 6, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v5 + 6);
    KeAbPostRelease((ULONG_PTR)(v5 + 6));
    KeLeaveCriticalRegion();
  }
  return EtwpCleanupSiloState(P);
}
