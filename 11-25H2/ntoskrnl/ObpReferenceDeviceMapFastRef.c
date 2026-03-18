/*
 * XREFs of ObpReferenceDeviceMapFastRef @ 0x14097F690
 * Callers:
 *     ObpSetCurrentProcessDeviceMap @ 0x14097F450 (ObpSetCurrentProcessDeviceMap.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14030F050 (PsGetCurrentServerSiloGlobals.c)
 *     KeLeaveGuardedRegion @ 0x140320910 (KeLeaveGuardedRegion.c)
 *     ObDereferenceDeviceMap @ 0x14097F5CC (ObDereferenceDeviceMap.c)
 */

unsigned __int64 __fastcall ObpReferenceDeviceMapFastRef(signed __int64 *a1)
{
  signed __int64 v2; // r8
  signed __int64 v3; // rax
  unsigned __int64 result; // rax
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  struct _KTHREAD *CurrentThread; // rcx
  signed __int64 *p_Blink; // rsi
  __int64 *v8; // rdi
  volatile signed __int64 *v9; // rdi
  signed __int64 v10; // rax
  signed __int64 v11; // rtt

  _m_prefetchw(a1);
  v2 = *a1;
  if ( (*a1 & 0xF) != 0 )
  {
    do
    {
      v3 = _InterlockedCompareExchange64(a1, v2 - 1, v2);
      if ( v2 == v3 )
        break;
      v2 = v3;
    }
    while ( (v3 & 0xF) != 0 );
  }
  result = v2 & 0xFFFFFFFFFFFFFFF0uLL;
  if ( (v2 & 0xF) == 0 )
  {
    CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
    CurrentThread = KeGetCurrentThread();
    p_Blink = (signed __int64 *)&CurrentServerSiloGlobals[7].Blink;
    --CurrentThread->SpecialApcDisable;
    v8 = KeAbPreAcquire((__int64)&CurrentServerSiloGlobals[7].Blink, 0LL);
    if ( _InterlockedCompareExchange64(p_Blink, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(p_Blink, 0, v8, (unsigned __int64)p_Blink);
    if ( v8 )
      *((_BYTE *)v8 + 10) = 1;
    v9 = (volatile signed __int64 *)(*a1 & 0xFFFFFFFFFFFFFFF0uLL);
    if ( v9 )
    {
      if ( _InterlockedExchangeAdd64(v9 + 30, 0xFuLL) <= 0 )
        __fastfail(0xEu);
      _m_prefetchw(a1);
      v10 = *a1;
      while ( (unsigned __int64)(v10 & 0xF) + 14 <= 0xF
           && v9 == (volatile signed __int64 *)(v10 & 0xFFFFFFFFFFFFFFF0uLL) )
      {
        v11 = v10;
        v10 = _InterlockedCompareExchange64(a1, v10 + 14, v10);
        if ( v11 == v10 )
          goto LABEL_10;
      }
      ObDereferenceDeviceMap(v9, 0xEu);
    }
LABEL_10:
    if ( _InterlockedCompareExchange64(p_Blink, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(p_Blink);
    KeAbPostRelease((ULONG_PTR)p_Blink);
    KeLeaveGuardedRegion();
    return (unsigned __int64)v9;
  }
  return result;
}
