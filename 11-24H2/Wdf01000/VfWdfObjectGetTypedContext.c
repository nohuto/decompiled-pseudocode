/*
 * XREFs of VfWdfObjectGetTypedContext @ 0x1400E22D0
 * Callers:
 *     VfEvtDeviceD0Entry @ 0x1400E2390 (VfEvtDeviceD0Entry.c)
 *     VfEvtDeviceD0EntryPostInterruptsEnabled @ 0x1400E24C0 (VfEvtDeviceD0EntryPostInterruptsEnabled.c)
 *     VfEvtDeviceD0Exit @ 0x1400E2560 (VfEvtDeviceD0Exit.c)
 *     VfEvtDeviceD0ExitPreInterruptsDisabled @ 0x1400E2690 (VfEvtDeviceD0ExitPreInterruptsDisabled.c)
 *     VfEvtDevicePrepareHardware @ 0x1400E2730 (VfEvtDevicePrepareHardware.c)
 *     VfEvtDeviceQueryRemove @ 0x1400E2860 (VfEvtDeviceQueryRemove.c)
 *     VfEvtDeviceQueryStop @ 0x1400E28F0 (VfEvtDeviceQueryStop.c)
 *     VfEvtDeviceRelationsQuery @ 0x1400E2980 (VfEvtDeviceRelationsQuery.c)
 *     VfEvtDeviceReleaseHardware @ 0x1400E2A20 (VfEvtDeviceReleaseHardware.c)
 *     VfEvtDeviceSelfManagedIoCleanup @ 0x1400E2B50 (VfEvtDeviceSelfManagedIoCleanup.c)
 *     VfEvtDeviceSelfManagedIoFlush @ 0x1400E2BE0 (VfEvtDeviceSelfManagedIoFlush.c)
 *     VfEvtDeviceSelfManagedIoInit @ 0x1400E2C70 (VfEvtDeviceSelfManagedIoInit.c)
 *     VfEvtDeviceSelfManagedIoRestart @ 0x1400E2D00 (VfEvtDeviceSelfManagedIoRestart.c)
 *     VfEvtDeviceSelfManagedIoSuspend @ 0x1400E2D90 (VfEvtDeviceSelfManagedIoSuspend.c)
 *     VfEvtDeviceSurpriseRemoval @ 0x1400E2E20 (VfEvtDeviceSurpriseRemoval.c)
 *     VfEvtDeviceUsageNotification @ 0x1400E2EB0 (VfEvtDeviceUsageNotification.c)
 *     VfEvtDeviceUsageNotificationEx @ 0x1400E2F60 (VfEvtDeviceUsageNotificationEx.c)
 *     VfEvtIoCanceledOnQueue @ 0x1400E3010 (VfEvtIoCanceledOnQueue.c)
 *     VfEvtIoDefault @ 0x1400E30A0 (VfEvtIoDefault.c)
 *     VfEvtIoDeviceControl @ 0x1400E3260 (VfEvtIoDeviceControl.c)
 *     VfEvtIoInternalDeviceControl @ 0x1400E3440 (VfEvtIoInternalDeviceControl.c)
 *     VfEvtIoRead @ 0x1400E3620 (VfEvtIoRead.c)
 *     VfEvtIoResume @ 0x1400E37F0 (VfEvtIoResume.c)
 *     VfEvtIoStop @ 0x1400E3880 (VfEvtIoStop.c)
 *     VfEvtIoWrite @ 0x1400E3970 (VfEvtIoWrite.c)
 * Callees:
 *     WPP_IFR_SF_sq @ 0x1400115F0 (WPP_IFR_SF_sq.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14008305C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

char *__fastcall VfWdfObjectGetTypedContext(unsigned __int64 Handle, const _WDF_OBJECT_CONTEXT_TYPE_INFO *TypeInfo)
{
  _FX_DRIVER_GLOBALS **v3; // r8
  __int64 v4; // rax
  const _WDF_OBJECT_CONTEXT_TYPE_INFO **v5; // rax
  const char *_a1; // rcx
  unsigned __int64 retaddr; // [rsp+48h] [rbp+0h]

  v3 = (_FX_DRIVER_GLOBALS **)(~Handle & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Handle & 1) != 0 )
    v3 = (_FX_DRIVER_GLOBALS **)((char *)v3 - *(unsigned __int16 *)v3);
  if ( !Handle )
    FxVerifierNullBugCheck(v3[2], retaddr);
  if ( !TypeInfo )
    FxVerifierNullBugCheck(v3[2], retaddr);
  v4 = *((unsigned __int16 *)v3 + 5);
  if ( (_WORD)v4 )
    v5 = (const _WDF_OBJECT_CONTEXT_TYPE_INFO **)((char *)v3 + v4);
  else
    v5 = 0LL;
  while ( v5 )
  {
    if ( v5[4] == TypeInfo )
      return (char *)(v5 + 6);
    v5 = (const _WDF_OBJECT_CONTEXT_TYPE_INFO **)v5[1];
  }
  _a1 = "<no typename given>";
  if ( TypeInfo->ContextName )
    _a1 = TypeInfo->ContextName;
  WPP_IFR_SF_sq(v3[2], 3u, 0x12u, 0xAu, WPP_Verifier_cpp_Traceguids, _a1, (const void *)Handle);
  return 0LL;
}
