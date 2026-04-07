/*
 * XREFs of ?AddInstructionsForBackgroundInNewVirtualScreen@CDisplayAnimatedVisual@@IEAAJXZ @ 0x180065840
 * Callers:
 *     ?Start@CDisplayAnimatedVisual@@QEAAJXZ @ 0x18009A0A4 (-Start@CDisplayAnimatedVisual@@QEAAJXZ.c)
 * Callees:
 *     ?CheckAnyPreference@CDesktopManager@@SA_NK@Z @ 0x180014F00 (-CheckAnyPreference@CDesktopManager@@SA_NK@Z.c)
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180021E28 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180024618 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetRect@CSolidRectangleInstruction@@QEAAXPEBV?$TMilRect_@MUD2D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18003450C (-SetRect@CSolidRectangleInstruction@@QEAAXPEBV-$TMilRect_@MUD2D_RECT_F@@UD2D_POINTANDSIZE_F@@UNo.c)
 *     ?Create@CSolidRectangleInstruction@@SAJPEAPEAV1@@Z @ 0x180066354 (-Create@CSolidRectangleInstruction@@SAJPEAPEAV1@@Z.c)
 *     ?SetSolidFill@CSolidRectangleInstruction@@QEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x180066440 (-SetSolidFill@CSolidRectangleInstruction@@QEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDisplayAnimatedVisual::AddInstructionsForBackgroundInNewVirtualScreen(CDisplayAnimatedVisual *this)
{
  char v2; // al
  int v3; // eax
  unsigned int v4; // ebx
  CSolidRectangleInstruction *v6; // rbx
  int v7; // edi
  __int64 v8; // rdx
  int v9; // ecx
  int v10; // edx
  int v11; // eax
  int v12; // r8d
  int v13; // eax
  int v14; // edx
  int v15; // eax
  _D3DCOLORVALUE v16; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+8h]
  CSolidRectangleInstruction *v18; // [rsp+48h] [rbp+18h] BYREF

  v2 = CDesktopManager::CheckAnyPreference(0x80u);
  v16.a = 1.0;
  v16.r = *(float *)((char *)flt_180105840 + (v2 != 0 ? 0x378 : 0)) / 255.0;
  v16.g = *(float *)((char *)flt_180105840 + (v2 != 0 ? 0x240 : 0)) / 255.0;
  v16.b = v16.r;
  v18 = 0LL;
  v3 = CSolidRectangleInstruction::Create(&v18);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v6 = v18;
    v7 = CSolidRectangleInstruction::SetSolidFill(v18, &v16);
    if ( v7 >= 0 )
    {
      v9 = *((_DWORD *)this + 62);
      v10 = *((_DWORD *)this + 64);
      v11 = *((_DWORD *)this + 63);
      v12 = *((_DWORD *)this + 65) - v11;
      v16.r = (float)v9;
      v16.g = (float)v11;
      v13 = 0;
      v14 = v10 - v9;
      if ( v14 >= 0 )
        v13 = v14;
      v16.b = (float)v13;
      v15 = 0;
      if ( v12 >= 0 )
        v15 = v12;
      v16.a = (float)v15;
      CSolidRectangleInstruction::SetRect((__int64)v6, &v16);
      v7 = CRenderDataVisual::AddInstruction(this, v6);
      if ( v7 >= 0 )
      {
        wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v18);
        return 0LL;
      }
      v8 = 409LL;
    }
    else
    {
      v8 = 397LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\displayanimatedvisual.cpp",
      (const char *)(unsigned int)v7,
      SLODWORD(v16.r));
    if ( v6 )
      CBaseObject::Release(v6);
    return (unsigned int)v7;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x18C,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\displayanimatedvisual.cpp",
      (const char *)(unsigned int)v3,
      SLODWORD(v16.r));
    if ( v18 )
      CBaseObject::Release(v18);
    return v4;
  }
}
