/*
 * XREFs of ?EDID_V1_GetColorDepths@@YAJKPEBEPEAUDISPLAY_COLOR_DEPTHS@@@Z @ 0x14003BCC0
 * Callers:
 *     ?GetColorimetryData@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAUDISPLAY_COLORIMETRY_DATA@@AEAUDISPLAY_COLOR_DEPTHS@@@Z @ 0x14027FDA0 (-GetColorimetryData@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAUDISPLAY_COLORIMETRY_DATA@@AEAUDIS.c)
 * Callees:
 *     ?Initialize@EDID_PARSER@MonDescParser@@QEAAJPEAEI@Z @ 0x14003C774 (-Initialize@EDID_PARSER@MonDescParser@@QEAAJPEAEI@Z.c)
 *     ?GetBlockType@EDID_PARSER@MonDescParser@@QEBA?AW4EDID_V1_BLOCK_TYPE@2@I@Z @ 0x14003D944 (-GetBlockType@EDID_PARSER@MonDescParser@@QEBA-AW4EDID_V1_BLOCK_TYPE@2@I@Z.c)
 *     ?GetIterAtElement@EDID_PARSER@MonDescParser@@AEBAPEBQEAT_EDID_V1_BLOCK@@I@Z @ 0x14003D970 (-GetIterAtElement@EDID_PARSER@MonDescParser@@AEBAPEBQEAT_EDID_V1_BLOCK@@I@Z.c)
 *     ?ChangeCEABlock@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAAXPEAT_EDID_V1_BLOCK@@@Z @ 0x140059404 (-ChangeCEABlock@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAAXPEAT_EDID_V1_BLOCK@@@Z.c)
 *     ?GetHdmiForum20VendorData@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NPEAU_EDID_V1_CEA_861_HDMI_FORUM_2_0_VENDOR_SPECIFIC_DESC@@@Z @ 0x1400987F4 (-GetHdmiForum20VendorData@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NPEAU_EDID_V1_CEA_861_HDMI.c)
 *     ?GetHdmiLLCVendorData@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NPEAU_EDID_V1_CEA_861_HDMI_LLC_1_4_VENDOR_SPECIFIC_DESC@@@Z @ 0x140098880 (-GetHdmiLLCVendorData@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NPEAU_EDID_V1_CEA_861_HDMI_LLC.c)
 */

