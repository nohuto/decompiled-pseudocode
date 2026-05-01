/*
 * XREFs of ?SendConsolidated@CTaskWindow@@UEAAXW4WINDOW_CONSOLIDATED_FLAGS@@@Z @ 0x1803074D0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     WPP_SF_qd @ 0x180035750 (WPP_SF_qd.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CTaskWindow::SendConsolidated(__int64 a1, int a2)
{
  __int64 v4; // rax
  int v5; // eax
  __int64 v6; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( *(_DWORD *)(a1 + 120) )
  {
    if ( (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 1) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
    {
      v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1);
      WPP_SF_qd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
        0xBu,
        &WPP_b9ee9f95e0a33febf9f86956a7a64e04_Traceguids,
        v6,
        a2);
    }
    *(_BYTE *)(a1 + 92) = 1;
    *(_DWORD *)(a1 + 96) = a2;
  }
  else
  {
    if ( (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 1) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
    {
      v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1);
      WPP_SF_qd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
        0xAu,
        &WPP_b9ee9f95e0a33febf9f86956a7a64e04_Traceguids,
        v4,
        a2);
    }
    v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 48) + 472LL))(
           *(_QWORD *)(a1 + 48),
           (a2 & 1u) + 1);
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x2FA,
        (int)"pcshell\\twinui\\appmanager\\lib\\taskwindow.cpp",
        (const char *)(unsigned int)v5);
  }
}
