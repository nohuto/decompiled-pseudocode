/*
 * XREFs of ?ObtainSupportedModes@EDID_MODES@MonDescParser@@QEAAJPEAG0PEAU_VideoModeDescriptor@@@Z @ 0x14003CF88
 * Callers:
 *     ?EDID_V1_GetMonitorModes@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@KPEBEPEAKPEAU_VideoModeDescriptor@@2@Z @ 0x14003C608 (-EDID_V1_GetMonitorModes@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@KPEBEPEAKPEAU_VideoModeDesc.c)
 * Callees:
 *     ?GetDetTimParser@EDID_PARSER@MonDescParser@@QEAA_NHAEAVEDID_PARSER_DETAILED_TIMING@2@_N@Z @ 0x14003D498 (-GetDetTimParser@EDID_PARSER@MonDescParser@@QEAA_NHAEAVEDID_PARSER_DETAILED_TIMING@2@_N@Z.c)
 *     ?GetModeCounts@EDID_MODES@MonDescParser@@QEAAJPEAG00PEAPEBU__EDID_V1_MONDESC_EXTRA_STANDARD_TIMINGS@@00@Z @ 0x14003D4D8 (-GetModeCounts@EDID_MODES@MonDescParser@@QEAAJPEAG00PEAPEBU__EDID_V1_MONDESC_EXTRA_STANDARD_TIMI.c)
 *     ?GetIterAtElement@EDID_PARSER@MonDescParser@@AEAAPEAPEAT_EDID_V1_BLOCK@@I@Z @ 0x14003D7C4 (-GetIterAtElement@EDID_PARSER@MonDescParser@@AEAAPEAPEAT_EDID_V1_BLOCK@@I@Z.c)
 *     ?ModeFromStandardTimingBlock@EDID_MODES@MonDescParser@@QEAAJAEAVEDID_PARSER_STANDARD_TIMING@2@EPEAU_VideoModeDescriptor@@@Z @ 0x14003D7F4 (-ModeFromStandardTimingBlock@EDID_MODES@MonDescParser@@QEAAJAEAVEDID_PARSER_STANDARD_TIMING@2@EP.c)
 *     ??$IndexOf@PEAU_VideoModeDescriptor@@U1@@MonDescParser@@YA_KPEAU_VideoModeDescriptor@@0AEAU1@@Z @ 0x14003DE14 (--$IndexOf@PEAU_VideoModeDescriptor@@U1@@MonDescParser@@YA_KPEAU_VideoModeDescriptor@@0AEAU1@@Z.c)
 *     ?GetBlockType@EDID_PARSER@MonDescParser@@QEBA?AW4EDID_V1_BLOCK_TYPE@2@I@Z @ 0x14003DF84 (-GetBlockType@EDID_PARSER@MonDescParser@@QEBA-AW4EDID_V1_BLOCK_TYPE@2@I@Z.c)
 *     ?ChangeCEABlock@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAAXPEAT_EDID_V1_BLOCK@@@Z @ 0x140059944 (-ChangeCEABlock@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAAXPEAT_EDID_V1_BLOCK@@@Z.c)
 *     ?ModeFromDetailedTimingBlock@EDID_MODES@MonDescParser@@QEAAJAEAVEDID_PARSER_DETAILED_TIMING@2@PEAU_VideoModeDescriptor@@@Z @ 0x14005B080 (-ModeFromDetailedTimingBlock@EDID_MODES@MonDescParser@@QEAAJAEAVEDID_PARSER_DETAILED_TIMING@2@PE.c)
 *     ?ModesFromEstablishedTimings@EDID_MODES@MonDescParser@@QEAAJ_KPEAU_VideoModeDescriptor@@@Z @ 0x14005C6C4 (-ModesFromEstablishedTimings@EDID_MODES@MonDescParser@@QEAAJ_KPEAU_VideoModeDescriptor@@@Z.c)
 *     ?GetDataBlock@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NIPEAPEAU_EDID_V1_CEA_861_DATA_HEADER@@@Z @ 0x1400960EC (-GetDataBlock@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NIPEAPEAU_EDID_V1_CEA_861_DATA_HEADER@.c)
 *     ?GetDetTimParser@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NHAEAVEDID_PARSER_DETAILED_TIMING@2@@Z @ 0x140096148 (-GetDetTimParser@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NHAEAVEDID_PARSER_DETAILED_TIMING@2.c)
 *     ?ModeFromCeaVideoFormat@EDID_MODES@MonDescParser@@QEAAJPEBU_EDID_V1_CEA_861_SHORT_VIDEO_DESC@@PEAU_VideoModeDescriptor@@@Z @ 0x1400967C4 (-ModeFromCeaVideoFormat@EDID_MODES@MonDescParser@@QEAAJPEBU_EDID_V1_CEA_861_SHORT_VIDEO_DESC@@PE.c)
 *     memset @ 0x14009FCC0 (memset.c)
 */

