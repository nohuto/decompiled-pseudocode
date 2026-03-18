/*
 * XREFs of ?IsVidPnPathSyncLockMatch@DMMVIDPNPRESENTPATH@@QEBA_NAEBV1@@Z @ 0x140266610
 * Callers:
 *     ?BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAK2AEAV?$unique_ptr@$$BY0A@U_DXGK_SET_TIMING_PATH_INFO@@U?$default_delete@$$BY0A@U_DXGK_SET_TIMING_PATH_INFO@@@wistd@@@wistd@@AEAV?$unique_ptr@$$BY0A@IU?$default_delete@$$BY0A@I@wistd@@@5@4@Z @ 0x14042C500 (-BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_M.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14000BE00 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ @ 0x140039A3C (-AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ.c)
 *     ??9DMMVIDPNTARGETMODE@@QEBA_NAEBV0@@Z @ 0x1400428C0 (--9DMMVIDPNTARGETMODE@@QEBA_NAEBV0@@Z.c)
 */

bool __fastcall DMMVIDPNPRESENTPATH::IsVidPnPathSyncLockMatch(DMMVIDPNTARGET **this, DMMVIDPNTARGET **a2)
{
  struct DMMVIDPNTARGETMODESET *v4; // rdi
  __int64 v5; // r14
  struct DMMVIDPNTARGETMODESET *v6; // rbx
  __int64 v7; // rsi
  struct DMMVIDPNTARGETMODESET *v9; // rbp
  __int64 v10; // r15
  struct DMMVIDPNTARGETMODESET *v11; // rsi
  __int64 v12; // r14
  bool v13; // r14

  v4 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(this[12]);
  v5 = *((_QWORD *)v4 + 18);
  if ( !v5 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 746;
  }
  v6 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(a2[12]);
  v7 = *((_QWORD *)v6 + 18);
  if ( !v7 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 749;
  }
  if ( DMMVIDPNTARGETMODE::operator!=(v5, v7) )
  {
    ReferenceCounted::Release((struct DMMVIDPNTARGETMODESET *)((char *)v6 + 88));
    ReferenceCounted::Release((struct DMMVIDPNTARGETMODESET *)((char *)v4 + 88));
    return 0;
  }
  else
  {
    v9 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(this[11]);
    v10 = *((_QWORD *)v9 + 18);
    if ( !v10 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 761;
    }
    v11 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(a2[11]);
    v12 = *((_QWORD *)v11 + 18);
    if ( !v12 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 764;
    }
    v13 = *(_DWORD *)(v10 + 96) == *(_DWORD *)(v12 + 96);
    ReferenceCounted::Release((struct DMMVIDPNTARGETMODESET *)((char *)v11 + 88));
    ReferenceCounted::Release((struct DMMVIDPNTARGETMODESET *)((char *)v9 + 88));
    ReferenceCounted::Release((struct DMMVIDPNTARGETMODESET *)((char *)v6 + 88));
    ReferenceCounted::Release((struct DMMVIDPNTARGETMODESET *)((char *)v4 + 88));
    return v13;
  }
}
