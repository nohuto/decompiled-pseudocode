/*
 * XREFs of ?ndisIfRemoveIfBlockMiniportAssociation@@YAXPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NET_IF_ADMIN_STATUS@@@Z @ 0x140173400
 * Callers:
 *     ?ndisPnPCompleteRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1401765A0 (-ndisPnPCompleteRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x140181730 (-ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1400129A0 (WPP_RECORDER_SF_qq.c)
 *     ndisIfDetachMiniportBlock @ 0x14004C680 (ndisIfDetachMiniportBlock.c)
 *     ndisNsiSyncMiniportMediaConnectStateNotification @ 0x14016C6A0 (ndisNsiSyncMiniportMediaConnectStateNotification.c)
 *     ?ndisNsiSyncMiniportOperStatusNotification@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14016C6F0 (-ndisNsiSyncMiniportOperStatusNotification@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisIfRemoveIfBlockMiniportAssociation(
        struct _NDIS_IF_BLOCK *a1,
        struct _NDIS_MINIPORT_BLOCK *a2,
        enum _NET_IF_ADMIN_STATUS a3)
{
  char v5; // si
  _NDIS_IF_BLOCK *IfBlock; // rax
  _NDIS_IF_BLOCK *v7; // rax

  v5 = (char)a1;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x12u,
      (struct _GUID *)&WPP_3d61bbabecaa38aa84130e7e4a2da4d6_Traceguids,
      (char)a1,
      a2);
  a2->IfBlock->ifOperStatusFlags = 0;
  a2->IfBlock->ifAdminStatus = a3;
  IfBlock = a2->IfBlock;
  if ( IfBlock->ifOperStatus != NET_IF_OPER_STATUS_DOWN )
  {
    IfBlock->ifOperStatus = NET_IF_OPER_STATUS_DOWN;
    ndisNsiSyncMiniportOperStatusNotification(a2);
  }
  v7 = a2->IfBlock;
  if ( v7->MediaConnectState )
  {
    v7->MediaConnectState = MediaConnectStateUnknown;
    ndisNsiSyncMiniportMediaConnectStateNotification((__int64)a2);
  }
  ndisIfDetachMiniportBlock(a2);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x13u,
      (struct _GUID *)&WPP_3d61bbabecaa38aa84130e7e4a2da4d6_Traceguids,
      v5,
      a2);
}
