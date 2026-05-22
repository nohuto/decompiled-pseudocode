/*
 * XREFs of ?RegisterActivationController@ForegroundManager@@QEAAXPEAVActivationControllerBamoProxy@@@Z @ 0x18006D780
 * Callers:
 *     ?OnConnected@ActivationControllerBamoProxy@@MEAAJXZ @ 0x18006D710 (-OnConnected@ActivationControllerBamoProxy@@MEAAJXZ.c)
 * Callees:
 *     ?GetCookie@ActivationControllerBamoProxy@@QEAA_KXZ @ 0x18006D82C (-GetCookie@ActivationControllerBamoProxy@@QEAA_KXZ.c)
 *     ?RegisterActivationController@ForegroundManagerServer@InputTraceLogging@@SAX_KAEBU_LUID@@00@Z @ 0x18006D938 (-RegisterActivationController@ForegroundManagerServer@InputTraceLogging@@SAX_KAEBU_LUID@@00@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall ForegroundManager::RegisterActivationController(
        ForegroundManager *this,
        struct ActivationControllerBamoProxy *a2)
{
  char *v2; // r14
  unsigned __int64 v5; // rsi
  unsigned __int64 Cookie; // rdi
  const struct _LUID *v7; // rbx
  unsigned __int64 v8; // rax
  ActivationWatcherBamoPrincipal *v9; // rbx
  unsigned __int64 v10; // rax

  v2 = (char *)a2 + 8;
  v5 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 1) + 56LL))((char *)a2 + 8);
  Cookie = ActivationControllerBamoProxy::GetCookie(a2);
  v7 = (const struct _LUID *)(*(__int64 (__fastcall **)(char *))(*(_QWORD *)v2 + 48LL))(v2);
  v8 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v2 + 40LL))(v2);
  InputTraceLogging::ForegroundManagerServer::RegisterActivationController(v8, v7, Cookie, v5);
  v9 = (ActivationWatcherBamoPrincipal *)*((_QWORD *)this + 67);
  v10 = ActivationControllerBamoProxy::GetCookie(a2);
  ActivationWatcherBamoPrincipal::TryUpdateApplicationActivationState(v9, v10);
}
