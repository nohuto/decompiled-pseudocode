/*
 * XREFs of ?OnArrangedWindowBorderExit@JointResize@@AEAAXXZ @ 0x18017C2A8
 * Callers:
 *     ?OnArrangedWindowBorderEnter@JointResize@@AEAAJPEAUHWND__@@H@Z @ 0x1800ED3C0 (-OnArrangedWindowBorderEnter@JointResize@@AEAAJPEAUHWND__@@H@Z.c)
 *     wil::details::ScopeExitFn__lambda_6f49d1602fddbb99838411981311ff07___::_ScopeExitFn__lambda_6f49d1602fddbb99838411981311ff07___ @ 0x18017C224 (wil--details--ScopeExitFn__lambda_6f49d1602fddbb99838411981311ff07___--_ScopeExitFn__lambda_6f49.c)
 *     ?OnHitTestPartNotifyEvent@JointResize@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@AEBUHitTestPartNotifyEventArgs@3456@@Z @ 0x18017C250 (-OnHitTestPartNotifyEvent@JointResize@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@.c)
 *     ?OnApplicationViewChanged@JointResize@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18053A3A0 (-OnApplicationViewChanged@JointResize@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEA.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Cleanup@JointResize@@AEAAXXZ @ 0x18017C390 (-Cleanup@JointResize@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall JointResize::OnArrangedWindowBorderExit(JointResize *this)
{
  void *v2; // rcx
  __int64 v3; // rcx
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *ppvOut; // [rsp+30h] [rbp+8h] BYREF

  ppvOut = 0LL;
  if ( IUnknown_QueryService(
         *((IUnknown **)this + 2),
         (const GUID *const)&SID_ImmersiveRawInputProvider,
         &GUID_c1235996_b084_4af2_8663_28f19352097e,
         &ppvOut) >= 0
    && *((_DWORD *)this + 115) )
  {
    v4 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)ppvOut + 32LL))(ppvOut);
    if ( v4 >= 0 )
      *((_DWORD *)this + 115) = 0;
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1C7,
        (int)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
        (const char *)(unsigned int)v4);
  }
  v2 = ppvOut;
  if ( ppvOut )
  {
    ppvOut = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v2 + 16LL))(v2);
  }
  if ( !*((_BYTE *)this + 280) )
  {
    v3 = *((_QWORD *)this + 24);
    if ( v3 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 32LL))(v3);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 24);
    }
    JointResize::Cleanup(this);
  }
}
