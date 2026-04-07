/*
 * XREFs of ?AddInstructionsForBackgroundInNewVirtualScreen@CDisplayAnimatedVisual@@IEAAJXZ @ 0x180018D6C
 * Callers:
 *     ?Start@CDisplayAnimatedVisual@@QEAAJXZ @ 0x180018BD8 (-Start@CDisplayAnimatedVisual@@QEAAJXZ.c)
 * Callees:
 *     ?Create@CSolidRectangleInstruction@@SAJPEAPEAV1@@Z @ 0x18001985C (-Create@CSolidRectangleInstruction@@SAJPEAPEAV1@@Z.c)
 *     ?CheckAnyPreference@CDesktopManager@@SA_NK@Z @ 0x180025CB4 (-CheckAnyPreference@CDesktopManager@@SA_NK@Z.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180045B50 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18009E810 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDisplayAnimatedVisual::AddInstructionsForBackgroundInNewVirtualScreen(CDisplayAnimatedVisual *this)
{
  bool v2; // al
  unsigned int v3; // ecx
  int v4; // eax
  unsigned int v5; // ebx
  CBaseObject *v6; // rbx
  int v7; // ecx
  int v8; // edx
  int v9; // eax
  int v10; // r8d
  int v11; // eax
  int v12; // edx
  int v13; // eax
  int v14; // eax
  int v15; // edi
  CBaseObject *v17; // [rsp+20h] [rbp-28h] BYREF
  float v18[8]; // [rsp+28h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v2 = CDesktopManager::CheckAnyPreference(0x80u);
  v3 = 0;
  if ( v2 )
    v3 = 14586078;
  v18[3] = FLOAT_1_0;
  v18[0] = GammaLUT_sRGB_to_scRGB[(unsigned __int8)v3] / 255.0;
  v18[1] = GammaLUT_sRGB_to_scRGB[(unsigned __int64)(unsigned __int16)v3 >> 8] / 255.0;
  v18[2] = GammaLUT_sRGB_to_scRGB[(unsigned __int64)v3 >> 16] / 255.0;
  v17 = 0LL;
  v4 = CSolidRectangleInstruction::Create(&v17);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x18C,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\displayanimatedvisual.cpp",
      (const char *)(unsigned int)v4,
      (int)v17);
  }
  else
  {
    v6 = v17;
    *((_OWORD *)v17 + 1) = *(_OWORD *)v18;
    v7 = *((_DWORD *)this + 74);
    v8 = *((_DWORD *)this + 76);
    v9 = *((_DWORD *)this + 75);
    v10 = *((_DWORD *)this + 77) - v9;
    v18[0] = (float)v7;
    v18[1] = (float)v9;
    v11 = 0;
    v12 = v8 - v7;
    if ( v12 >= 0 )
      v11 = v12;
    v18[2] = (float)v11;
    v13 = 0;
    if ( v10 >= 0 )
      v13 = v10;
    v18[3] = (float)v13;
    *((_OWORD *)v6 + 2) = *(_OWORD *)v18;
    v14 = CRenderDataVisual::AddInstruction(this, v6);
    v15 = v14;
    if ( v14 >= 0 )
    {
      CBaseObject::Release(v6);
      return 0LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x199,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\displayanimatedvisual.cpp",
      (const char *)(unsigned int)v14,
      (int)v17);
    v5 = v15;
  }
  wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v17);
  return v5;
}
