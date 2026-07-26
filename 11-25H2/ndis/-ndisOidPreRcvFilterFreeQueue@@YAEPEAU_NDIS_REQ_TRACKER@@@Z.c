/*
 * XREFs of ?ndisOidPreRcvFilterFreeQueue@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400B2640
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x14005A650 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x14005D3E0 (-ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisFindReceiveQueueByQueueId@@YAPEAU_NDIS_RECEIVE_QUEUE_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@KKPEAK@Z @ 0x1400B1C4C (-ndisFindReceiveQueueByQueueId@@YAPEAU_NDIS_RECEIVE_QUEUE_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@KKPEA.c)
 *     ?ndisCaptureIovOidContext@@YA?AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z @ 0x1400E4768 (-ndisCaptureIovOidContext@@YA-AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z.c)
 */

char __fastcall ndisOidPreRcvFilterFreeQueue(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // r14
  _BYTE *v3; // rsi
  char v4; // bp
  __int64 v5; // r15
  unsigned int v6; // r15d
  __int64 v7; // r8
  unsigned int *v8; // r9
  struct _NDIS_MINIPORT_BLOCK *ReceiveQueueByQueueId; // rax
  KIRQL v10; // dl
  struct _NDIS_MINIPORT_BLOCK *v11; // r15
  _BYTE *OidSourceHandle; // rax
  struct _NDIS_MINIPORT_BLOCK *v14[2]; // [rsp+20h] [rbp-98h]
  __int64 v15; // [rsp+60h] [rbp-58h] BYREF
  KIRQL NewIrql; // [rsp+C0h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 4);
  v3 = 0LL;
  NewIrql = 0;
  v4 = 1;
  v5 = *(_QWORD *)(v1 + 40);
  *(_OWORD *)v14 = *(_OWORD *)ndisCaptureIovOidContext(&v15, a1);
  if ( *(_DWORD *)(v1 + 4) == 1 )
  {
    *((_DWORD *)a1 + 10) = 0;
    if ( *(_DWORD *)(v1 + 48) >= 0xCu )
    {
      if ( !LOBYTE(v14[0]) )
        return 0;
      *(_DWORD *)(v1 + 52) = 12;
      v6 = *(_DWORD *)(v5 + 8);
      if ( !v6 )
        goto LABEL_7;
      NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v14[1], &NewIrql);
      ReceiveQueueByQueueId = ndisFindReceiveQueueByQueueId(v14[1], v6, v7, v8);
      v10 = NewIrql;
      v14[1]->MiniportThread = 0LL;
      v11 = ReceiveQueueByQueueId;
      KeReleaseSpinLock(&v14[1]->Lock, v10);
      if ( !v11 )
        goto LABEL_7;
      OidSourceHandle = ndisGetOidSourceHandle((struct _NDIS_OID_REQUEST *)v1);
      if ( OidSourceHandle && *OidSourceHandle == 18 )
        v3 = OidSourceHandle;
      if ( *(_BYTE **)&v11->ShortRef.ReferenceCount == v3 )
        return 0;
      else
LABEL_7:
        *((_DWORD *)a1 + 10) = -1073741811;
    }
    else
    {
      *(_DWORD *)(v1 + 56) = 12;
      *((_DWORD *)a1 + 10) = -1073676268;
    }
  }
  else
  {
    *((_DWORD *)a1 + 10) = -1073741637;
  }
  return v4;
}
