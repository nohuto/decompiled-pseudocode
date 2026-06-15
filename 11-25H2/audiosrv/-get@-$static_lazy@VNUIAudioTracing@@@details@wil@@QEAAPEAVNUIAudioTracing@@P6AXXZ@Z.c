/*
 * XREFs of ?get@?$static_lazy@VNUIAudioTracing@@@details@wil@@QEAAPEAVNUIAudioTracing@@P6AXXZ@Z @ 0x1801462F8
 * Callers:
 *     ??$NuiAudioTrace@AEAY0CAA@D@NUIAudioTracing@@SAXAEAY0CAA@D@Z @ 0x180146174 (--$NuiAudioTrace@AEAY0CAA@D@NUIAudioTracing@@SAXAEAY0CAA@D@Z.c)
 *     ?NuiAudioTrace_@NUIAudioTracing@@QEAAXPEBD@Z @ 0x1801462AC (-NuiAudioTrace_@NUIAudioTracing@@QEAAXPEBD@Z.c)
 * Callees:
 *     atexit @ 0x1800A7F5C (atexit.c)
 *     ??1Completer@?$static_lazy@VNUIAudioTracing@@@details@wil@@QEAA@XZ @ 0x1801461BC (--1Completer@-$static_lazy@VNUIAudioTracing@@@details@wil@@QEAA@XZ.c)
 */

__int64 *__fastcall wil::details::static_lazy<NUIAudioTracing>::get(__int64 a1, void (__cdecl *a2)())
{
  union _RTL_RUN_ONCE *v4; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+28h] [rbp-10h]
  WINBOOL v6; // [rsp+40h] [rbp+8h] BYREF
  int v7; // [rsp+44h] [rbp+Ch]
  __int64 *v8; // [rsp+50h] [rbp+18h] BYREF

  v7 = HIDWORD(a1);
  v8 = 0LL;
  v6 = 0;
  if ( InitOnceBeginInitialize(&`NUIAudioTracing::Instance'::`2'::wrapper, 0, &v6, (LPVOID *)&v8) && v6 )
  {
    qword_1801D0E00 = 0LL;
    dword_1801D0E0C = 0;
    v8 = &qword_1801D0DF8;
    qword_1801D0DF8 = (__int64)&NUIAudioTracing::`vftable';
    v4 = &`NUIAudioTracing::Instance'::`2'::wrapper;
    byte_1801D0E08 = 0;
    qword_1801D0E10 = (__int64)&`NUIAudioTracing::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    v5 = 0;
    wil::details::static_lazy<NUIAudioTracing>::Completer::~Completer(&v4);
  }
  return v8;
}
