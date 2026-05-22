/*
 * XREFs of ?UnregisterSystemContextEndpoint@SystemContextManager@@QEAAJPEAVBamoSystemContextEndpointProxy@@@Z @ 0x18013E6E0
 * Callers:
 *     ?OnDisconnected@SystemContextEndpointProxy@@MEAAJXZ @ 0x18013EA90 (-OnDisconnected@SystemContextEndpointProxy@@MEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800163E4 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008DFDC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SystemContextManager::UnregisterSystemContextEndpoint(
        SystemContextManager *this,
        struct BamoSystemContextEndpointProxy *a2)
{
  struct BamoSystemContextEndpointProxy **v3; // rsi
  struct BamoSystemContextEndpointProxy **i; // rax
  char v5; // cl
  struct BamoSystemContextEndpointProxy **j; // rbx
  struct BamoSystemContextEndpointProxy *v7; // rax
  __int64 v8; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (struct BamoSystemContextEndpointProxy **)*((_QWORD *)this + 8);
  for ( i = (struct BamoSystemContextEndpointProxy **)*((_QWORD *)this + 7); ; ++i )
  {
    if ( i == v3 )
    {
      v5 = 1;
      goto LABEL_6;
    }
    if ( *i == a2 )
      break;
  }
  v5 = 0;
LABEL_6:
  if ( v5 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x4B,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\components\\systemcontext\\manager\\systemcontextmanager.cpp",
      (const char *)retaddr);
  for ( j = i + 1; j != v3; ++j )
  {
    v7 = *j;
    *j = 0LL;
    v8 = (__int64)*(j - 1);
    *(j - 1) = v7;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  }
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)(*((_QWORD *)this + 8) - 8LL));
  *((_QWORD *)this + 8) -= 8LL;
  return 0LL;
}
