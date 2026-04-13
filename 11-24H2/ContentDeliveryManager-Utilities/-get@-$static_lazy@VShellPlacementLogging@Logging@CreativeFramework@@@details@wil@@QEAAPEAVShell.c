/*
 * XREFs of ?get@?$static_lazy@VShellPlacementLogging@Logging@CreativeFramework@@@details@wil@@QEAAPEAVShellPlacementLogging@Logging@CreativeFramework@@P6AXXZ@Z @ 0x18005DCC0
 * Callers:
 *     ?Provider@ShellPlacementLogging@Logging@CreativeFramework@@SAPEBU_tlgProvider_t@@XZ @ 0x180055870 (-Provider@ShellPlacementLogging@Logging@CreativeFramework@@SAPEBU_tlgProvider_t@@XZ.c)
 * Callees:
 *     atexit @ 0x180022630 (atexit.c)
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x18002A578 (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 */

__int64 *__fastcall wil::details::static_lazy<CreativeFramework::Logging::ShellPlacementLogging>::get(
        __int64 a1,
        void (__cdecl *a2)())
{
  __int64 v3; // rdx
  void (*v4)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  union _RTL_RUN_ONCE *v6; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+28h] [rbp-10h]
  WINBOOL v8; // [rsp+40h] [rbp+8h] BYREF
  int v9; // [rsp+44h] [rbp+Ch]
  __int64 *v10; // [rsp+50h] [rbp+18h] BYREF

  v9 = HIDWORD(a1);
  v10 = 0LL;
  v8 = 0;
  if ( InitOnceBeginInitialize(
         &`CreativeFramework::Logging::ShellPlacementLogging::Instance'::`2'::wrapper,
         0,
         &v8,
         (LPVOID *)&v10)
    && v8 )
  {
    qword_18017B2A0 = 0LL;
    dword_18017B2AC = 0;
    v10 = &qword_18017B298;
    qword_18017B298 = (__int64)&CreativeFramework::Logging::ShellPlacementLogging::`vftable';
    v6 = &`CreativeFramework::Logging::ShellPlacementLogging::Instance'::`2'::wrapper;
    byte_18017B2A8 = 0;
    qword_18017B2B0 = (__int64)&`CreativeFramework::Logging::ShellPlacementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    v7 = 0;
    wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer(&v6, v3, v4);
  }
  return v10;
}