signed int __fastcall MonDescParser::EDID_MODES::ObtainSupportedModes(
        MonDescParser::EDID_MODES *this,
        unsigned __int16 *a2,
        unsigned __int16 *a3,
        struct _VideoModeDescriptor *a4)
{
  struct _VideoModeDescriptor *v4; // r14
  signed int result; // eax
  unsigned __int16 v8; // di
  int v9; // r12d
  int v10; // r15d
  unsigned __int16 v11; // r13
  __int64 v12; // rbx
  bool v13; // r9
  __int64 v14; // r11
  unsigned __int16 v15; // si
  unsigned __int16 v16; // ax
  unsigned __int16 v17; // di
  bool DetTimParser; // al
  __int64 v19; // rax
  _WORD *v20; // r10
  unsigned __int16 v21; // di
  unsigned int v22; // r15d
  unsigned __int64 v23; // rdx
  __int64 v24; // rcx
  int v25; // r9d
  struct _EDID_V1_CEA_861_DATA_HEADER *v26; // rax
  MonDescParser::EDID_MODES *v27; // r12
  unsigned __int16 v28; // r15
  int v29; // ecx
  __int64 *v30; // rax
  unsigned int v31; // eax
  unsigned int v32; // r10d
  MonDescParser::EDID_PARSER *v33; // r11
  union _EDID_V1_BLOCK **IterAtElement; // rax
  struct _EDID_V1_CEA_861_DATA_HEADER *v35; // r11
  unsigned __int16 i; // di
  unsigned int j; // edi
  struct _EDID_V1_CEA_861_DATA_HEADER *v38; // r12
  const struct _EDID_V1_CEA_861_SHORT_VIDEO_DESC *v39; // r13
  unsigned int k; // r15d
  bool v41; // cf
  unsigned __int8 v42; // [rsp+48h] [rbp-29h]
  unsigned __int16 v43; // [rsp+4Ch] [rbp-25h] BYREF
  int v44; // [rsp+50h] [rbp-21h] BYREF
  unsigned __int16 v45; // [rsp+54h] [rbp-1Dh] BYREF
  unsigned __int16 v46; // [rsp+58h] [rbp-19h] BYREF
  struct _EDID_V1_CEA_861_DATA_HEADER *v47; // [rsp+60h] [rbp-11h] BYREF
  unsigned __int16 v48[4]; // [rsp+68h] [rbp-9h] BYREF
  int v49; // [rsp+70h] [rbp-1h]
  int v50; // [rsp+74h] [rbp+3h]
  __int64 v51; // [rsp+78h] [rbp+7h] BYREF
  unsigned int v52; // [rsp+80h] [rbp+Fh]

