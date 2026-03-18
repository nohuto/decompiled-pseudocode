/*
 * XREFs of ?GetDolbyVisionVendorData@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NPEAU_EDID_V1_CEA_861_DOLBY_VISION_VENDOR_SPECIFIC_V1@@PEAU_EDID_V1_CEA_861_DOLBY_VISION_VENDOR_SPECIFIC_V2@@PEAI@Z @ 0x140096340
 * Callers:
 *     ?GetDolbyVisionVendorDataBlock@EDID_PARSER@MonDescParser@@QEBA_NPEAU_EDID_V1_CEA_861_DOLBY_VISION_VENDOR_SPECIFIC_V1@@PEAU_EDID_V1_CEA_861_DOLBY_VISION_VENDOR_SPECIFIC_V2@@PEAI@Z @ 0x1400966FC (-GetDolbyVisionVendorDataBlock@EDID_PARSER@MonDescParser@@QEBA_NPEAU_EDID_V1_CEA_861_DOLBY_VISIO.c)
 * Callees:
 *     ?GetDataBlock@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NIPEAPEAU_EDID_V1_CEA_861_DATA_HEADER@@@Z @ 0x1400960EC (-GetDataBlock@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NIPEAPEAU_EDID_V1_CEA_861_DATA_HEADER@.c)
 */

char __fastcall MonDescParser::EDID_PARSER_CEA_861_EXT::GetDolbyVisionVendorData(
        MonDescParser::EDID_PARSER_CEA_861_EXT *this,
        struct _EDID_V1_CEA_861_DOLBY_VISION_VENDOR_SPECIFIC_V1 *a2,
        struct _EDID_V1_CEA_861_DOLBY_VISION_VENDOR_SPECIFIC_V2 *a3,
        unsigned int *a4)
{
  unsigned int v4; // r14d
  unsigned int i; // r11d
  int v10; // r11d
  struct _EDID_V1_CEA_861_DATA_HEADER *v11; // rdx
  unsigned __int8 v12; // r8
  char v13; // cl
  __int16 v14; // cx
  struct _EDID_V1_CEA_861_DATA_HEADER *v16; // [rsp+40h] [rbp+8h] BYREF

  v4 = *((_DWORD *)this + 2);
  for ( i = 0; i < v4; i = v10 + 1 )
  {
    v16 = 0LL;
    if ( MonDescParser::EDID_PARSER_CEA_861_EXT::GetDataBlock(this, i, &v16) )
    {
      v11 = v16;
      if ( (*(_BYTE *)v16 & 0xE0) == 0xE0 && *((_BYTE *)v16 + 1) == 1 )
      {
        v12 = *(_BYTE *)v16 & 0x1F;
        if ( v12 >= 5u
          && (*((unsigned __int8 *)v16 + 2) | (*(unsigned __int16 *)((char *)v16 + 3) << 8)) == 0xD046
          && v12 == 11 )
        {
          v13 = *((_BYTE *)v16 + 5) >> 5;
          if ( v13 == 1 && (*((_BYTE *)v16 + 8) & 3) == 1 )
          {
            v14 = *(_WORD *)((char *)v16 + 13);
            *(_QWORD *)a2 = *(_QWORD *)((char *)v16 + 5);
            *((_WORD *)a2 + 4) = v14;
            *a4 = 1;
            return 1;
          }
          if ( v13 == 2 )
          {
            *(_DWORD *)a3 = *(_DWORD *)((char *)v16 + 5);
            *((_WORD *)a3 + 2) = *(_WORD *)((char *)v11 + 9);
            *((_BYTE *)a3 + 6) = *((_BYTE *)v11 + 11);
            *a4 = 2;
            return 1;
          }
        }
      }
    }
  }
  return 0;
}
