/*
 * XREFs of ?ndisOidPostRcvFilterQueueParameters@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400B2140
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisUpdateRcvFilterQueueParameters@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RECEIVE_QUEUE_PARAMETERS@@@Z @ 0x1400B3818 (-ndisUpdateRcvFilterQueueParameters@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RECEIVE_QUEUE_PARAME.c)
 *     ?ndisCaptureIovOidContext@@YA?AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z @ 0x1400E4768 (-ndisCaptureIovOidContext@@YA-AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z.c)
 */

void __fastcall ndisOidPostRcvFilterQueueParameters(struct _NDIS_REQ_TRACKER *a1)
{
  _OWORD *v2; // rax
  __int64 v3; // rdx
  struct _NDIS_MINIPORT_BLOCK *v4[2]; // [rsp+20h] [rbp-88h]
  _BYTE v5[72]; // [rsp+60h] [rbp-48h] BYREF

  v2 = (_OWORD *)ndisCaptureIovOidContext(v5, a1);
  v3 = *((_QWORD *)a1 + 4);
  *(_OWORD *)v4 = *v2;
  if ( *(_DWORD *)(v3 + 4) == 1 && LOBYTE(v4[0]) && !*((_DWORD *)a1 + 10) )
    ndisUpdateRcvFilterQueueParameters(v4[1], *(struct _NDIS_RECEIVE_QUEUE_PARAMETERS **)(v3 + 40));
}
