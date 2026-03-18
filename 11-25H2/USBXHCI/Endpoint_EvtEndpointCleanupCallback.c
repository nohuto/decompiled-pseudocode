/*
 * XREFs of Endpoint_EvtEndpointCleanupCallback @ 0x140002440
 * Callers:
 *     <none>
 * Callees:
 *     XilEndpoint_ReleaseBuffer @ 0x140001CBC (XilEndpoint_ReleaseBuffer.c)
 *     WPP_RECORDER_SF_ddqqq @ 0x140001E88 (WPP_RECORDER_SF_ddqqq.c)
 *     XilEndpoint_FreeResources @ 0x140002654 (XilEndpoint_FreeResources.c)
 *     UsbDevice_RemoveEndpointFromDeviceEndpointList @ 0x14000266C (UsbDevice_RemoveEndpointFromDeviceEndpointList.c)
 *     McTemplateK0pppnnn_EtwWriteTransfer @ 0x140003138 (McTemplateK0pppnnn_EtwWriteTransfer.c)
 *     XilEndpoint_DestroySecureObject @ 0x140046954 (XilEndpoint_DestroySecureObject.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Endpoint_EvtEndpointCleanupCallback(__int64 a1)
{
  __int64 v2; // rax
  _QWORD *v3; // rbx
  __int64 v4; // rdi
  __int64 result; // rax
  __int64 v6; // r8
  PIRP *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  int v10; // [rsp+20h] [rbp-48h]

  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
         WdfDriverGlobals,
         a1,
         off_14006AFE8);
  v3 = (_QWORD *)v2;
  v4 = v2 + 1320;
  if ( *(_BYTE *)(v2 + 1344) )
    XilEndpoint_DestroySecureObject(v2 + 1320);
  result = XilEndpoint_FreeResources(v4);
  v6 = v3[3];
  if ( v6 == a1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_ddqqq(*(_QWORD *)(*v3 + 72LL), *(unsigned __int8 *)(v3[2] + 135LL), v6, 0x16u, v10);
    if ( *((_DWORD *)v3 + 36) != 1 )
    {
      v8 = *((unsigned int *)v3 + 36);
      v9 = v3[2];
      if ( v3 == *(_QWORD **)(v9 + 8 * v8 + 168) )
        *(_QWORD *)(v9 + 8 * v8 + 168) = 0LL;
    }
    v7 = (PIRP *)v3[34];
    if ( v7 )
    {
      if ( *v7 )
      {
        IoFreeIrp(*v7);
        *(_QWORD *)v3[34] = 0LL;
      }
      if ( *(_QWORD *)(v3[34] + 144LL) )
      {
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01033 + 1664))(WdfDriverGlobals);
        *(_QWORD *)(v3[34] + 144LL) = 0LL;
      }
      ExFreePoolWithTag((PVOID)v3[34], 0x49434858u);
    }
    if ( v3[33] )
    {
      XilEndpoint_ReleaseBuffer((__int64)v3);
      v3[33] = 0LL;
    }
    result = UsbDevice_RemoveEndpointFromDeviceEndpointList(v3[2], v3[3], v3 + 8);
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 2) != 0 )
      return McTemplateK0pppnnn_EtwWriteTransfer(
               (int)v3 + 103,
               (unsigned int)&USBXHCI_ETW_EVENT_ENDPOINT_DELETE,
               0,
               *(_QWORD *)(*v3 + 8LL),
               v3[1],
               v3[3]);
  }
  return result;
}
