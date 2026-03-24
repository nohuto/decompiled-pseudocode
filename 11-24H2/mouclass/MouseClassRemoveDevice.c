/*
 * XREFs of MouseClassRemoveDevice @ 0x1C0003050
 * Callers:
 *     MousePnP @ 0x1C0002B50 (MousePnP.c)
 * Callees:
 *     MouseClassCleanupQueue @ 0x1C0003330 (MouseClassCleanupQueue.c)
 */

void __fastcall MouseClassRemoveDevice(__int64 a1, char a2)
{
  __int64 v2; // rbx
  KIRQL v3; // al
  IRP *v4; // rdi

  v2 = a1;
  if ( a2 )
  {
    *(_BYTE *)(a1 + 346) = 1;
  }
  else if ( *(_BYTE *)(a1 + 346) )
  {
    goto LABEL_18;
  }
  if ( !_InterlockedExchange((volatile __int32 *)(a1 + 304), 1) )
  {
    v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 72));
    v4 = *(IRP **)(v2 + 280);
    if ( !v4 || *(_BYTE *)(v2 + 288) )
    {
      KeReleaseSpinLock((PKSPIN_LOCK)(v2 + 72), v3);
      _InterlockedExchange((volatile __int32 *)(v2 + 304), 2);
    }
    else
    {
      *(_BYTE *)(v2 + 288) = 1;
      KeReleaseSpinLock((PKSPIN_LOCK)(v2 + 72), v3);
      IoCancelIrp(v4);
      if ( _InterlockedExchange((volatile __int32 *)(v2 + 304), 2) == 3 )
        IofCompleteRequest(v4, 0);
    }
  }
  IoWMIRegistrationControl(*(PDEVICE_OBJECT *)v2, 2u);
  if ( *(_BYTE *)(v2 + 65) )
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
        *((_BYTE *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * *(unsigned int *)(v2 + 180) + 16) = 0;
        ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
        a1 = _InterlockedExchange64((volatile __int64 *)(v2 + 312), 0LL);
        if ( a1 )
          IoUnregisterPlugPlayNotification((PVOID)a1);
      }
    }
    else
    {
      ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
      if ( *(_QWORD *)(v2 + 96) )
        IoSetDeviceInterfaceState((PUNICODE_STRING)(v2 + 88), 0);
    }
  }
LABEL_18:
  if ( *(_BYTE *)(v2 + 64) )
    MouseClassCleanupQueue(a1, v2, 0LL);
}
