/*
 * XREFs of ?ndisPnPIrpQueryPnPDeviceState@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x14008C950
 * Callers:
 *     ?ndisPnPDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x140036ED0 (-ndisPnPDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     McTemplateK0jqxd_EtwWriteTransfer @ 0x1400388D0 (McTemplateK0jqxd_EtwWriteTransfer.c)
 */

__int64 __fastcall ndisPnPIrpQueryPnPDeviceState(
        struct _DEVICE_OBJECT *a1,
        struct _NDIS_MINIPORT_BLOCK *a2,
        struct _IRP *a3,
        unsigned __int8 *a4,
        unsigned __int8 *a5)
{
  struct _NDIS_MINIPORT_BLOCK *v6; // rdi
  unsigned __int64 *p_Information; // rbp
  struct _GUID *v9; // [rsp+20h] [rbp-28h]
  char v10; // [rsp+28h] [rbp-20h]
  __int64 v11; // [rsp+30h] [rbp-18h]

  v6 = a2;
  if ( (a2->PnPFlags & 0x1000) != 0 )
    a3->IoStatus.Information |= 2uLL;
  p_Information = &a3->IoStatus.Information;
  if ( (a2->PnPFlags & 0x100) != 0 )
  {
    p_Information = &a3->IoStatus.Information;
    if ( (a2->WSyncFlags & 4) == 0 )
    {
      p_Information = &a3->IoStatus.Information;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v10 = (char)a2;
        LOBYTE(a2) = 2;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (int)a2,
          13,
          47,
          (struct _GUID *)&WPP_c993d3286aac3856ef9e8dc1fba97826_Traceguids,
          v10);
        p_Information = &a3->IoStatus.Information;
      }
      if ( (byte_14011B102 & 0x20) != 0 )
      {
        LODWORD(v11) = 65537;
        LODWORD(v9) = v6->IfIndex;
        McTemplateK0jqxd_EtwWriteTransfer(
          (__int64)a1,
          (__int64)&QueryPnPDeviceStateFailed,
          (__int64)&v6->InterfaceGuid,
          (__int64)&v6->InterfaceGuid,
          (__int64)v9,
          v6->NetLuid.Value,
          v11);
      }
      a3->IoStatus.Information |= 4uLL;
    }
  }
  if ( v6->PagingPathCount )
    *p_Information |= 0x20uLL;
  a3->IoStatus.Status = 0;
  *a5 = 1;
  return 0LL;
}
