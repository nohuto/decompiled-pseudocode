/*
 * XREFs of ExSetLicenseTamperState @ 0x1407B85B0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     ExpGetLicenseTamperState @ 0x140653EA0 (ExpGetLicenseTamperState.c)
 *     ExpSetLicenseTamperState @ 0x140654224 (ExpSetLicenseTamperState.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     ntoskrnl_20 @ 0x14095B5C0 (ntoskrnl_20.c)
 */

void __fastcall ExSetLicenseTamperState(int a1)
{
  struct _LIST_ENTRY *Blink; // r14
  struct _KTHREAD *CurrentThread; // rax
  char *v4; // rax
  char *v5; // rsi
  bool v6; // si
  __int64 v7; // rdx
  struct _LIST_ENTRY *v8; // rcx
  _OWORD v9[3]; // [rsp+20h] [rbp-58h] BYREF
  int v10; // [rsp+80h] [rbp+8h] BYREF

  v10 = 0;
  Blink = PsGetCurrentServerSiloGlobals()[54].Blink;
  if ( a1 && a1 != 3 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v4 = (char *)KeAbPreAcquire((__int64)&Blink[2927].Blink, 0LL);
    v5 = v4;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&Blink[2927].Blink, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&Blink[2927].Blink, v4, (__int64)&Blink[2927].Blink);
    if ( v5 )
      v5[10] = 1;
    ExpGetLicenseTamperState((__int64)Blink, &v10);
    v6 = v10 == 0;
    ExpSetLicenseTamperState((__int64)Blink, a1);
    memset(v9, 0, sizeof(v9));
    ntoskrnl_20(Blink, v9, 32LL, 0LL);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&Blink[2927].Blink, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&Blink[2927].Blink);
    KeAbPostRelease((ULONG_PTR)&Blink[2927].Blink);
    KeLeaveCriticalRegion();
    if ( v6 )
    {
      v8 = PsGetCurrentServerSiloGlobals()[54].Blink;
      if ( qword_140FD84A8 )
        guard_dispatch_icall_no_overrides(v8, v7);
    }
  }
}
