/*
 * XREFs of ?EDID_V1_GetColorimetryData@@YAJKPEBEPEAUDISPLAY_COLORIMETRY_DATA@@@Z @ 0x14003B8D4
 * Callers:
 *     ?GetColorimetryData@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAUDISPLAY_COLORIMETRY_DATA@@AEAUDISPLAY_COLOR_DEPTHS@@@Z @ 0x14027FDA0 (-GetColorimetryData@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAUDISPLAY_COLORIMETRY_DATA@@AEAUDIS.c)
 * Callees:
 *     ?Initialize@EDID_PARSER@MonDescParser@@QEAAJPEAEI@Z @ 0x14003C774 (-Initialize@EDID_PARSER@MonDescParser@@QEAAJPEAEI@Z.c)
 *     ?GetBlockType@EDID_PARSER@MonDescParser@@QEBA?AW4EDID_V1_BLOCK_TYPE@2@I@Z @ 0x14003D944 (-GetBlockType@EDID_PARSER@MonDescParser@@QEBA-AW4EDID_V1_BLOCK_TYPE@2@I@Z.c)
 *     ?GetIterAtElement@EDID_PARSER@MonDescParser@@AEBAPEBQEAT_EDID_V1_BLOCK@@I@Z @ 0x14003D970 (-GetIterAtElement@EDID_PARSER@MonDescParser@@AEBAPEBQEAT_EDID_V1_BLOCK@@I@Z.c)
 *     ?ChangeCEABlock@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAAXPEAT_EDID_V1_BLOCK@@@Z @ 0x140059404 (-ChangeCEABlock@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAAXPEAT_EDID_V1_BLOCK@@@Z.c)
 *     ?GetColorimetryData@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NPEAU_EDID_V1_CEA_861_COLORIMETRY_DESC@@@Z @ 0x1400984D0 (-GetColorimetryData@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NPEAU_EDID_V1_CEA_861_COLORIMETR.c)
 */

__int64 __fastcall EDID_V1_GetColorimetryData(
        unsigned int a1,
        unsigned __int8 *a2,
        struct DISPLAY_COLORIMETRY_DATA *a3)
{
  __int64 result; // rax
  unsigned int i; // ebx
  union _EDID_V1_BLOCK **IterAtElement; // rax
  unsigned __int8 v7; // al
  bool v8; // cl
  _BYTE v9[16]; // [rsp+20h] [rbp-78h] BYREF
  _BYTE v10[80]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v11; // [rsp+80h] [rbp-18h]
  __int16 v12; // [rsp+A8h] [rbp+10h] BYREF

  if ( !a2 || !a1 || !a3 )
    return 3221225485LL;
  v11 = 0LL;
  result = MonDescParser::EDID_PARSER::Initialize((MonDescParser::EDID_PARSER *)v10, a2, a1);
  if ( (int)result >= 0 )
  {
    v12 = 0;
    for ( i = 0; i < (unsigned int)v11; ++i )
    {
      if ( (unsigned int)MonDescParser::EDID_PARSER::GetBlockType(v10, i) == 2 )
      {
        IterAtElement = (union _EDID_V1_BLOCK **)MonDescParser::EDID_PARSER::GetIterAtElement(
                                                   (MonDescParser::EDID_PARSER *)v10,
                                                   i);
        MonDescParser::EDID_PARSER_CEA_861_EXT::ChangeCEABlock(
          (MonDescParser::EDID_PARSER_CEA_861_EXT *)v9,
          *IterAtElement);
        if ( MonDescParser::EDID_PARSER_CEA_861_EXT::GetColorimetryData(
               (MonDescParser::EDID_PARSER_CEA_861_EXT *)v9,
               (struct _EDID_V1_CEA_861_COLORIMETRY_DESC *)&v12) )
        {
          v7 = v12;
          *(_BYTE *)a3 = v12 & 1;
          *((_BYTE *)a3 + 1) = (v7 & 2) != 0;
          *((_BYTE *)a3 + 2) = (v7 & 4) != 0;
          *((_BYTE *)a3 + 3) = (v7 & 8) != 0;
          *((_BYTE *)a3 + 4) = (v7 & 0x10) != 0;
          *((_BYTE *)a3 + 5) = (v7 & 0x20) != 0;
          v8 = (v7 & 0x40) != 0;
          *((_BYTE *)a3 + 7) = v7 >> 7;
          result = 0LL;
          *((_BYTE *)a3 + 6) = v8;
          return result;
        }
      }
    }
    return 3221226021LL;
  }
  return result;
}
