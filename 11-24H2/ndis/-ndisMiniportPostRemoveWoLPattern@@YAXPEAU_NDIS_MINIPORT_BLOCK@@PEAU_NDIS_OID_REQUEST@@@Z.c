/*
 * XREFs of ?ndisMiniportPostRemoveWoLPattern@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1400B2DE8
 * Callers:
 *     ?ndisOidPostPMRemoveWOLPattern@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140062ED0 (-ndisOidPostPMRemoveWOLPattern@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisPostSetRemoveWakeUpPattern@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400B4260 (-ndisPostSetRemoveWakeUpPattern@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1400066E0 (-ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisGetPatternEffectivePriority@@YAKPEAU_NDIS_PACKET_PATTERN_ENTRY@@@Z @ 0x14008D320 (-ndisGetPatternEffectivePriority@@YAKPEAU_NDIS_PACKET_PATTERN_ENTRY@@@Z.c)
 */

void __fastcall ndisMiniportPostRemoveWoLPattern(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_OID_REQUEST *a2)
{
  __int64 v2; // rdx
  _SINGLE_LIST_ENTRY *OidSourceHandle; // r11
  int v4; // ecx
  __int64 v5; // r8
  _QWORD *p_Next; // rdx
  struct _NDIS_PACKET_PATTERN_ENTRY *i; // r9
  _SINGLE_LIST_ENTRY *v8; // rcx
  _SINGLE_LIST_ENTRY *p_DupLink; // rax
  _SINGLE_LIST_ENTRY *v10; // r10
  int PatternEffectivePriority; // eax
  __int64 v12; // r9
  struct _NDIS_PACKET_PATTERN_ENTRY *v13; // r8
  int v14; // eax
  __int64 v15; // r8

  OidSourceHandle = (_SINGLE_LIST_ENTRY *)ndisGetOidSourceHandle(a2);
  v4 = **(_DWORD **)(v2 + 40);
  p_Next = (_QWORD *)(v5 + 968);
  for ( i = *(struct _NDIS_PACKET_PATTERN_ENTRY **)(v5 + 968); i; i = (struct _NDIS_PACKET_PATTERN_ENTRY *)i->Link.Next )
  {
    if ( i->WoLPattern.PatternId == v4 )
    {
      v8 = 0LL;
      p_DupLink = &i->DupLink;
      if ( i != (struct _NDIS_PACKET_PATTERN_ENTRY *)-8LL )
      {
        do
        {
          v10 = p_DupLink - 1;
          if ( p_DupLink[2].Next == OidSourceHandle )
            break;
          v8 = p_DupLink;
          v10 = 0LL;
          p_DupLink = p_DupLink->Next;
        }
        while ( p_DupLink );
        if ( v10 )
        {
          if ( v8 )
          {
            v8->Next = p_DupLink->Next;
            PatternEffectivePriority = ndisGetPatternEffectivePriority(i);
            *(_DWORD *)(v12 + 36) = PatternEffectivePriority;
          }
          else if ( p_DupLink->Next )
          {
            v13 = (struct _NDIS_PACKET_PATTERN_ENTRY *)&p_DupLink->Next[-1];
            *p_Next = v13;
            v13->Link.Next = i->Link.Next;
            v14 = ndisGetPatternEffectivePriority(v13);
            *(_DWORD *)(v15 + 36) = v14;
          }
          else
          {
            *p_Next = i->Link.Next;
          }
          ExFreePoolWithTag(v10, 0);
        }
      }
      return;
    }
    p_Next = &i->Link.Next;
  }
}
