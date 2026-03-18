/*
 * XREFs of ?GetModeCounts@EDID_MODES@MonDescParser@@QEAAJPEAG00PEAPEBU__EDID_V1_MONDESC_EXTRA_STANDARD_TIMINGS@@00@Z @ 0x14003CE98
 * Callers:
 *     ?ObtainSupportedModes@EDID_MODES@MonDescParser@@QEAAJPEAG0PEAU_VideoModeDescriptor@@@Z @ 0x14003C948 (-ObtainSupportedModes@EDID_MODES@MonDescParser@@QEAAJPEAG0PEAU_VideoModeDescriptor@@@Z.c)
 * Callees:
 *     ?Is18ByteDetTim@EDID_PARSER@MonDescParser@@QEBA_NH@Z @ 0x14003D148 (-Is18ByteDetTim@EDID_PARSER@MonDescParser@@QEBA_NH@Z.c)
 *     ?GetIterAtElement@EDID_PARSER@MonDescParser@@AEAAPEAPEAT_EDID_V1_BLOCK@@I@Z @ 0x14003D184 (-GetIterAtElement@EDID_PARSER@MonDescParser@@AEAAPEAPEAT_EDID_V1_BLOCK@@I@Z.c)
 *     ?DenseOnesBitCount@MonDescParser@@YAEE@Z @ 0x14003D928 (-DenseOnesBitCount@MonDescParser@@YAEE@Z.c)
 *     ?GetBlockType@EDID_PARSER@MonDescParser@@QEBA?AW4EDID_V1_BLOCK_TYPE@2@I@Z @ 0x14003D944 (-GetBlockType@EDID_PARSER@MonDescParser@@QEBA-AW4EDID_V1_BLOCK_TYPE@2@I@Z.c)
 *     ?ChangeCEABlock@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAAXPEAT_EDID_V1_BLOCK@@@Z @ 0x140059404 (-ChangeCEABlock@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAAXPEAT_EDID_V1_BLOCK@@@Z.c)
 *     ?IsUnused@EDID_PARSER_STANDARD_TIMING@MonDescParser@@QEBA_NXZ @ 0x140064354 (-IsUnused@EDID_PARSER_STANDARD_TIMING@MonDescParser@@QEBA_NXZ.c)
 *     ?GetDataBlock@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NIPEAPEAU_EDID_V1_CEA_861_DATA_HEADER@@@Z @ 0x140098554 (-GetDataBlock@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NIPEAPEAU_EDID_V1_CEA_861_DATA_HEADER@.c)
 *     ?GetLocalNumOfDetTim@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAAEXZ @ 0x140098914 (-GetLocalNumOfDetTim@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAAEXZ.c)
 */

