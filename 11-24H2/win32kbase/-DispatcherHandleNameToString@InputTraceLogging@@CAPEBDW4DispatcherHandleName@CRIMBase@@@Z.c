/*
 * XREFs of ?DispatcherHandleNameToString@InputTraceLogging@@CAPEBDW4DispatcherHandleName@CRIMBase@@@Z @ 0x1400E22EC
 * Callers:
 *     ?DispatcherObjectSignaled@Win32k@InputTraceLogging@@SAXW4DispatcherHandleName@CRIMBase@@@Z @ 0x1400E21C4 (-DispatcherObjectSignaled@Win32k@InputTraceLogging@@SAXW4DispatcherHandleName@CRIMBase@@@Z.c)
 * Callees:
 *     <none>
 */

const char *__fastcall InputTraceLogging::DispatcherHandleNameToString(unsigned int a1)
{
  unsigned int v1; // ecx
  unsigned int v2; // ecx
  unsigned int v4; // ecx
  unsigned int v5; // ecx
  unsigned int v6; // ecx
  unsigned int v7; // ecx
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  unsigned int v15; // ecx

  if ( a1 <= 9 )
  {
    if ( a1 == 9 )
      return "RemoteCloseEvent";
    if ( !a1 )
      return "RimPnpEvent";
    v1 = a1 - 1;
    if ( !v1 )
      return "RimAsyncPnpWorkNotificationSemaphore";
    v2 = v1 - 1;
    if ( !v2 )
      return "RimReadCompletionEvent";
    v4 = v2 - 1;
    if ( !v4 )
      return "RimTimer";
    v5 = v4 - 1;
    if ( !v5 )
      return "PTPTimer";
    v6 = v5 - 1;
    if ( !v6 )
      return "PTPInertiaTimer";
    v7 = v6 - 1;
    if ( !v7 )
      return "DelayZonePalmRejectionTimer";
    v8 = v7 - 1;
    if ( !v8 )
      return "FlushDelayZonePalmRejectInputTimer";
    if ( v8 == 1 )
      return "RemoteOpenEvent";
    return "UNKNOWN";
  }
  v9 = a1 - 10;
  if ( !v9 )
    return "DirectStartStopReadEvent";
  v10 = v9 - 1;
  if ( !v10 )
    return "TSLocalDeviceAttachedEvent";
  v11 = v10 - 1;
  if ( !v11 )
    return "PTPMarshalEvent";
  v12 = v11 - 1;
  if ( !v12 )
    return "MouseCursorUpdateEvent";
  v13 = v12 - 1;
  if ( !v13 )
    return "TouchSynthesizeEvent";
  v14 = v13 - 1;
  if ( !v14 )
    return "PTPInertiaHandleEvent";
  v15 = v14 - 1;
  if ( v15 )
  {
    if ( v15 == 1 )
      return "PTPDeferredMouseInputTimer";
    return "UNKNOWN";
  }
  return "RawMouseThrottlingTimer";
}
