/*
 * XREFs of ?GetHdmiForum20VendorData@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NPEAU_EDID_V1_CEA_861_HDMI_FORUM_2_0_VENDOR_SPECIFIC_DESC@@@Z @ 0x1400987F4
 * Callers:
 *     ?EDID_V1_GetColorDepths@@YAJKPEBEPEAUDISPLAY_COLOR_DEPTHS@@@Z @ 0x14003BCC0 (-EDID_V1_GetColorDepths@@YAJKPEBEPEAUDISPLAY_COLOR_DEPTHS@@@Z.c)
 * Callees:
 *     ?GetDataBlock@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NIPEAPEAU_EDID_V1_CEA_861_DATA_HEADER@@@Z @ 0x140098554 (-GetDataBlock@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NIPEAPEAU_EDID_V1_CEA_861_DATA_HEADER@.c)
 */

char __fastcall MonDescParser::EDID_PARSER_CEA_861_EXT::GetHdmiForum20VendorData(
        MonDescParser::EDID_PARSER_CEA_861_EXT *this,
        struct _EDID_V1_CEA_861_HDMI_FORUM_2_0_VENDOR_SPECIFIC_DESC *a2)
{
  unsigned int v2; // esi
  unsigned int i; // r11d
  int v6; // r11d
  struct _EDID_V1_CEA_861_DATA_HEADER *v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_DWORD *)this + 2);
  for ( i = 0; i < v2; i = v6 + 1 )
  {
    v8 = 0LL;
    if ( MonDescParser::EDID_PARSER_CEA_861_EXT::GetDataBlock(this, i, &v8)
      && (*(_BYTE *)v8 & 0xE0) == 0x60
      && (*(_BYTE *)v8 & 0x1Fu) >= 7
      && (*(_QWORD *)((_BYTE *)v8 + 1) & 0xFFFFFFLL) == 0xC45DD8 )
    {
      *(_QWORD *)a2 = *(_QWORD *)((char *)v8 + 1);
      return 1;
    }
  }
  return 0;
}
