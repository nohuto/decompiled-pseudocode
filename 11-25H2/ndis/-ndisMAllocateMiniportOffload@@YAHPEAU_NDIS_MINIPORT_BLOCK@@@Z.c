/*
 * XREFs of ?ndisMAllocateMiniportOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14008CCF0
 * Callers:
 *     ?ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x140069920 (-ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisMSetOffloadAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@1PEAU_NDIS_TCP_CONNECTION_OFFLOAD@@2@Z @ 0x14007F760 (-ndisMSetOffloadAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@1PEAU_NDIS_TCP_CONNE.c)
 *     ?ndisGetMiniportOffloadCapability@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400B9438 (-ndisGetMiniportOffloadCapability@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall ndisMAllocateMiniportOffload(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_MINIPORT_OFFLOAD *Pool2; // rax
  unsigned int v3; // ebx

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      12,
      (struct _GUID *)&WPP_1a1a1e7a62063afe4bd31b60c3cc8d66_Traceguids,
      (char)a1);
  Pool2 = (_NDIS_MINIPORT_OFFLOAD *)ExAllocatePool2(64LL, 1352LL, 1718568014);
  a1->Offload = Pool2;
  v3 = 0;
  if ( !Pool2 )
    v3 = -1073741670;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      13,
      (struct _GUID *)&WPP_1a1a1e7a62063afe4bd31b60c3cc8d66_Traceguids,
      (char)Pool2);
  return v3;
}
