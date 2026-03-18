/*
 * XREFs of ?GetHdmiLLCVendorData@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NPEAU_EDID_V1_CEA_861_HDMI_LLC_1_4_VENDOR_SPECIFIC_DESC@@@Z @ 0x140098880
 * Callers:
 *     ?EDID_V1_GetColorDepths@@YAJKPEBEPEAUDISPLAY_COLOR_DEPTHS@@@Z @ 0x14003BCC0 (-EDID_V1_GetColorDepths@@YAJKPEBEPEAUDISPLAY_COLOR_DEPTHS@@@Z.c)
 * Callees:
 *     ?GetDataBlock@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NIPEAPEAU_EDID_V1_CEA_861_DATA_HEADER@@@Z @ 0x140098554 (-GetDataBlock@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NIPEAPEAU_EDID_V1_CEA_861_DATA_HEADER@.c)
 */

bool __fastcall MonDescParser::EDID_PARSER_CEA_861_EXT::GetHdmiLLCVendorData(
        MonDescParser::EDID_PARSER_CEA_861_EXT *this,
        struct _EDID_V1_CEA_861_HDMI_LLC_1_4_VENDOR_SPECIFIC_DESC *a2)
{
  unsigned int v2; // esi
  unsigned int i; // r11d
  int v6; // r11d
  bool result; // al
  int v8; // ecx
  struct _EDID_V1_CEA_861_DATA_HEADER *v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_DWORD *)this + 2);
  for ( i = 0; i < v2; i = v6 + 1 )
  {
    v9 = 0LL;
    if ( MonDescParser::EDID_PARSER_CEA_861_EXT::GetDataBlock(this, i, &v9)
      && (*(_BYTE *)v9 & 0xE0) == 0x60
      && (*(_BYTE *)v9 & 0x1Fu) >= 5
      && (*(_DWORD *)((_BYTE *)v9 + 1) & 0xFFFFFF) == 0xC03LL )
    {
      result = 1;
      v8 = *(_DWORD *)((char *)v9 + 9);
      *(_QWORD *)a2 = *(_QWORD *)((char *)v9 + 1);
      *((_DWORD *)a2 + 2) = v8;
      return result;
    }
  }
  return 0;
}
