/*
 * XREFs of ?ndisOidPostPMRemoveWOLPattern@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140062ED0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1400066E0 (-ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisDeletePatternEntry@@YAEPEAU_SINGLE_LIST_ENTRY@@K@Z @ 0x140062FD0 (-ndisDeletePatternEntry@@YAEPEAU_SINGLE_LIST_ENTRY@@K@Z.c)
 *     ?ndisGetCombinedPMConfig@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_PARAMETERS@@@Z @ 0x14006C3E0 (-ndisGetCombinedPMConfig@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_PARAMETERS@@@Z.c)
 *     ?ndisMiniportPostRemoveWoLPattern@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1400B2DE8 (-ndisMiniportPostRemoveWoLPattern@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisPostRemoveMiniportWakeUpPattern@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1400B3E4C (-ndisPostRemoveMiniportWakeUpPattern@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z.c)
 *     ?ndisUpdateWmiPMParamsForPatterns@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400B5D7C (-ndisUpdateWmiPMParamsForPatterns@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisOidPostPMRemoveWOLPattern(struct _NDIS_REQ_TRACKER *a1)
{
  struct _SINGLE_LIST_ENTRY *v2; // rbp
  struct _NDIS_MINIPORT_BLOCK *v3; // rdi
  __int64 v4; // rsi
  unsigned int v5; // edi
  struct _SINGLE_LIST_ENTRY *v6; // rcx
  void *v7; // rbx
  PVOID *v8; // rdi

  v2 = (struct _SINGLE_LIST_ENTRY *)*((_QWORD *)a1 + 3);
  v3 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  v4 = *((_QWORD *)a1 + 4);
  if ( *((_DWORD *)a1 + 10) )
  {
    v7 = *(void **)(v4 + 144);
    if ( v7 )
    {
      *(_DWORD *)(v4 + 32) = *(_DWORD *)v7;
      *(_QWORD *)(v4 + 40) = *((_QWORD *)v7 + 1);
      *(_DWORD *)(v4 + 48) = *((_DWORD *)v7 + 4);
      ExFreePoolWithTag(*((PVOID *)v7 + 3), 0);
      ExFreePoolWithTag(v7, 0);
      *(_QWORD *)(v4 + 144) = 0LL;
    }
  }
  else
  {
    if ( v3 )
    {
      if ( v3->MajorNdisVersion > 6u || v3->MajorNdisVersion == 6 && v3->MinorNdisVersion >= 0x14u )
      {
        ndisMiniportPostRemoveWoLPattern(*(struct _NDIS_MINIPORT_BLOCK **)a1, *((struct _NDIS_OID_REQUEST **)a1 + 4));
        if ( ndisGetOidSourceHandle((struct _NDIS_OID_REQUEST *)v4) == &ndisIntReqWmi )
        {
          ndisUpdateWmiPMParamsForPatterns(v3);
          ndisGetCombinedPMConfig(v3, &v3->PMCurrentParameters);
        }
      }
      else
      {
        ndisPostRemoveMiniportWakeUpPattern(
          *(struct _NDIS_MINIPORT_BLOCK **)a1,
          *((struct _NDIS_OID_REQUEST **)a1 + 4),
          0);
        v8 = *(PVOID **)(v4 + 144);
        ExFreePoolWithTag(v8[3], 0);
        *(_DWORD *)(v4 + 32) = *(_DWORD *)v8;
        *(_QWORD *)(v4 + 40) = v8[1];
        *(_DWORD *)(v4 + 48) = *((_DWORD *)v8 + 4);
        ExFreePoolWithTag(v8, 0);
        *(_QWORD *)(v4 + 144) = 0LL;
      }
    }
    v5 = **(_DWORD **)(v4 + 40);
    if ( *((_QWORD *)a1 + 3) )
      ndisDeletePatternEntry(v2 + 63, v5);
    v6 = (struct _SINGLE_LIST_ENTRY *)*((_QWORD *)a1 + 1);
    if ( v6 )
    {
      if ( (*(_DWORD *)(v4 + 88) & 0x4000) == 0 )
        ndisDeletePatternEntry(v6 + 89, v5);
    }
  }
}
