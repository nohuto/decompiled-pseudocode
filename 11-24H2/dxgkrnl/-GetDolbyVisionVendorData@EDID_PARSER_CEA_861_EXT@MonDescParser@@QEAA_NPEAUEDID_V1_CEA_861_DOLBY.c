/*
 * XREFs of ?GetDolbyVisionVendorData@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NPEAUEDID_V1_CEA_861_DOLBY_VISION_DATABLOCK@@@Z @ 0x1400985F0
 * Callers:
 *     ?GetDolbyVisionVendorDataBlock@EDID_PARSER@MonDescParser@@QEBA_NPEAUEDID_V1_CEA_861_DOLBY_VISION_DATABLOCK@@@Z @ 0x140098980 (-GetDolbyVisionVendorDataBlock@EDID_PARSER@MonDescParser@@QEBA_NPEAUEDID_V1_CEA_861_DOLBY_VISION.c)
 * Callees:
 *     ?GetDataBlock@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NIPEAPEAU_EDID_V1_CEA_861_DATA_HEADER@@@Z @ 0x140098554 (-GetDataBlock@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NIPEAPEAU_EDID_V1_CEA_861_DATA_HEADER@.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 */

char __fastcall MonDescParser::EDID_PARSER_CEA_861_EXT::GetDolbyVisionVendorData(
        MonDescParser::EDID_PARSER_CEA_861_EXT *this,
        struct EDID_V1_CEA_861_DOLBY_VISION_DATABLOCK *a2)
{
  char v2; // bl
  int v3; // esi
  struct _EDID_V1_CEA_861_DATA_HEADER *v6; // r9
  char v7; // r8
  unsigned __int8 v8; // dl
  char v9; // al
  size_t v10; // r8
  struct _EDID_V1_CEA_861_DATA_HEADER *v12; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  v3 = 0;
  if ( !*((_DWORD *)this + 2) )
    return v2;
  while ( 1 )
  {
    v12 = 0LL;
    if ( !MonDescParser::EDID_PARSER_CEA_861_EXT::GetDataBlock(this, v3, &v12) )
      goto LABEL_23;
    v6 = v12;
    v7 = *(_BYTE *)v12;
    if ( (*(_BYTE *)v12 & 0xE0) != 0xE0 )
      goto LABEL_23;
    if ( *((_BYTE *)v12 + 1) != 1 )
      goto LABEL_23;
    v8 = v7 & 0x1F;
    if ( (v7 & 0x1Fu) < 5 || (*((unsigned __int8 *)v12 + 2) | (*(unsigned __int16 *)((char *)v12 + 3) << 8)) != 0xD046 )
      goto LABEL_23;
    v9 = *((_BYTE *)v12 + 5) >> 5;
    if ( v9 == 1 )
    {
      if ( v2 )
        return 0;
      v2 = *((_BYTE *)v12 + 5) >> 5;
      if ( v8 == 11 && (*((_BYTE *)v12 + 8) & 3) == v2 )
      {
        *(_QWORD *)((char *)a2 + 1) = *(_QWORD *)((char *)v12 + 5);
        *(_WORD *)((char *)a2 + 9) = *(_WORD *)((char *)v6 + 13);
        *(_BYTE *)a2 = v2;
      }
      goto LABEL_23;
    }
    if ( v9 != 2 )
      break;
    if ( v2 )
      return 0;
    v2 = 1;
    if ( v8 == 11 )
    {
      *(_DWORD *)((char *)a2 + 1) = *(_DWORD *)((char *)v12 + 5);
      *(_WORD *)((char *)a2 + 5) = *(_WORD *)((char *)v6 + 9);
      *((_BYTE *)a2 + 7) = *((_BYTE *)v6 + 11);
      *(_BYTE *)a2 = 2;
    }
LABEL_23:
    if ( (unsigned int)++v3 >= *((_DWORD *)this + 2) )
      return v2;
  }
  if ( v9 != 4 )
    goto LABEL_23;
  if ( !v2 )
  {
    v2 = 1;
    if ( v8 == 9 || v8 >= 0x13u )
    {
      v10 = (*(_BYTE *)v12 & 0x1F) - 4LL;
      if ( v10 > 0xF )
        v10 = 15LL;
      memmove((char *)a2 + 1, (char *)v12 + 5, v10);
      *(_BYTE *)a2 = 4;
    }
    goto LABEL_23;
  }
  return 0;
}
