/*
 * XREFs of ?ndisGetPortList@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAPEAU_NDIS_PORT@@@Z @ 0x1400762C0
 * Callers:
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x14015FDF0 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x14000EA50 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall ndisGetPortList(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_PORT **a2)
{
  struct _NDIS_PORT **v2; // r14
  KIRQL v4; // al
  unsigned int NumberOfActivePorts; // edi
  KIRQL v6; // r15
  unsigned int v7; // edi
  __int64 Pool2; // rax
  __int64 v9; // rsi
  _LIST_ENTRY *v10; // r10
  _LIST_ENTRY *Flink; // rdx
  unsigned int v12; // r9d
  _NET_IF_DIRECTION_TYPE DirectionType; // ecx
  _NDIS_PORT_AUTHORIZATION_STATE DefaultPortRcvAuthorizationState; // eax
  _QWORD *p_Flink; // rcx
  unsigned int v16; // edi

  v2 = a2;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      23,
      36,
      (struct _GUID *)&WPP_82edb36cecd534540cfb01a6d1688083_Traceguids,
      (char)a1);
  }
  *v2 = 0LL;
  v4 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  NumberOfActivePorts = a1->NumberOfActivePorts;
  v6 = v4;
  a1->MiniportThread = KeGetCurrentThread();
  v7 = NumberOfActivePorts + 1;
  Pool2 = ExAllocatePool2(64LL, 96 * v7, 1869628494);
  v9 = Pool2;
  if ( Pool2 )
  {
    v10 = (_LIST_ENTRY *)(Pool2 + 96);
    *(_QWORD *)(Pool2 + 32) = 4194688LL;
    *(_QWORD *)Pool2 = Pool2 + 96;
    Flink = a1->PortList.Flink;
    v12 = 1;
    *(_DWORD *)(Pool2 + 40) = 0;
    *(_DWORD *)(Pool2 + 48) = a1->MediaConnectState;
    *(_QWORD *)(Pool2 + 56) = a1->XmitLinkSpeed;
    *(_QWORD *)(Pool2 + 64) = a1->RcvLinkSpeed;
    DirectionType = a1->IfBlock->DirectionType;
    *(_DWORD *)(Pool2 + 76) = a1->DefaultPortSendControlState;
    *(_DWORD *)(Pool2 + 80) = a1->DefaultPortRcvControlState;
    *(_DWORD *)(Pool2 + 84) = a1->DefaultPortSendAuthorizationState;
    DefaultPortRcvAuthorizationState = a1->DefaultPortRcvAuthorizationState;
    *(_DWORD *)(v9 + 72) = DirectionType;
    p_Flink = (_QWORD *)v9;
    for ( *(_DWORD *)(v9 + 88) = DefaultPortRcvAuthorizationState; Flink != &a1->PortList; Flink = Flink->Flink )
    {
      if ( v12 >= v7 )
        break;
      if ( LODWORD(Flink[1].Flink) == 4 )
      {
        p_Flink = &v10->Flink;
        v10->Flink = v10 + 6;
        ++v12;
        v10[2] = *(_LIST_ENTRY *)((char *)Flink + 24);
        v10[3] = *(_LIST_ENTRY *)((char *)Flink + 40);
        v10[4] = *(_LIST_ENTRY *)((char *)Flink + 56);
        v10[5] = *(_LIST_ENTRY *)((char *)Flink + 72);
        v10 += 6;
      }
    }
    *p_Flink = 0LL;
    a1->MiniportThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, v6);
    *v2 = (struct _NDIS_PORT *)v9;
    v16 = 0;
  }
  else
  {
    a1->MiniportThread = 0LL;
    v16 = -1073741670;
    KeReleaseSpinLock(&a1->Lock, v6);
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x17u,
      0x25u,
      (struct _GUID *)&WPP_82edb36cecd534540cfb01a6d1688083_Traceguids,
      (char)a1,
      v16);
  return v16;
}
