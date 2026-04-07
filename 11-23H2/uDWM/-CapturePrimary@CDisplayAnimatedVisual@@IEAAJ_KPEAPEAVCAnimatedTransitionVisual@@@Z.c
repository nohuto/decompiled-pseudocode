/*
 * XREFs of ?CapturePrimary@CDisplayAnimatedVisual@@IEAAJ_KPEAPEAVCAnimatedTransitionVisual@@@Z @ 0x1800B75DC
 * Callers:
 *     ?CapturePrimaryAndExistingExtended@CDisplayAnimatedVisual@@IEAAJPEAPEAVCAnimatedTransitionVisual@@PEBVCDWMDisplay@@AEAV?$vector@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x1800B77D4 (-CapturePrimaryAndExistingExtended@CDisplayAnimatedVisual@@IEAAJPEAPEAVCAnimatedTransitionVisual.c)
 * Callees:
 *     ?Release@CDWMDisplay@@QEBAKXZ @ 0x1800289EC (-Release@CDWMDisplay@@QEBAKXZ.c)
 *     ?GetPrimaryDisplay@CDWMDisplaySet@@QEBAJPEAPEBVCDWMDisplay@@@Z @ 0x18005B788 (-GetPrimaryDisplay@CDWMDisplaySet@@QEBAJPEAPEBVCDWMDisplay@@@Z.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@$$CBVCDWMDisplay@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800B6F44 (--1-$com_ptr_t@$$CBVCDWMDisplay@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CaptureAndAddVisual@CDisplayAnimatedVisual@@IEAAJ_KAEBUtagRECT@@1PEAPEAVCAnimatedTransitionVisual@@@Z @ 0x1800B7168 (-CaptureAndAddVisual@CDisplayAnimatedVisual@@IEAAJ_KAEBUtagRECT@@1PEAPEAVCAnimatedTransitionVisu.c)
 *     ?ClipIntersection@CDisplayAnimatedVisual@@KA?AUtagRECT@@AEBUD2D_RECT_U@@0AEBU2@W4DXGI_MODE_ROTATION@@@Z @ 0x1800B7890 (-ClipIntersection@CDisplayAnimatedVisual@@KA-AUtagRECT@@AEBUD2D_RECT_U@@0AEBU2@W4DXGI_MODE_ROTAT.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CDisplayAnimatedVisual::CapturePrimary(
        CDWMDisplaySet **this,
        __int64 a2,
        struct CAnimatedTransitionVisual **a3)
{
  int PrimaryDisplay; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  CDWMDisplay *v9; // rbx
  enum DXGI_MODE_ROTATION v10; // ecx
  CDWMDisplay *v11; // rdi
  enum DXGI_MODE_ROTATION v12; // r8d
  int v13; // eax
  int v14; // esi
  CDWMDisplay *v16; // [rsp+30h] [rbp-29h] BYREF
  CDWMDisplay *v17; // [rsp+38h] [rbp-21h] BYREF
  struct tagRECT v18; // [rsp+40h] [rbp-19h] BYREF
  D2D_RECT_U v19; // [rsp+50h] [rbp-9h] BYREF
  struct D2D_RECT_U v20; // [rsp+60h] [rbp+7h] BYREF
  struct tagRECT v21; // [rsp+70h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  *a3 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  PrimaryDisplay = CDWMDisplaySet::GetPrimaryDisplay(this[40], &v17);
  v7 = PrimaryDisplay;
  if ( PrimaryDisplay < 0 )
  {
    v8 = 833LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"clientcore\\windows\\dwm\\udwm\\displayanimatedvisual.cpp",
      (const char *)(unsigned int)PrimaryDisplay);
LABEL_8:
    wil::com_ptr_t<CDWMDisplay const,wil::err_returncode_policy>::~com_ptr_t<CDWMDisplay const,wil::err_returncode_policy>(&v17);
    wil::com_ptr_t<CDWMDisplay const,wil::err_returncode_policy>::~com_ptr_t<CDWMDisplay const,wil::err_returncode_policy>(&v16);
    return v7;
  }
  v16 = 0LL;
  PrimaryDisplay = CDWMDisplaySet::GetPrimaryDisplay(
                     *((CDWMDisplaySet **)CDesktopManager::s_pDesktopManagerInstance + 18),
                     &v16);
  v7 = PrimaryDisplay;
  if ( PrimaryDisplay < 0 )
  {
    v8 = 836LL;
    goto LABEL_5;
  }
  v9 = v17;
  v10 = *((_DWORD *)v17 + 58);
  v20 = *(struct D2D_RECT_U *)((char *)v17 + 40);
  v11 = v16;
  v19 = *(D2D_RECT_U *)((char *)v16 + 40);
  v21 = *CDisplayAnimatedVisual::ClipIntersection(&v18, &v19, &v20, (const struct tagRECT *)((char *)v17 + 56), v10);
  v12 = *((_DWORD *)v11 + 58);
  v19 = *(D2D_RECT_U *)((char *)v11 + 40);
  v20 = *(struct D2D_RECT_U *)((char *)v9 + 40);
  v19 = (D2D_RECT_U)*CDisplayAnimatedVisual::ClipIntersection(
                       &v18,
                       &v20,
                       &v19,
                       (const struct tagRECT *)((char *)v11 + 56),
                       v12);
  v13 = CDisplayAnimatedVisual::CaptureAndAddVisual(
          (CDisplayAnimatedVisual *)this,
          a2,
          &v21,
          (const struct tagRECT *)&v19,
          a3);
  v14 = v13;
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x356,
      (__int64)"clientcore\\windows\\dwm\\udwm\\displayanimatedvisual.cpp",
      (const char *)(unsigned int)v13);
    v7 = v14;
    goto LABEL_8;
  }
  CDWMDisplay::Release(v9);
  CDWMDisplay::Release(v11);
  return 0LL;
}
