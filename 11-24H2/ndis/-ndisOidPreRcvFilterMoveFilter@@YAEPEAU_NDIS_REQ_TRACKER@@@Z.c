/*
 * XREFs of ?ndisOidPreRcvFilterMoveFilter@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400AA770
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1400066E0 (-ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1400353A0 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisFindReceiveFilterByFilterId@@YAPEAU_NDIS_RECEIVE_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@KKPEAK@Z @ 0x14006D730 (-ndisFindReceiveFilterByFilterId@@YAPEAU_NDIS_RECEIVE_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@KK.c)
 *     ?ndisCaptureIovOidContext@@YA?AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z @ 0x1400DD558 (-ndisCaptureIovOidContext@@YA-AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisIovFindVPortByVPortId@@YAPEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1400DEA1C (-ndisIovFindVPortByVPortId@@YAPEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisIovNicSwitchWithoutIovSupported@@YAEPEAU_NDIS_NIC_SWITCH_CAPABILITIES@@@Z @ 0x1400DF118 (-ndisIovNicSwitchWithoutIovSupported@@YAEPEAU_NDIS_NIC_SWITCH_CAPABILITIES@@@Z.c)
 */

char __fastcall ndisOidPreRcvFilterMoveFilter(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // r14
  char v3; // r12
  _DWORD *v4; // rsi
  _OWORD *v5; // rax
  struct _NDIS_NIC_SWITCH_CAPABILITIES *v6; // rcx
  unsigned int v7; // r13d
  _NDIS_OPEN_BLOCK *OidSourceHandle; // rax
  _NDIS_OPEN_BLOCK *v9; // r15
  __int64 v10; // r8
  unsigned int *v11; // r9
  struct _NDIS_RECEIVE_FILTER_BLOCK *ReceiveFilterByFilterId; // rax
  KIRQL v13; // dl
  struct _NDIS_RECEIVE_FILTER_BLOCK *v14; // r14
  _NDIS_VPORT_BLOCK *VPortBlock; // rcx
  unsigned int v16; // edx
  struct _NDIS_MINIPORT_BLOCK *v18[2]; // [rsp+28h] [rbp-49h]
  struct _NDIS_NIC_SWITCH_CAPABILITIES *v19[2]; // [rsp+38h] [rbp-39h]
  __int128 v20; // [rsp+48h] [rbp-29h]
  char v21[64]; // [rsp+68h] [rbp-9h] BYREF
  KIRQL NewIrql; // [rsp+D8h] [rbp+67h] BYREF

  v1 = *((_QWORD *)a1 + 4);
  NewIrql = 0;
  v3 = 1;
  v4 = *(_DWORD **)(v1 + 40);
  v5 = (_OWORD *)ndisCaptureIovOidContext(v21, a1);
  *(_OWORD *)v18 = *v5;
  *(_OWORD *)v19 = v5[1];
  v20 = v5[2];
  if ( *(_DWORD *)(v1 + 4) != 1 )
    goto LABEL_25;
  *((_DWORD *)a1 + 10) = 0;
  if ( *(_DWORD *)(v1 + 48) >= 0x18u )
  {
    if ( !LOBYTE(v18[0]) )
      return 0;
    if ( !BYTE1(v18[0])
      && (ndisIovNicSwitchWithoutIovSupported(v19[1]) && !v18[1]->PFBlock
       || !ndisIovNicSwitchWithoutIovSupported(v6)
       && (!*((_QWORD *)&v20 + 1) || (*(_BYTE *)(*((_QWORD *)&v20 + 1) + 8LL) & 3) != 3 || !v18[1]->PFBlock))
      || (v7 = v4[1]) == 0 )
    {
LABEL_13:
      *((_DWORD *)a1 + 10) = -1073741811;
      return v3;
    }
    OidSourceHandle = (_NDIS_OPEN_BLOCK *)ndisGetOidSourceHandle((struct _NDIS_OID_REQUEST *)v1);
    v9 = OidSourceHandle;
    if ( OidSourceHandle && OidSourceHandle->Header.Type == 18 )
    {
      NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v18[1], &NewIrql);
      ReceiveFilterByFilterId = ndisFindReceiveFilterByFilterId(v18[1], v7, v10, v11);
      v13 = NewIrql;
      v18[1]->MiniportThread = 0LL;
      v14 = ReceiveFilterByFilterId;
      KeReleaseSpinLock(&v18[1]->Lock, v13);
      if ( v14 )
      {
        if ( v14->Open == v9 )
        {
          VPortBlock = v14->VPortBlock;
          if ( VPortBlock )
          {
            if ( v4[2] == v14->FilterParameters.QueueId && *(_QWORD *)(v4 + 3) == VPortBlock->VPortParams.VPortId )
            {
              v16 = v4[5];
              if ( v4[3] != v16 )
              {
                if ( ndisIovFindVPortByVPortId(v18[1], v16) )
                  return 0;
              }
            }
          }
        }
      }
      goto LABEL_13;
    }
LABEL_25:
    *((_DWORD *)a1 + 10) = -1073741637;
    return v3;
  }
  *(_DWORD *)(v1 + 56) = 24;
  *((_DWORD *)a1 + 10) = -1073676268;
  return v3;
}
