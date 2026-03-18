/*
 * XREFs of ?GetMSFTDisplayVendorDataBlock@EDID_PARSER@MonDescParser@@QEBA_NPEAU_EDID_V1_CEA_861_MSFT_DISPLAY_VENDOR_SPECIFIC_DESC@@@Z @ 0x14003BAD4
 * Callers:
 *     ?EDID_V1_GetDisplayPrimaryUse@@YAJKPEBEPEAW4DISPLAY_USE_CASE@@@Z @ 0x14005A5C4 (-EDID_V1_GetDisplayPrimaryUse@@YAJKPEBEPEAW4DISPLAY_USE_CASE@@@Z.c)
 *     ?EDID_V1_GetContainerID@@YAJKPEBEPEAU_GUID@@@Z @ 0x140096754 (-EDID_V1_GetContainerID@@YAJKPEBEPEAU_GUID@@@Z.c)
 *     ?EDID_V1_GetDisplayIsForDesktopUsage@@YAJKPEBEPEA_N@Z @ 0x14009680C (-EDID_V1_GetDisplayIsForDesktopUsage@@YAJKPEBEPEA_N@Z.c)
 *     ?EDID_V1_GetDisplayIsMsftOnlyPrimaryUse@@YAJKPEBEPEA_N@Z @ 0x1400968B0 (-EDID_V1_GetDisplayIsMsftOnlyPrimaryUse@@YAJKPEBEPEA_N@Z.c)
 * Callees:
 *     ?GetBlockType@EDID_PARSER@MonDescParser@@QEBA?AW4EDID_V1_BLOCK_TYPE@2@I@Z @ 0x14003D944 (-GetBlockType@EDID_PARSER@MonDescParser@@QEBA-AW4EDID_V1_BLOCK_TYPE@2@I@Z.c)
 *     ?GetIterAtElement@EDID_PARSER@MonDescParser@@AEBAPEBQEAT_EDID_V1_BLOCK@@I@Z @ 0x14003D970 (-GetIterAtElement@EDID_PARSER@MonDescParser@@AEBAPEBQEAT_EDID_V1_BLOCK@@I@Z.c)
 *     ?GetMsftDisplayVendorData@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NPEAU_EDID_V1_CEA_861_MSFT_DISPLAY_VENDOR_SPECIFIC_DESC@@@Z @ 0x1400638B0 (-GetMsftDisplayVendorData@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NPEAU_EDID_V1_CEA_861_MSFT.c)
 */

char __fastcall MonDescParser::EDID_PARSER::GetMSFTDisplayVendorDataBlock(
        MonDescParser::EDID_PARSER *this,
        struct _EDID_V1_CEA_861_MSFT_DISPLAY_VENDOR_SPECIFIC_DESC *a2)
{
  unsigned int v2; // esi
  unsigned int i; // ebx
  union _EDID_V1_BLOCK *const *IterAtElement; // rax
  int v7; // r8d
  union _EDID_V1_BLOCK *v8; // r10
  unsigned int v9; // edx
  unsigned int v10; // r9d
  unsigned int v11; // edx
  union _EDID_V1_BLOCK *v13; // [rsp+20h] [rbp-18h] BYREF
  int v14; // [rsp+28h] [rbp-10h]

  v2 = *((_DWORD *)this + 20);
  for ( i = 0; i < v2; ++i )
  {
    if ( (unsigned int)MonDescParser::EDID_PARSER::GetBlockType(this, i) == 2 )
    {
      IterAtElement = MonDescParser::EDID_PARSER::GetIterAtElement(this, i);
      v7 = 0;
      v8 = *IterAtElement;
      v13 = v8;
      v9 = 4;
      v10 = *((unsigned __int8 *)v8 + 2);
      while ( !(_BYTE)v10 || v9 < v10 )
      {
        if ( v9 >= 0x7F )
          break;
        v11 = (*((_BYTE *)v8 + v9) & 0x1F) + v9;
        if ( v11 >= 0x7F )
          break;
        ++v7;
        v9 = v11 + 1;
      }
      v14 = v7;
      if ( MonDescParser::EDID_PARSER_CEA_861_EXT::GetMsftDisplayVendorData(
             (MonDescParser::EDID_PARSER_CEA_861_EXT *)&v13,
             a2) )
      {
        return 1;
      }
    }
  }
  return 0;
}
