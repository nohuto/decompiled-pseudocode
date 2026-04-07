/*
 * XREFs of ?ReleaseAcrylicSheetAndOwnerIfNotUsed@CWindowList@@QEAAJ_N@Z @ 0x180069148
 * Callers:
 *     ?StopAnimations@CAcrylicSheet@@QEAAJXZ @ 0x1800690A0 (-StopAnimations@CAcrylicSheet@@QEAAJXZ.c)
 *     ?OnWindowDataDestroyed@CWindowList@@QEAAXPEAVCWindowData@@@Z @ 0x18009052C (-OnWindowDataDestroyed@CWindowList@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800929E0 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     std::_Func_impl_no_alloc__lambda_fe545bda8eea4d2e77db634168ef197a__void_::_Do_call @ 0x1800A2500 (std--_Func_impl_no_alloc__lambda_fe545bda8eea4d2e77db634168ef197a__void_--_Do_call.c)
 *     ?ApplyWindowResizeStateTransition@CWindowList@@AEAAJXZ @ 0x1800EE11C (-ApplyWindowResizeStateTransition@CWindowList@@AEAAJXZ.c)
 *     ?IsInWindowMoveChange@CWindowList@@UEAAJPEAUIDwmWindow@@_NW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z @ 0x1800F0910 (-IsInWindowMoveChange@CWindowList@@UEAAJPEAUIDwmWindow@@_NW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z.c)
 *     ?OnWindowArrangementEnd@CWindowList@@AEAAJXZ @ 0x1800F1764 (-OnWindowArrangementEnd@CWindowList@@AEAAJXZ.c)
 * Callees:
 *     ?RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z @ 0x18001DE40 (-RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z.c)
 *     ?reset@?$com_ptr_t@VCSolidRectangleInstruction@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18004BB08 (-reset@-$com_ptr_t@VCSolidRectangleInstruction@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsAnimationActive@CAcrylicSheet@@QEAA_NXZ @ 0x1800A2228 (-IsAnimationActive@CAcrylicSheet@@QEAA_NXZ.c)
 */

__int64 __fastcall CWindowList::ReleaseAcrylicSheetAndOwnerIfNotUsed(CWindowList *this, char a2)
{
  CBaseObject **v3; // rdi
  CContainerVisual **v4; // rcx
  int v5; // eax
  unsigned int v6; // esi
  CBaseObject **v8; // rcx
  __int64 v9; // rax
  CBaseObject **v10; // rsi
  CAcrylicSheet *v11; // rcx
  char v12; // al
  CContainerVisual **v13; // rcx
  int v14; // eax
  unsigned int v15; // edi
  int v16; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
  {
    v3 = (CBaseObject **)((char *)this + 536);
    v4 = (CContainerVisual **)*((_QWORD *)this + 67);
    if ( v4 )
    {
      v5 = CContainerVisual::RemoveChild(v4[3], (struct CVisual *)v4);
      v6 = v5;
      if ( v5 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xD51,
          (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
          (const char *)(unsigned int)v5,
          v16);
        return v6;
      }
    }
    v8 = v3;
  }
  else
  {
    v9 = *((_QWORD *)this + 87);
    if ( !v9 )
      return 0LL;
    v10 = (CBaseObject **)((char *)this + 536);
    v11 = (CAcrylicSheet *)*((_QWORD *)this + 67);
    if ( !v11 )
      return 0LL;
    v12 = *(_BYTE *)(v9 + 741);
    if ( (v12 & 0x40) != 0 || (v12 & 0x10) != 0 || (v12 & 0x20) != 0 || CAcrylicSheet::IsAnimationActive(v11) )
      return 0LL;
    v14 = CContainerVisual::RemoveChild(v13[3], (struct CVisual *)v13);
    v15 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD61,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
        (const char *)(unsigned int)v14,
        v16);
      return v15;
    }
    v8 = v10;
  }
  wil::com_ptr_t<CSolidRectangleInstruction,wil::err_returncode_policy>::reset(v8);
  *((_QWORD *)this + 87) = 0LL;
  return 0LL;
}
