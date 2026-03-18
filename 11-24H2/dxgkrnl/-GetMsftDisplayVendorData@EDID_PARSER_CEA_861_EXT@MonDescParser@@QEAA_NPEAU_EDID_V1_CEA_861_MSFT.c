/*
 * XREFs of ?GetMsftDisplayVendorData@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NPEAU_EDID_V1_CEA_861_MSFT_DISPLAY_VENDOR_SPECIFIC_DESC@@@Z @ 0x1400638B0
 * Callers:
 *     ?GetMSFTDisplayVendorDataBlock@EDID_PARSER@MonDescParser@@QEBA_NPEAU_EDID_V1_CEA_861_MSFT_DISPLAY_VENDOR_SPECIFIC_DESC@@@Z @ 0x14003BAD4 (-GetMSFTDisplayVendorDataBlock@EDID_PARSER@MonDescParser@@QEBA_NPEAU_EDID_V1_CEA_861_MSFT_DISPLA.c)
 * Callees:
 *     ?GetDataBlock@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NIPEAPEAU_EDID_V1_CEA_861_DATA_HEADER@@@Z @ 0x140098554 (-GetDataBlock@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NIPEAPEAU_EDID_V1_CEA_861_DATA_HEADER@.c)
 */

bool __fastcall MonDescParser::EDID_PARSER_CEA_861_EXT::GetMsftDisplayVendorData(
        MonDescParser::EDID_PARSER_CEA_861_EXT *this,
        struct _EDID_V1_CEA_861_MSFT_DISPLAY_VENDOR_SPECIFIC_DESC *a2)
{
  unsigned int v2; // esi
  unsigned int i; // r11d
  int v6; // r11d
  struct _EDID_V1_CEA_861_DATA_HEADER *v7; // rdx
  int v8; // ecx
  bool result; // al
  struct _EDID_V1_CEA_861_DATA_HEADER *v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_DWORD *)this + 2);
  for ( i = 0; i < v2; i = v6 + 1 )
  {
    v10 = 0LL;
    if ( MonDescParser::EDID_PARSER_CEA_861_EXT::GetDataBlock(this, i, &v10) )
    {
      v7 = v10;
      if ( (*(_BYTE *)v10 & 0xE0) == 0x60
        && (*(_BYTE *)v10 & 0x1F) == 0x15
        && (*(_DWORD *)((_BYTE *)v10 + 1) & 0xFFFFFF) == 0xCA125C )
      {
        v8 = *(_DWORD *)((char *)v10 + 17);
        result = 1;
        *(_OWORD *)a2 = *(_OWORD *)((char *)v10 + 1);
        *((_DWORD *)a2 + 4) = v8;
        *((_BYTE *)a2 + 20) = *((_BYTE *)v7 + 21);
        return result;
      }
    }
  }
  return 0;
}
