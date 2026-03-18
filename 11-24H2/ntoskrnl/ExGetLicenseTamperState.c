/*
 * XREFs of ExGetLicenseTamperState @ 0x1407B8030
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140347D10 (PsGetCurrentServerSiloGlobals.c)
 *     ExpGetLicenseTamperState @ 0x1406557A0 (ExpGetLicenseTamperState.c)
 */

bool __fastcall ExGetLicenseTamperState(_DWORD *a1)
{
  struct _LIST_ENTRY *Blink; // rbp
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v4; // rdi
  bool v5; // di
  int v7; // [rsp+58h] [rbp+10h] BYREF

  v7 = 0;
  Blink = PsGetCurrentServerSiloGlobals()[54].Blink;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v4 = KeAbPreAcquire((__int64)&Blink[2927].Blink, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&Blink[2927].Blink, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&Blink[2927].Blink, 0, v4, (__int64)&Blink[2927].Blink);
  if ( v4 )
    *((_BYTE *)v4 + 10) = 1;
  ExpGetLicenseTamperState((__int64)Blink, &v7);
  v5 = v7 != 0;
  if ( a1 )
    *a1 = v7;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&Blink[2927].Blink, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&Blink[2927].Blink);
  KeAbPostRelease((ULONG_PTR)&Blink[2927].Blink);
  KeLeaveCriticalRegion();
  return v5;
}
