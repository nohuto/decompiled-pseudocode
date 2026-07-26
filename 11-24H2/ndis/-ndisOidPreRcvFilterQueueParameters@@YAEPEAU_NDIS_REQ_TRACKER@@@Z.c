/*
 * XREFs of ?ndisOidPreRcvFilterQueueParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400AAB30
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1400066E0 (-ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1400353A0 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisFindReceiveQueueByQueueId@@YAPEAU_NDIS_RECEIVE_QUEUE_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@KKPEAK@Z @ 0x1400A9ADC (-ndisFindReceiveQueueByQueueId@@YAPEAU_NDIS_RECEIVE_QUEUE_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@KKPEA.c)
 *     ?ndisCaptureIovOidContext@@YA?AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z @ 0x1400DD558 (-ndisCaptureIovOidContext@@YA-AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z.c)
 *     memmove @ 0x1400E7200 (memmove.c)
 */

char __fastcall ndisOidPreRcvFilterQueueParameters(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rdi
  int *v2; // rsi
  __int64 v3; // r13
  _BYTE *v4; // r12
  char v5; // r15
  __int128 v6; // xmm0
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // eax
  unsigned __int16 v11; // cx
  unsigned __int64 v12; // rdx
  int v13; // eax
  unsigned __int16 v14; // cx
  unsigned __int64 v15; // rdx
  unsigned int v16; // ebx
  __int64 v17; // r8
  unsigned int *v18; // r9
  struct _NDIS_MINIPORT_BLOCK *ReceiveQueueByQueueId; // rax
  KIRQL v20; // dl
  unsigned int v21; // ecx
  size_t v22; // r8
  void *v23; // rcx
  _BYTE *OidSourceHandle; // rax
  __int64 v25; // rdx
  KIRQL v26; // dl
  _BYTE v28[64]; // [rsp+68h] [rbp-9h] BYREF
  KIRQL NewIrql; // [rsp+D8h] [rbp+67h] BYREF

  v1 = *((_QWORD *)a1 + 4);
  v2 = (int *)((char *)a1 + 40);
  NewIrql = 0;
  v3 = 0LL;
  v4 = 0LL;
  v5 = 1;
  v6 = *(_OWORD *)ndisCaptureIovOidContext(v28, a1);
  v7 = *(_DWORD *)(v1 + 4);
  if ( v7 != 12 )
  {
    if ( v7 != 1 )
    {
      *v2 = -1073741637;
      return v5;
    }
    *v2 = 0;
    if ( *(_DWORD *)(v1 + 48) < 0x43Cu )
    {
      *(_DWORD *)(v1 + 56) = 1084;
      *v2 = -1073676268;
      *(_DWORD *)(v1 + 52) = 0;
      return v5;
    }
    goto LABEL_10;
  }
  *v2 = 0;
  if ( *(_DWORD *)(v1 + 48) >= 0x43Cu )
  {
    if ( *(_DWORD *)(v1 + 52) < 0x43Cu )
    {
      v8 = -1073676266;
      goto LABEL_6;
    }
LABEL_10:
    if ( !(_BYTE)v6 )
      return 0;
    v9 = *(_DWORD *)(v1 + 4);
    if ( v9 == 12 )
    {
      v3 = *(_QWORD *)(v1 + 40);
      v10 = 1096;
      *(_DWORD *)(v1 + 60) = 0;
      v11 = *(_WORD *)(v3 + 2);
      v12 = v11;
      if ( v11 >= 0x448u )
        v12 = 1096LL;
      if ( v12 >= *(unsigned int *)(v1 + 48) )
      {
        v10 = *(_DWORD *)(v1 + 48);
      }
      else if ( v11 < 0x448u )
      {
        v10 = *(unsigned __int16 *)(v3 + 2);
      }
      *(_DWORD *)(v1 + 64) = v10;
    }
    else if ( v9 == 1 )
    {
      v3 = *(_QWORD *)(v1 + 40);
      v13 = 1096;
      v14 = *(_WORD *)(v3 + 2);
      v15 = v14;
      if ( v14 >= 0x448u )
        v15 = 1096LL;
      if ( v15 >= *(unsigned int *)(v1 + 48) )
      {
        v13 = *(_DWORD *)(v1 + 48);
      }
      else if ( v14 < 0x448u )
      {
        v13 = *(unsigned __int16 *)(v3 + 2);
      }
      *(_DWORD *)(v1 + 52) = v13;
    }
    *v2 = -1073741637;
    v16 = *(_DWORD *)(v3 + 12);
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(*((struct _NDIS_MINIPORT_BLOCK **)&v6 + 1), &NewIrql);
    ReceiveQueueByQueueId = ndisFindReceiveQueueByQueueId(*((struct _NDIS_MINIPORT_BLOCK **)&v6 + 1), v16, v17, v18);
    if ( !ReceiveQueueByQueueId )
    {
LABEL_31:
      v20 = NewIrql;
      *(_QWORD *)(*((_QWORD *)&v6 + 1) + 520LL) = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)(*((_QWORD *)&v6 + 1) + 96LL), v20);
      *v2 = -1073741811;
      return v5;
    }
    if ( *(_DWORD *)(v1 + 4) == 12 )
    {
      v21 = WORD1(ReceiveQueueByQueueId->PacketList.Flink);
      if ( v21 >= *(_DWORD *)(v1 + 48) )
        v21 = *(_DWORD *)(v1 + 48);
      v22 = v21;
      v23 = *(void **)(v1 + 40);
      *(_DWORD *)(v1 + 60) = v22;
      memmove(v23, &ReceiveQueueByQueueId->PacketList, v22);
      *(_WORD *)(v3 + 2) = *(_WORD *)(v1 + 60);
      *v2 = 0;
    }
    else
    {
      OidSourceHandle = ndisGetOidSourceHandle((struct _NDIS_OID_REQUEST *)v1);
      if ( OidSourceHandle && *OidSourceHandle == 18 )
        v4 = OidSourceHandle;
      if ( *(_BYTE **)(v25 + 72) != v4 )
        goto LABEL_31;
      v5 = 0;
    }
    v26 = NewIrql;
    *(_QWORD *)(*((_QWORD *)&v6 + 1) + 520LL) = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)(*((_QWORD *)&v6 + 1) + 96LL), v26);
    return v5;
  }
  v8 = -1073676268;
LABEL_6:
  *(_DWORD *)(v1 + 68) = 1084;
  *v2 = v8;
  *(_QWORD *)(v1 + 60) = 0LL;
  return v5;
}
