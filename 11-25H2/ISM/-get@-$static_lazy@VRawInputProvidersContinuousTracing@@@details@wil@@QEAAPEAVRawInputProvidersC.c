/*
 * XREFs of ?get@?$static_lazy@VRawInputProvidersContinuousTracing@@@details@wil@@QEAAPEAVRawInputProvidersContinuousTracing@@P6AXXZ@Z @ 0x180031F40
 * Callers:
 *     ?SendInputReport@SpatialRimDeviceCollection@@UEAAJW4MPCAugmentedInputGestureType@@KK_NAEBUSpatialControllerPoseMsg@Internal@Spatial@Input@UI@Windows@@AEBUSpatialControllerStateMsg@45678@@Z @ 0x180031CE0 (-SendInputReport@SpatialRimDeviceCollection@@UEAAJW4MPCAugmentedInputGestureType@@KK_NAEBUSpatia.c)
 *     ?OnInputReport@SpatialRimDeviceCollection@@MEAAJKPEAXK@Z @ 0x180031E10 (-OnInputReport@SpatialRimDeviceCollection@@MEAAJKPEAXK@Z.c)
 *     ?IsEnabled@RawInputProvidersContinuousTracing@@SA_NE_K@Z @ 0x180031F00 (-IsEnabled@RawInputProvidersContinuousTracing@@SA_NE_K@Z.c)
 *     ??$HandInputReportProcessed@AEAKAEAW4MPCGestureType@@PEAULegacyInputInfo@@@RawInputProvidersContinuousTracing@@SAXAEAKAEAW4MPCGestureType@@$$QEAPEAULegacyInputInfo@@@Z @ 0x1800D10BC (--$HandInputReportProcessed@AEAKAEAW4MPCGestureType@@PEAULegacyInputInfo@@@RawInputProvidersCont.c)
 *     ?Provider@RawInputProvidersContinuousTracing@@SAPEBU_tlgProvider_t@@XZ @ 0x1800D4CB4 (-Provider@RawInputProvidersContinuousTracing@@SAPEBU_tlgProvider_t@@XZ.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VRawInputProvidersContinuousTracing@@@details@wil@@QEAA@XZ @ 0x180098D6C (--1Completer@-$static_lazy@VRawInputProvidersContinuousTracing@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x18009CD84 (atexit.c)
 */

__int64 *__fastcall wil::details::static_lazy<RawInputProvidersContinuousTracing>::get(
        __int64 a1,
        void (__cdecl *a2)())
{
  union _RTL_RUN_ONCE *v4; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+28h] [rbp-10h]
  WINBOOL v6; // [rsp+40h] [rbp+8h] BYREF
  int v7; // [rsp+44h] [rbp+Ch]
  __int64 *v8; // [rsp+50h] [rbp+18h] BYREF

  v7 = HIDWORD(a1);
  v8 = 0LL;
  v6 = 0;
  if ( __std_init_once_begin_initialize(
         &`RawInputProvidersContinuousTracing::Instance'::`2'::wrapper,
         0,
         &v6,
         (LPVOID *)&v8)
    && v6 )
  {
    qword_180247D80 = 0LL;
    dword_180247D8C = 0;
    v8 = &qword_180247D78;
    qword_180247D78 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
    v4 = &`RawInputProvidersContinuousTracing::Instance'::`2'::wrapper;
    byte_180247D88 = 0;
    qword_180247D90 = (__int64)&`RawInputProvidersContinuousTracing::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    v5 = 0;
    wil::details::static_lazy<RawInputProvidersContinuousTracing>::Completer::~Completer(&v4);
  }
  return v8;
}
