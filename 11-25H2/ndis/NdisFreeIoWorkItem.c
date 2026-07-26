/*
 * XREFs of NdisFreeIoWorkItem @ 0x140019680
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x14000F080 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisDereferenceDriver@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@EW4_NDIS_MDRV_REFTAG@@@Z @ 0x14000F5C0 (-ndisDereferenceDriver@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@EW4_NDIS_MDRV_REFTAG@@@Z.c)
 *     ?ndisDereferenceFilterDriver@@YAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@EW4_NDIS_LWFDRV_REFTAG@@@Z @ 0x1400187A0 (-ndisDereferenceFilterDriver@@YAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@EW4_NDIS_LWFDRV_REFTAG@@@Z.c)
 */

void __stdcall NdisFreeIoWorkItem(NDIS_HANDLE NdisIoWorkItemHandle)
{
  struct _NDIS_MINIPORT_BLOCK *v2; // rcx
  UCHAR Type; // al
  struct _NDIS_M_DRIVER_BLOCK *MiniportAdapterContext; // rcx

  v2 = (struct _NDIS_MINIPORT_BLOCK *)*((_QWORD *)NdisIoWorkItemHandle + 1);
  Type = v2->Header.Type;
  if ( v2->Header.Type == 17 )
  {
    ndisDereferenceMiniport(v2, 0x63u);
  }
  else
  {
    switch ( Type )
    {
      case 2u:
        ndisDereferenceDriver((struct _NDIS_M_DRIVER_BLOCK *)v2, 0, 3u);
        break;
      case 4u:
        ndisDereferenceFilterDriver((struct _NDIS_FILTER_DRIVER_BLOCK *)v2, 0, 1u);
        break;
      case 9u:
        MiniportAdapterContext = (struct _NDIS_M_DRIVER_BLOCK *)v2->MiniportAdapterContext;
        if ( MiniportAdapterContext->Header.Type == 2 )
        {
          ndisDereferenceDriver(MiniportAdapterContext, 0, 4u);
        }
        else if ( MiniportAdapterContext->Header.Type == 4 )
        {
          ndisDereferenceFilterDriver((struct _NDIS_FILTER_DRIVER_BLOCK *)MiniportAdapterContext, 0, 2u);
        }
        break;
    }
  }
  IoFreeWorkItem(*((PIO_WORKITEM *)NdisIoWorkItemHandle + 2));
  ExFreePoolWithTag(NdisIoWorkItemHandle, 0);
}
