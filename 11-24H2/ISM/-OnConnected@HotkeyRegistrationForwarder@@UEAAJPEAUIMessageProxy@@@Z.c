/*
 * XREFs of ?OnConnected@HotkeyRegistrationForwarder@@UEAAJPEAUIMessageProxy@@@Z @ 0x180106550
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091C24 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall HotkeyRegistrationForwarder::OnConnected(
        HotkeyRegistrationForwarder *this,
        struct IMessageProxy *a2,
        __int64 a3)
{
  __int64 *v3; // rsi
  __int64 *i; // rbx
  __int64 v6; // rcx
  __int64 v7; // xmm0_8
  int v8; // eax
  int v10[2]; // [rsp+20h] [rbp-18h] BYREF
  int v11; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = (__int64 *)*((_QWORD *)this + 3);
  for ( i = (__int64 *)*((_QWORD *)this + 2); i != v3; i = (__int64 *)((char *)i + 12) )
  {
    LOBYTE(a3) = 1;
    v6 = *((_QWORD *)this + 6);
    v7 = *i;
    v11 = *((_DWORD *)i + 2);
    *(_QWORD *)v10 = v7;
    v8 = (*(__int64 (__fastcall **)(__int64, int *, __int64))(*(_QWORD *)v6 + 488LL))(v6, v10, a3);
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x73,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\hotkeyregistrationforwarder\\hotkeyregistrationforwarder.cpp",
        (const char *)(unsigned int)v8);
  }
  return 0LL;
}
