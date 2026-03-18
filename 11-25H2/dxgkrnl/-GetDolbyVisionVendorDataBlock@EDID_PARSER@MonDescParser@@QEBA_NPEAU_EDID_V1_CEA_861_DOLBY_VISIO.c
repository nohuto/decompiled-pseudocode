/*
 * XREFs of ?GetDolbyVisionVendorDataBlock@EDID_PARSER@MonDescParser@@QEBA_NPEAU_EDID_V1_CEA_861_DOLBY_VISION_VENDOR_SPECIFIC_V1@@PEAU_EDID_V1_CEA_861_DOLBY_VISION_VENDOR_SPECIFIC_V2@@PEAI@Z @ 0x1400966FC
 * Callers:
 *     ?EDID_V1_GetDolbyVisionCaps@@YAJKPEBEPEAUDISPLAY_DVLL_CAPS@@@Z @ 0x140094398 (-EDID_V1_GetDolbyVisionCaps@@YAJKPEBEPEAUDISPLAY_DVLL_CAPS@@@Z.c)
 * Callees:
 *     ?GetBlockType@EDID_PARSER@MonDescParser@@QEBA?AW4EDID_V1_BLOCK_TYPE@2@I@Z @ 0x14003DF84 (-GetBlockType@EDID_PARSER@MonDescParser@@QEBA-AW4EDID_V1_BLOCK_TYPE@2@I@Z.c)
 *     ?GetIterAtElement@EDID_PARSER@MonDescParser@@AEBAPEBQEAT_EDID_V1_BLOCK@@I@Z @ 0x14003DFB0 (-GetIterAtElement@EDID_PARSER@MonDescParser@@AEBAPEBQEAT_EDID_V1_BLOCK@@I@Z.c)
 *     ?ChangeCEABlock@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAAXPEAT_EDID_V1_BLOCK@@@Z @ 0x140059944 (-ChangeCEABlock@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAAXPEAT_EDID_V1_BLOCK@@@Z.c)
 *     ?GetDolbyVisionVendorData@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NPEAU_EDID_V1_CEA_861_DOLBY_VISION_VENDOR_SPECIFIC_V1@@PEAU_EDID_V1_CEA_861_DOLBY_VISION_VENDOR_SPECIFIC_V2@@PEAI@Z @ 0x140096340 (-GetDolbyVisionVendorData@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NPEAU_EDID_V1_CEA_861_DOLB.c)
 */

char __fastcall MonDescParser::EDID_PARSER::GetDolbyVisionVendorDataBlock(
        MonDescParser::EDID_PARSER *this,
        struct _EDID_V1_CEA_861_DOLBY_VISION_VENDOR_SPECIFIC_V1 *a2,
        struct _EDID_V1_CEA_861_DOLBY_VISION_VENDOR_SPECIFIC_V2 *a3,
        unsigned int *a4)
{
  unsigned int i; // ebx
  union _EDID_V1_BLOCK **IterAtElement; // rax
  _BYTE v11[24]; // [rsp+20h] [rbp-18h] BYREF

  for ( i = 0; i < *((_DWORD *)this + 20); ++i )
  {
    if ( (unsigned int)MonDescParser::EDID_PARSER::GetBlockType(this, i) == 2 )
    {
      IterAtElement = (union _EDID_V1_BLOCK **)MonDescParser::EDID_PARSER::GetIterAtElement(this, i);
      MonDescParser::EDID_PARSER_CEA_861_EXT::ChangeCEABlock(
        (MonDescParser::EDID_PARSER_CEA_861_EXT *)v11,
        *IterAtElement);
      if ( MonDescParser::EDID_PARSER_CEA_861_EXT::GetDolbyVisionVendorData(
             (MonDescParser::EDID_PARSER_CEA_861_EXT *)v11,
             a2,
             a3,
             a4) )
      {
        return 1;
      }
    }
  }
  return 0;
}
