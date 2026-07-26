/*
 * XREFs of ?ndisFreeRefCountStacksInBlock@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x140010B10
 * Callers:
 *     ?ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x140004BD0 (-ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x140007E60 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x140007EC0 (-ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x14000B1E0 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisDereferenceMiniportForNsi@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFTAG@@@Z @ 0x14000EB80 (-ndisDereferenceMiniportForNsi@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFT.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x14000F080 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisDereferenceMiniportRef@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x14000F380 (-ndisDereferenceMiniportRef@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisDereferenceDriver@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@EW4_NDIS_MDRV_REFTAG@@@Z @ 0x14000F5C0 (-ndisDereferenceDriver@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@EW4_NDIS_MDRV_REFTAG@@@Z.c)
 *     ?ndisReferenceTopMiniportByNameForNsi@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU1@KKEW4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFTAG@@@Z @ 0x14000F9B0 (-ndisReferenceTopMiniportByNameForNsi@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU1@KKEW4_NDIS_NSI_REFTAG@@.c)
 *     ?ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z @ 0x1400105A0 (-ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z.c)
 *     NdisDereferenceWithTag @ 0x1400107F0 (NdisDereferenceWithTag.c)
 *     ?ndisDeviceControlHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1400110C0 (-ndisDeviceControlHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     ?ndisIfDereferenceMiniport@@YAXPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x14004B0D0 (-ndisIfDereferenceMiniport@@YAXPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG.c)
 *     ?IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z @ 0x14004C210 (-IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z.c)
 *     ?ndisReferenceMiniportByHandleForNsi@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFTAG@@@Z @ 0x14005DD00 (-ndisReferenceMiniportByHandleForNsi@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_NSI_REFTAG@@W4_NDIS_M.c)
 * Callees:
 *     ?ndisReleaseStackTrace@@YAXK@Z @ 0x14007CF60 (-ndisReleaseStackTrace@@YAXK@Z.c)
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
