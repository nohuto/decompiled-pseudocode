/*
 * XREFs of ??$MonitorInfoUsedForCreatingOptions@_KAEAURect@Foundation@Windows@@AEAW4DEVICE_SCALE_FACTOR@@_KAEAU123@AEAW44@_KAEAU123@AEAW44@AEA_NAEA_N@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEA_KAEAURect@Foundation@Windows@@AEAW4DEVICE_SCALE_FACTOR@@012012AEA_N3@Z @ 0x180080194
 * Callers:
 *     ?GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@Z @ 0x18007EBC8 (-GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU-$IVectorView@UCoreK.c)
 * Callees:
 *     ?IsEnabled@TouchKeyboardExperienceTelemetryLogger@@SA_NE_K@Z @ 0x180080268 (-IsEnabled@TouchKeyboardExperienceTelemetryLogger@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTelemetryLogger@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTelemetryLogger@@P6AXXZ@Z @ 0x180080328 (-get@-$static_lazy@VTouchKeyboardExperienceTelemetryLogger@@@details@wil@@QEAAPEAVTouchKeyboardE.c)
 *     ?MonitorInfoUsedForCreatingOptions_@TouchKeyboardExperienceTelemetryLogger@@QEBAX_KAEBURect@Foundation@Windows@@I01I01I_N2@Z @ 0x180486DE0 (-MonitorInfoUsedForCreatingOptions_@TouchKeyboardExperienceTelemetryLogger@@QEBAX_KAEBURect@Foun.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::MonitorInfoUsedForCreatingOptions<unsigned __int64,Windows::Foundation::Rect &,enum DEVICE_SCALE_FACTOR &,unsigned __int64,Windows::Foundation::Rect &,enum DEVICE_SCALE_FACTOR &,unsigned __int64,Windows::Foundation::Rect &,enum DEVICE_SCALE_FACTOR &,bool &,bool &>(
        unsigned __int64 *a1,
        const struct Windows::Foundation::Rect *a2,
        unsigned int *a3,
        unsigned __int64 *a4,
        struct Windows::Foundation::Rect *a5,
        unsigned int *a6,
        unsigned __int64 *a7,
        struct Windows::Foundation::Rect *a8,
        unsigned int *a9,
        bool *a10,
        bool *a11)
{
  __int64 v15; // rcx

  if ( TouchKeyboardExperienceTelemetryLogger::IsEnabled((unsigned __int8)a1, (unsigned __int64)a2) )
  {
    wil::details::static_lazy<TouchKeyboardExperienceTelemetryLogger>::get(
      v15,
      _lambda_c916e9e9cdf81665e4682fd57ca742e1_::_lambda_invoker_cdecl_);
    TouchKeyboardExperienceTelemetryLogger::MonitorInfoUsedForCreatingOptions_(
      (TouchKeyboardExperienceTelemetryLogger *)*a6,
      *a1,
      a2,
      *a3,
      *a4,
      a5,
      *a6,
      *a7,
      a8,
      *a9,
      *a10,
      *a11);
  }
}
