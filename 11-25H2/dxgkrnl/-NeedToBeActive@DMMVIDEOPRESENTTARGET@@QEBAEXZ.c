/*
 * XREFs of ?NeedToBeActive@DMMVIDEOPRESENTTARGET@@QEBAEXZ @ 0x1402EB9D4
 * Callers:
 *     ?BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAK2AEAV?$unique_ptr@$$BY0A@U_DXGK_SET_TIMING_PATH_INFO@@U?$default_delete@$$BY0A@U_DXGK_SET_TIMING_PATH_INFO@@@wistd@@@wistd@@AEAV?$unique_ptr@$$BY0A@IU?$default_delete@$$BY0A@I@wistd@@@5@4@Z @ 0x14042AC60 (-BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_M.c)
 * Callees:
 *     ?IsTargetForceable@DMMVIDEOPRESENTTARGET@@QEBAEXZ @ 0x1402EA554 (-IsTargetForceable@DMMVIDEOPRESENTTARGET@@QEBAEXZ.c)
 *     ?IsConnectedMonitorDisabled@DMMVIDEOPRESENTTARGET@@QEBAJAEAE@Z @ 0x1402EBA28 (-IsConnectedMonitorDisabled@DMMVIDEOPRESENTTARGET@@QEBAJAEAE@Z.c)
 */

bool __fastcall DMMVIDEOPRESENTTARGET::NeedToBeActive(DMMVIDEOPRESENTTARGET *this)
{
  unsigned __int8 v2; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 30) != 1 || *(_BYTE *)(*((_QWORD *)this + 67) + 172LL) )
    return 0;
  if ( !*((_BYTE *)this + 415) )
    return DMMVIDEOPRESENTTARGET::IsTargetForceable(this);
  v2 = 0;
  DMMVIDEOPRESENTTARGET::IsConnectedMonitorDisabled(this, &v2);
  return v2 == 0;
}
