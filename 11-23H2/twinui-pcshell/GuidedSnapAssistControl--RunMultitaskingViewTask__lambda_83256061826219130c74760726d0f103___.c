/*
 * XREFs of GuidedSnapAssistControl::RunMultitaskingViewTask__lambda_83256061826219130c74760726d0f103___ @ 0x180687648
 * Callers:
 *     ?CancelIfActive@GuidedSnapAssistControl@@QEAAXXZ @ 0x1806880E8 (-CancelIfActive@GuidedSnapAssistControl@@QEAAXXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     MakeMultitaskingViewTaskCallback__lambda_83256061826219130c74760726d0f103___ @ 0x180687318 (MakeMultitaskingViewTaskCallback__lambda_83256061826219130c74760726d0f103___.c)
 */

void __fastcall GuidedSnapAssistControl::RunMultitaskingViewTask__lambda_83256061826219130c74760726d0f103___(
        __int64 a1,
        _QWORD *a2)
{
  int MultitaskingViewTaskCallback__lambda_83256061826219130c74760726d0f103; // eax
  int v4; // eax
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v7; // [rsp+48h] [rbp+20h] BYREF

  v7 = 0LL;
  MultitaskingViewTaskCallback__lambda_83256061826219130c74760726d0f103 = MakeMultitaskingViewTaskCallback__lambda_83256061826219130c74760726d0f103_(
                                                                            &v7,
                                                                            a2);
  if ( MultitaskingViewTaskCallback__lambda_83256061826219130c74760726d0f103 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xE2,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\guidedsnapassistcontrol.cpp",
      (const char *)(unsigned int)MultitaskingViewTaskCallback__lambda_83256061826219130c74760726d0f103,
      v5);
  v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 16) + 24LL))(
         *(_QWORD *)(a1 + 16),
         v7,
         0LL);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xE3,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\guidedsnapassistcontrol.cpp",
      (const char *)(unsigned int)v4,
      v5);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v7);
}
