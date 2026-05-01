/*
 * XREFs of ?OnAllowInputPanelMdmPolicyUpdated@TabTipAdapter@KeyboardHosting@@QEAAJ_N@Z @ 0x180203304
 * Callers:
 *     ?UpdateAllowInputPanelMdmPolicy@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x180203280 (-UpdateAllowInputPanelMdmPolicy@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ProcessChangeRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4ShellRequestType@Text@Shell@Internal@Windows@@I@Z @ 0x18047F9D8 (-ProcessChangeRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4ShellRequestType@Text@Shell@Internal.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::OnAllowInputPanelMdmPolicyUpdated(
        KeyboardHosting::TabTipAdapter *this,
        __int64 a2)
{
  int v3; // ebx
  __int64 v4; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0;
  v3 = (*(__int64 (__fastcall **)(_QWORD, __int64, int *))(**((_QWORD **)this + 16) + 176LL))(
         *((_QWORD *)this + 16),
         a2,
         &v7);
  if ( v3 < 0 )
  {
    v4 = 3317LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v3);
    return (unsigned int)v3;
  }
  if ( v7 == 2 )
  {
    v3 = KeyboardHosting::TabTipAdapter::ProcessChangeRequest(this, 2LL, *((unsigned int *)this + 124));
    if ( v3 < 0 )
    {
      v4 = 3321LL;
      goto LABEL_3;
    }
  }
  return 0LL;
}
