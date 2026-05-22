/*
 * XREFs of ?UnregisterActivationController@ForegroundManager@@QEAAXPEAVActivationControllerBamoProxy@@@Z @ 0x18006D688
 * Callers:
 *     ?OnDisconnected@ActivationControllerBamoProxy@@MEAAJXZ @ 0x18006D660 (-OnDisconnected@ActivationControllerBamoProxy@@MEAAJXZ.c)
 * Callees:
 *     ?GetCookie@ActivationControllerBamoProxy@@QEAA_KXZ @ 0x18006D82C (-GetCookie@ActivationControllerBamoProxy@@QEAA_KXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall ForegroundManager::UnregisterActivationController(
        ForegroundManager *this,
        struct ActivationControllerBamoProxy *a2)
{
  char *v2; // r14
  unsigned __int64 v4; // rsi
  unsigned __int64 Cookie; // rdi
  const struct _LUID *v6; // rbx
  unsigned __int64 v7; // rax

  v2 = (char *)a2 + 8;
  v4 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 1) + 56LL))((char *)a2 + 8);
  Cookie = ActivationControllerBamoProxy::GetCookie(a2);
  v6 = (const struct _LUID *)(*(__int64 (__fastcall **)(char *))(*(_QWORD *)v2 + 48LL))(v2);
  v7 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v2 + 40LL))(v2);
  InputTraceLogging::ForegroundManagerServer::UnregisterActivationController(v7, v6, Cookie, v4);
}
