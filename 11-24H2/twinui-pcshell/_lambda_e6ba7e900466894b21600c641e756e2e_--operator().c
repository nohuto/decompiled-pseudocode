/*
 * XREFs of _lambda_e6ba7e900466894b21600c641e756e2e_::operator() @ 0x1802AE59C
 * Callers:
 *     wil::details::functor_wrapper_void__lambda_e6ba7e900466894b21600c641e756e2e__&_::Run @ 0x1802AE580 (wil--details--functor_wrapper_void__lambda_e6ba7e900466894b21600c641e756e2e__-_--Run.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsActiveSessionCountLimited@@YA_NXZ @ 0x18004EAAC (-IsActiveSessionCountLimited@@YA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall lambda_e6ba7e900466894b21600c641e756e2e_::operator()(__int64 a1)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( IsActiveSessionCountLimited() )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)a1 + 72LL) + 56LL))(
           *(_QWORD *)(*(_QWORD *)a1 + 72LL),
           *(_QWORD *)(*(_QWORD *)a1 + 80LL));
    if ( v2 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x39,
        (int)"pcshell\\twinui\\lighting\\lib\\assistantlightmanager.cpp",
        (const char *)(unsigned int)v2);
    v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)a1 + 72LL) + 88LL))(
           *(_QWORD *)(*(_QWORD *)a1 + 72LL),
           *(_QWORD *)(*(_QWORD *)a1 + 88LL));
    if ( v3 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3A,
        (int)"pcshell\\twinui\\lighting\\lib\\assistantlightmanager.cpp",
        (const char *)(unsigned int)v3);
    v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)a1 + 72LL) + 72LL))(
           *(_QWORD *)(*(_QWORD *)a1 + 72LL),
           *(_QWORD *)(*(_QWORD *)a1 + 96LL));
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3B,
        (int)"pcshell\\twinui\\lighting\\lib\\assistantlightmanager.cpp",
        (const char *)(unsigned int)v4);
    v5 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)a1 + 72LL) + 144LL))(*(_QWORD *)(*(_QWORD *)a1 + 72LL));
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3C,
        (int)"pcshell\\twinui\\lighting\\lib\\assistantlightmanager.cpp",
        (const char *)(unsigned int)v5);
  }
}
