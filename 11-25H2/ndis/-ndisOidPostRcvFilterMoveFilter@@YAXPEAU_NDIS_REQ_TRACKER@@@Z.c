/*
 * XREFs of ?ndisOidPostRcvFilterMoveFilter@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400B1FA0
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x14005A650 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisFindReceiveFilterByFilterId@@YAPEAU_NDIS_RECEIVE_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@KKPEAK@Z @ 0x140089990 (-ndisFindReceiveFilterByFilterId@@YAPEAU_NDIS_RECEIVE_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@KK.c)
 *     ?ndisCaptureIovOidContext@@YA?AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z @ 0x1400E4768 (-ndisCaptureIovOidContext@@YA-AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisIovFindVPortByVPortId@@YAPEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1400E5C2C (-ndisIovFindVPortByVPortId@@YAPEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 */

void __fastcall ndisOidPostRcvFilterMoveFilter(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rdi
  int v3; // eax
  signed __int32 v4; // eax
  signed __int32 v5; // ett
  __int64 v6; // rdi
  unsigned int v7; // ebx
  __int64 v8; // r8
  unsigned int *v9; // r9
  struct _NDIS_RECEIVE_FILTER_BLOCK *ReceiveFilterByFilterId; // rax
  KIRQL v11; // dl
  struct _NDIS_RECEIVE_FILTER_BLOCK *v12; // r14
  _NDIS_VPORT_BLOCK *VPortBlock; // rbx
  struct _NDIS_VPORT_BLOCK *VPortByVPortId; // rax
  _LIST_ENTRY *p_VPortLink; // rcx
  _LIST_ENTRY *Flink; // r8
  _LIST_ENTRY *Blink; // rdx
  struct _NDIS_NIC_SWITCH_BLOCK *NicSwitch; // rdx
  _LIST_ENTRY *p_FilterList; // rdx
  _LIST_ENTRY *v20; // r8
  struct _NDIS_NIC_SWITCH_BLOCK *v21; // rcx
  __m128i v22; // [rsp+20h] [rbp-98h]
  __int64 v23; // [rsp+60h] [rbp-58h] BYREF
  KIRQL NewIrql; // [rsp+C0h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 4);
  NewIrql = 0;
  v22 = *(__m128i *)ndisCaptureIovOidContext(&v23, a1);
  if ( (unsigned __int8)_mm_cvtsi128_si32(v22) )
  {
    v3 = *((_DWORD *)a1 + 10);
    if ( !v3 )
      goto LABEL_7;
    if ( v3 == 65539 )
    {
      _m_prefetchw((const void *)(v22.m128i_i64[1] + 4424));
      v4 = *(_DWORD *)(v22.m128i_i64[1] + 4424);
      do
      {
        v5 = v4;
        v4 = _InterlockedCompareExchange((volatile signed __int32 *)(v22.m128i_i64[1] + 4424), v4, v4);
      }
      while ( v5 != v4 );
      if ( (v4 & 0x200) != 0 )
      {
LABEL_7:
        if ( *(_DWORD *)(v1 + 48) >= 8u )
        {
          v6 = *(_QWORD *)(v1 + 40);
          v7 = *(_DWORD *)(v6 + 4);
          NDIS_ACQUIRE_MINIPORT_SPIN_LOCK((struct _NDIS_MINIPORT_BLOCK *)v22.m128i_i64[1], &NewIrql);
          ReceiveFilterByFilterId = ndisFindReceiveFilterByFilterId(
                                      (struct _NDIS_MINIPORT_BLOCK *)v22.m128i_i64[1],
                                      v7,
                                      v8,
                                      v9);
          v11 = NewIrql;
          *(_QWORD *)(v22.m128i_i64[1] + 520) = 0LL;
          v12 = ReceiveFilterByFilterId;
          KeReleaseSpinLock((PKSPIN_LOCK)(v22.m128i_i64[1] + 96), v11);
          VPortBlock = v12->VPortBlock;
          VPortByVPortId = ndisIovFindVPortByVPortId(
                             (struct _NDIS_MINIPORT_BLOCK *)v22.m128i_i64[1],
                             *(_DWORD *)(v6 + 20));
          p_VPortLink = &v12->VPortLink;
          Flink = v12->VPortLink.Flink;
          if ( Flink->Blink != &v12->VPortLink )
            goto LABEL_19;
          Blink = v12->VPortLink.Blink;
          if ( Blink->Flink != p_VPortLink )
            goto LABEL_19;
          Blink->Flink = Flink;
          Flink->Blink = Blink;
          --VPortBlock->NumFilters;
          NicSwitch = VPortBlock->NicSwitch;
          if ( VPortBlock->VPortParams.VPortId )
            --*((_DWORD *)NicSwitch + 164);
          else
            --*((_DWORD *)NicSwitch + 163);
          p_FilterList = &VPortByVPortId->FilterList;
          v20 = VPortByVPortId->FilterList.Flink;
          if ( v20->Blink != &VPortByVPortId->FilterList )
LABEL_19:
            __fastfail(3u);
          p_VPortLink->Flink = v20;
          v12->VPortLink.Blink = p_FilterList;
          v20->Blink = p_VPortLink;
          p_FilterList->Flink = p_VPortLink;
          ++VPortByVPortId->NumFilters;
          v21 = VPortByVPortId->NicSwitch;
          if ( VPortByVPortId->VPortParams.VPortId )
            ++*((_DWORD *)v21 + 164);
          else
            ++*((_DWORD *)v21 + 163);
          v12->VPortBlock = VPortByVPortId;
          *((_DWORD *)a1 + 10) = 0;
        }
      }
    }
  }
}
