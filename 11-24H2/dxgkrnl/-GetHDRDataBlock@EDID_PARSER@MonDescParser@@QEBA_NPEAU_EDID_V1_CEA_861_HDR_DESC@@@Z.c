/*
 * XREFs of ?GetHDRDataBlock@EDID_PARSER@MonDescParser@@QEBA_NPEAU_EDID_V1_CEA_861_HDR_DESC@@@Z @ 0x14003BC4C
 * Callers:
 *     ?EDID_V1_GetHDRCaps@@YAJKPEBEPEAUDISPLAY_HDR_CAPS@@@Z @ 0x140063FAC (-EDID_V1_GetHDRCaps@@YAJKPEBEPEAUDISPLAY_HDR_CAPS@@@Z.c)
 * Callees:
 *     ?GetBlockType@EDID_PARSER@MonDescParser@@QEBA?AW4EDID_V1_BLOCK_TYPE@2@I@Z @ 0x14003D944 (-GetBlockType@EDID_PARSER@MonDescParser@@QEBA-AW4EDID_V1_BLOCK_TYPE@2@I@Z.c)
 *     ?GetIterAtElement@EDID_PARSER@MonDescParser@@AEBAPEBQEAT_EDID_V1_BLOCK@@I@Z @ 0x14003D970 (-GetIterAtElement@EDID_PARSER@MonDescParser@@AEBAPEBQEAT_EDID_V1_BLOCK@@I@Z.c)
 *     ?ChangeCEABlock@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAAXPEAT_EDID_V1_BLOCK@@@Z @ 0x140059404 (-ChangeCEABlock@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAAXPEAT_EDID_V1_BLOCK@@@Z.c)
 *     ?GetHDRData@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NPEAU_EDID_V1_CEA_861_HDR_DESC@@@Z @ 0x140098754 (-GetHDRData@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NPEAU_EDID_V1_CEA_861_HDR_DESC@@@Z.c)
 */

char __fastcall MonDescParser::EDID_PARSER::GetHDRDataBlock(
        MonDescParser::EDID_PARSER *this,
        struct _EDID_V1_CEA_861_HDR_DESC *a2)
{
  unsigned int i; // ebx
  union _EDID_V1_BLOCK **IterAtElement; // rax
  _BYTE v7[24]; // [rsp+20h] [rbp-18h] BYREF

  for ( i = 0; i < *((_DWORD *)this + 20); ++i )
  {
    if ( (unsigned int)MonDescParser::EDID_PARSER::GetBlockType(this, i) == 2 )
    {
      IterAtElement = (union _EDID_V1_BLOCK **)MonDescParser::EDID_PARSER::GetIterAtElement(this, i);
      MonDescParser::EDID_PARSER_CEA_861_EXT::ChangeCEABlock(
        (MonDescParser::EDID_PARSER_CEA_861_EXT *)v7,
        *IterAtElement);
      if ( MonDescParser::EDID_PARSER_CEA_861_EXT::GetHDRData((MonDescParser::EDID_PARSER_CEA_861_EXT *)v7, a2) )
        return 1;
    }
  }
  return 0;
}
