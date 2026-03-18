/*
 * XREFs of ?IsVidPnPathModeMatch@DMMVIDPNPRESENTPATH@@QEBA_NAEBV1@E@Z @ 0x1403EB9F8
 * Callers:
 *     ?BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAK2AEAV?$unique_ptr@$$BY0A@U_DXGK_SET_TIMING_PATH_INFO@@U?$default_delete@$$BY0A@U_DXGK_SET_TIMING_PATH_INFO@@@wistd@@@wistd@@AEAV?$unique_ptr@$$BY0A@IU?$default_delete@$$BY0A@I@wistd@@@5@4@Z @ 0x14042AC60 (-BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_M.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14001B3E0 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??8DMMVIDPNSOURCEMODE@@QEBA_NAEBV0@@Z @ 0x14002D300 (--8DMMVIDPNSOURCEMODE@@QEBA_NAEBV0@@Z.c)
 *     ?IsFunctional@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x14003B3D0 (-IsFunctional@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ @ 0x14003B47C (-AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ.c)
 *     ?IsFunctionalContentRotationType@DMMVIDPNPRESENTPATH@@SAEW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z @ 0x14003B5DC (-IsFunctionalContentRotationType@DMMVIDPNPRESENTPATH@@SAEW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@.c)
 *     ?D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x14003B614 (-D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ??9DMMVIDPNTARGETMODE@@QEBA_NAEBV0@@Z @ 0x140042E00 (--9DMMVIDPNTARGETMODE@@QEBA_NAEBV0@@Z.c)
 */

bool __fastcall DMMVIDPNPRESENTPATH::IsVidPnPathModeMatch(DMMVIDPNTARGET **this, DMMVIDPNTARGET **a2, char a3)
{
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *v4; // rbx
  bool v7; // r14
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v8; // eax
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v9; // eax
  struct DMMVIDPNTARGETMODESET *v11; // rbx
  __int64 v12; // r15
  struct DMMVIDPNTARGETMODESET *v13; // rdi
  __int64 v14; // r12
  struct DMMVIDPNTARGETMODESET *v15; // rbp
  _DWORD *v16; // r12
  struct DMMVIDPNTARGETMODESET *v17; // rsi
  _DWORD *v18; // r15

  v4 = (enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *)this + 29;
  v7 = 0;
  if ( !DMMVIDPNPRESENTPATH::IsFunctional((DMMVIDPNPRESENTPATH *)this)
    || (v8 = (unsigned int)D3DKMDT_VPPR_GET_CONTENT_ROTATION(*v4),
        !DMMVIDPNPRESENTPATH::IsFunctionalContentRotationType(v8)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 688;
  }
  if ( !DMMVIDPNPRESENTPATH::IsFunctional((DMMVIDPNPRESENTPATH *)a2)
    || (v9 = (unsigned int)D3DKMDT_VPPR_GET_CONTENT_ROTATION(*v4),
        !DMMVIDPNPRESENTPATH::IsFunctionalContentRotationType(v9)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 690;
  }
  if ( !a3 && *v4 != *((_DWORD *)a2 + 29) || *((_DWORD *)this + 28) != *((_DWORD *)a2 + 28) )
    return 0;
  v11 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(this[12]);
  v12 = *((_QWORD *)v11 + 18);
  if ( !v12 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 711;
  }
  v13 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(a2[12]);
  v14 = *((_QWORD *)v13 + 18);
  if ( !v14 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 714;
  }
  if ( !DMMVIDPNTARGETMODE::operator!=(v12, v14) )
  {
    v15 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(this[11]);
    v16 = (_DWORD *)*((_QWORD *)v15 + 18);
    if ( !v16 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 726;
    }
    v17 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(a2[11]);
    v18 = (_DWORD *)*((_QWORD *)v17 + 18);
    if ( !v18 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 729;
    }
    v7 = DMMVIDPNSOURCEMODE::operator==(v16, v18);
    ReferenceCounted::Release((struct DMMVIDPNTARGETMODESET *)((char *)v17 + 88));
    ReferenceCounted::Release((struct DMMVIDPNTARGETMODESET *)((char *)v15 + 88));
  }
  ReferenceCounted::Release((struct DMMVIDPNTARGETMODESET *)((char *)v13 + 88));
  ReferenceCounted::Release((struct DMMVIDPNTARGETMODESET *)((char *)v11 + 88));
  return v7;
}
