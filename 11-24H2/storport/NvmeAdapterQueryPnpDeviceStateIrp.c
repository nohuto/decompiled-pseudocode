/*
 * XREFs of NvmeAdapterQueryPnpDeviceStateIrp @ 0x14019AEE4
 * Callers:
 *     NvmeAdapterPnpIrp @ 0x1400D4884 (NvmeAdapterPnpIrp.c)
 * Callees:
 *     RaForwardIrp @ 0x1400177F0 (RaForwardIrp.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

NTSTATUS __fastcall NvmeAdapterQueryPnpDeviceStateIrp(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  int v6; // [rsp+20h] [rbp-38h]
  GUID v7; // [rsp+30h] [rbp-28h] BYREF

  v7 = 0LL;
  if ( *(_DWORD *)(a1 + 88) || *(_DWORD *)(a1 + 96) || *(_DWORD *)(a1 + 92) )
    *(_DWORD *)(a2 + 56) |= 0x20u;
  if ( StorEtwLoggingEnabled )
  {
    IoGetActivityIdIrp(a2, &v7);
    if ( (byte_140171462 & 0x20) != 0 )
    {
      v6 = *(_DWORD *)(a2 + 48);
      McTemplateK0pd_EtwWriteTransfer(v4, &EventPnpRequestComplete, &v7, a2, v6);
    }
  }
  return RaForwardIrp(*(struct _DEVICE_OBJECT **)(a1 + 24), (IRP *)a2);
}
