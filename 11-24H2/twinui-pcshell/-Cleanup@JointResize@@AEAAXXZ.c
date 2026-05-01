/*
 * XREFs of ?Cleanup@JointResize@@AEAAXXZ @ 0x18017C390
 * Callers:
 *     ?OnArrangedWindowBorderExit@JointResize@@AEAAXXZ @ 0x18017C2A8 (-OnArrangedWindowBorderExit@JointResize@@AEAAXXZ.c)
 *     wil::details::ScopeExitFn__lambda_a7d4e9b7e97af61c3367f340c016b266___::_ScopeExitFn__lambda_a7d4e9b7e97af61c3367f340c016b266___ @ 0x180539080 (wil--details--ScopeExitFn__lambda_a7d4e9b7e97af61c3367f340c016b266___--_ScopeExitFn__lambda_a7d4.c)
 *     ?OnArrangedWindowJointResizeCompleted@JointResize@@AEAAJPEBUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@UArrangedWindowJointResizeCompletedEventArgs@3456@@Z @ 0x18053A500 (-OnArrangedWindowJointResizeCompleted@JointResize@@AEAAJPEBUIWindowManagementEvents2@WindowManag.c)
 *     ?OnArrangedWindowResizeStarted@JointResize@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@PEAUIArrangedWindowResizeStartedEventArgs@3456@@Z @ 0x18053A5F0 (-OnArrangedWindowResizeStarted@JointResize@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEv.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Destroy_range@V?$allocator@USecondaryViewInfo@JointResize@@@std@@@std@@YAXPEAUSecondaryViewInfo@JointResize@@QEAU12@AEAV?$allocator@USecondaryViewInfo@JointResize@@@0@@Z @ 0x18029F17C (--$_Destroy_range@V-$allocator@USecondaryViewInfo@JointResize@@@std@@@std@@YAXPEAUSecondaryViewI.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall JointResize::Cleanup(JointResize *this)
{
  void *v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  JointResize::SecondaryViewInfo *v5; // rcx
  int v6; // eax
  int v7; // eax
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
    v7 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)ppvOut + 32LL))(ppvOut);
    if ( v7 >= 0 )
      *((_DWORD *)this + 115) = 0;
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1C7,
        (int)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
        (const char *)(unsigned int)v7);
  }
  v2 = ppvOut;
  if ( ppvOut )
  {
    ppvOut = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v2 + 16LL))(v2);
  }
  if ( *((_DWORD *)this + 116) )
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 17) + 104LL))(*((_QWORD *)this + 17));
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1D8,
        (int)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
        (const char *)(unsigned int)v6);
    else
      *((_DWORD *)this + 116) = 0;
  }
  *((_WORD *)this + 140) = 0;
  v3 = *((_QWORD *)this + 25);
  if ( v3 )
  {
    *((_QWORD *)this + 25) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v4 = *((_QWORD *)this + 26);
  if ( v4 )
  {
    *((_QWORD *)this + 26) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  *((_QWORD *)this + 36) = 0LL;
  v5 = (JointResize::SecondaryViewInfo *)*((_QWORD *)this + 27);
  if ( v5 != *((JointResize::SecondaryViewInfo **)this + 28) )
  {
    std::_Destroy_range<std::allocator<JointResize::SecondaryViewInfo>>(v5);
    *((_QWORD *)this + 28) = *((_QWORD *)this + 27);
  }
  *((_DWORD *)this + 80) = -2;
  *((_BYTE *)this + 456) = 0;
}
