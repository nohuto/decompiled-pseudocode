/*
 * XREFs of ?get@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAAPEAVDelayAllocateTLSLogging@@P6AXXZ@Z @ 0x18003E2E4
 * Callers:
 *     ??$Allocated@AEAPEBG@DelayAllocateTLSTelemetry@@SAXAEAPEBG@Z @ 0x1800246C0 (--$Allocated@AEAPEBG@DelayAllocateTLSTelemetry@@SAXAEAPEBG@Z.c)
 * Callees:
 *     atexit @ 0x180022620 (atexit.c)
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x18002A5A8 (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 */

__int64 *__fastcall wil::details::static_lazy<DelayAllocateTLSLogging>::get(__int64 a1, void (__cdecl *a2)())
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
  if ( InitOnceBeginInitialize(&`DelayAllocateTLSLogging::Instance'::`2'::wrapper, 0, &v8, (LPVOID *)&v10) && v8 )
  {
    qword_1801794C0 = 0LL;
    dword_1801794CC = 0;
    v10 = &qword_1801794B8;
    qword_1801794B8 = (__int64)&CreativeFramework::Logging::ShellPlacementLogging::`vftable';
    v6 = &`DelayAllocateTLSLogging::Instance'::`2'::wrapper;
    byte_1801794C8 = 0;
    qword_1801794D0 = (__int64)&`DelayAllocateTLSLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    v7 = 0;
    wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer(&v6, v3, v4);
  }
  return v10;
}
