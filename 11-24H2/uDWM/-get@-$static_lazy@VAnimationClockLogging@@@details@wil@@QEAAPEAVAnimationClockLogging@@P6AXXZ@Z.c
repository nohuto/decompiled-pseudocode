/*
 * XREFs of ?get@?$static_lazy@VAnimationClockLogging@@@details@wil@@QEAAPEAVAnimationClockLogging@@P6AXXZ@Z @ 0x180033000
 * Callers:
 *     ?Provider@AnimationClockLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180032FE0 (-Provider@AnimationClockLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VFeatureLogging@details@wil@@@details@wil@@QEAA@XZ @ 0x180076304 (--1Completer@-$static_lazy@VFeatureLogging@details@wil@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x18009B974 (atexit.c)
 */

__int64 *__fastcall wil::details::static_lazy<AnimationClockLogging>::get(__int64 a1, void (__cdecl *a2)())
{
  union _RTL_RUN_ONCE *v4; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+28h] [rbp-10h]
  WINBOOL v6; // [rsp+40h] [rbp+8h] BYREF
  int v7; // [rsp+44h] [rbp+Ch]
  __int64 *v8; // [rsp+50h] [rbp+18h] BYREF

  v7 = HIDWORD(a1);
  v8 = 0LL;
  v6 = 0;
  if ( InitOnceBeginInitialize(&`AnimationClockLogging::Instance'::`2'::wrapper, 0, &v6, (LPVOID *)&v8) && v6 )
  {
    qword_180129D38 = 0LL;
    dword_180129D44 = 0;
    v8 = &qword_180129D30;
    qword_180129D30 = (__int64)&WindowFrameLogging::`vftable';
    v4 = &`AnimationClockLogging::Instance'::`2'::wrapper;
    byte_180129D40 = 0;
    qword_180129D48 = (__int64)&`AnimationClockLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    v5 = 0;
    wil::details::static_lazy<wil::details::FeatureLogging>::Completer::~Completer(&v4);
  }
  return v8;
}
