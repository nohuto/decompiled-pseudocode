/*
 * XREFs of ?ndisResizeRefCountBlock@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z @ 0x14004CE50
 * Callers:
 *     NdisReferenceWithTag @ 0x14000E820 (NdisReferenceWithTag.c)
 * Callees:
 *     ?ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z @ 0x140010A70 (-ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z.c)
 *     ?ndisResizeRefCountBlockTagged@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z @ 0x14004CEA0 (-ndisResizeRefCountBlockTagged@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z.c)
 */

void __fastcall ndisResizeRefCountBlock(struct _NDIS_REFCOUNT_BLOCK *a1)
{
  int NumOverflowTaggedEntries; // edx
  unsigned __int8 v3; // dl

  if ( !a1->Type )
  {
    NumOverflowTaggedEntries = a1->NumOverflowTaggedEntries;
    if ( (_BYTE)NumOverflowTaggedEntries == 0xFF )
    {
      ndisFreeRefCountAuxiliaryMemory(a1);
      a1->Type = 2;
    }
    else
    {
      if ( (unsigned int)(NumOverflowTaggedEntries + 2) > 0xFF )
        v3 = -1;
      else
        v3 = NumOverflowTaggedEntries + 2;
      ndisResizeRefCountBlockTagged(a1, v3);
    }
  }
}
