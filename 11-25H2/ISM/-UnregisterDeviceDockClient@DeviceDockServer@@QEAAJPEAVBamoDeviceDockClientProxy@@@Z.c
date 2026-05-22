/*
 * XREFs of ?UnregisterDeviceDockClient@DeviceDockServer@@QEAAJPEAVBamoDeviceDockClientProxy@@@Z @ 0x180180384
 * Callers:
 *     ?OnDisconnected@DeviceDockClientProxy@@MEAAJXZ @ 0x1801810C0 (-OnDisconnected@DeviceDockClientProxy@@MEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800163E4 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008DFDC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?UnregisterClient@DeviceDock@InputTraceLogging@@SAXPEBX@Z @ 0x180180338 (-UnregisterClient@DeviceDock@InputTraceLogging@@SAXPEBX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DeviceDockServer::UnregisterDeviceDockClient(
        DeviceDockServer *this,
        struct BamoDeviceDockClientProxy *a2)
{
  struct BamoDeviceDockClientProxy **v4; // rsi
  struct BamoDeviceDockClientProxy **i; // rax
  char v6; // cl
  struct BamoDeviceDockClientProxy **j; // rbx
  struct BamoDeviceDockClientProxy *v8; // rax
  __int64 v9; // rcx
  struct BamoDeviceDockClientProxy *v10; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  InputTraceLogging::DeviceDock::UnregisterClient(a2);
  v4 = (struct BamoDeviceDockClientProxy **)*((_QWORD *)this + 8);
  for ( i = (struct BamoDeviceDockClientProxy **)*((_QWORD *)this + 7); ; ++i )
  {
    if ( i == v4 )
    {
      v6 = 1;
      goto LABEL_6;
    }
    if ( *i == a2 )
      break;
  }
  v6 = 0;
LABEL_6:
  if ( v6 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x49,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\dock\\server\\devicedockserver.cpp",
      (const char *)retaddr);
  for ( j = i + 1; j != v4; ++j )
  {
    v8 = *j;
    *j = 0LL;
    v9 = (__int64)*(j - 1);
    *(j - 1) = v8;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  }
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)(*((_QWORD *)this + 8) - 8LL));
  *((_QWORD *)this + 8) -= 8LL;
  v10 = (struct BamoDeviceDockClientProxy *)*((_QWORD *)this + 10);
  if ( v10 == a2 )
  {
    *((_QWORD *)this + 10) = 0LL;
    if ( v10 )
      (*(void (__fastcall **)(struct BamoDeviceDockClientProxy *))(*(_QWORD *)v10 + 8LL))(v10);
  }
  return 0LL;
}
