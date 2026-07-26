/*
 * XREFs of ?ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z @ 0x1400137C0
 * Callers:
 *     NdisFreeRefCount @ 0x140007F90 (NdisFreeRefCount.c)
 *     ?ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x14000CFD0 (-ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@.c)
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x14000F620 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x140011370 (-ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisDereferenceDriver@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@EW4_NDIS_MDRV_REFTAG@@@Z @ 0x140012F00 (-ndisDereferenceDriver@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@EW4_NDIS_MDRV_REFTAG@@@Z.c)
 *     ?ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z @ 0x1400132F0 (-ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z.c)
 *     ?ndisResizeRefCountBlock@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z @ 0x140032210 (-ndisResizeRefCountBlock@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z.c)
 *     ?ndisFreeOpenBlock@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x14007BD10 (-ndisFreeOpenBlock@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisMDeleteMiniportBlockOnRemove@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14007DCB0 (-ndisMDeleteMiniportBlockOnRemove@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x14000C6D0 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 */

void __fastcall ndisFreeRefCountAuxiliaryMemory(struct _NDIS_REFCOUNT_BLOCK *a1)
{
  int Type; // ecx
  _NDIS_REFCOUNT_TAGGED_ENTRY *Tags; // rcx
  unsigned __int16 i; // di

  Type = a1->Type;
  if ( Type )
  {
    if ( Type == 1 )
    {
      for ( i = 0; i < a1->NumRefTags; ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(&a1->8 + i++)) )
        ;
    }
  }
  else
  {
    Tags = a1->TaggedRefCounts.Tags;
    if ( Tags )
    {
      ExFreePoolWithTag(Tags, 0);
      a1->TaggedRefCounts.Tags = 0LL;
      a1->NumOverflowTaggedEntries = 0;
    }
  }
}
