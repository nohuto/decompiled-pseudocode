/*
 * XREFs of ?SetColorTransform@CVisual@@QEAAJAEBUMilColorTransform@@@Z @ 0x1801055A0
 * Callers:
 *     ?UpdateColorTransform@CFullScreenMagnifier@@AEAAJXZ @ 0x1800C03C0 (-UpdateColorTransform@CFullScreenMagnifier@@AEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     memcmp_0 @ 0x18006620C (memcmp_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18009E810 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ?Update@CColorTransformResourceProxy@@QEAAJAEBUMilColorTransform@@@Z @ 0x1800ACDA8 (-Update@CColorTransformResourceProxy@@QEAAJAEBUMilColorTransform@@@Z.c)
 *     ??$CreateProxy@VCColorTransformResourceProxy@@@CCompositor@@IEAAJPEAPEAVCColorTransformResourceProxy@@@Z @ 0x1800ACFB0 (--$CreateProxy@VCColorTransformResourceProxy@@@CCompositor@@IEAAJPEAPEAVCColorTransformResourceP.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVisual::SetColorTransform(CVisual *this, const struct MilColorTransform *a2)
{
  CColorTransformResourceProxy *v4; // rbx
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // edi
  __int64 v8; // rdx
  __int64 v9; // r8
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  CColorTransformResourceProxy *v12; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0LL;
  v12 = 0LL;
  if ( memcmp_0(&g_MilColorTransfIdentity, a2, 0x64uLL) )
  {
    v5 = CCompositor::CreateProxy<CColorTransformResourceProxy>(
           *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6),
           &v12);
    v6 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1DF,
        (__int64)"clientcore\\windows\\dwm\\udwm\\visual.cpp",
        (const char *)(unsigned int)v5);
LABEL_12:
      wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v12);
      return v6;
    }
    v4 = v12;
    v7 = CColorTransformResourceProxy::Update(v12, a2);
    if ( v7 < 0 )
    {
      v8 = 481LL;
LABEL_11:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (__int64)"clientcore\\windows\\dwm\\udwm\\visual.cpp",
        (const char *)(unsigned int)v7);
      v6 = v7;
      goto LABEL_12;
    }
  }
  if ( v4 )
    v9 = *(unsigned int *)(*((_QWORD *)v4 + 2) + 24LL);
  else
    v9 = 0LL;
  v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                        + 16LL)
                                                          + 408LL))(
         *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL),
         *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 24LL),
         v9);
  if ( v7 < 0 )
  {
    v8 = 485LL;
    goto LABEL_11;
  }
  if ( v4 )
    CBaseObject::Release(v4);
  return 0LL;
}
