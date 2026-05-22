/*
 * XREFs of ?Provider@RawInputProvidersTelemetry@@SAPEBU_tlgProvider_t@@XZ @ 0x1800E0290
 * Callers:
 *     ?LogRawInputDeviceAttached@RawInputProvidersTelemetry@@SAXIGGG@Z @ 0x1800DFF90 (-LogRawInputDeviceAttached@RawInputProvidersTelemetry@@SAXIGGG@Z.c)
 *     ?LogRawInputDeviceQueryRemove@RawInputProvidersTelemetry@@SAXIGGG@Z @ 0x1800E0038 (-LogRawInputDeviceQueryRemove@RawInputProvidersTelemetry@@SAXIGGG@Z.c)
 *     ?LogRawInputDeviceRemoved@RawInputProvidersTelemetry@@SAXIGGG@Z @ 0x1800E00E0 (-LogRawInputDeviceRemoved@RawInputProvidersTelemetry@@SAXIGGG@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VRawInputProvidersTelemetry@@@details@wil@@QEAAPEAVRawInputProvidersTelemetry@@P6AXXZ@Z @ 0x180085738 (-get@-$static_lazy@VRawInputProvidersTelemetry@@@details@wil@@QEAAPEAVRawInputProvidersTelemetry.c)
 */

const struct _tlgProvider_t *__fastcall RawInputProvidersTelemetry::Provider(__int64 a1)
{
  return (const struct _tlgProvider_t *)wil::details::static_lazy<RawInputProvidersTelemetry>::get(
                                          a1,
                                          (void (__cdecl *)())_lambda_57da4f32860180830fc4458af3e8f3e0_::_lambda_invoker_cdecl_)[1];
}
