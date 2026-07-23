/*
 * XREFs of ExGetLicenseTamperState @ 0x1407B8480
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     ExpGetLicenseTamperState @ 0x140653EA0 (ExpGetLicenseTamperState.c)
 */

bool __fastcall ExGetLicenseTamperState(_DWORD *a1)
{
  struct _LIST_ENTRY *Blink; // rbp
  struct _KTHREAD *CurrentThread; // rax
  char *v4; // rdi
  bool v5; // di
  int v7; // [rsp+58h] [rbp+10h] BYREF

  v7 = 0;
  Blink = PsGetCurrentServerSiloGlobals()[54].Blink;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v4 = (char *)KeAbPreAcquire((__int64)&Blink[2927].Blink, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&Blink[2927].Blink, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&Blink[2927].Blink, 0, v4, (__int64)&Blink[2927].Blink);
  if ( v4 )
    v4[10] = 1;
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
