/*
 * XREFs of ndisReportTimeoutWaitingForExternalDriver @ 0x1401422E0
 * Callers:
 *     ndisFindSomeoneToBlame @ 0x14014219C (ndisFindSomeoneToBlame.c)
 * Callees:
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x14008ADC0 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     ?ndisLiveBugCheck@@YAX_K000@Z @ 0x14009049C (-ndisLiveBugCheck@@YAX_K000@Z.c)
 *     ?ndisMLiveBugCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_K111@Z @ 0x1400904E4 (-ndisMLiveBugCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_K111@Z.c)
 *     Feature_NDPQualitySummer26__private_IsEnabledDeviceUsageNoInline @ 0x140092EB0 (Feature_NDPQualitySummer26__private_IsEnabledDeviceUsageNoInline.c)
 *     ndisWatchdogReportTimeoutToDriver @ 0x1400C6420 (ndisWatchdogReportTimeoutToDriver.c)
 *     ndisGetMiniportFromObject @ 0x140159C20 (ndisGetMiniportFromObject.c)
 */

void __fastcall ndisReportTimeoutWaitingForExternalDriver(unsigned int a1, ULONG_PTR a2)
{
  ULONG_PTR v2; // rbp
  bool v3; // di
  struct _NDIS_MINIPORT_BLOCK *MiniportFromObject; // rbx

  v2 = a1;
  v3 = 0;
  MiniportFromObject = (struct _NDIS_MINIPORT_BLOCK *)ndisGetMiniportFromObject(*(_QWORD *)(a2 + 16));
  if ( !(unsigned int)Feature_NDPQualitySummer26__private_IsEnabledDeviceUsageNoInline() )
  {
    v3 = MmIsDriverVerifying((struct _DRIVER_OBJECT *)ndisDriverObject) != 0;
LABEL_8:
    if ( !MiniportFromObject )
      goto LABEL_17;
    goto LABEL_9;
  }
  if ( !MmIsDriverVerifying((struct _DRIVER_OBJECT *)ndisDriverObject) )
    goto LABEL_8;
  if ( !MiniportFromObject
    || !MiniportFromObject->DriverHandle
    || !_bittest16((const signed __int16 *)&MiniportFromObject->DriverHandle->Flags, 8u) )
  {
    v3 = 1;
    goto LABEL_8;
  }
LABEL_9:
  if ( MiniportFromObject->AoAc
    && MiniportFromObject->DriverHandle->HookType == NdisMiniportHookDriverTypeWdi
    && !ndisWatchdogForceBugCheckForWDI )
  {
    v3 = 1;
  }
  else if ( (_DWORD)v2 == 39
         && MiniportFromObject->DriverHandle->HookType == NdisMiniportHookDriverTypeWdi
         && !ndisBugCheckOnReenumerationTimeout )
  {
    v3 = 1;
  }
LABEL_17:
  if ( (unsigned int)Feature_NDPQualitySummer26__private_IsEnabledDeviceUsageNoInline() )
    ndisWatchdogReportTimeoutToDriver(v2, a2);
  if ( v3 )
    ndisBugCheckEx(0x25uLL, v2, a2, *(_QWORD *)(a2 + 40));
  if ( (_BYTE)KdDebuggerNotPresent )
  {
    if ( !MiniportFromObject || (_DWORD)v2 == 34 )
      ndisLiveBugCheck(37LL, v2, a2, *(_QWORD *)(a2 + 40));
    else
      ndisMLiveBugCheck(MiniportFromObject, 37LL, v2, a2, *(_QWORD *)(a2 + 40));
  }
}