  v4 = a4;
  if ( !a2 || (!a4 || !a3) && *a2 )
    return -1073741811;
  v47 = 0LL;
  v45 = 0;
  v46 = 0;
  v48[0] = 0;
  LOWORD(v44) = 0;
  v43 = 0;
  v42 = 0;
  result = MonDescParser::EDID_MODES::GetModeCounts(
             this,
             &v45,
             &v46,
             v48,
             &v47,
             (struct _EDID_V1_CEA_861_DATA_HEADER *)&v44,
             &v43);
  if ( result < 0 )
    return result;
  v8 = v45;
  if ( v45 > 0x11u )
    return -1071841278;
  v9 = v46;
  if ( v46 > 8u )
    return -1071841278;
  v10 = v48[0];
  if ( v48[0] > 6u )
    return -1071841278;
  v11 = v44;
  if ( (unsigned __int16)v44 > 4u )
    return -1071841278;
  v12 = *a2;
  if ( !(_WORD)v12 )
  {
    *a2 = v45 + v46 + v48[0] + v44 + v43;
    return -1073741789;
  }
  memset(v4, 0, 56 * v12);
  *a3 = -1;
  v14 = 0LL;
  v15 = 0;
  if ( (unsigned __int16)v12 < v8 )
  {
    v42 = 1;
    v8 = v12;
  }
  if ( v8 )
  {
    result = MonDescParser::EDID_MODES::ModesFromEstablishedTimings(this, v8, a4);
    v14 = 0LL;
    if ( result < 0 )
      return result;
    LOWORD(v12) = v12 - v8;
    v4 = &a4[v8];
    v15 = v8;
  }
  if ( (unsigned __int16)v12 < v11 )
  {
    v42 = 1;
    v11 = v12;
  }
  v16 = 0;
  v17 = 0;
  while ( 1 )
  {
    LOWORD(v44) = v16;
    if ( v17 >= v11 || v16 >= 4u )
      break;
    *(_QWORD *)v48 = v14;
    DetTimParser = MonDescParser::EDID_PARSER::GetDetTimParser(
                     *(MonDescParser::EDID_PARSER **)this,
                     v16,
                     (struct MonDescParser::EDID_PARSER_DETAILED_TIMING *)v48,
                     v13);
    v14 = 0LL;
    if ( DetTimParser )
    {
      result = MonDescParser::EDID_MODES::ModeFromDetailedTimingBlock(
                 this,
                 (struct MonDescParser::EDID_PARSER_DETAILED_TIMING *)v48,
                 v4);
      v14 = 0LL;
      if ( result != -1071841271 )
      {
        if ( result < 0 )
          return result;
        if ( !v17 )
          *a3 = v15;
        if ( !v15
          || (v19 = MonDescParser::IndexOf<_VideoModeDescriptor *,_VideoModeDescriptor>(a4, &a4[v15], v4), v19 == -1) )
        {
          LOWORD(v12) = v12 - 1;
          ++v17;
          ++v15;
          ++v4;
        }
        else if ( (_WORD)v14 == v17 )
        {
          *v20 = v19;
        }
      }
    }
    v16 = v44 + 1;
  }
  if ( (unsigned __int16)v12 >= (unsigned __int16)v9 )
  {
    if ( (unsigned __int16)v12 >= (unsigned int)(v9 + v10) )
      goto LABEL_37;
    LOWORD(v10) = v12 - v9;
  }
  else
  {
    LOWORD(v9) = v12;
    LOWORD(v10) = v14;
  }
  v42 = 1;
LABEL_37:
  v21 = v14;
  v22 = (unsigned __int16)v9 + (unsigned __int16)v10;
  while ( v21 < v22 )
  {
    v23 = v21;
    v24 = **(_QWORD **)this;
    v25 = *(unsigned __int8 *)(v24 + 19);
    v49 = *(unsigned __int8 *)(v24 + 18);
    v50 = v25;
    if ( v21 < (unsigned __int16)v9 )
    {
      v26 = (struct _EDID_V1_CEA_861_DATA_HEADER *)(v24 + 38);
    }
    else
    {
      v26 = v47;
      v23 = v21 - (unsigned __int64)(unsigned __int16)v9;
    }
    *(_QWORD *)v48 = (char *)v26 + 2 * v23;
    result = MonDescParser::EDID_MODES::ModeFromStandardTimingBlock(
               this,
               (struct MonDescParser::EDID_PARSER_STANDARD_TIMING *)v48,
               v21 >= (unsigned __int16)v9,
               v4);
    v14 = 0LL;
    if ( result != -1071841276 )
    {
      if ( result < 0 )
        return result;
      if ( !v15 || MonDescParser::IndexOf<_VideoModeDescriptor *,_VideoModeDescriptor>(a4, &a4[v15], v4) == -1 )
      {
        LOWORD(v12) = v12 - 1;
        ++v15;
        ++v4;
      }
    }
    ++v21;
  }
  v27 = this;
  v28 = v14;
  v29 = v42;
  if ( (unsigned __int16)v12 < v43 )
    v29 = 1;
  v51 = v14;
  v30 = *(__int64 **)this;
  v44 = v29;
  v52 = v14;
  v31 = *((_DWORD *)v30 + 20);
  *(_DWORD *)v48 = v31;
  while ( 1 )
  {
    v43 = v28;
    if ( v28 >= v31 )
      break;
    if ( (unsigned int)MonDescParser::EDID_PARSER::GetBlockType(*(_QWORD *)v27, v28) == 2 )
    {
      IterAtElement = MonDescParser::EDID_PARSER::GetIterAtElement(v33, v32);
      MonDescParser::EDID_PARSER_CEA_861_EXT::ChangeCEABlock(
        (MonDescParser::EDID_PARSER_CEA_861_EXT *)&v51,
        *IterAtElement);
      v35 = 0LL;
      v47 = 0LL;
      for ( i = 0;
            (_WORD)v12
         && MonDescParser::EDID_PARSER_CEA_861_EXT::GetDetTimParser(
              (MonDescParser::EDID_PARSER_CEA_861_EXT *)&v51,
              i,
              (struct MonDescParser::EDID_PARSER_DETAILED_TIMING *)&v47);
            ++i )
      {
        result = MonDescParser::EDID_MODES::ModeFromDetailedTimingBlock(
                   v27,
                   (struct MonDescParser::EDID_PARSER_DETAILED_TIMING *)&v47,
                   v4);
        v35 = 0LL;
        if ( result != -1071841271 )
        {
          if ( result < 0 )
            return result;
          if ( !v15 || MonDescParser::IndexOf<_VideoModeDescriptor *,_VideoModeDescriptor>(a4, &a4[v15], v4) == -1 )
          {
            ++v15;
            LOWORD(v12) = v12 - 1;
            ++v4;
          }
        }
      }
      for ( j = (unsigned int)v35; (_WORD)v12 && j < v52; ++j )
      {
        v47 = v35;
        if ( MonDescParser::EDID_PARSER_CEA_861_EXT::GetDataBlock(
               (MonDescParser::EDID_PARSER_CEA_861_EXT *)&v51,
               j,
               &v47) )
        {
          v38 = v47;
          if ( (*(_BYTE *)v47 & 0xE0) == 0x40 )
          {
            v39 = (struct _EDID_V1_CEA_861_DATA_HEADER *)((char *)v47 + 1);
            for ( k = (unsigned int)v35; (_WORD)v12 && k < (*(_BYTE *)v38 & 0x1Fu); ++k )
            {
              result = MonDescParser::EDID_MODES::ModeFromCeaVideoFormat(this, v39, v4);
              v35 = 0LL;
              if ( result != -1071841278 )
              {
                if ( result < 0 )
                  return result;
                ++v15;
                LOWORD(v12) = v12 - 1;
                ++v4;
              }
              v39 = (const struct _EDID_V1_CEA_861_SHORT_VIDEO_DESC *)((char *)v39 + 1);
            }
          }
        }
      }
      v27 = this;
      v28 = v43;
    }
    v31 = *(_DWORD *)v48;
    ++v28;
  }
  *a2 = v15;
  v41 = (_BYTE)v44 != 0;
  LOBYTE(v44) = -(char)v44;
  return v41 ? 0xC0000023 : 0;
}
