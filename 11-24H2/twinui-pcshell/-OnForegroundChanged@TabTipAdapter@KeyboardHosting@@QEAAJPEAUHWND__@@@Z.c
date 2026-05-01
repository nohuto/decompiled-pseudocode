/*
 * XREFs of ?OnForegroundChanged@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHWND__@@@Z @ 0x1801C9B34
 * Callers:
 *     ?OnForegroundChanged@TouchKeyboardExperienceManager@@AEAAXPEAUHWND__@@@Z @ 0x1801C9AE8 (-OnForegroundChanged@TouchKeyboardExperienceManager@@AEAAXPEAUHWND__@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::OnForegroundChanged(KeyboardHosting::TabTipAdapter *this, HWND a2)
{
  __int64 v2; // rcx
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 16);
  v7 = 0;
  v3 = (*(__int64 (__fastcall **)(__int64, HWND, int *))(*(_QWORD *)v2 + 168LL))(v2, a2, &v7);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xD01,
    (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)(unsigned int)v3);
  return v4;
}