__int64 __fastcall MonDescParser::EDID_MODES::GetModeCounts(
        MonDescParser::EDID_PARSER **this,
        unsigned __int16 *a2,
        unsigned __int16 *a3,
        unsigned __int16 *a4,
        const struct __EDID_V1_MONDESC_EXTRA_STANDARD_TIMINGS **a5,
        struct _EDID_V1_CEA_861_DATA_HEADER *a6,
        unsigned __int16 *a7)
{
  MonDescParser::EDID_PARSER *v7; // r14
  __int64 v13; // rdx
  __int64 v14; // r13
  MonDescParser *v15; // rcx
  unsigned __int8 v16; // dl
  unsigned __int8 v17; // al
  unsigned __int8 v18; // r11
  __int16 v19; // r10
  __int64 v20; // r10
  unsigned __int16 v21; // dx
  unsigned int *v22; // r8
  __int64 v23; // r9
  unsigned __int8 *v24; // rcx
  unsigned int v25; // eax
  __int16 v26; // dx
  MonDescParser::EDID_PARSER *v27; // r9
  unsigned __int16 i; // r8
  __int64 v29; // rcx
  __int64 v30; // rax
  const struct __EDID_V1_MONDESC_EXTRA_STANDARD_TIMINGS *v31; // r8
  unsigned __int16 j; // cx
  __int16 v33; // dx
  MonDescParser::EDID_PARSER *v34; // rbx
  int v35; // r10d
  bool v36; // al
  unsigned __int8 v37; // r9
  int v38; // r10d
  int v39; // r11d
  unsigned __int8 v40; // dl
  unsigned __int16 *v41; // rbx
  MonDescParser::EDID_PARSER *v42; // r10
  unsigned int v43; // edi
  MonDescParser::EDID_PARSER *v44; // r10
  union _EDID_V1_BLOCK **IterAtElement; // rax
  unsigned __int8 LocalNumOfDetTim; // al
  unsigned int v47; // esi
  unsigned int v48; // r11d
  int v49; // r11d
  __int64 v51; // [rsp+20h] [rbp-10h] BYREF
  unsigned int v52; // [rsp+28h] [rbp-8h] BYREF
  unsigned __int16 v53; // [rsp+80h] [rbp+50h]

  v7 = *this;
  v14 = (__int64)*MonDescParser::EDID_PARSER::GetIterAtElement(*this, 0);
  if ( a5 )
    *a5 = (const struct __EDID_V1_MONDESC_EXTRA_STANDARD_TIMINGS *)(v13 & (unsigned __int64)*a5);
  if ( a2 )
  {
    v53 = *(_WORD *)(*(_QWORD *)v7 + 35LL);
    MonDescParser::DenseOnesBitCount((MonDescParser *)v53, v13);
    LOBYTE(v15) = HIBYTE(v53);
    v17 = MonDescParser::DenseOnesBitCount(v15, v16);
    *a2 = (v18 >> 7) + v17 + v19;
  }
  if ( a3 )
  {
    v20 = *(_QWORD *)v7;
    v21 = 0;
    *a3 = 0;
    do
    {
      v22 = &v52;
      v23 = 2LL;
      v51 = v20 + 2 * (v21 + 19LL);
      v24 = (unsigned __int8 *)(v20 + 18);
      do
      {
        v25 = *v24++;
        *v22++ = v25;
        --v23;
      }
      while ( v23 );
      if ( MonDescParser::EDID_PARSER_STANDARD_TIMING::IsUnused((MonDescParser::EDID_PARSER_STANDARD_TIMING *)&v51) )
        break;
      ++*a3;
      v21 = v26 + 1;
    }
    while ( v21 < 8u );
  }
  if ( a4 )
    *a4 = 0;
  v27 = *this;
  for ( i = 0; i < 4u; ++i )
  {
    v29 = *(_QWORD *)v27;
    v30 = i + 3LL;
    if ( !*(_WORD *)(*(_QWORD *)v27 + 18 * v30) && !*(_BYTE *)(v29 + 18 * v30 + 2) )
    {
      if ( *(_BYTE *)(v29 + 18 * v30 + 4) )
      {
        if ( *(_BYTE *)(v29 + 18 * v30 + 3) != 0xFD )
          continue;
      }
      else if ( *(_BYTE *)(v29 + 18 * v30 + 3) == 16 )
      {
        continue;
      }
      if ( *(_BYTE *)(v29 + 18LL * i + 57) == 0xFA )
      {
        v31 = (const struct __EDID_V1_MONDESC_EXTRA_STANDARD_TIMINGS *)(v14 + 59 + 18LL * i);
        if ( a4 )
        {
          for ( j = 0; j < 6u; ++j )
          {
            v33 = *((_WORD *)v31 + j);
            if ( v33 == 257 )
              break;
            if ( !v33 )
              break;
            ++*a4;
          }
        }
        if ( a5 )
          *a5 = v31;
        break;
      }
    }
  }
  if ( a6 )
  {
    v34 = *this;
    v35 = 0;
    do
    {
      v36 = MonDescParser::EDID_PARSER::Is18ByteDetTim(v34, v35);
      v40 = v37 + 1;
      if ( !v36 )
        v40 = v37;
      v35 = v38 + 1;
    }
    while ( v35 < v39 );
    *(_WORD *)a6 = v40;
  }
  v41 = a7;
  if ( a7 )
  {
    v42 = *this;
    v43 = 0;
    *a7 = 0;
    if ( *((_DWORD *)v42 + 20) )
    {
      do
      {
        if ( (unsigned int)MonDescParser::EDID_PARSER::GetBlockType(v42, v43) == 2 )
        {
          IterAtElement = MonDescParser::EDID_PARSER::GetIterAtElement(v44, v43);
          MonDescParser::EDID_PARSER_CEA_861_EXT::ChangeCEABlock(
            (MonDescParser::EDID_PARSER_CEA_861_EXT *)&v51,
            *IterAtElement);
          LocalNumOfDetTim = MonDescParser::EDID_PARSER_CEA_861_EXT::GetLocalNumOfDetTim((MonDescParser::EDID_PARSER_CEA_861_EXT *)&v51);
          v47 = v52;
          v48 = 0;
          *v41 += LocalNumOfDetTim;
          if ( v47 )
          {
            do
            {
              a6 = 0LL;
              if ( MonDescParser::EDID_PARSER_CEA_861_EXT::GetDataBlock(
                     (MonDescParser::EDID_PARSER_CEA_861_EXT *)&v51,
                     v48,
                     &a6)
                && (*(_BYTE *)a6 & 0xE0) == 0x40 )
              {
                *v41 += *(_BYTE *)a6 & 0x1F;
              }
              v48 = v49 + 1;
            }
            while ( v48 < v47 );
          }
        }
        v42 = *this;
        ++v43;
      }
      while ( v43 < *((_DWORD *)*this + 20) );
    }
  }
  return 0LL;
}
