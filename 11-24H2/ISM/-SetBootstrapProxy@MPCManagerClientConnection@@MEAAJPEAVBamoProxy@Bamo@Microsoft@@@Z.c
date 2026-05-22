/*
 * XREFs of ?SetBootstrapProxy@MPCManagerClientConnection@@MEAAJPEAVBamoProxy@Bamo@Microsoft@@@Z @ 0x180173030
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnServerConnectionChanged@MPCManagerClient@@QEAAXXZ @ 0x180164C4C (-OnServerConnectionChanged@MPCManagerClient@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCManagerClientConnection::SetBootstrapProxy(
        MPCManagerClientConnection *this,
        struct Microsoft::Bamo::BamoProxy *a2)
{
  __int64 (__fastcall *v4)(struct Microsoft::Bamo::BamoProxy *, GUID *, _QWORD *); // rbp
  _QWORD *v5; // rdi
  __int64 v6; // rcx
  int v7; // eax
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = *(__int64 (__fastcall **)(struct Microsoft::Bamo::BamoProxy *, GUID *, _QWORD *))(*(_QWORD *)a2 + 16LL);
  v5 = (_QWORD *)((char *)this + 248);
  v6 = *((_QWORD *)this + 31);
  *v5 = 0LL;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  v7 = v4(a2, &GUID_95ac6fa3_65a4_491c_7e74_c6d4d2a94172, v5);
  if ( v7 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x2C,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcmanagerclientconnection.cpp",
      (const char *)(unsigned int)v7,
      v9);
  MPCManagerClient::OnServerConnectionChanged(*((RTL_SRWLOCK **)this + 32));
  return 0LL;
}
