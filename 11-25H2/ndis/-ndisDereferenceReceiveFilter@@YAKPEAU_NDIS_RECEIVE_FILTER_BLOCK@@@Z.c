/*
 * XREFs of ?ndisDereferenceReceiveFilter@@YAKPEAU_NDIS_RECEIVE_FILTER_BLOCK@@@Z @ 0x1400991A0
 * Callers:
 *     ?ndisClearReceiveFilter@@YAHPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x140089870 (-ndisClearReceiveFilter@@YAHPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisClearReceiveFiltersForProtocol@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1401742C0 (-ndisClearReceiveFiltersForProtocol@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x14000F080 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x14005A6A0 (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisDereferenceReceiveQueue@@YAKPEAU_NDIS_RECEIVE_QUEUE_BLOCK@@@Z @ 0x1400B1B18 (-ndisDereferenceReceiveQueue@@YAKPEAU_NDIS_RECEIVE_QUEUE_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisDereferenceReceiveFilter(_QWORD *P)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // rdi
  unsigned int v3; // esi
  char v4; // bp
  __int64 v5; // r12
  bool v6; // r14
  KIRQL v7; // al
  bool v8; // zf
  unsigned int v9; // r15d
  _DWORD *v10; // rsi
  _QWORD **v11; // rdx
  PVOID *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  _QWORD *v15; // rax
  __int64 v16; // rdx
  _QWORD *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  char v21; // [rsp+60h] [rbp+8h]
  KIRQL v22; // [rsp+68h] [rbp+10h]

  v1 = (struct _NDIS_MINIPORT_BLOCK *)P[7];
  v3 = *((_DWORD *)P + 12);
  v4 = 0;
  v5 = 0LL;
  v21 = 0;
  v6 = 0;
  v7 = KeAcquireSpinLockRaiseToDpc(&v1->Lock);
  v1->MiniportThread = KeGetCurrentThread();
  v8 = (*((_DWORD *)P + 20))-- == 1;
  v9 = *((_DWORD *)P + 20);
  v22 = v7;
  if ( v8 )
  {
    v1->AllocatedReceiveFilterIndices[(unsigned __int64)v3 >> 3] &= ~(1 << (v3 & 7));
    v10 = (_DWORD *)P[9];
    if ( v10 )
    {
      v11 = (_QWORD **)P[2];
      if ( v11[1] != P + 2 )
        goto LABEL_17;
      v12 = (PVOID *)P[3];
      if ( *v12 != P + 2 )
        goto LABEL_17;
      *v12 = v11;
      v11[1] = v12;
      --v10[21];
      v21 = 1;
    }
    v13 = P[8];
    v14 = *P;
    if ( v13 )
      v5 = P[8];
    v6 = v13 != 0;
    if ( *(_QWORD **)(v14 + 8) == P )
    {
      v15 = (_QWORD *)P[1];
      if ( (_QWORD *)*v15 == P )
      {
        *v15 = v14;
        v4 = 1;
        *(_QWORD *)(v14 + 8) = v15;
        --v1->NumReceiveFilters;
        if ( !P[22] )
        {
LABEL_16:
          ExFreePoolWithTag(P, 0);
          v7 = v22;
          goto LABEL_19;
        }
        v16 = P[4];
        if ( *(_QWORD **)(v16 + 8) == P + 4 )
        {
          v17 = (_QWORD *)P[5];
          if ( (_QWORD *)*v17 == P + 4 )
          {
            *v17 = v16;
            *(_QWORD *)(v16 + 8) = v17;
            --*(_DWORD *)(P[22] + 864LL);
            v18 = P[22];
            v19 = *(_QWORD *)(v18 + 88);
            if ( *(_DWORD *)(v18 + 124) )
              --*(_DWORD *)(v19 + 656);
            else
              --*(_DWORD *)(v19 + 652);
            goto LABEL_16;
          }
        }
      }
    }
LABEL_17:
    __fastfail(3u);
  }
  v10 = 0LL;
LABEL_19:
  v1->MiniportThread = 0LL;
  KeReleaseSpinLock(&v1->Lock, v7);
  if ( v21 )
    ndisDereferenceReceiveQueue(v10);
  if ( v6 )
    ndisMDereferenceOpenUnlocked(v5, 0xBu);
  if ( v4 )
    ndisDereferenceMiniport(v1, 0x46u);
  return v9;
}
