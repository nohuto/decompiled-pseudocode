/*
 * XREFs of ?ndisDeviceInternalDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1400A6C18
 * Callers:
 *     NdisWdfDeviceInternalControlIrpHandler @ 0x1400949B0 (NdisWdfDeviceInternalControlIrpHandler.c)
 *     ?ndisDeviceInternalIrpDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1400A6D30 (-ndisDeviceInternalIrpDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14002E9A0 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14004B9E0 (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisDummyHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_OBJECT_HEADER@@PEAU_IRP@@@Z @ 0x14004BA10 (-ndisDummyHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_OBJECT_HEADER@@PEAU_IRP@@@Z.c)
 */

__int64 __fastcall ndisDeviceInternalDispatch(
        struct _DEVICE_OBJECT *a1,
        struct _NDIS_MINIPORT_BLOCK *a2,
        struct _IRP *a3)
{
  struct _NDIS_MINIPORT_BLOCK *v4; // rsi
  unsigned int v6; // edi
  NTSTATUS v7; // eax
  _DEVICE_OBJECT *NextDeviceObject; // rcx
  int v9; // edx

  v4 = a2;
  v6 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      1,
      53,
      (struct _GUID *)&WPP_c993d3286aac3856ef9e8dc1fba97826_Traceguids,
      (char)a1,
      (char)a3);
  }
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  if ( v4->Header.Type == 17 )
  {
    NextDeviceObject = v4->NextDeviceObject;
    if ( !NextDeviceObject )
      goto LABEL_8;
    ++a3->CurrentLocation;
    ++a3->Tail.Overlay.CurrentStackLocation;
    v7 = IofCallDriver(NextDeviceObject, a3);
  }
  else
  {
    v7 = ndisDummyHandler(a1, &v4->Header, a3);
  }
  v6 = v7;
LABEL_8:
  ndisDereferencePackage((PVOID *)&ndisPkgs);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v9,
      1,
      54,
      (struct _GUID *)&WPP_c993d3286aac3856ef9e8dc1fba97826_Traceguids,
      (char)a1,
      (char)a3);
  }
  return v6;
}
