/*
 * XREFs of ?GetTargetModeRefreshRate@DMMVIDPNPRESENTPATH@@QEBAJAEAU_D3DDDI_RATIONAL@@@Z @ 0x14025F60C
 * Callers:
 *     ?BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAK2AEAV?$unique_ptr@$$BY0A@U_DXGK_SET_TIMING_PATH_INFO@@U?$default_delete@$$BY0A@U_DXGK_SET_TIMING_PATH_INFO@@@wistd@@@wistd@@AEAV?$unique_ptr@$$BY0A@IU?$default_delete@$$BY0A@I@wistd@@@5@4@Z @ 0x14042AC60 (-BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_M.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x14001B394 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ @ 0x14003B47C (-AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ.c)
 */

__int64 __fastcall DMMVIDPNPRESENTPATH::GetTargetModeRefreshRate(DMMVIDPNTARGET **this, struct _D3DDDI_RATIONAL *a2)
{
  __int64 v2; // rdx
  _QWORD *v3; // r8
  __int64 v4; // rax
  unsigned int v5; // ebx
  struct DMMVIDPNTARGETMODESET *v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(this[12]);
  v4 = *((_QWORD *)v7 + 18);
  if ( v4 )
  {
    v5 = 0;
    *v3 = *(_QWORD *)(v4 + 152);
  }
  else
  {
    v5 = 1075708679;
    WdLogSingleEntry2(2LL, v2, 1075708679LL);
    WdLogGlobalForLineNumber = 966;
  }
  auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v7, 0LL);
  return v5;
}
