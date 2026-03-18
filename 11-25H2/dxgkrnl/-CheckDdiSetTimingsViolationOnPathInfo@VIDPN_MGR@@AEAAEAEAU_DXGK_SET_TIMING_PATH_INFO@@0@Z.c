/*
 * XREFs of ?CheckDdiSetTimingsViolationOnPathInfo@VIDPN_MGR@@AEAAEAEAU_DXGK_SET_TIMING_PATH_INFO@@0@Z @ 0x140355EAC
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x14030CF78 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 * Callees:
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x1400410D8 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ?UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x14035601C (-UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 */

unsigned __int8 __fastcall VIDPN_MGR::CheckDdiSetTimingsViolationOnPathInfo(
        VIDPN_MGR *this,
        struct _DXGK_SET_TIMING_PATH_INFO *a2,
        struct _DXGK_SET_TIMING_PATH_INFO *a3)
{
  DXGADAPTER *ContainingAdapter; // rax
  int v6; // ecx

  ContainingAdapter = VIDPN_MGR::GetContainingAdapter(this);
  if ( !DXGADAPTER::UsingSetTimingsFromVidPn(ContainingAdapter) )
    return 1;
  if ( *(_QWORD *)&a2->VidPnTargetId == *(_QWORD *)&a3->VidPnTargetId
    && a2->SelectedWireFormat.Value == a3->SelectedWireFormat.Value
    && a2->InputFlags == a3->InputFlags )
  {
    if ( a3->OutputFlags >= 2 || *((_DWORD *)&a3->TargetState + 2) >= 0x10000000u || a3->Reserved )
    {
      WdLogSingleEntry1(1LL, a3->VidPnTargetId);
      WdLogGlobalForLineNumber = 1200;
    }
    if ( a3->TargetState.ConnectionChangeId )
    {
      v6 = *((_DWORD *)&a3->TargetState + 2) & 0xF000000;
      if ( v6 != 234881024 && ((v6 - 201326592) & 0xFEFFFFFF) != 0 )
      {
        WdLogSingleEntry2(1LL, HIBYTE(*((_DWORD *)&a3->TargetState + 2)) & 0xF, a3->VidPnTargetId);
        WdLogGlobalForLineNumber = 1225;
        return 0;
      }
      if ( (*(_BYTE *)&a2->Input & 3) == 3 && v6 != 234881024 )
      {
        WdLogSingleEntry2(1LL, HIBYTE(*((_DWORD *)&a3->TargetState + 2)) & 0xF, a3->VidPnTargetId);
        WdLogGlobalForLineNumber = 1238;
        return 0;
      }
      return 1;
    }
    WdLogSingleEntry1(1LL, a3->VidPnTargetId);
    WdLogGlobalForLineNumber = 1209;
  }
  else
  {
    WdLogSingleEntry1(1LL, a2->VidPnTargetId);
    WdLogGlobalForLineNumber = 1187;
  }
  return 0;
}
