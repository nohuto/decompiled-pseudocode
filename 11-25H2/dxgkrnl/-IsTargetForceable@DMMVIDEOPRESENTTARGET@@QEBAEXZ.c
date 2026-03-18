/*
 * XREFs of ?IsTargetForceable@DMMVIDEOPRESENTTARGET@@QEBAEXZ @ 0x1402EA554
 * Callers:
 *     _lambda_f44fa2b0187a36f67bd7075047dd61ad_::operator() @ 0x1401BF5A4 (_lambda_f44fa2b0187a36f67bd7075047dd61ad_--operator().c)
 *     ?_GetMonitorInformationForTargets@MONITOR_MGR@@QEAAJP6AJPEAX0IW4_DMM_VIDPN_MONITOR_TYPE@@EE@Z0I@Z @ 0x1402E9C18 (-_GetMonitorInformationForTargets@MONITOR_MGR@@QEAAJP6AJPEAX0IW4_DMM_VIDPN_MONITOR_TYPE@@EE@Z0I@.c)
 *     ?DmmIsTargetForceable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1402EA310 (-DmmIsTargetForceable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 *     ?NeedToBeActive@DMMVIDEOPRESENTTARGET@@QEBAEXZ @ 0x1402EB9D4 (-NeedToBeActive@DMMVIDEOPRESENTTARGET@@QEBAEXZ.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x14030CF78 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 * Callees:
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x1400410D8 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 */

bool __fastcall DMMVIDEOPRESENTTARGET::IsTargetForceable(DMMVIDEOPRESENTTARGET *this)
{
  char v1; // di
  struct DXGADAPTER *ContainingAdapter; // rax
  int v4; // eax
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx

  v1 = 0;
  if ( !*((_QWORD *)this + 5) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 68;
  }
  ContainingAdapter = VIDPN_MGR::GetContainingAdapter(*(VIDPN_MGR **)(*((_QWORD *)this + 5) + 88LL));
  if ( *((_DWORD *)ContainingAdapter + 105) == 21299
    && *(int *)(*(_QWORD *)(*((_QWORD *)ContainingAdapter + 390) + 16LL) + 3004LL) < 1105 )
  {
    return 0;
  }
  if ( *((_DWORD *)this + 32) != -1 )
    return 1;
  v4 = *((_DWORD *)this + 102);
  if ( v4 != -1 )
    return v4 == 1;
  v5 = *((_DWORD *)this + 20);
  if ( !v5 )
    return 1;
  v6 = v5 - 1;
  if ( !v6 )
    return 1;
  v7 = v6 - 1;
  if ( !v7 )
    return 1;
  v8 = v7 - 1;
  if ( !v8 || v8 == 11 )
    return 1;
  return v1;
}
