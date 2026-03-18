/*
 * XREFs of ExSetLicenseTamperState @ 0x1407B8160
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140347D10 (PsGetCurrentServerSiloGlobals.c)
 *     ExpGetLicenseTamperState @ 0x1406557A0 (ExpGetLicenseTamperState.c)
 *     ExpSetLicenseTamperState @ 0x140655B24 (ExpSetLicenseTamperState.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ntoskrnl_20 @ 0x140972DB0 (ntoskrnl_20.c)
 */

void __fastcall ExSetLicenseTamperState(int a1)
{
  struct _LIST_ENTRY *Blink; // r14
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v4; // rax
  _QWORD *v5; // rsi
  bool v6; // si
  __int64 v7; // rdx
  struct _LIST_ENTRY *v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  _OWORD v11[3]; // [rsp+20h] [rbp-58h] BYREF
  int v12; // [rsp+80h] [rbp+8h] BYREF

  v12 = 0;
  Blink = PsGetCurrentServerSiloGlobals()[54].Blink;
  if ( a1 && a1 != 3 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v4 = KeAbPreAcquire((__int64)&Blink[2927].Blink, 0LL);
    v5 = v4;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&Blink[2927].Blink, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&Blink[2927].Blink, (__int64)v4, (__int64)&Blink[2927].Blink);
    if ( v5 )
      *((_BYTE *)v5 + 10) = 1;
    ExpGetLicenseTamperState((__int64)Blink, &v12);
    v6 = v12 == 0;
    ExpSetLicenseTamperState((__int64)Blink, a1);
    memset(v11, 0, sizeof(v11));
    ntoskrnl_20(Blink, v11, 32LL, 0LL);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&Blink[2927].Blink, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&Blink[2927].Blink);
    KeAbPostRelease((ULONG_PTR)&Blink[2927].Blink);
    KeLeaveCriticalRegion();
    if ( v6 )
    {
      v8 = PsGetCurrentServerSiloGlobals()[54].Blink;
      if ( qword_140FD7498 )
        guard_dispatch_icall_no_overrides(v8, v7, v9, v10);
    }
  }
}
