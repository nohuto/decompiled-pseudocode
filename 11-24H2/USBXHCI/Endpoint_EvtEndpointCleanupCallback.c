/*
 * XREFs of Endpoint_EvtEndpointCleanupCallback @ 0x14002D310
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pppnnn_EtwWriteTransfer @ 0x14000AD1C (McTemplateK0pppnnn_EtwWriteTransfer.c)
 *     XilEndpoint_ReleaseBuffer @ 0x14001F92C (XilEndpoint_ReleaseBuffer.c)
 *     XilEndpoint_FreeResources @ 0x14002D524 (XilEndpoint_FreeResources.c)
 *     UsbDevice_RemoveEndpointFromDeviceEndpointList @ 0x14002D53C (UsbDevice_RemoveEndpointFromDeviceEndpointList.c)
 *     WPP_RECORDER_SF_ddqqq @ 0x14002D628 (WPP_RECORDER_SF_ddqqq.c)
 *     XilEndpoint_DestroySecureObject @ 0x140046C64 (XilEndpoint_DestroySecureObject.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Endpoint_EvtEndpointCleanupCallback(__int64 a1)
{
  __int64 v2; // rax
  _QWORD *v3; // rbx
  __int64 v4; // rdi
  __int64 result; // rax
  __int64 v6; // r8
  PIRP *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax

  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
         WdfDriverGlobals,
         a1,
         off_14006AFE8);
  v3 = (_QWORD *)v2;
  v4 = v2 + 1328;
  if ( *(_BYTE *)(v2 + 1352) )
    XilEndpoint_DestroySecureObject(v2 + 1328);
  result = XilEndpoint_FreeResources(v4);
  v6 = v3[3];
  if ( v6 == a1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_ddqqq(*(_QWORD *)(*v3 + 72LL), *(unsigned __int8 *)(v3[2] + 143LL), v6, 23);
    if ( *((_DWORD *)v3 + 38) != 1 )
    {
      v9 = *((unsigned int *)v3 + 38);
      v10 = v3[2];
      if ( v3 == *(_QWORD **)(v10 + 8 * v9 + 176) )
        *(_QWORD *)(v10 + 8 * v9 + 176) = 0LL;
    }
    v7 = (PIRP *)v3[35];
    if ( v7 )
    {
      if ( *v7 )
      {
        IoFreeIrp(*v7);
        *(_QWORD *)v3[35] = 0LL;
      }
      if ( *(_QWORD *)(v3[35] + 144LL) )
      {
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01033 + 1664))(WdfDriverGlobals);
        *(_QWORD *)(v3[35] + 144LL) = 0LL;
      }
      ExFreePoolWithTag((PVOID)v3[35], 0x49434858u);
    }
    v8 = v3[34];
    if ( v8 )
    {
      XilEndpoint_ReleaseBuffer((__int64)v3, v8);
      v3[34] = 0LL;
    }
    result = UsbDevice_RemoveEndpointFromDeviceEndpointList(v3[2], v3[3], v3 + 8);
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 2) != 0 )
      return McTemplateK0pppnnn_EtwWriteTransfer(
               (__int64)v3 + 111,
               (__int64)&USBXHCI_ETW_EVENT_ENDPOINT_DELETE,
               0LL,
               *(_QWORD *)(*v3 + 8LL),
               v3[1],
               v3[3]);
  }
  return result;
}