__int64 __fastcall EDID_V1_GetColorDepths(unsigned int a1, unsigned __int8 *a2, struct DISPLAY_COLOR_DEPTHS *a3)
{
  __int64 result; // rax
  unsigned int v5; // edi
  union _EDID_V1_BLOCK **IterAtElement; // rax
  unsigned __int64 v7; // rcx
  int v8; // edx
  __int64 v9; // rax
  unsigned int i; // edi
  union _EDID_V1_BLOCK **v11; // rax
  __int64 v12; // rdx
  unsigned int v13; // eax
  int v14; // eax
  unsigned int v15; // r9d
  int v16; // eax
  unsigned __int64 v17; // [rsp+20h] [rbp-29h] BYREF
  int v18; // [rsp+28h] [rbp-21h]
  _BYTE v19[16]; // [rsp+30h] [rbp-19h] BYREF
  _QWORD v20[10]; // [rsp+40h] [rbp-9h] BYREF
  __int64 v21; // [rsp+90h] [rbp+47h]
  unsigned __int64 v22; // [rsp+B8h] [rbp+6Fh] BYREF

  if ( !a2 || !a1 || !a3 )
    return 3221225485LL;
  v21 = 0LL;
  result = MonDescParser::EDID_PARSER::Initialize((MonDescParser::EDID_PARSER *)v20, a2, a1);
  if ( (int)result < 0 )
    return result;
  *(_OWORD *)a3 = 0LL;
  *((_DWORD *)a3 + 4) = 0;
  v5 = 0;
  v17 = 0LL;
  v18 = 0;
  while ( v5 < (unsigned int)v21 )
  {
    if ( (unsigned int)MonDescParser::EDID_PARSER::GetBlockType(v20, v5) == 2 )
    {
      IterAtElement = (union _EDID_V1_BLOCK **)MonDescParser::EDID_PARSER::GetIterAtElement(
                                                 (MonDescParser::EDID_PARSER *)v20,
                                                 v5);
      MonDescParser::EDID_PARSER_CEA_861_EXT::ChangeCEABlock(
        (MonDescParser::EDID_PARSER_CEA_861_EXT *)v19,
        *IterAtElement);
      if ( MonDescParser::EDID_PARSER_CEA_861_EXT::GetHdmiLLCVendorData(
             (MonDescParser::EDID_PARSER_CEA_861_EXT *)v19,
             (struct _EDID_V1_CEA_861_HDMI_LLC_1_4_VENDOR_SPECIFIC_DESC *)&v17) )
      {
        v7 = v17;
        v8 = (v17 >> 42) & 0xC | (v17 >> 41) & 0x20 | 2;
        *(_DWORD *)a3 = v8;
        if ( (v7 & 0x80000000000LL) != 0 )
        {
          v9 = v20[0];
          *((_DWORD *)a3 + 1) = v8;
          *((_DWORD *)a3 + 2) = (*(_BYTE *)(v9 + 24) & 0x10) != 0 ? v8 : 0;
        }
        v22 = 0LL;
        for ( i = 0; i < (unsigned int)v21; ++i )
        {
          if ( (unsigned int)MonDescParser::EDID_PARSER::GetBlockType(v20, i) == 2 )
          {
            v11 = (union _EDID_V1_BLOCK **)MonDescParser::EDID_PARSER::GetIterAtElement(
                                             (MonDescParser::EDID_PARSER *)v20,
                                             i);
            MonDescParser::EDID_PARSER_CEA_861_EXT::ChangeCEABlock((MonDescParser::EDID_PARSER_CEA_861_EXT *)v19, *v11);
            if ( MonDescParser::EDID_PARSER_CEA_861_EXT::GetHdmiForum20VendorData(
                   (MonDescParser::EDID_PARSER_CEA_861_EXT *)v19,
                   (struct _EDID_V1_CEA_861_HDMI_FORUM_2_0_VENDOR_SPECIFIC_DESC *)&v22) )
            {
              *((_DWORD *)a3 + 3) |= (v22 >> 46) & 0xC | (v22 >> 45) & 0x20;
              return 0LL;
            }
          }
        }
        return 0LL;
      }
    }
    ++v5;
  }
  v12 = v20[0];
  v13 = *(unsigned __int8 *)(v20[0] + 20LL);
  if ( (v13 & 0x80u) == 0 )
    return 3221226021LL;
  if ( ((v13 >> 4) & 7) == 0 )
  {
LABEL_35:
    *(_DWORD *)a3 = 2;
    goto LABEL_36;
  }
  if ( ((v13 >> 4) & 7) != 1 )
  {
    if ( ((v13 >> 4) & 7) != 2 )
    {
      switch ( (v13 >> 4) & 7 )
      {
        case 3u:
          *(_DWORD *)a3 = 6;
          break;
        case 4u:
          *(_DWORD *)a3 = 14;
          break;
        case 5u:
          *(_DWORD *)a3 = 30;
          break;
        case 6u:
          *(_DWORD *)a3 = 62;
          break;
        case 7u:
          return 3221225485LL;
      }
      goto LABEL_36;
    }
    goto LABEL_35;
  }
  *(_DWORD *)a3 = 1;
LABEL_36:
  if ( ((*(unsigned __int8 *)(v12 + 24) >> 3) & 3) != 0 )
  {
    if ( ((*(unsigned __int8 *)(v12 + 24) >> 3) & 3) == 1 )
    {
      *((_DWORD *)a3 + 1) = *(_DWORD *)a3;
    }
    else
    {
      if ( ((*(unsigned __int8 *)(v12 + 24) >> 3) & 3) == 2 )
      {
        v14 = *(_DWORD *)a3;
      }
      else
      {
        if ( ((*(unsigned __int8 *)(v12 + 24) >> 3) & 3) != 3 )
          return 0LL;
        v14 = *(_DWORD *)a3;
        *((_DWORD *)a3 + 1) = *(_DWORD *)a3;
      }
      *((_DWORD *)a3 + 2) = v14;
    }
  }
  else
  {
    v15 = *(unsigned __int16 *)(v12 + 33);
    v17 = *(_QWORD *)(v12 + 25);
    if ( !(((unsigned __int8)v17 >> 6) | (4 * BYTE2(v17)))
      && !(((unsigned __int8)v17 >> 4) & 3 | (4 * BYTE3(v17)))
      && !(((unsigned __int8)v17 >> 2) & 3 | (4 * BYTE4(v17)))
      && !(v17 & 3 | (4 * (unsigned int)BYTE5(v17)))
      && !((BYTE1(v17) >> 6) | (4 * BYTE6(v17)))
      && !((BYTE1(v17) >> 4) & 3 | (4 * HIBYTE(v17)))
      && (BYTE1(v17) >> 2) & 3 | (4 * (unsigned __int8)v15)
      && BYTE1(v17) & 3 | (4 * (v15 >> 8)) )
    {
      v16 = *(_DWORD *)a3;
      *(_DWORD *)a3 = 0;
      *((_DWORD *)a3 + 4) = v16;
    }
  }
  return 0LL;
}
