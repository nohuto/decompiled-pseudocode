/*
 * XREFs of ?CreateHolographicSlate@CTopLevelWindow@@AEAAJXZ @ 0x1800DABC8
 * Callers:
 *     ?UpdateHolographicSlate@CTopLevelWindow@@AEAAJXZ @ 0x18002CC48 (-UpdateHolographicSlate@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z @ 0x18001DE40 (-RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z.c)
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180021E28 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x1800263E0 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateSlate@CHolographicSlate@@SAJQEAUHWND__@@PEAVCVisual@@IIPEAPEAV1@@Z @ 0x1800C46A8 (-CreateSlate@CHolographicSlate@@SAJQEAUHWND__@@PEAVCVisual@@IIPEAPEAV1@@Z.c)
 *     ?AssertW@@YAXPEBG000K@Z @ 0x1800F4BA0 (-AssertW@@YAXPEBG000K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CTopLevelWindow::CreateHolographicSlate(CTopLevelWindow *this)
{
  struct CHolographicSlate **v2; // rsi
  struct CVisual *v3; // rdx
  CBaseObject *v4; // rdi
  CContainerVisual *v5; // rcx
  __int64 v6; // rcx
  signed int v7; // r9d
  signed int v8; // r8d
  int Slate; // eax
  unsigned int v10; // esi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  CBaseObject *v13; // [rsp+40h] [rbp+8h] BYREF

  v2 = (struct CHolographicSlate **)((char *)this + 768);
  if ( !*((_QWORD *)this + 96) )
  {
    v3 = (struct CVisual *)*((_QWORD *)this + 60);
    if ( v3 )
    {
      v4 = (CBaseObject *)*((_QWORD *)v3 + 3);
      v13 = v4;
      if ( v4 )
      {
        CMILRefCountBase::AddRef(v4);
        CContainerVisual::RemoveChild(v5, *((struct CVisual **)this + 60));
        v3 = (struct CVisual *)*((_QWORD *)this + 60);
      }
      v6 = *((_QWORD *)this + 89);
      v7 = *(_DWORD *)(v6 + 248) - *(_DWORD *)(v6 + 240);
      if ( v7 < 0 )
        v7 = 0;
      v8 = *(_DWORD *)(v6 + 244) - *(_DWORD *)(v6 + 236);
      if ( v8 < 0 )
        v8 = 0;
      Slate = CHolographicSlate::CreateSlate(*(HWND *)(v6 + 40), v3, v8, v7, v2);
      v10 = Slate;
      if ( Slate < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1D3,
          (__int64)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
          (const char *)(unsigned int)Slate);
        wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v13);
        return v10;
      }
      if ( *((_QWORD *)this + 97) )
        AssertW(
          0LL,
          L"m_pHolographicClientAreaParent == nullptr",
          L"CTopLevelWindow::CreateHolographicSlate",
          L"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
          0x1D5u);
      v13 = 0LL;
      *((_QWORD *)this + 97) = v4;
      wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v13);
    }
  }
  return 0LL;
}
