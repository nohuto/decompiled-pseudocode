/*
 * XREFs of ?AddView@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180323D84
 * Callers:
 *     ?ControlGainedHelper@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIPresentationRequestedArgs@@0@Z @ 0x180324270 (-ControlGainedHelper@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@P.c)
 *     ?HandleRecoveryForView@FullScreenPositioner@@UEAAJPEAUIApplicationView@@@Z @ 0x180324B30 (-HandleRecoveryForView@FullScreenPositioner@@UEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEBUtagPOINT@@@?$vector@UtagPOINT@@V?$allocator@UtagPOINT@@@std@@@std@@AEAAPEAUtagPOINT@@QEAU2@AEBU2@@Z @ 0x18001CDFC (--$_Emplace_reallocate@AEBUtagPOINT@@@-$vector@UtagPOINT@@V-$allocator@UtagPOINT@@@std@@@std@@AE.c)
 */

__int64 __fastcall FullScreenPositioner::AddView(FullScreenPositioner *this, struct IApplicationView *a2)
{
  _BYTE *v3; // rdx
  const char *v4; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IApplicationView *v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  v3 = (_BYTE *)*((_QWORD *)this + 30);
  if ( v3 == *((_BYTE **)this + 31) )
  {
    try
    {
      std::vector<tagPOINT>::_Emplace_reallocate<tagPOINT const &>((_QWORD *)this + 29, v3, &v7);
    }
    catch ( ... )
    {
      return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                             retaddr,
                             (void *)0x4EC,
                             (int)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
                             v4);
    }
  }
  else
  {
    *(_QWORD *)v3 = a2;
    *((_QWORD *)this + 30) += 8LL;
  }
  return 0LL;
}
