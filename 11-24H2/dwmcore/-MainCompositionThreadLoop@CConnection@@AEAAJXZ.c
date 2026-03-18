/*
 * XREFs of ?MainCompositionThreadLoop@CConnection@@AEAAJXZ @ 0x1800ED258
 * Callers:
 *     ?RunCompositionThread@CConnection@@AEAAJXZ @ 0x18025D134 (-RunCompositionThread@CConnection@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ProcessComposition@CComposition@@QEAAXXZ @ 0x1800817A0 (-ProcessComposition@CComposition@@QEAAXXZ.c)
 *     ?Create@CGlobalComposition@@SAJPEAVCTransport@@PEAVCConnection@@PEAPEAVCComposition@@@Z @ 0x1800ED334 (-Create@CGlobalComposition@@SAJPEAVCTransport@@PEAVCConnection@@PEAPEAVCComposition@@@Z.c)
 *     ?OnShutdown@CComposition@@QEAAXXZ @ 0x1800ED3DC (-OnShutdown@CComposition@@QEAAXXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802422DC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CConnection::MainCompositionThreadLoop(CConnection *this)
{
  int v2; // eax
  unsigned int v3; // edi
  __int64 v4; // rdx
  __int64 v5; // r8
  CComposition *v6; // rbx
  const char *v7; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  CComposition *v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = 0LL;
  v2 = CGlobalComposition::Create(*((struct CTransport **)this + 1), this, &v10);
  v3 = v2;
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4B,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\connection.cpp",
      (const char *)(unsigned int)v2);
    if ( v10 )
      (*(void (__fastcall **)(CComposition *))(*(_QWORD *)v10 + 8LL))(v10);
    return v3;
  }
  else
  {
    SetEvent(*((HANDLE *)this + 5));
    *((_BYTE *)this + 24) = 1;
    while ( *((_BYTE *)this + 24) )
      CComposition::ProcessComposition(v10, v4, v5);
    v6 = v10;
    CComposition::OnShutdown(v10);
    if ( *((_DWORD *)v6 + 2) != 1 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x62,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\connection.cpp",
        v7);
    if ( v10 )
      (*(void (__fastcall **)(CComposition *))(*(_QWORD *)v10 + 8LL))(v10);
    return 0LL;
  }
}
