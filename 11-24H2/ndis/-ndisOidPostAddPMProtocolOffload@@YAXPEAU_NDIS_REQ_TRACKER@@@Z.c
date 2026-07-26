/*
 * XREFs of ?ndisOidPostAddPMProtocolOffload@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x14005FFC0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1400066E0 (-ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisInsertPatternListEntry@@YAXPEAU_SINGLE_LIST_ENTRY@@PEAU_NDIS_PACKET_PATTERN_ENTRY@@@Z @ 0x14006AEC0 (-ndisInsertPatternListEntry@@YAXPEAU_SINGLE_LIST_ENTRY@@PEAU_NDIS_PACKET_PATTERN_ENTRY@@@Z.c)
 *     ?ndisGetCombinedPMConfig@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_PARAMETERS@@@Z @ 0x14006C3E0 (-ndisGetCombinedPMConfig@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_PARAMETERS@@@Z.c)
 *     ?ndisGetPatternEffectivePriority@@YAKPEAU_NDIS_PACKET_PATTERN_ENTRY@@@Z @ 0x14008D320 (-ndisGetPatternEffectivePriority@@YAKPEAU_NDIS_PACKET_PATTERN_ENTRY@@@Z.c)
 *     ?ndisEnablePMParamForProtocolOffload@@YAXPEAU_NDIS_PM_PROTOCOL_OFFLOAD@@PEAU_NDIS_PM_PARAMETERS@@@Z @ 0x1400B2938 (-ndisEnablePMParamForProtocolOffload@@YAXPEAU_NDIS_PM_PROTOCOL_OFFLOAD@@PEAU_NDIS_PM_PARAMETERS@.c)
 */

void __fastcall ndisOidPostAddPMProtocolOffload(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rdi
  __int64 v3; // r14
  struct _NDIS_MINIPORT_BLOCK *v4; // rsi
  int v5; // eax
  void *v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rdx
  void *OidContext; // rcx
  struct _NDIS_PACKET_PATTERN_ENTRY *v11; // r9
  _SINGLE_LIST_ENTRY *p_DupLink; // rcx
  _SINGLE_LIST_ENTRY *Next; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 v16; // rdx
  void *v17; // rcx
  unsigned int PatternEffectivePriority; // eax
  __int64 v19; // r8

  v1 = *((_QWORD *)a1 + 4);
  v3 = *((_QWORD *)a1 + 3);
  v4 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  v5 = *(_DWORD *)(v1 + 88);
  if ( (v5 & 0x40000) == 0 && (v5 & 0x80000) == 0 )
  {
    if ( *((_DWORD *)a1 + 10) )
    {
      if ( v3 )
      {
        v17 = *(void **)(v1 + 160);
        if ( v17 )
          ExFreePoolWithTag(v17, 0);
      }
      if ( *((_QWORD *)a1 + 1) )
      {
        if ( (*(_DWORD *)(v1 + 88) & 0x4000) == 0 )
        {
          v6 = *(void **)(v1 + 160);
          if ( v6 )
            ExFreePoolWithTag(v6, 0);
        }
      }
      if ( *(_QWORD *)a1 )
      {
        OidContext = v4->OidContext;
        v4->OidContext = 0LL;
        if ( OidContext )
          ExFreePoolWithTag(OidContext, 0);
        if ( *(_DWORD *)(v1 + 48) >= 0x98u )
          *(_DWORD *)(*(_QWORD *)(v1 + 40) + 148LL) = 0;
      }
    }
    else
    {
      if ( v4 )
      {
        v11 = (struct _NDIS_PACKET_PATTERN_ENTRY *)v4->OidContext;
        p_DupLink = &v11->DupLink;
        v4->OidContext = 0LL;
        Next = v11->DupLink.Next;
        if ( Next )
        {
          p_DupLink->Next = 0LL;
          p_DupLink->Next = Next->Next;
          Next->Next = p_DupLink;
          PatternEffectivePriority = ndisGetPatternEffectivePriority((struct _NDIS_PACKET_PATTERN_ENTRY *)&Next[-1]);
          *(_DWORD *)(v19 + 28) = PatternEffectivePriority;
        }
        else
        {
          ndisInsertPatternListEntry(&v4->PMProtocolOffloadList, v11);
          *(_DWORD *)(v14 + 36) = *(_DWORD *)(v14 + 32);
        }
        if ( ndisGetOidSourceHandle((struct _NDIS_OID_REQUEST *)v1) == &ndisIntReqWmi )
        {
          ndisEnablePMParamForProtocolOffload(*(struct _NDIS_PM_PROTOCOL_OFFLOAD **)(v1 + 40), &v4->PMWmiParameters);
          ndisGetCombinedPMConfig(v4, &v4->PMCurrentParameters);
        }
      }
      if ( *((_QWORD *)a1 + 3) )
      {
        v15 = *(_QWORD *)(v1 + 40);
        v16 = *(_QWORD *)(v1 + 160);
        *(_DWORD *)(v16 + 196) = *(_DWORD *)(v15 + 148);
        *(_DWORD *)(v16 + 40) = *(_DWORD *)(v15 + 148);
        *(_QWORD *)v16 = *(_QWORD *)(v3 + 512);
        *(_QWORD *)(v3 + 512) = v16;
      }
      v7 = *((_QWORD *)a1 + 1);
      if ( v7 && (*(_DWORD *)(v1 + 88) & 0x4000) == 0 )
      {
        v8 = *(_QWORD *)(v1 + 40);
        v9 = *(_QWORD *)(v1 + 160);
        *(_DWORD *)(v9 + 196) = *(_DWORD *)(v8 + 148);
        *(_DWORD *)(v9 + 40) = *(_DWORD *)(v8 + 148);
        *(_QWORD *)v9 = *(_QWORD *)(v7 + 720);
        *(_QWORD *)(v7 + 720) = v9;
      }
    }
  }
}
