/*
 * XREFs of ?ndisIfRemoveIfBlockMiniportAssociation@@YAXPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NET_IF_ADMIN_STATUS@@@Z @ 0x140166B00
 * Callers:
 *     ?ndisPnPCompleteRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1401696E0 (-ndisPnPCompleteRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x1401771E0 (-ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 *     ndisIfDetachMiniportBlock @ 0x140072670 (ndisIfDetachMiniportBlock.c)
 *     ndisNsiSyncMiniportMediaConnectStateNotification @ 0x140160640 (ndisNsiSyncMiniportMediaConnectStateNotification.c)
 *     ?ndisNsiSyncMiniportOperStatusNotification@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140160690 (-ndisNsiSyncMiniportOperStatusNotification@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisIfRemoveIfBlockMiniportAssociation(
        struct _NDIS_IF_BLOCK *a1,
        struct _NDIS_MINIPORT_BLOCK *a2,
        enum _NET_IF_ADMIN_STATUS a3)
{
  struct _NDIS_MINIPORT_BLOCK *v4; // rbx
  char v5; // si
  _NDIS_IF_BLOCK *IfBlock; // rax
  _NDIS_IF_BLOCK *v7; // rax
  int v8; // edx
  char v9; // [rsp+30h] [rbp-18h]

  v4 = a2;
  v5 = (char)a1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v9 = (char)a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      22,
      18,
      (struct _GUID *)&WPP_3d61bbabecaa38aa84130e7e4a2da4d6_Traceguids,
      (char)a1,
      v9);
  }
  v4->IfBlock->ifOperStatusFlags = 0;
  v4->IfBlock->ifAdminStatus = a3;
  IfBlock = v4->IfBlock;
  if ( IfBlock->ifOperStatus != NET_IF_OPER_STATUS_DOWN )
  {
    IfBlock->ifOperStatus = NET_IF_OPER_STATUS_DOWN;
    ndisNsiSyncMiniportOperStatusNotification(v4);
  }
  v7 = v4->IfBlock;
  if ( v7->MediaConnectState )
  {
    v7->MediaConnectState = MediaConnectStateUnknown;
    ndisNsiSyncMiniportMediaConnectStateNotification((__int64)v4);
  }
  ndisIfDetachMiniportBlock(v4);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v8,
      22,
      19,
      (struct _GUID *)&WPP_3d61bbabecaa38aa84130e7e4a2da4d6_Traceguids,
      v5,
      (char)v4);
  }
}
