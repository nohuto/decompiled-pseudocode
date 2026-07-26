/*
 * XREFs of ?ndisOidPreRcvFilterParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400AA950
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1400353A0 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisFindReceiveFilterByFilterId@@YAPEAU_NDIS_RECEIVE_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@KKPEAK@Z @ 0x14006D730 (-ndisFindReceiveFilterByFilterId@@YAPEAU_NDIS_RECEIVE_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@KK.c)
 *     ?ndisCaptureIovOidContext@@YA?AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z @ 0x1400DD558 (-ndisCaptureIovOidContext@@YA-AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z.c)
 *     memmove @ 0x1400E7200 (memmove.c)
 */

unsigned __int8 __fastcall ndisOidPreRcvFilterParameters(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rsi
  _OWORD *v3; // rax
  unsigned int v4; // edi
  int *v5; // rcx
  int v6; // eax
  _DWORD *v8; // rax
  unsigned int v9; // ebx
  __int64 v10; // r8
  unsigned int *v11; // r9
  struct _NDIS_RECEIVE_FILTER_BLOCK *ReceiveFilterByFilterId; // rax
  unsigned int *v13; // r13
  KIRQL v14; // dl
  unsigned int v15; // r12d
  char *v16; // rcx
  KIRQL v17; // dl
  struct _NDIS_MINIPORT_BLOCK *v18[2]; // [rsp+20h] [rbp-59h]
  _BYTE v19[112]; // [rsp+60h] [rbp-19h] BYREF
  KIRQL NewIrql; // [rsp+E0h] [rbp+67h] BYREF
  void *v21; // [rsp+E8h] [rbp+6Fh]

  v1 = *((_QWORD *)a1 + 4);
  NewIrql = 0;
  v3 = (_OWORD *)ndisCaptureIovOidContext(v19, a1);
  v4 = 36;
  v5 = (int *)((char *)a1 + 40);
  *(_OWORD *)v18 = *v3;
  if ( *(_DWORD *)(v1 + 4) != 12 )
  {
    *v5 = -1073741637;
    return 1;
  }
  *v5 = 0;
  if ( *(_DWORD *)(v1 + 48) < 0x24u )
    goto LABEL_3;
  if ( *(_DWORD *)(v1 + 52) < 0x24u )
    goto LABEL_5;
  if ( *(_BYTE *)(*(_QWORD *)(v1 + 40) + 1LL) == 2 )
  {
    v4 = 44;
    if ( *(_DWORD *)(v1 + 48) < 0x2Cu )
    {
LABEL_3:
      v6 = -1073676268;
LABEL_6:
      *(_DWORD *)(v1 + 68) = v4;
      *v5 = v6;
      *(_DWORD *)(*((_QWORD *)a1 + 4) + 60LL) = 0;
      *(_DWORD *)(*((_QWORD *)a1 + 4) + 64LL) = 0;
      return 1;
    }
    if ( *(_DWORD *)(v1 + 52) < 0x2Cu )
    {
LABEL_5:
      v6 = -1073676266;
      goto LABEL_6;
    }
  }
  if ( !LOBYTE(v18[0]) )
    return 0;
  *v5 = -1073741637;
  v8 = *(_DWORD **)(v1 + 40);
  *(_DWORD *)(v1 + 60) = 0;
  *(_DWORD *)(v1 + 64) = v4;
  v21 = v8;
  v9 = v8[4];
  if ( v9 )
  {
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v18[1], &NewIrql);
    ReceiveFilterByFilterId = ndisFindReceiveFilterByFilterId(v18[1], v9, v10, v11);
    v13 = (unsigned int *)ReceiveFilterByFilterId;
    if ( ReceiveFilterByFilterId )
    {
      v15 = v4
          + ReceiveFilterByFilterId->FilterParameters.FieldParametersArrayNumElements
          * ReceiveFilterByFilterId->FilterParameters.FieldParametersArrayElementSize;
      *(_DWORD *)(v1 + 68) = v15;
      if ( v15 <= *(_DWORD *)(v1 + 52) )
      {
        memmove(v21, &ReceiveFilterByFilterId->FilterParameters, v4);
        v16 = (char *)v21;
        *((_DWORD *)v21 + 5) = v4;
        memmove(&v16[v4], (char *)v13 + v13[38], v13[40] * v13[39]);
        v17 = NewIrql;
        v18[1]->MiniportThread = 0LL;
        KeReleaseSpinLock(&v18[1]->Lock, v17);
        *((_DWORD *)a1 + 10) = 0;
        *(_DWORD *)(v1 + 60) = v15;
      }
      else
      {
        v18[1]->MiniportThread = 0LL;
        KeReleaseSpinLock(&v18[1]->Lock, NewIrql);
        *((_DWORD *)a1 + 10) = -1073676266;
      }
      return 1;
    }
    v14 = NewIrql;
    v18[1]->MiniportThread = 0LL;
    KeReleaseSpinLock(&v18[1]->Lock, v14);
  }
  *((_DWORD *)a1 + 10) = -1073741811;
  return 1;
}
