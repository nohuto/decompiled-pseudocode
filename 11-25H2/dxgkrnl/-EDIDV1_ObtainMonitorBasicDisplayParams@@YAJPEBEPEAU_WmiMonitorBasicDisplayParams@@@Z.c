/*
 * XREFs of ?EDIDV1_ObtainMonitorBasicDisplayParams@@YAJPEBEPEAU_WmiMonitorBasicDisplayParams@@@Z @ 0x140093DB4
 * Callers:
 *     ?GetBasicDisplayParams@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAU_WmiMonitorBasicDisplayParams@@@Z @ 0x140278810 (-GetBasicDisplayParams@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAU_WmiMonitorBasicDisplayParams@.c)
 * Callees:
 *     ?Initialize@EDID_PARSER@MonDescParser@@QEAAJPEAEI@Z @ 0x14003CDB4 (-Initialize@EDID_PARSER@MonDescParser@@QEAAJPEAEI@Z.c)
 *     ?GetWmiBasicDisplayParams@EDID_PARSER@MonDescParser@@QEBA?AU_WmiMonitorBasicDisplayParams@@XZ @ 0x14005BCA8 (-GetWmiBasicDisplayParams@EDID_PARSER@MonDescParser@@QEBA-AU_WmiMonitorBasicDisplayParams@@XZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 */

__int64 __fastcall EDIDV1_ObtainMonitorBasicDisplayParams(
        unsigned __int8 *a1,
        struct _WmiMonitorBasicDisplayParams *a2)
{
  __int64 result; // rax
  struct _WmiMonitorBasicDisplayParams *WmiBasicDisplayParams; // rax
  struct _WmiMonitorBasicDisplayParams *v4; // r11
  _BYTE v5[80]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v6; // [rsp+70h] [rbp-38h]
  _WmiMonitorBasicDisplayParams v7; // [rsp+80h] [rbp-28h] BYREF

  if ( !a1 || !a2 )
    return 3221225485LL;
  v6 = 0LL;
  result = MonDescParser::EDID_PARSER::Initialize((MonDescParser::EDID_PARSER *)v5, a1, 0x80u);
  if ( (int)result >= 0 )
  {
    WmiBasicDisplayParams = MonDescParser::EDID_PARSER::GetWmiBasicDisplayParams((MonDescParser::EDID_PARSER *)v5, &v7);
    *v4 = *WmiBasicDisplayParams;
    return 0LL;
  }
  return result;
}
