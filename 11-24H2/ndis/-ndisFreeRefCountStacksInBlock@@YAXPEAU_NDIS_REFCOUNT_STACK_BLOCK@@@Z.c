/*
 * XREFs of ?ndisFreeRefCountStacksInBlock@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x140013860
 * Callers:
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x14000C6D0 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x14000CFD0 (-ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@.c)
 *     ?ndisDeviceControlHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x14000E580 (-ndisDeviceControlHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x14000F620 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x140011370 (-ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1400129C0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisDereferenceMiniportRef@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x140012CC0 (-ndisDereferenceMiniportRef@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisDereferenceDriver@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@EW4_NDIS_MDRV_REFTAG@@@Z @ 0x140012F00 (-ndisDereferenceDriver@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@EW4_NDIS_MDRV_REFTAG@@@Z.c)
 *     ?ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z @ 0x1400132F0 (-ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z.c)
 *     NdisDereferenceWithTag @ 0x140013540 (NdisDereferenceWithTag.c)
 *     ?ndisDereferenceMiniportForNsi@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFTAG@@@Z @ 0x140013B40 (-ndisDereferenceMiniportForNsi@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFT.c)
 *     ?ndisIfDereferenceMiniport@@YAXPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x140014380 (-ndisIfDereferenceMiniport@@YAXPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG.c)
 * Callees:
 *     ?ndisReleaseStackTrace@@YAXK@Z @ 0x140061B70 (-ndisReleaseStackTrace@@YAXK@Z.c)
 */

void __fastcall ndisFreeRefCountStacksInBlock(struct _NDIS_REFCOUNT_STACK_BLOCK *a1)
{
  ULONG_PTR v2; // rcx

  v2 = *(_DWORD *)a1->References & 0x3FFFFFF;
  if ( (_DWORD)v2 )
  {
    ndisReleaseStackTrace(v2);
    *(_DWORD *)a1->References &= 0xFC000000;
  }
  if ( (*(_DWORD *)a1->Dereferences & 0x3FFFFFF) != 0 )
  {
    ndisReleaseStackTrace(*(_DWORD *)a1->Dereferences & 0x3FFFFFF);
    *(_DWORD *)a1->Dereferences &= 0xFC000000;
  }
  if ( (*(_DWORD *)&a1->References[1] & 0x3FFFFFF) != 0 )
  {
    ndisReleaseStackTrace(*(_DWORD *)&a1->References[1] & 0x3FFFFFF);
    *(_DWORD *)&a1->References[1] &= 0xFC000000;
  }
  if ( (*(_DWORD *)&a1->Dereferences[1] & 0x3FFFFFF) != 0 )
  {
    ndisReleaseStackTrace(*(_DWORD *)&a1->Dereferences[1] & 0x3FFFFFF);
    *(_DWORD *)&a1->Dereferences[1] &= 0xFC000000;
  }
  if ( (*(_DWORD *)&a1->References[2] & 0x3FFFFFF) != 0 )
  {
    ndisReleaseStackTrace(*(_DWORD *)&a1->References[2] & 0x3FFFFFF);
    *(_DWORD *)&a1->References[2] &= 0xFC000000;
  }
  if ( (*(_DWORD *)&a1->Dereferences[2] & 0x3FFFFFF) != 0 )
  {
    ndisReleaseStackTrace(*(_DWORD *)&a1->Dereferences[2] & 0x3FFFFFF);
    *(_DWORD *)&a1->Dereferences[2] &= 0xFC000000;
  }
  if ( (*(_DWORD *)&a1->References[3] & 0x3FFFFFF) != 0 )
  {
    ndisReleaseStackTrace(*(_DWORD *)&a1->References[3] & 0x3FFFFFF);
    *(_DWORD *)&a1->References[3] &= 0xFC000000;
  }
  if ( (*(_DWORD *)&a1->Dereferences[3] & 0x3FFFFFF) != 0 )
  {
    ndisReleaseStackTrace(*(_DWORD *)&a1->Dereferences[3] & 0x3FFFFFF);
    *(_DWORD *)&a1->Dereferences[3] &= 0xFC000000;
  }
  if ( (*(_DWORD *)&a1->References[4] & 0x3FFFFFF) != 0 )
  {
    ndisReleaseStackTrace(*(_DWORD *)&a1->References[4] & 0x3FFFFFF);
    *(_DWORD *)&a1->References[4] &= 0xFC000000;
  }
  if ( (*(_DWORD *)&a1->Dereferences[4] & 0x3FFFFFF) != 0 )
  {
    ndisReleaseStackTrace(*(_DWORD *)&a1->Dereferences[4] & 0x3FFFFFF);
    *(_DWORD *)&a1->Dereferences[4] &= 0xFC000000;
  }
  if ( (*(_DWORD *)&a1->References[5] & 0x3FFFFFF) != 0 )
  {
    ndisReleaseStackTrace(*(_DWORD *)&a1->References[5] & 0x3FFFFFF);
    *(_DWORD *)&a1->References[5] &= 0xFC000000;
  }
  if ( (*(_DWORD *)&a1->Dereferences[5] & 0x3FFFFFF) != 0 )
  {
    ndisReleaseStackTrace(*(_DWORD *)&a1->Dereferences[5] & 0x3FFFFFF);
    *(_DWORD *)&a1->Dereferences[5] &= 0xFC000000;
  }
}
