/*
 * XREFs of ?IsFunctional@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x14003B3D0
 * Callers:
 *     ?IsFunctional@DMMVIDPN@@QEBAEI@Z @ 0x1402C28F0 (-IsFunctional@DMMVIDPN@@QEBAEI@Z.c)
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1402C4010 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 *     ?IsVidPnPathModeMatch@DMMVIDPNPRESENTPATH@@QEBA_NAEBV1@E@Z @ 0x1403EB9F8 (-IsVidPnPathModeMatch@DMMVIDPNPRESENTPATH@@QEBA_NAEBV1@E@Z.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x14001B394 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14001B3E0 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ @ 0x14003B47C (-AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ.c)
 *     ?IsFunctionalContentRotationType@DMMVIDPNPRESENTPATH@@SAEW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z @ 0x14003B5DC (-IsFunctionalContentRotationType@DMMVIDPNPRESENTPATH@@SAEW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@.c)
 *     ?IsFunctionalContentScalingType@DMMVIDPNPRESENTPATH@@QEBAEW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x14003B6FC (-IsFunctionalContentScalingType@DMMVIDPNPRESENTPATH@@QEBAEW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@.c)
 */

unsigned __int8 __fastcall DMMVIDPNPRESENTPATH::IsFunctional(DMMVIDPNPRESENTPATH *this)
{
  struct DMMVIDPNTARGETMODESET *v2; // rax
  struct DMMVIDPNTARGETMODESET *v3; // rax
  struct DMMVIDPNTARGETMODESET *v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(*((DMMVIDPNTARGET **)this + 11));
  if ( *((struct DMMVIDPNTARGETMODESET **)v2 + 6) == (struct DMMVIDPNTARGETMODESET *)((char *)v2 + 48)
    || !*((_QWORD *)v2 + 18) )
  {
    if ( v2 )
      ReferenceCounted::Release((struct DMMVIDPNTARGETMODESET *)((char *)v2 + 88));
  }
  else
  {
    ReferenceCounted::Release((struct DMMVIDPNTARGETMODESET *)((char *)v2 + 88));
    v3 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(*((DMMVIDPNTARGET **)this + 12));
    v5 = v3;
    if ( *((struct DMMVIDPNTARGETMODESET **)v3 + 6) == (struct DMMVIDPNTARGETMODESET *)((char *)v3 + 48)
      || !*((_QWORD *)v3 + 18) )
    {
      auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v5, 0LL);
    }
    else
    {
      if ( v3 )
        ReferenceCounted::Release((struct DMMVIDPNTARGETMODESET *)((char *)v3 + 88));
      if ( DMMVIDPNPRESENTPATH::IsFunctionalContentScalingType(
             this,
             *((enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING *)this + 28))
        && DMMVIDPNPRESENTPATH::IsFunctionalContentRotationType(*((enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *)this + 29)) )
      {
        return 1;
      }
    }
  }
  return 0;
}
