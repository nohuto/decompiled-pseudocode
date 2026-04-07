/*
 * XREFs of ?ReleaseAcrylicSheetAndOwnerIfNotUsed@CWindowList@@QEAAJ_N@Z @ 0x18010C02C
 * Callers:
 *     ??1CWindowData@@QEAA@XZ @ 0x180010A48 (--1CWindowData@@QEAA@XZ.c)
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002EB90 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180049060 (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?OnWindowArrangementEnd@CWindowList@@AEAAJXZ @ 0x180065DC4 (-OnWindowArrangementEnd@CWindowList@@AEAAJXZ.c)
 *     ?StopAnimations@CAcrylicSheet@@QEAAJXZ @ 0x1800A3698 (-StopAnimations@CAcrylicSheet@@QEAAJXZ.c)
 *     std::_Func_impl_no_alloc__lambda_a1bd6a3f4010080cf46ed714b573822e__void_::_Do_call @ 0x1800A3C40 (std--_Func_impl_no_alloc__lambda_a1bd6a3f4010080cf46ed714b573822e__void_--_Do_call.c)
 *     ?ApplyWindowResizeStateTransition@CWindowList@@AEAAJXZ @ 0x180108EAC (-ApplyWindowResizeStateTransition@CWindowList@@AEAAJXZ.c)
 *     ?IsInWindowMoveChange@CWindowList@@UEAAJPEAUIDwmWindow@@_NW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z @ 0x18010A900 (-IsInWindowMoveChange@CWindowList@@UEAAJPEAUIDwmWindow@@_NW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z.c)
 * Callees:
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x1800182E0 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@VCImage@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800A3D0C (-reset@-$com_ptr_t@VCImage@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 */

__int64 __fastcall CWindowList::ReleaseAcrylicSheetAndOwnerIfNotUsed(CWindowList *this, char a2)
{
  CBaseObject **v3; // rdi
  struct CVisual *v4; // rdx
  int v5; // eax
  unsigned int v6; // esi
  CBaseObject **v8; // rcx
  __int64 v9; // rax
  CBaseObject **v10; // rsi
  struct CVisual *v11; // rdx
  char v12; // al
  int v13; // eax
  unsigned int v14; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
  {
    v3 = (CBaseObject **)((char *)this + 544);
    v4 = (struct CVisual *)*((_QWORD *)this + 68);
    if ( v4 )
    {
      v5 = VisualCollection::Remove((VisualCollection *)(*((_QWORD *)v4 + 3) + 32LL), v4);
      v6 = v5;
      if ( v5 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xBDD,
          (__int64)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
          (const char *)(unsigned int)v5);
        return v6;
      }
    }
    v8 = v3;
  }
  else
  {
    v9 = *((_QWORD *)this + 88);
    if ( !v9 )
      return 0LL;
    v10 = (CBaseObject **)((char *)this + 544);
    v11 = (struct CVisual *)*((_QWORD *)this + 68);
    if ( !v11 )
      return 0LL;
    v12 = *(_BYTE *)(v9 + 677);
    if ( (v12 & 0x40) != 0 || (v12 & 0x10) != 0 || (v12 & 0x20) != 0 || *((_QWORD *)v11 + 69) || *((_QWORD *)v11 + 67) )
      return 0LL;
    v13 = VisualCollection::Remove((VisualCollection *)(*((_QWORD *)v11 + 3) + 32LL), v11);
    v14 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xBED,
        (__int64)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
        (const char *)(unsigned int)v13);
      return v14;
    }
    v8 = v10;
  }
  wil::com_ptr_t<CImage,wil::err_exception_policy>::reset(v8);
  *((_QWORD *)this + 88) = 0LL;
  return 0LL;
}
