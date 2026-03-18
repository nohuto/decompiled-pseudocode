/*
 * XREFs of ExSetLicenseTamperState @ 0x1407A8CB0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14030F050 (PsGetCurrentServerSiloGlobals.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     ExpGetLicenseTamperState @ 0x1406498A0 (ExpGetLicenseTamperState.c)
 *     ExpSetLicenseTamperState @ 0x140649C24 (ExpSetLicenseTamperState.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     ntoskrnl_20 @ 0x140978FD0 (ntoskrnl_20.c)
 */

void __fastcall ExSetLicenseTamperState(int a1)
{
  struct _LIST_ENTRY *Blink; // r14
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v4; // rax
  __int64 *v5; // rsi
  bool v6; // si
  struct _LIST_ENTRY *v7; // rcx
  _OWORD v8[3]; // [rsp+20h] [rbp-58h] BYREF
  int v9; // [rsp+80h] [rbp+8h] BYREF

  v9 = 0;
  Blink = PsGetCurrentServerSiloGlobals()[54].Blink;
  if ( a1 && a1 != 3 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v4 = KeAbPreAcquire((__int64)&Blink[2927].Blink, 0LL);
    v5 = v4;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&Blink[2927].Blink, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&Blink[2927].Blink, v4, (__int64)&Blink[2927].Blink);
    if ( v5 )
      *((_BYTE *)v5 + 10) = 1;
    ExpGetLicenseTamperState((__int64)Blink, &v9);
    v6 = v9 == 0;
    ExpSetLicenseTamperState((__int64)Blink, a1);
    memset(v8, 0, sizeof(v8));
    ntoskrnl_20(Blink, v8, 32LL, 0LL);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&Blink[2927].Blink, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&Blink[2927].Blink);
    KeAbPostRelease((ULONG_PTR)&Blink[2927].Blink);
    KeLeaveCriticalRegion();
    if ( v6 )
    {
      v7 = PsGetCurrentServerSiloGlobals()[54].Blink;
      if ( qword_140FD7498 )
        guard_dispatch_icall_no_overrides(v7);
    }
  }
}
