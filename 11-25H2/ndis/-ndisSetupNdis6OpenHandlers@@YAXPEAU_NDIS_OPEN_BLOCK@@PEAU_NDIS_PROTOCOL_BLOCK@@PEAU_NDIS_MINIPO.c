/*
 * XREFs of ?ndisSetupNdis6OpenHandlers@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140052D30
 * Callers:
 *     ?ndisSetMiniportHandlers@@_Y2PAGENPNP@@AXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1401844C0 (-ndisSetMiniportHandlers@@_Y2PAGENPNP@@AXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMOpenAdapter@@YAXPEAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14018B420 (-ndisMOpenAdapter@@YAXPEAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisSetupLwfMiniportHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140018B00 (-ndisSetupLwfMiniportHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisSetupMiniportProtocolHandlers@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140052E50 (-ndisSetupMiniportProtocolHandlers@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS.c)
 *     WPP_RECORDER_SF_qqq @ 0x140053160 (WPP_RECORDER_SF_qqq.c)
 *     WPP_RECORDER_SF_qqqDD @ 0x1400534B0 (WPP_RECORDER_SF_qqqDD.c)
 */

void __fastcall ndisSetupNdis6OpenHandlers(
        struct _NDIS_OPEN_BLOCK *a1,
        struct _NDIS_PROTOCOL_BLOCK *a2,
        struct _NDIS_MINIPORT_BLOCK *a3)
{
  int v6; // edx

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a3->MajorNdisVersion,
      6,
      151,
      (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
      (char)a2,
      (char)a3,
      (char)a1,
      a2->MajorNdisVersion >= 6u,
      a3->MajorNdisVersion >= 6u);
  ndisSetupMiniportProtocolHandlers(a1, a2, a3);
  if ( a3->HighestFilter )
    ndisSetupLwfMiniportHandlers(a3);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v6,
      6,
      152,
      (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
      (char)a2,
      (char)a3,
      (char)a1);
  }
}
