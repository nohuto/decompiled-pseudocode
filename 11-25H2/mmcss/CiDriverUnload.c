/*
 * XREFs of CiDriverUnload @ 0x1C000C350
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x1C0004620 (WPP_SF_.c)
 *     CsTerminate @ 0x1C000C400 (CsTerminate.c)
 */

__int64 CiDriverUnload()
{
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    WPP_SF_(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x13u,
      (__int64)&WPP_c50a18c053cc3d547b2a795787fa6cf4_Traceguids);
  if ( CiDeviceObject )
  {
    IoDeleteDevice(CiDeviceObject);
    CiDeviceObject = 0LL;
  }
  return CsTerminate();
}
