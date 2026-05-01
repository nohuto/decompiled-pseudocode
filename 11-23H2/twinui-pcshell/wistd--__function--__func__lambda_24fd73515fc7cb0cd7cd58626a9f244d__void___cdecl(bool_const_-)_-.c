/*
 * XREFs of wistd::__function::__func__lambda_24fd73515fc7cb0cd7cd58626a9f244d__void___cdecl(bool_const_&)_::operator() @ 0x180208E90
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801CF0C0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wistd::__function::__func__lambda_24fd73515fc7cb0cd7cd58626a9f244d__void___cdecl_bool_const____::operator()(
        __int64 a1,
        _BYTE *a2)
{
  __int64 v2; // rcx
  __int64 result; // rax
  int v4; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v6; // [rsp+30h] [rbp+8h] BYREF

  LOBYTE(a2) = *a2;
  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 584LL);
  if ( !v2 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x13A9,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)retaddr);
  result = (*(__int64 (__fastcall **)(_QWORD, _BYTE *, char *, wil::details::in1diag3 *))(**(_QWORD **)(v2 + 128) + 120LL))(
             *(_QWORD *)(v2 + 128),
             a2,
             &v6,
             retaddr);
  if ( (int)result < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xB02,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)result,
      v4);
  return result;
}
