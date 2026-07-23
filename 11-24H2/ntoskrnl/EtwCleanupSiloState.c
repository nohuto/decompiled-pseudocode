/*
 * XREFs of EtwCleanupSiloState @ 0x1407A63FC
 * Callers:
 *     PspDeleteServerSiloGlobals @ 0x140772C14 (PspDeleteServerSiloGlobals.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KeBugCheck @ 0x1404F9230 (KeBugCheck.c)
 *     EtwpCleanupSiloState @ 0x1407A722C (EtwpCleanupSiloState.c)
 */

__int64 __fastcall EtwCleanupSiloState(_QWORD *P)
{
  unsigned int i; // edx
  unsigned int j; // esi
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v5; // r14
  char *v6; // rbp
  unsigned int k; // ecx

  if ( !P )
LABEL_20:
    KeBugCheck(0x11Du);
  for ( i = 0; i < *((_DWORD *)P + 4); ++i )
  {
    if ( *(_QWORD *)(P[89] + 8LL * i) != 1LL )
      goto LABEL_20;
  }
  for ( j = 0; j < 0x40; ++j )
  {
    CurrentThread = KeGetCurrentThread();
    v5 = &P[7 * j + 90];
    --CurrentThread->KernelApcDisable;
    v6 = (char *)KeAbPreAcquire((__int64)(v5 + 6), 0LL);
    if ( _InterlockedCompareExchange64(v5 + 6, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v5 + 6, 0, v6, (__int64)(v5 + 6));
    if ( v6 )
      v6[10] = 1;
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
