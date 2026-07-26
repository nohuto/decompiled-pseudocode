/*
 * XREFs of ?ndisIfQueryBindingMiniportIfIndex@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAKPEAT_NET_LUID_LH@@12@Z @ 0x140153F70
 * Callers:
 *     ?ndisPostProcessRestartParametersAfterFilters@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x14005AB40 (-ndisPostProcessRestartParametersAfterFilters@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_IN.c)
 *     NdisIfQueryBindingIfIndex @ 0x140151F80 (NdisIfQueryBindingIfIndex.c)
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x140153580 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1400129C0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     ?ndisReferenceMiniportByHandle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z @ 0x14003B520 (-ndisReferenceMiniportByHandle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z.c)
 */

__int64 __fastcall ndisIfQueryBindingMiniportIfIndex(
        struct _NDIS_MINIPORT_BLOCK *a1,
        unsigned int *a2,
        union _NET_LUID_LH *a3,
        unsigned int *a4,
        union _NET_LUID_LH *a5)
{
  unsigned int *v7; // r15
  _NDIS_FILTER_BLOCK *HighestFilter; // rax
  _NDIS_IF_BLOCK *IfBlock; // rax
  _NET_LUID_LH v11; // rax
  struct _NDIS_MINIPORT_BLOCK *BaseMiniport; // rcx

  v7 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      22,
      10,
      (struct _GUID *)&WPP_3d61bbabecaa38aa84130e7e4a2da4d6_Traceguids,
      (char)a1);
  }
  *v7 = 0;
  a3->Value = 0LL;
  *a4 = 0;
  a5->Value = 0LL;
  HighestFilter = a1->HighestFilter;
  if ( HighestFilter && (IfBlock = HighestFilter->IfBlock) != 0LL )
  {
    *v7 = IfBlock->ifIndex;
    v11.Value = (ULONG64)a1->HighestFilter->IfBlock->NetLuid;
  }
  else
  {
    *v7 = a1->IfIndex;
    v11.Value = (ULONG64)a1->NetLuid;
  }
  a3->Value = v11.Value;
  if ( (a1->PnPFlags & 0x8000000) != 0
    && (BaseMiniport = a1->BaseMiniport) != 0LL
    && (unsigned __int8)ndisReferenceMiniportByHandle(BaseMiniport, 0, 0x3Eu) )
  {
    *a4 = a1->BaseMiniport->$1CBB5082EE430F6FF7D32A5636984DBD::IfIndex;
    a5->Value = (ULONG64)a1->BaseMiniport->NetLuid;
    ndisDereferenceMiniport(a1->BaseMiniport, 0x3Eu);
  }
  else
  {
    *a4 = a1->IfIndex;
    a5->Value = (ULONG64)a1->NetLuid;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      22,
      11,
      (struct _GUID *)&WPP_3d61bbabecaa38aa84130e7e4a2da4d6_Traceguids,
      (char)a1);
  }
  return 0LL;
}
