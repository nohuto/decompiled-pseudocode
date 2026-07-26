/*
 * XREFs of ?ndisCallPreviousReturnHandler@@YAXPEAU_NDIS_OBJECT_HEADER@@PEAU_NET_BUFFER_LIST@@K@Z @ 0x140091670
 * Callers:
 *     NdisMIndicateReceiveNetBufferLists @ 0x140035610 (NdisMIndicateReceiveNetBufferLists.c)
 *     ?ndisMCoIndicateReceiveNetBufferListsToNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1400DAD40 (-ndisMCoIndicateReceiveNetBufferListsToNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 * Callees:
 *     ?ndisInvokeNextReceiveCompleteHandler@@YAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OBJECT_HEADER@@1PEAXP6AX20K@Z@Z @ 0x14004C7D0 (-ndisInvokeNextReceiveCompleteHandler@@YAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OBJECT_HEADER@@1PEAXP.c)
 *     NblContextVerifierBugcheckInternalError @ 0x140096000 (NblContextVerifierBugcheckInternalError.c)
 */

void __fastcall ndisCallPreviousReturnHandler(struct _NDIS_OBJECT_HEADER *a1, struct _NET_BUFFER_LIST *a2, char a3)
{
  unsigned int v3; // r11d
  __int64 v4; // r8

  v3 = a3 & 1;
  if ( a1->Type == 5 )
  {
    v4 = *(_QWORD *)&a1[130].Type;
  }
  else
  {
    if ( a1->Type != 17 )
      goto LABEL_11;
    v4 = *(_QWORD *)&a1[628].Type;
  }
  if ( !v4 )
    goto LABEL_11;
  if ( *(_BYTE *)v4 == 5 )
  {
    ndisInvokeNextReceiveCompleteHandler(
      a2,
      v3,
      (struct _NDIS_FILTER_BLOCK *)v4,
      *(struct _NDIS_OBJECT_HEADER **)(v4 + 552),
      *(void **)(v4 + 536),
      *(void (**)(void *, struct _NET_BUFFER_LIST *, unsigned int))(v4 + 528));
    return;
  }
  if ( *(_BYTE *)v4 != 17 )
LABEL_11:
    NblContextVerifierBugcheckInternalError((ULONG_PTR)a1, (ULONG_PTR)a2);
  ndisInvokeNextReceiveCompleteHandler(
    a2,
    v3,
    (struct _NDIS_FILTER_BLOCK *)v4,
    *(struct _NDIS_OBJECT_HEADER **)(v4 + 2544),
    *(void **)(v4 + 2528),
    *(void (**)(void *, struct _NET_BUFFER_LIST *, unsigned int))(v4 + 2640));
}
