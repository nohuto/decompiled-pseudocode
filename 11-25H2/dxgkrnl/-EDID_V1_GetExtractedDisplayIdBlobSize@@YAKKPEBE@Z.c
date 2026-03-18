/*
 * XREFs of ?EDID_V1_GetExtractedDisplayIdBlobSize@@YAKKPEBE@Z @ 0x1400649A0
 * Callers:
 *     ?ExtractFromEdid@DisplayIdMonitorDescriptor@DxgMonitor@@SAJ$$QEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@KAEAV?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@4@@Z @ 0x1404078C0 (-ExtractFromEdid@DisplayIdMonitorDescriptor@DxgMonitor@@SAJ$$QEAV-$unique_ptr@$$BY0A@EU-$default.c)
 * Callees:
 *     ?Initialize@EDID_PARSER@MonDescParser@@QEAAJPEAEI@Z @ 0x14003CDB4 (-Initialize@EDID_PARSER@MonDescParser@@QEAAJPEAEI@Z.c)
 *     ?GetBlockTypeCount@EDID_PARSER@MonDescParser@@QEBAIW4EDID_V1_BLOCK_TYPE@2@@Z @ 0x140096638 (-GetBlockTypeCount@EDID_PARSER@MonDescParser@@QEBAIW4EDID_V1_BLOCK_TYPE@2@@Z.c)
 */

__int64 __fastcall EDID_V1_GetExtractedDisplayIdBlobSize(unsigned int a1, unsigned __int8 *a2)
{
  _BYTE v3[80]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v4; // [rsp+70h] [rbp-18h]

  if ( a2
    && a1 >= 0x80
    && (v4 = 0LL, (int)MonDescParser::EDID_PARSER::Initialize((MonDescParser::EDID_PARSER *)v3, a2, a1) >= 0) )
  {
    return 126 * (unsigned int)MonDescParser::EDID_PARSER::GetBlockTypeCount(v3);
  }
  else
  {
    return 0LL;
  }
}
