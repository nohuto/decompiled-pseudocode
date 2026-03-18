/*
 * XREFs of ExGetLicenseTamperState @ 0x1407A8B80
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14030F050 (PsGetCurrentServerSiloGlobals.c)
 *     ExpGetLicenseTamperState @ 0x1406498A0 (ExpGetLicenseTamperState.c)
 */

bool __fastcall ExGetLicenseTamperState(_DWORD *a1)
{
  struct _LIST_ENTRY *Blink; // rbp
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v4; // rdi
  bool v5; // di
  int v7; // [rsp+58h] [rbp+10h] BYREF

  v7 = 0;
  Blink = PsGetCurrentServerSiloGlobals()[54].Blink;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v4 = KeAbPreAcquire((__int64)&Blink[2927].Blink, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&Blink[2927].Blink, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&Blink[2927].Blink, 0, v4, (unsigned __int64)&Blink[2927].Blink);
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
