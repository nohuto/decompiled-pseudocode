/*
 * XREFs of _anonymous_namespace_::TimePointToTimeString @ 0x1803E44B0
 * Callers:
 *     _anonymous_namespace_::GameMruItemToJsonObject @ 0x1803E34B8 (_anonymous_namespace_--GameMruItemToJsonObject.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180098C40 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?Log_GetLastError@in1diag3@details@wil@@YAKPEAXIPEBD@Z @ 0x1803D9538 (-Log_GetLastError@in1diag3@details@wil@@YAKPEAXIPEBD@Z.c)
 */

_QWORD *__fastcall anonymous_namespace_::TimePointToTimeString(_QWORD *a1, _QWORD *a2)
{
  const char *v3; // r9
  __time64_t Time[2]; // [rsp+20h] [rbp-458h] BYREF
  tm Tm; // [rsp+30h] [rbp-448h] BYREF
  wchar_t Buffer[512]; // [rsp+60h] [rbp-418h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+478h] [rbp+0h]

  Time[0] = (__time64_t)a1;
  Time[0] = *a2 / 10000000LL;
  if ( _gmtime64_s(&Tm, Time) )
    wil::details::in1diag3::Log_GetLastError(
      retaddr,
      (void *)0x32,
      (__int64)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\gamemrumanager.cpp",
      v3);
  wcsftime(Buffer, 0x400uLL, L"%Y-%m-%dT%H:%M:%SZ", &Tm);
  std::wstring::wstring(a1, Buffer);
  return a1;
}
