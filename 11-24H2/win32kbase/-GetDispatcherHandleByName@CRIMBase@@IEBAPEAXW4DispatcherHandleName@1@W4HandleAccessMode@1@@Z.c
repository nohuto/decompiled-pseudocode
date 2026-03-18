/*
 * XREFs of ?GetDispatcherHandleByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@W4HandleAccessMode@1@@Z @ 0x1400DA4B0
 * Callers:
 *     ?CancelInertiaTimer@CPTPProcessor@@AEAAXXZ @ 0x1400DA260 (-CancelInertiaTimer@CPTPProcessor@@AEAAXXZ.c)
 *     ?HandlePTPInertiaTimer@CHidInput@@QEAAX_NKPEAX@Z @ 0x1400DA2C4 (-HandlePTPInertiaTimer@CHidInput@@QEAAX_NKPEAX@Z.c)
 *     ?HandlePTPTimer@CHidInput@@QEAAX_NKPEAX@Z @ 0x1400DA360 (-HandlePTPTimer@CHidInput@@QEAAX_NKPEAX@Z.c)
 *     ArmRawMouseThrottlingTimer @ 0x1400DA400 (ArmRawMouseThrottlingTimer.c)
 *     ?Read@CBaseInput@@QEAAJXZ @ 0x140145BE0 (-Read@CBaseInput@@QEAAJXZ.c)
 *     ?CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z @ 0x14020BD10 (-CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z.c)
 *     ?HandleDelayZonePalmRejectionTimer@CHidInput@@QEAAX_NK@Z @ 0x14020F1F8 (-HandleDelayZonePalmRejectionTimer@CHidInput@@QEAAX_NK@Z.c)
 *     ?HandleFlushDelayZonePalmRejectInputTimer@CHidInput@@QEAAX_NK@Z @ 0x14020F274 (-HandleFlushDelayZonePalmRejectInputTimer@CHidInput@@QEAAX_NK@Z.c)
 *     ?HandlePTPDeferredMouseInputTimer@CHidInput@@QEAAX_NK@Z @ 0x14020F2C4 (-HandlePTPDeferredMouseInputTimer@CHidInput@@QEAAX_NK@Z.c)
 *     ?GetCursorUpdateHandle@CMouseSensor@@QEBAPEAXXZ @ 0x140210BA4 (-GetCursorUpdateHandle@CMouseSensor@@QEBAPEAXXZ.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CRIMBase::GetDispatcherHandleByName(__int64 a1, unsigned int a2, int a3)
{
  __int64 v3; // rbx
  __int64 v6; // rcx

  v3 = a2;
  if ( a2 >= 0x13 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 340LL);
  v6 = 56 * (v3 + 3);
  if ( a3 )
    return *(_QWORD *)(v6 + a1 + 32);
  else
    return *(_QWORD *)(v6 + a1 + 16);
}
