/*
 * XREFs of ??$MonitorInfoUsedForCreatingOptions@_KAEBURect@Foundation@Windows@@AEBW4DEVICE_SCALE_FACTOR@@_KAEBU123@AEBW44@_KAEBU123@AEBW44@AEA_NAEA_N@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEA_KAEBURect@Foundation@Windows@@AEBW4DEVICE_SCALE_FACTOR@@012012AEA_N3@Z @ 0x180484F24
 * Callers:
 *     ?GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@Z @ 0x18007EBC8 (-GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU-$IVectorView@UCoreK.c)
 * Callees:
 *     ?Instance@TouchKeyboardExperienceTelemetryLogger@@KAPEAV1@XZ @ 0x18007FF6C (-Instance@TouchKeyboardExperienceTelemetryLogger@@KAPEAV1@XZ.c)
 *     ?IsEnabled@TouchKeyboardExperienceTelemetryLogger@@SA_NE_K@Z @ 0x180080268 (-IsEnabled@TouchKeyboardExperienceTelemetryLogger@@SA_NE_K@Z.c)
 *     ?MonitorInfoUsedForCreatingOptions_@TouchKeyboardExperienceTelemetryLogger@@QEBAX_KAEBURect@Foundation@Windows@@I01I01I_N2@Z @ 0x180486DE0 (-MonitorInfoUsedForCreatingOptions_@TouchKeyboardExperienceTelemetryLogger@@QEBAX_KAEBURect@Foun.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::MonitorInfoUsedForCreatingOptions<unsigned __int64,Windows::Foundation::Rect const &,enum DEVICE_SCALE_FACTOR const &,unsigned __int64,Windows::Foundation::Rect const &,enum DEVICE_SCALE_FACTOR const &,unsigned __int64,Windows::Foundation::Rect const &,enum DEVICE_SCALE_FACTOR const &,bool &,bool &>(
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
  if ( TouchKeyboardExperienceTelemetryLogger::IsEnabled() )
  {
    TouchKeyboardExperienceTelemetryLogger::Instance();
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
