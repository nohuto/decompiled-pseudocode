/*
 * XREFs of ?SetColorTransform@CVisual@@QEAAJAEBUMilColorTransform@@@Z @ 0x180088898
 * Callers:
 *     ?UpdateColorTransform@CFullScreenMagnifier@@AEAAJXZ @ 0x1800C344C (-UpdateColorTransform@CFullScreenMagnifier@@AEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180021E28 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateColorTransformResourceProxy@CCompositor@@QEAAJPEAPEAVCColorTransformResourceProxy@@@Z @ 0x18009B144 (-CreateColorTransformResourceProxy@CCompositor@@QEAAJPEAPEAVCColorTransformResourceProxy@@@Z.c)
 *     ?Update@CColorTransformResourceProxy@@QEAAJAEBUMilColorTransform@@@Z @ 0x1800B5780 (-Update@CColorTransformResourceProxy@@QEAAJAEBUMilColorTransform@@@Z.c)
 *     ?SetColorTransform@CVisualProxy@@QEAAJPEBVCColorTransformResourceProxy@@@Z @ 0x1800EC754 (-SetColorTransform@CVisualProxy@@QEAAJPEBVCColorTransformResourceProxy@@@Z.c)
 *     memcmp_0 @ 0x1800F636C (memcmp_0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVisual::SetColorTransform(CVisualProxy **this, const struct MilColorTransform *a2)
{
  CBaseObject *v4; // rbx
  int v5; // eax
  unsigned int v6; // ebx
  int v8; // eax
  unsigned int v9; // edi
  __int64 v10; // rdx
  int v11; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  CBaseObject *v13; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0LL;
  v13 = 0LL;
  if ( !memcmp_0(&g_MilColorTransfIdentity, a2, 0x64uLL) )
    goto LABEL_8;
  v5 = CCompositor::CreateColorTransformResourceProxy(
         *((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6),
         &v13);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v4 = v13;
    v8 = CColorTransformResourceProxy::Update(v13, a2);
    v9 = v8;
    if ( v8 < 0 )
    {
      v10 = 395LL;
      goto LABEL_10;
    }
LABEL_8:
    v8 = CVisualProxy::SetColorTransform(this[2], v4);
    v9 = v8;
    if ( v8 >= 0 )
    {
      v9 = 0;
      goto LABEL_12;
    }
    v10 = 399LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\visual.cpp",
      (const char *)(unsigned int)v8,
      v11);
LABEL_12:
    wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v13);
    return v9;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x189,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\visual.cpp",
    (const char *)(unsigned int)v5,
    v11);
  if ( v13 )
    CBaseObject::Release(v13);
  return v6;
}
