/*
 * XREFs of ??$try_create_instance@UIServiceProvider@@@winrt@@YA?A_PAEBUguid@0@IPEAX@Z @ 0x1804A4F64
 * Callers:
 *     ?TryGetTopTwoApplicationViews@CAppThumbnailWindow@@AEAAXPEAPEAUIApplicationView@@0@Z @ 0x1804ABEAC (-TryGetTopTwoApplicationViews@CAppThumbnailWindow@@AEAAXPEAPEAUIApplicationView@@0@Z.c)
 * Callees:
 *     ??$capture_to@UIServiceProvider@@P6AHAEBUguid@winrt@@PEAXI0PEAPEAX@_EAEBU23@AEAPEAXAEAI@impl@winrt@@YAHPEAPEAXP6AHAEBUguid@1@PEAXI10@_E1AEAPEAXAEAI@Z @ 0x18024A368 (--$capture_to@UIServiceProvider@@P6AHAEBUguid@winrt@@PEAXI0PEAPEAX@_EAEBU23@AEAPEAXAEAI@impl@win.c)
 */

_QWORD *__fastcall winrt::try_create_instance<IServiceProvider>(_QWORD *a1, __int64 a2)
{
  unsigned int v4[4]; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v5[3]; // [rsp+40h] [rbp-18h] BYREF
  __int64 v6; // [rsp+78h] [rbp+20h] BYREF

  v4[0] = 4;
  v5[0] = 0LL;
  v6 = 0LL;
  ___capture_to_UIServiceProvider__P6AHAEBUguid_winrt__PEAXI0PEAPEAX__EAEBU23_AEAPEAXAEAI_impl_winrt__YAHPEAPEAXP6AHAEBUguid_1_PEAXI10__E1AEAPEAXAEAI_Z(
    (__int64)&v6,
    (__int64 (__fastcall *)(__int64, _QWORD, _QWORD, __int64 *, __int64))CoCreateInstance_0,
    a2,
    v5,
    v4);
  *a1 = v6;
  return a1;
}
