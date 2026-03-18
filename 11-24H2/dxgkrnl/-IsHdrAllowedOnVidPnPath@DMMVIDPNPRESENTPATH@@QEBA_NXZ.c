/*
 * XREFs of ?IsHdrAllowedOnVidPnPath@DMMVIDPNPRESENTPATH@@QEBA_NXZ @ 0x1403146CC
 * Callers:
 *     ?DmmIsHdrAllowedOnTarget@@YA_NPEAVDXGADAPTER@@I@Z @ 0x140314B08 (-DmmIsHdrAllowedOnTarget@@YA_NPEAVDXGADAPTER@@I@Z.c)
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1403639F0 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 *     ?BmlPickColorSpaceAndWireFormat@@YAJPEBUBML_VIDPN_PATH_ORDER@@W4DXGK_DIAG_CCD_BML_ORIGIN@@PEAVDMMVIDPN@@@Z @ 0x140365490 (-BmlPickColorSpaceAndWireFormat@@YAJPEBUBML_VIDPN_PATH_ORDER@@W4DXGK_DIAG_CCD_BML_ORIGIN@@PEAVDM.c)
 *     ?DmmNeedDisplayModeResetDueToHdrPowerPolicy@@YA_NPEAVDXGADAPTER@@@Z @ 0x140398964 (-DmmNeedDisplayModeResetDueToHdrPowerPolicy@@YA_NPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14000BE00 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ @ 0x140039A3C (-AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ.c)
 */

char __fastcall DMMVIDPNPRESENTPATH::IsHdrAllowedOnVidPnPath(DMMVIDPNPRESENTPATH *this)
{
  struct DMMVIDPNTARGETMODESET *v2; // rbx
  __int64 v3; // rax
  bool v4; // di

  if ( !*((_BYTE *)DXGGLOBAL::GetGlobal() + 305204) )
    return 0;
  if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 12) + 96LL) + 92LL) )
    return 1;
  v2 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(*((DMMVIDPNTARGET **)this + 11));
  v3 = *((_QWORD *)v2 + 18);
  if ( v3 )
  {
    v4 = (unsigned int)(*(_DWORD *)(v3 + 72) - 3) > 1;
  }
  else
  {
    WdLogSingleEntry1(3LL, this);
    WdLogGlobalForLineNumber = 821;
    v4 = 1;
  }
  ReferenceCounted::Release((struct DMMVIDPNTARGETMODESET *)((char *)v2 + 88));
  return v4;
}
