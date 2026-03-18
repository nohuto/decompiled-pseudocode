/*
 * XREFs of ?GetDolbyVisionVendorData@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NPEAUEDID_V1_CEA_861_DOLBY_VISION_DATABLOCK@@@Z @ 0x140096188
 * Callers:
 *     ?GetDolbyVisionVendorDataBlock@EDID_PARSER@MonDescParser@@QEBA_NPEAUEDID_V1_CEA_861_DOLBY_VISION_DATABLOCK@@@Z @ 0x14009666C (-GetDolbyVisionVendorDataBlock@EDID_PARSER@MonDescParser@@QEBA_NPEAUEDID_V1_CEA_861_DOLBY_VISION.c)
 * Callees:
 *     Feature_DolbyVisionV1Fix__private_IsEnabledDeviceUsageNoInline @ 0x140090490 (Feature_DolbyVisionV1Fix__private_IsEnabledDeviceUsageNoInline.c)
 *     ?GetDataBlock@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NIPEAPEAU_EDID_V1_CEA_861_DATA_HEADER@@@Z @ 0x1400960EC (-GetDataBlock@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NIPEAPEAU_EDID_V1_CEA_861_DATA_HEADER@.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 */

char __fastcall MonDescParser::EDID_PARSER_CEA_861_EXT::GetDolbyVisionVendorData(
        MonDescParser::EDID_PARSER_CEA_861_EXT *this,
        struct EDID_V1_CEA_861_DOLBY_VISION_DATABLOCK *a2)
{
  char v2; // di
  int v3; // ebp
  struct _EDID_V1_CEA_861_DATA_HEADER *v6; // rbx
  char v7; // dl
  unsigned __int8 v8; // r8
  _BYTE *v9; // rsi
  char v10; // al
  int IsEnabledDeviceUsageNoInline; // eax
  char v12; // al
  bool v13; // zf
  char v14; // al
  size_t v15; // r8
  struct _EDID_V1_CEA_861_DATA_HEADER *v17; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0;
  v3 = 0;
  if ( !*((_DWORD *)this + 2) )
    return v2;
  while ( 1 )
  {
    v17 = 0LL;
    if ( !MonDescParser::EDID_PARSER_CEA_861_EXT::GetDataBlock(this, v3, &v17) )
      goto LABEL_31;
    v6 = v17;
    v7 = *(_BYTE *)v17;
    if ( (*(_BYTE *)v17 & 0xE0) != 0xE0 )
      goto LABEL_31;
    if ( *((_BYTE *)v17 + 1) != 1 )
      goto LABEL_31;
    v8 = v7 & 0x1F;
    if ( (v7 & 0x1Fu) < 5 || (*((unsigned __int8 *)v17 + 2) | (*(unsigned __int16 *)((char *)v17 + 3) << 8)) != 0xD046 )
      goto LABEL_31;
    v9 = (char *)v17 + 5;
    v10 = *((_BYTE *)v17 + 5) >> 5;
    if ( v10 == 1 )
    {
      if ( v2 )
        return 0;
      v2 = *((_BYTE *)v17 + 5) >> 5;
      IsEnabledDeviceUsageNoInline = Feature_DolbyVisionV1Fix__private_IsEnabledDeviceUsageNoInline();
      v7 = *(_BYTE *)v6;
      v13 = IsEnabledDeviceUsageNoInline == 0;
      v12 = *(_BYTE *)v6;
      if ( v13 )
      {
        v13 = (v12 & 0x1F) == 4;
        goto LABEL_16;
      }
LABEL_15:
      v13 = (v12 & 0x1F) == 11;
LABEL_16:
      if ( v13 )
        goto LABEL_22;
      goto LABEL_31;
    }
    if ( v10 == 2 )
    {
      if ( v2 )
        return 0;
      v2 = 1;
      if ( !(unsigned int)Feature_DolbyVisionV1Fix__private_IsEnabledDeviceUsageNoInline() )
        goto LABEL_31;
      v7 = *(_BYTE *)v6;
      v12 = *(_BYTE *)v6;
      goto LABEL_15;
    }
    if ( v10 != 4 )
      goto LABEL_31;
    if ( v2 )
      return 0;
    v2 = 1;
    if ( v8 == 9 || v8 >= 0x13u )
    {
LABEL_22:
      v14 = *v9 >> 5;
      switch ( v14 )
      {
        case 1:
          if ( (*((_BYTE *)v6 + 8) & 3) == 1 )
          {
            *(_QWORD *)((char *)a2 + 1) = *(_QWORD *)v9;
            *(_WORD *)((char *)a2 + 9) = *(_WORD *)((char *)v6 + 13);
            *(_BYTE *)a2 = 1;
          }
          break;
        case 2:
          *(_DWORD *)((char *)a2 + 1) = *(_DWORD *)v9;
          *(_WORD *)((char *)a2 + 5) = *(_WORD *)((char *)v6 + 9);
          *((_BYTE *)a2 + 7) = *((_BYTE *)v6 + 11);
          *(_BYTE *)a2 = 2;
          break;
        case 4:
          v15 = (v7 & 0x1F) - 4LL;
          if ( v15 > 0xF )
            v15 = 15LL;
          memmove((char *)a2 + 1, (char *)v6 + 5, v15);
          *(_BYTE *)a2 = 4;
          break;
      }
    }
LABEL_31:
    if ( (unsigned int)++v3 >= *((_DWORD *)this + 2) )
      return v2;
  }
}
