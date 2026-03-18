/*
 * XREFs of ?Validate@EDID_PARSER@MonDescParser@@QEBAJ_N@Z @ 0x14003CE10
 * Callers:
 *     ?EDIDV1_ObtainMonitorProductCodeID@@YAJPEBEPEAG@Z @ 0x14003C03C (-EDIDV1_ObtainMonitorProductCodeID@@YAJPEBEPEAG@Z.c)
 *     ?EDIDV1_ObtainMonitorManufactureDate@@YAJPEBEPEAEPEAG@Z @ 0x14003C6B8 (-EDIDV1_ObtainMonitorManufactureDate@@YAJPEBEPEAEPEAG@Z.c)
 *     ?EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z @ 0x14003C7AC (-EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z.c)
 *     ?EDIDV1_ObtainMonitorSerialNumber@@YAJPEBEPEAG@Z @ 0x14003C80C (-EDIDV1_ObtainMonitorSerialNumber@@YAJPEBEPEAG@Z.c)
 *     ?EDID_V1_GetPreferredMode@@YAJPEBEPEAUDISPLAY_PREFERRED_MODE_INFO@@@Z @ 0x14003CAD4 (-EDID_V1_GetPreferredMode@@YAJPEBEPEAUDISPLAY_PREFERRED_MODE_INFO@@@Z.c)
 *     ?EDIDV1_FillProductIdManufacturerName@@YAJPEBEPEAG1@Z @ 0x14003CBA4 (-EDIDV1_FillProductIdManufacturerName@@YAJPEBEPEAG1@Z.c)
 *     ?EDIDV1_ObtainDisplayConfigFriendlyName@@YAJPEBEPEAG@Z @ 0x14003CC34 (-EDIDV1_ObtainDisplayConfigFriendlyName@@YAJPEBEPEAG@Z.c)
 *     ?Initialize@EDID_PARSER@MonDescParser@@QEAAJPEAEI@Z @ 0x14003CDB4 (-Initialize@EDID_PARSER@MonDescParser@@QEAAJPEAEI@Z.c)
 * Callees:
 *     ?IsValidCheckSum@EDID_PARSER@MonDescParser@@AEBA_NPEAT_EDID_V1_BLOCK@@@Z @ 0x14003CE6C (-IsValidCheckSum@EDID_PARSER@MonDescParser@@AEBA_NPEAT_EDID_V1_BLOCK@@@Z.c)
 */

__int64 __fastcall MonDescParser::EDID_PARSER::Validate(MonDescParser::EDID_PARSER *this)
{
  if ( **(_QWORD **)this != 0xFFFFFFFFFFFF00LL )
    return 3223126018LL;
  if ( this == (MonDescParser::EDID_PARSER *)((char *)this + 8 * *((_QWORD *)this + 10)) )
    this = 0LL;
  return !MonDescParser::EDID_PARSER::IsValidCheckSum(this, *(union _EDID_V1_BLOCK **)this) ? 0xC01D0003 : 0;
}
