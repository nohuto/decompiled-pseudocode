/*
 * XREFs of NdisAllocateIoWorkItem @ 0x140057270
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z @ 0x140010EE0 (-ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x140011280 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1400129C0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisDereferenceDriver@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@EW4_NDIS_MDRV_REFTAG@@@Z @ 0x140012F00 (-ndisDereferenceDriver@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@EW4_NDIS_MDRV_REFTAG@@@Z.c)
 *     ?ndisDereferenceFilterDriver@@YAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@EW4_NDIS_LWFDRV_REFTAG@@@Z @ 0x14004EE60 (-ndisDereferenceFilterDriver@@YAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@EW4_NDIS_LWFDRV_REFTAG@@@Z.c)
 */

NDIS_HANDLE __stdcall NdisAllocateIoWorkItem(NDIS_HANDLE NdisObjectHandle)
{
  NDIS_HANDLE result; // rax
  _QWORD *v3; // rbx
  char v4; // al
  _DEVICE_OBJECT *v5; // rsi
  PIO_WORKITEM WorkItem; // rax
  _DEVICE_OBJECT *v7; // rsi
  PIO_WORKITEM v8; // rax
  PIO_WORKITEM v9; // rax
  __int64 v10; // rcx
  PIO_WORKITEM v11; // rax
  PIO_WORKITEM v12; // rax
  int v13; // [rsp+38h] [rbp+10h] BYREF

  result = (NDIS_HANDLE)ExAllocatePool2(64LL, 48LL, 1769423950LL);
  v3 = result;
  if ( result )
  {
    *(_DWORD *)result = 3146000;
    *((_QWORD *)result + 1) = NdisObjectHandle;
    v4 = *(_BYTE *)NdisObjectHandle;
    if ( *(_BYTE *)NdisObjectHandle == 17 )
    {
      if ( (unsigned __int8)ndisReferenceMiniport((struct _NDIS_MINIPORT_BLOCK *)NdisObjectHandle, 0x63u) != 1 )
        goto LABEL_16;
      v5 = (_DEVICE_OBJECT *)*((_QWORD *)NdisObjectHandle + 478);
      WorkItem = IoAllocateWorkItem(v5);
      v3[2] = WorkItem;
      if ( WorkItem )
        goto LABEL_5;
      ndisDereferenceMiniport((struct _NDIS_MINIPORT_BLOCK *)NdisObjectHandle, 0x63u);
      goto LABEL_27;
    }
    switch ( v4 )
    {
      case 2:
        v13 = 0;
        if ( !ndisReferenceRefEx((PKSPIN_LOCK)NdisObjectHandle + 49, 3u, (enum _NDIS_REFERENCE_STATUS *)&v13) )
          goto LABEL_16;
        v7 = (_DEVICE_OBJECT *)*((_QWORD *)NdisObjectHandle + 5);
        v8 = IoAllocateWorkItem(v7);
        v3[2] = v8;
        if ( v8 )
          goto LABEL_11;
        ndisDereferenceDriver((struct _NDIS_M_DRIVER_BLOCK *)NdisObjectHandle, 0, 3u);
        break;
      case 4:
        v13 = 0;
        if ( !ndisReferenceRefEx((PKSPIN_LOCK)NdisObjectHandle + 9, 1u, (enum _NDIS_REFERENCE_STATUS *)&v13) )
          goto LABEL_16;
        v7 = (_DEVICE_OBJECT *)*((_QWORD *)NdisObjectHandle + 2);
        v9 = IoAllocateWorkItem(v7);
        v3[2] = v9;
        if ( v9 )
        {
LABEL_11:
          if ( v7 )
            return v3;
LABEL_12:
          if ( !v3 )
            return v3;
LABEL_16:
          ExFreePoolWithTag(v3, 0);
          return 0LL;
        }
        ndisDereferenceFilterDriver((_NDIS_FILTER_DRIVER_BLOCK *)NdisObjectHandle, 0, 1u);
        break;
      case 9:
        v10 = *((_QWORD *)NdisObjectHandle + 3);
        if ( *(_BYTE *)v10 == 2 )
        {
          v13 = 0;
          if ( !ndisReferenceRefEx((PKSPIN_LOCK)(v10 + 392), 4u, (enum _NDIS_REFERENCE_STATUS *)&v13) )
            goto LABEL_16;
          v5 = (_DEVICE_OBJECT *)*((_QWORD *)NdisObjectHandle + 4);
          v12 = IoAllocateWorkItem(v5);
          v3[2] = v12;
          if ( v12 )
            goto LABEL_5;
          ndisDereferenceDriver(*((struct _NDIS_M_DRIVER_BLOCK **)NdisObjectHandle + 3), 0, 4u);
        }
        else
        {
          if ( *(_BYTE *)v10 != 4 )
            goto LABEL_16;
          v13 = 0;
          if ( !ndisReferenceRefEx((PKSPIN_LOCK)(v10 + 72), 2u, (enum _NDIS_REFERENCE_STATUS *)&v13) )
            goto LABEL_16;
          v5 = (_DEVICE_OBJECT *)*((_QWORD *)NdisObjectHandle + 4);
          v11 = IoAllocateWorkItem(v5);
          v3[2] = v11;
          if ( v11 )
            goto LABEL_5;
          ndisDereferenceFilterDriver(*((_NDIS_FILTER_DRIVER_BLOCK **)NdisObjectHandle + 3), 0, 2u);
        }
LABEL_27:
        ExFreePoolWithTag(v3, 0);
        v3 = 0LL;
LABEL_5:
        if ( v5 )
          return v3;
        goto LABEL_12;
      default:
        goto LABEL_16;
    }
    ExFreePoolWithTag(v3, 0);
    v3 = 0LL;
    goto LABEL_11;
  }
  return result;
}
