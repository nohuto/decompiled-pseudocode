/*
 * XREFs of ?RegisterRawInput@JointResize@@AEAAX_N@Z @ 0x18018D254
 * Callers:
 *     ?OnArrangedWindowBorderEnter@JointResize@@AEAAJPEAUHWND__@@H@Z @ 0x1800ED3C0 (-OnArrangedWindowBorderEnter@JointResize@@AEAAJPEAUHWND__@@H@Z.c)
 *     ?OnArrangedWindowResizeStarted@JointResize@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@PEAUIArrangedWindowResizeStartedEventArgs@3456@@Z @ 0x18053A5F0 (-OnArrangedWindowResizeStarted@JointResize@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEv.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall JointResize::RegisterRawInput(JointResize *this, char a2)
{
  int v4; // edx
  void *v5; // rcx
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  void *v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = 0LL;
  if ( IUnknown_QueryService(
         *((IUnknown **)this + 2),
         (const GUID *const)&SID_ImmersiveRawInputProvider,
         &GUID_c1235996_b084_4af2_8663_28f19352097e,
         &v8) >= 0 )
  {
    v4 = *((_DWORD *)this + 115);
    if ( a2 )
    {
      if ( !v4 )
        (*(void (__fastcall **)(void *, JointResize *, __int64, char *))(*(_QWORD *)v8 + 24LL))(
          v8,
          this,
          2LL,
          (char *)this + 460);
    }
    else if ( v4 )
    {
      v6 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v8 + 32LL))(v8);
      if ( v6 >= 0 )
        *((_DWORD *)this + 115) = 0;
      else
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1C7,
          (int)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
          (const char *)(unsigned int)v6);
    }
  }
  v5 = v8;
  if ( v8 )
  {
    v8 = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v5 + 16LL))(v5);
  }
}
