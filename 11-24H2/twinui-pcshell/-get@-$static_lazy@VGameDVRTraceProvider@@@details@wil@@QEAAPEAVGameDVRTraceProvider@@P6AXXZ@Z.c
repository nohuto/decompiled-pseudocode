/*
 * XREFs of ?get@?$static_lazy@VGameDVRTraceProvider@@@details@wil@@QEAAPEAVGameDVRTraceProvider@@P6AXXZ@Z @ 0x18005A648
 * Callers:
 *     ?Provider@GameDVRTraceProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x180059FE0 (-Provider@GameDVRTraceProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?BroadcastDVRComponent_EvaluateIfViewIsGame@GameDVRTraceProvider@@SAXPEAX0_N11PEBG11@Z @ 0x18005A000 (-BroadcastDVRComponent_EvaluateIfViewIsGame@GameDVRTraceProvider@@SAXPEAX0_N11PEBG11@Z.c)
 *     ??$Shell_IsGameManager_DirChangeCallback@AEAPEBG@GameDVRTraceProvider@@SAXAEAPEBG@Z @ 0x18005A528 (--$Shell_IsGameManager_DirChangeCallback@AEAPEBG@GameDVRTraceProvider@@SAXAEAPEBG@Z.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180083248 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x1802D1A98 (atexit.c)
 */

LPVOID __fastcall wil::details::static_lazy<GameDVRTraceProvider>::get(__int64 a1, void (__cdecl *a2)())
{
  void (*v4)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  WINBOOL v5; // [rsp+30h] [rbp+8h] BYREF
  int v6; // [rsp+34h] [rbp+Ch]
  LPVOID v7; // [rsp+40h] [rbp+18h] BYREF

  v6 = HIDWORD(a1);
  v7 = 0LL;
  v5 = 0;
  if ( __std_init_once_begin_initialize(&`GameDVRTraceProvider::Instance'::`2'::wrapper, 0, &v5, &v7) && v5 )
  {
    qword_1808CA008 = 0LL;
    dword_1808CA014 = 0;
    v7 = &qword_1808CA000;
    qword_1808CA000 = &ShellScreenClippingLogging::`vftable';
    byte_1808CA010 = 0;
    qword_1808CA018 = (struct _tlgProvider_t *)&`GameDVRTraceProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1808CA000, qword_1808CA018, v4);
    InitOnceComplete(&`GameDVRTraceProvider::Instance'::`2'::wrapper, 0, &qword_1808CA000);
  }
  return v7;
}
