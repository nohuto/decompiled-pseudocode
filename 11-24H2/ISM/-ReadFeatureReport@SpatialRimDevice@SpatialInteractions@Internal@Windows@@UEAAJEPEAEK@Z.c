/*
 * XREFs of ?ReadFeatureReport@SpatialRimDevice@SpatialInteractions@Internal@Windows@@UEAAJEPEAEK@Z @ 0x1800D2930
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?NtStatusToHr@details@wil@@YAJJ@Z @ 0x180097820 (-NtStatusToHr@details@wil@@YAJJ@Z.c)
 *     ?IsEnabled@RawInputProvidersTracing@@SA_NE_K@Z @ 0x1800D28C8 (-IsEnabled@RawInputProvidersTracing@@SA_NE_K@Z.c)
 *     ?ReadFeatureReport_@RawInputProvidersTracing@@QEAAXJKE@Z @ 0x1800D2A04 (-ReadFeatureReport_@RawInputProvidersTracing@@QEAAXJKE@Z.c)
 *     ?get@?$static_lazy@VRawInputProvidersTracing@@@details@wil@@QEAAPEAVRawInputProvidersTracing@@P6AXXZ@Z @ 0x1800D2DF4 (-get@-$static_lazy@VRawInputProvidersTracing@@@details@wil@@QEAAPEAVRawInputProvidersTracing@@P6.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialRimDevice::ReadFeatureReport(
        Windows::Internal::SpatialInteractions::SpatialRimDevice *this,
        unsigned __int8 a2,
        unsigned __int8 *a3,
        int a4)
{
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rcx
  RawInputProvidersTracing *v10; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  int v13; // [rsp+78h] [rbp+20h] BYREF

  if ( a4 )
  {
    v13 = 0;
    *a3 = a2;
    v7 = NtRIMDeviceIoControl(*((_QWORD *)this + 19), *((_QWORD *)this + 21), 721298LL, 0LL, 0, a3, a4, &v13, 0);
    if ( v7 >= 0 )
      v6 = 0;
    else
      v6 = wil::details::NtStatusToHr((wil::details *)(unsigned int)v7);
    if ( RawInputProvidersTracing::IsEnabled(v8) )
    {
      wil::details::static_lazy<RawInputProvidersTracing>::get(
        v9,
        _lambda_260b9137d63ddd75627644ad4182c2ea_::_lambda_invoker_cdecl_);
      RawInputProvidersTracing::ReadFeatureReport_(v10, v6, *((_DWORD *)this + 12), a2);
    }
  }
  else
  {
    v6 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5C,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevice.cpp",
      (const char *)0x80070057LL);
  }
  return v6;
}
