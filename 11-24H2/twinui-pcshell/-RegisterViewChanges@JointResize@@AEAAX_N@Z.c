/*
 * XREFs of ?RegisterViewChanges@JointResize@@AEAAX_N@Z @ 0x1801C1308
 * Callers:
 *     ?OnArrangedWindowBorderEnter@JointResize@@AEAAJPEAUHWND__@@H@Z @ 0x1800ED3C0 (-OnArrangedWindowBorderEnter@JointResize@@AEAAJPEAUHWND__@@H@Z.c)
 *     ?OnArrangedWindowResizeStarted@JointResize@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@PEAUIArrangedWindowResizeStartedEventArgs@3456@@Z @ 0x18053A5F0 (-OnArrangedWindowResizeStarted@JointResize@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEv.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall JointResize::RegisterViewChanges(JointResize *this, char a2)
{
  _DWORD *v2; // rbx
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (_DWORD *)((char *)this + 464);
  if ( a2 )
  {
    if ( !*v2 )
      (*(void (__fastcall **)(_QWORD, unsigned __int64, _DWORD *))(**((_QWORD **)this + 17) + 96LL))(
        *((_QWORD *)this + 17),
        ((unsigned __int64)this + 96) & -(__int64)(this != 0LL),
        v2);
  }
  else if ( *v2 )
  {
    v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 17) + 104LL))(
           *((_QWORD *)this + 17),
           (unsigned int)*v2);
    if ( v3 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1D8,
        (int)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
        (const char *)(unsigned int)v3);
    else
      *v2 = 0;
  }
}
