/*
 * XREFs of ?ndisIfSetInterfaceState@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x140034E10
 * Callers:
 *     ?ndisUpdateOperationalStatus@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400347D0 (-ndisUpdateOperationalStatus@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisIfUpdateInterfaceOnInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x140043BE0 (-ndisIfUpdateInterfaceOnInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@PEAU_NDIS_M.c)
 *     ?ndisPnPPortActivation@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x140065F90 (-ndisPnPPortActivation@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 *     ?ndisOidPreSetPortAuthentication@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x14006D810 (-ndisOidPreSetPortAuthentication@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z @ 0x14007BF40 (-ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z.c)
 *     ?ndisMSetGeneralAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x14007EC60 (-ndisMSetGeneralAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTR.c)
 *     ndisWdfDevicePowerOn @ 0x1400822C0 (ndisWdfDevicePowerOn.c)
 *     ?ndisDevicePowerDown@@YAXPEAX@Z @ 0x140180650 (-ndisDevicePowerDown@@YAXPEAX@Z.c)
 *     ?ndisDevicePowerOn@@YAXPEAX@Z @ 0x140180E40 (-ndisDevicePowerOn@@YAXPEAX@Z.c)
 *     ?ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140181E10 (-ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x140035060 (-ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     ?ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1400350F0 (-ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     ?ndisIsDefaultPortStateOperational@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140035160 (-ndisIsDefaultPortStateOperational@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1400353A0 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisNsiScheduleIfBlockRodChangeNotification@@YAJPEAU_NDIS_IF_BLOCK@@PEAEKK@Z @ 0x140036AF0 (-ndisNsiScheduleIfBlockRodChangeNotification@@YAJPEAU_NDIS_IF_BLOCK@@PEAEKK@Z.c)
 */

__int64 __fastcall ndisIfSetInterfaceState(struct _NDIS_MINIPORT_BLOCK *a1, char a2, unsigned __int8 a3)
{
  unsigned int OperStatusFlags; // edi
  unsigned __int8 v4; // bp
  KIRQL v5; // si
  struct _NDIS_MINIPORT_BLOCK *v7; // rbx
  _NET_IF_OPER_STATUS *p_OperStatus; // r14
  $6FF15DA58FF210359ED0A98560C7FA37 *v9; // r15
  struct _NDIS_IF_BLOCK *v10; // rax
  struct _NDIS_IF_BLOCK *v11; // rdi
  _NET_IF_OPER_STATUS ifOperStatus; // r9d
  _NET_IF_OPER_STATUS v13; // r8d
  _NET_IF_MEDIA_CONNECT_STATE MediaConnectState; // eax
  _NET_IF_MEDIA_CONNECT_STATE v16; // [rsp+60h] [rbp+8h]
  unsigned __int8 v17; // [rsp+70h] [rbp+18h] BYREF

  v17 = a3;
  OperStatusFlags = a1->OperStatusFlags;
  v4 = 0;
  a1->OperStatusFlags = 0;
  v5 = a3;
  v7 = a1;
  if ( a1->State == NdisMiniportHalted )
    goto LABEL_9;
  if ( a1->MediaConnectState != MediaConnectStateConnected )
  {
    a1->OperStatusFlags = 2;
LABEL_9:
    p_OperStatus = &a1->OperStatus;
    a1->OperStatus = NET_IF_OPER_STATUS_DOWN;
    goto LABEL_10;
  }
  p_OperStatus = &a1->OperStatus;
  if ( !ndisIsDefaultPortStateOperational(a1) )
  {
    v7->OperStatusFlags |= 1u;
    *p_OperStatus = NET_IF_OPER_STATUS_DOWN;
LABEL_7:
    a1 = v7;
    goto LABEL_10;
  }
  if ( (unsigned int)(v7->State - 5) > 1 )
  {
    *p_OperStatus = NET_IF_OPER_STATUS_UP;
    v7->OperStatusFlags = 0;
    if ( (OperStatusFlags & 8) != 0 )
      v7->OperStatusFlags = 0x1000000;
    goto LABEL_7;
  }
  v7->OperStatusFlags |= 4u;
  a1 = v7;
  *p_OperStatus = NET_IF_OPER_STATUS_DORMANT;
LABEL_10:
  v9 = &a1->480;
  v10 = ndisMReferenceIfBlock(v7, MPIFREF_SETISTATE);
  v11 = v10;
  if ( v10 )
  {
    ifOperStatus = v10->ifOperStatus;
    v13 = *p_OperStatus;
    MediaConnectState = v10->MediaConnectState;
    v11->ifOperStatus = *p_OperStatus;
    v11->ifAdminStatus = v7->AdminStatus;
    v16 = MediaConnectState;
    v11->MediaConnectState = v9->MediaConnectState;
    v11->MediaDuplexState = v7->MediaDuplexState;
    v11->RcvLinkSpeed = v7->RcvLinkSpeed;
    v11->XmitLinkSpeed = v7->XmitLinkSpeed;
    v11->ifOperStatusFlags = v7->OperStatusFlags;
    if ( ifOperStatus != v13 )
    {
      v4 = 1;
      if ( a2 )
      {
        v7->MiniportThread = 0LL;
        KeReleaseSpinLock(&v7->Lock, v5);
        ndisNsiScheduleIfBlockRodChangeNotification(v11, (unsigned __int8 *)&v11->ifOperStatus, 8u, 0x218u);
        NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v7, &v17);
        v5 = v17;
      }
    }
    if ( v16 != v11->MediaConnectState && a2 )
    {
      v7->MiniportThread = 0LL;
      KeReleaseSpinLock(&v7->Lock, v5);
      ndisNsiScheduleIfBlockRodChangeNotification(v11, (unsigned __int8 *)&v11->MediaConnectState, 4u, 0x284u);
      NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v7, &v17);
    }
    ndisMDereferenceIfBlock(v7, MPIFREF_SETISTATE);
  }
  return v4;
}
