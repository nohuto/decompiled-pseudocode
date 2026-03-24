/*
 * XREFs of KeyboardClassRemoveDevice @ 0x1C0001C50
 * Callers:
 *     KeyboardPnP @ 0x1C0001240 (KeyboardPnP.c)
 * Callees:
 *     KeyboardClassCleanupQueue @ 0x1C0001E00 (KeyboardClassCleanupQueue.c)
 */

void __fastcall KeyboardClassRemoveDevice(__int64 a1)
{
  KIRQL v2; // al
  IRP *v3; // rsi
  void *v4; // rcx

  if ( !_InterlockedExchange((volatile __int32 *)(a1 + 320), 1) )
  {
    v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 72));
    v3 = *(IRP **)(a1 + 296);
    if ( !v3 || *(_BYTE *)(a1 + 304) )
    {
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 72), v2);
      _InterlockedExchange((volatile __int32 *)(a1 + 320), 2);
    }
    else
    {
      *(_BYTE *)(a1 + 304) = 1;
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 72), v2);
      IoCancelIrp(v3);
      if ( _InterlockedExchange((volatile __int32 *)(a1 + 320), 2) == 3 )
        IofCompleteRequest(v3, 0);
    }
  }
  IoWMIRegistrationControl(*(PDEVICE_OBJECT *)a1, 2u);
  if ( *(_BYTE *)(a1 + 65) )
  {
    ExAcquireFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
    if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
    {
      if ( SHIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) <= 0 )
      {
        ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
      }
      else
      {
        *((_BYTE *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * *(unsigned int *)(a1 + 196) + 16) = 0;
        ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
        v4 = (void *)_InterlockedExchange64((volatile __int64 *)(a1 + 328), 0LL);
        if ( v4 )
          IoUnregisterPlugPlayNotification(v4);
      }
    }
    else
    {
      ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
      if ( !*(_BYTE *)(a1 + 363) && *(_QWORD *)(a1 + 96) )
        IoSetDeviceInterfaceState((PUNICODE_STRING)(a1 + 88), 0);
    }
  }
  if ( *(_BYTE *)(a1 + 64) )
    KeyboardClassCleanupQueue(v4, a1, 0LL);
}
