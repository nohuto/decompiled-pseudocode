/*
 * XREFs of ?UpdateAccentBlurRect@CAccent@@QEAAXAEBUtagRECT@@@Z @ 0x18007322C
 * Callers:
 *     ?UpdateAccentBlurRect@CTopLevelWindow@@QEAAXAEBUtagRECT@@@Z @ 0x180073208 (-UpdateAccentBlurRect@CTopLevelWindow@@QEAAXAEBUtagRECT@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180021E28 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCRectangleGeometryProxy@@@Z @ 0x18003A4E4 (-CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCRectangleGeometryProxy@@@Z.c)
 *     ?SetClipRegion@CAccent@@QEAAXPEAVCBaseGeometryProxy@@@Z @ 0x1800732C0 (-SetClipRegion@CAccent@@QEAAXPEAVCBaseGeometryProxy@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A1838 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAccent::UpdateAccentBlurRect(CAccent *this, const struct tagRECT *a2)
{
  struct CBaseGeometryProxy *v3; // rbx
  int v4; // eax
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct CRectangleGeometryProxy *v7; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0LL;
  v7 = 0LL;
  if ( a2->right > a2->left && a2->bottom > a2->top )
  {
    v7 = 0LL;
    v4 = ResourceHelper::CreateRectangleGeometry(a2, &v7);
    if ( v4 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x26F,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
        (const char *)(unsigned int)v4,
        v5);
      wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v7);
      return;
    }
    v3 = v7;
  }
  CAccent::SetClipRegion(this, v3);
  if ( v3 )
    CBaseObject::Release(v3);
}
