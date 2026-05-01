/*
 * XREFs of ?UnregisterBeginEndListener@ObservableObjectArray@@UEAAJK@Z @ 0x1804BFE80
 * Callers:
 *     ?UnregisterBeginEndListener@SwitchItemFilteredCollection@@UEAAJK@Z @ 0x1804B6700 (-UnregisterBeginEndListener@SwitchItemFilteredCollection@@UEAAJK@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Unregister@CGITRegistrationList@@QEAAJK@Z @ 0x1800C940C (-Unregister@CGITRegistrationList@@QEAAJK@Z.c)
 */

__int64 __fastcall ObservableObjectArray::UnregisterBeginEndListener(RTL_SRWLOCK *this, int a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = CGITRegistrationList::Unregister(this + 12, a2);
  v3 = v2;
  if ( v2 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x29,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\observablearray.cpp",
      (const char *)(unsigned int)v2);
  return v3;
}
