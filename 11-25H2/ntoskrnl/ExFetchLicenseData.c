/*
 * XREFs of ExFetchLicenseData @ 0x1407A88D0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14030F050 (PsGetCurrentServerSiloGlobals.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 */

__int64 __fastcall ExFetchLicenseData(void *a1, unsigned int a2, unsigned int *a3)
{
  struct _LIST_ENTRY *Blink; // rsi
  __int64 v7; // r8
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v10; // r15
  unsigned int *Flink; // rdx
  unsigned int v12; // [rsp+70h] [rbp+18h]

  v12 = 0;
  Blink = PsGetCurrentServerSiloGlobals()[54].Blink;
  if ( !v7 )
    return 3221225485LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v10 = KeAbPreAcquire((__int64)&Blink[2927].Blink, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&Blink[2927].Blink, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&Blink[2927].Blink, 0, v10, (unsigned __int64)&Blink[2927].Blink);
  if ( v10 )
    *((_BYTE *)v10 + 10) = 1;
  if ( LOBYTE(Blink[2937].Flink) )
    goto LABEL_8;
  Flink = (unsigned int *)Blink[2927].Flink;
  if ( Blink->Flink )
    Flink = (unsigned int *)Blink->Flink;
  if ( !Flink )
  {
LABEL_8:
    v12 = -1073741595;
  }
  else
  {
    *a3 = *Flink;
    if ( a1 && a2 && a2 >= *Flink )
    {
      memmove(a1, Flink, *Flink);
      if ( a2 >= 0x14 )
        *((_DWORD *)a1 + 3) &= ~1u;
    }
    else
    {
      v12 = -1073741789;
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&Blink[2927].Blink, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&Blink[2927].Blink);
  KeAbPostRelease((ULONG_PTR)&Blink[2927].Blink);
  KeLeaveCriticalRegion();
  return v12;
}
