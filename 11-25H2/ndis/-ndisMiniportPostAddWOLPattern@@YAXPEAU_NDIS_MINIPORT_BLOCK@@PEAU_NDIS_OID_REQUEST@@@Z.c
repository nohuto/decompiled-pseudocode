/*
 * XREFs of ?ndisMiniportPostAddWOLPattern@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x140086880
 * Callers:
 *     ?ndisOidPostPMAddWOLPattern@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140088B70 (-ndisOidPostPMAddWOLPattern@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisPostSetAddWakeUpPattern@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400BBE20 (-ndisPostSetAddWakeUpPattern@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1400129A0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisInsertPatternListEntry@@YAXPEAU_SINGLE_LIST_ENTRY@@PEAU_NDIS_PACKET_PATTERN_ENTRY@@@Z @ 0x140086940 (-ndisInsertPatternListEntry@@YAXPEAU_SINGLE_LIST_ENTRY@@PEAU_NDIS_PACKET_PATTERN_ENTRY@@@Z.c)
 *     ?ndisGetPatternEffectivePriority@@YAKPEAU_NDIS_PACKET_PATTERN_ENTRY@@@Z @ 0x140098BC0 (-ndisGetPatternEffectivePriority@@YAKPEAU_NDIS_PACKET_PATTERN_ENTRY@@@Z.c)
 */

void __fastcall ndisMiniportPostAddWOLPattern(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_OID_REQUEST *a2)
{
  struct _NDIS_PACKET_PATTERN_ENTRY *OidContext; // rdi
  _SINGLE_LIST_ENTRY *p_DupLink; // rcx
  _SINGLE_LIST_ENTRY *Next; // r8
  unsigned int PatternEffectivePriority; // eax
  __int64 v7; // r8

  OidContext = (struct _NDIS_PACKET_PATTERN_ENTRY *)a1->OidContext;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x3Du,
      (struct _GUID *)&WPP_0008b8bbc9b83858b743970a7dc9f078_Traceguids,
      (char)a1,
      a2);
  p_DupLink = &OidContext->DupLink;
  a1->OidContext = 0LL;
  Next = OidContext->DupLink.Next;
  if ( Next )
  {
    p_DupLink->Next = 0LL;
    p_DupLink->Next = Next->Next;
    Next->Next = p_DupLink;
    PatternEffectivePriority = ndisGetPatternEffectivePriority((struct _NDIS_PACKET_PATTERN_ENTRY *)&Next[-1]);
    *(_DWORD *)(v7 + 28) = PatternEffectivePriority;
  }
  else
  {
    ndisInsertPatternListEntry(&a1->WOLPatternList, OidContext);
    OidContext->EffectivePriority = OidContext->Priority;
  }
}
