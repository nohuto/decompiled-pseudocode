/*
 * XREFs of ?get@?$static_lazy@VRawInputProvidersTracing@@@details@wil@@QEAAPEAVRawInputProvidersTracing@@P6AXXZ@Z @ 0x1800D2DF4
 * Callers:
 *     ?IsEnabled@RawInputProvidersTracing@@SA_NE_K@Z @ 0x1800D28C8 (-IsEnabled@RawInputProvidersTracing@@SA_NE_K@Z.c)
 *     ?Provider@RawInputProvidersTracing@@SAPEBU_tlgProvider_t@@XZ @ 0x1800D2908 (-Provider@RawInputProvidersTracing@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?ReadFeatureReport@SpatialRimDevice@SpatialInteractions@Internal@Windows@@UEAAJEPEAEK@Z @ 0x1800D2930 (-ReadFeatureReport@SpatialRimDevice@SpatialInteractions@Internal@Windows@@UEAAJEPEAEK@Z.c)
 *     ?OnDeviceAttach@AugmentedInputDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800D3840 (-OnDeviceAttach@AugmentedInputDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceRemoval@AugmentedInputDeviceCollection@@MEAAJK@Z @ 0x1800D39B0 (-OnDeviceRemoval@AugmentedInputDeviceCollection@@MEAAJK@Z.c)
 *     ?DisableHeadEventHandler@SpatialRimDeviceCollection@@AEAAXXZ @ 0x1800D5EA4 (-DisableHeadEventHandler@SpatialRimDeviceCollection@@AEAAXXZ.c)
 *     ?EnableHeadEventHandler@SpatialRimDeviceCollection@@AEAAJXZ @ 0x1800D6160 (-EnableHeadEventHandler@SpatialRimDeviceCollection@@AEAAJXZ.c)
 *     ?EnsureSpatialInteractionInitialized@SpatialRimDeviceCollection@@AEAAJXZ @ 0x1800D6250 (-EnsureSpatialInteractionInitialized@SpatialRimDeviceCollection@@AEAAJXZ.c)
 *     ?OnDdiDeviceAdded@SpatialRimDeviceCollection@@UEAAJW4InputType@@KAEBUMPCSourceDeviceInfo@@@Z @ 0x1800D74F0 (-OnDdiDeviceAdded@SpatialRimDeviceCollection@@UEAAJW4InputType@@KAEBUMPCSourceDeviceInfo@@@Z.c)
 *     ?OnDdiDeviceRemoved@SpatialRimDeviceCollection@@UEAAJK@Z @ 0x1800D7770 (-OnDdiDeviceRemoved@SpatialRimDeviceCollection@@UEAAJK@Z.c)
 *     ?OnDeviceAttach@SpatialRimDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800D7AB0 (-OnDeviceAttach@SpatialRimDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnFinalRelease@SpatialRimDeviceCollection@@MEAAXXZ @ 0x1800D7C60 (-OnFinalRelease@SpatialRimDeviceCollection@@MEAAXXZ.c)
 *     ?SendDeviceUpdate@SpatialRimDeviceCollection@@UEAAJKAEBUMPCSourceDeviceInfo@@@Z @ 0x1800D81E0 (-SendDeviceUpdate@SpatialRimDeviceCollection@@UEAAJKAEBUMPCSourceDeviceInfo@@@Z.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VRawInputProvidersContinuousTracing@@@details@wil@@QEAA@XZ @ 0x180098ECC (--1Completer@-$static_lazy@VRawInputProvidersContinuousTracing@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x18009CF54 (atexit.c)
 */

__int64 *__fastcall wil::details::static_lazy<RawInputProvidersTracing>::get(__int64 a1, void (__cdecl *a2)())
{
  union _RTL_RUN_ONCE *v4; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+28h] [rbp-10h]
  WINBOOL v6; // [rsp+40h] [rbp+8h] BYREF
  int v7; // [rsp+44h] [rbp+Ch]
  __int64 *v8; // [rsp+50h] [rbp+18h] BYREF

  v7 = HIDWORD(a1);
  v8 = 0LL;
  v6 = 0;
  if ( __std_init_once_begin_initialize(&`RawInputProvidersTracing::Instance'::`2'::wrapper, 0, &v6, (LPVOID *)&v8)
    && v6 )
  {
    qword_1802517C8 = 0LL;
    dword_1802517D4 = 0;
    v8 = &qword_1802517C0;
    qword_1802517C0 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
    v4 = &`RawInputProvidersTracing::Instance'::`2'::wrapper;
    byte_1802517D0 = 0;
    qword_1802517D8 = (__int64)&`RawInputProvidersTracing::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    v5 = 0;
    wil::details::static_lazy<RawInputProvidersContinuousTracing>::Completer::~Completer(&v4);
  }
  return v8;
}
