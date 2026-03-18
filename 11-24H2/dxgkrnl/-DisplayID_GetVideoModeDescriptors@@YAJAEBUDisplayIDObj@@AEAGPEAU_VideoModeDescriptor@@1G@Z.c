/*
 * XREFs of ?DisplayID_GetVideoModeDescriptors@@YAJAEBUDisplayIDObj@@AEAGPEAU_VideoModeDescriptor@@1G@Z @ 0x140061278
 * Callers:
 *     ?DisplayID_GetSupportedModes@@YAJPEBUDisplayIDObj@@PEAK1PEAU_VideoModeDescriptor@@@Z @ 0x1400980F0 (-DisplayID_GetSupportedModes@@YAJPEBUDisplayIDObj@@PEAK1PEAU_VideoModeDescriptor@@@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?DisplayID_GetBlock@@YAJAEBUDisplayIDObj@@W4_DISPLAYID_DATA_BLOCK_TYPE@@AEAPEBU_DISPLAYID_BLOCK_HEADER@@@Z @ 0x140061714 (-DisplayID_GetBlock@@YAJAEBUDisplayIDObj@@W4_DISPLAYID_DATA_BLOCK_TYPE@@AEAPEBU_DISPLAYID_BLOCK_.c)
 *     ?AddVideoModesWithStereoCode@@YAXW4__WMI_MONITOR_VIDEO_MODE_STEREO_TYPE@@_NGPEAU_VideoModeDescriptor@@AEAG2@Z @ 0x140097DA8 (-AddVideoModesWithStereoCode@@YAXW4__WMI_MONITOR_VIDEO_MODE_STEREO_TYPE@@_NGPEAU_VideoModeDescri.c)
 *     ?DisplayID_GetVideoModeFromType7Desc@@YAJAEBU_DISPLAYID_DETAILED_TIMING_DESCRIPTOR@@AEAU_VideoModeDescriptor@@@Z @ 0x1400981E4 (-DisplayID_GetVideoModeFromType7Desc@@YAJAEBU_DISPLAYID_DETAILED_TIMING_DESCRIPTOR@@AEAU_VideoMo.c)
 *     ?IsValidBlock@DisplayID_Type7Timing_Parser@@QEBA_NXZ @ 0x140098490 (-IsValidBlock@DisplayID_Type7Timing_Parser@@QEBA_NXZ.c)
 *     memset @ 0x1400A2000 (memset.c)
 */

__int64 __fastcall DisplayID_GetVideoModeDescriptors(
        const struct DisplayIDObj *a1,
        unsigned __int16 *a2,
        struct _VideoModeDescriptor *a3,
        unsigned __int16 *a4,
        unsigned __int16 a5)
{
  unsigned __int16 *v5; // r14
  const struct DisplayIDObj *v7; // r12
  __int64 result; // rax
  char v9; // r9
  int v10; // eax
  unsigned int v11; // ecx
  unsigned int v12; // kr00_4
  unsigned int v13; // r15d
  int v14; // ecx
  unsigned int v15; // ecx
  bool v16; // si
  unsigned __int64 v17; // rax
  unsigned int v18; // ebx
  char v19; // al
  int v20; // edx
  __int64 v21; // rcx
  unsigned __int16 v22; // di
  __int16 v23; // r11
  unsigned int v24; // r15d
  _BYTE *v25; // r14
  char v26; // al
  unsigned __int64 v27; // rcx
  int v28; // r9d
  unsigned int v29; // r10d
  unsigned __int8 v30; // r8
  unsigned __int8 v31; // r12
  __int64 v32; // rax
  const struct _DISPLAYID_DETAILED_TIMING_DESCRIPTOR *v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // r8
  unsigned __int8 v36; // al
  unsigned __int16 i; // dx
  USHORT v38; // dx
  USHORT *p_HorizontalImageSize; // rax
  __int64 v40; // rcx
  unsigned __int16 v41; // [rsp+38h] [rbp-91h] BYREF
  int v42; // [rsp+3Ch] [rbp-8Dh]
  __int64 v43; // [rsp+40h] [rbp-89h]
  _BYTE *v44; // [rsp+48h] [rbp-81h] BYREF
  unsigned int v45; // [rsp+50h] [rbp-79h]
  unsigned int v46; // [rsp+54h] [rbp-75h]
  void *v47; // [rsp+58h] [rbp-71h]
  __int64 v48; // [rsp+60h] [rbp-69h]
  struct _VideoModeDescriptor *v49; // [rsp+68h] [rbp-61h]
  unsigned __int64 v50; // [rsp+70h] [rbp-59h]
  __int64 v51; // [rsp+78h] [rbp-51h]
  _BYTE *v52; // [rsp+80h] [rbp-49h] BYREF
  char v53; // [rsp+88h] [rbp-41h]
  _BYTE *v56; // [rsp+138h] [rbp+6Fh] BYREF
  unsigned __int16 *v57; // [rsp+140h] [rbp+77h]

  v57 = a4;
  v5 = a4;
  v7 = a1;
  if ( !a3 )
    return 3221225485LL;
  v43 = *a2;
  memset(a3, 0, 56 * v43);
  *v5 = -1;
  if ( !v7 )
    return 3221225485LL;
  v56 = 0LL;
  result = DisplayID_GetBlock(v7, 33LL, &v56);
  if ( (int)result < 0 )
    return result;
  if ( *v56 != 33 || v56[2] != 29 )
    return 3221225485LL;
  v9 = v56[1];
  v10 = ((unsigned __int8)v56[4] << 8) + (unsigned __int8)v56[3] + 1;
  if ( v9 >= 0 )
    v11 = 100 * v10;
  else
    v11 = 1000 * v10;
  v12 = v11;
  v13 = v11 / 0x3E8;
  v14 = (unsigned __int8)v56[5] + ((unsigned __int8)v56[6] << 8);
  v45 = v12 / 0x3E8;
  if ( v9 >= 0 )
    v15 = 100 * (v14 + 1);
  else
    v15 = 1000 * (v14 + 1);
  v44 = 0LL;
  v46 = v15 / 0x3E8;
  v16 = (int)DisplayID_GetBlock(v7, 39LL, &v44) >= 0;
  LOBYTE(v56) = 0;
  v47 = 0LL;
  if ( !a5 )
    goto LABEL_17;
  v17 = 56LL * a5;
  if ( !is_mul_ok(a5, 0x38uLL) )
    v17 = -1LL;
  v47 = (void *)operator new[](v17, 0x32444944u, 256LL);
  if ( !v47 )
    return 3221225495LL;
LABEL_17:
  v18 = 0;
  if ( v16 )
  {
    if ( *v44 == 39 && (unsigned __int8)(v44[2] - 3) <= 0xF5u && v44[3] > 1u )
    {
      v19 = v44[1];
      if ( (v19 & 7) != 0 )
      {
        if ( (v19 & 0x40) != 0 )
        {
          v16 = 0;
        }
        else if ( v19 < 0 )
        {
          LOBYTE(v56) = 1;
        }
      }
      else
      {
        LOBYTE(v56) = (unsigned __int8)v19 >> 7;
      }
      v18 = 5;
      if ( v44[4] )
      {
        if ( v44[4] == 1 )
        {
          v18 = 6;
        }
        else if ( v44[4] == 3 )
        {
          v18 = (v44[5] != 0) + 3;
        }
      }
      else
      {
        v18 = (v44[5] != 0) + 1;
      }
    }
    else
    {
      v16 = 0;
    }
  }
  v20 = 0;
  v21 = *(_QWORD *)v7;
  v22 = 0;
  v48 = *(_QWORD *)v7;
  v42 = 0;
  v41 = 0;
  if ( *((int *)v7 + 5) > 0 )
  {
    v23 = v43;
    do
    {
      v24 = *(unsigned __int8 *)(v21 + 1);
      if ( v24 >= 3 )
      {
        v25 = (_BYTE *)((v21 + 4) & -(__int64)((_BYTE)v24 != 0));
        do
        {
          v26 = *v25;
          if ( !*v25 )
            break;
          v27 = (unsigned __int8)v25[2];
          v28 = v27 + 3;
          LODWORD(v44) = v27 + 3;
          v29 = v27 + 3;
          v51 = (unsigned int)(v27 + 3);
          if ( (int)v24 < (int)v27 + 3 )
            break;
          if ( v26 == 34 )
          {
            v52 = v25;
            v50 = v27 / 0x14;
            v53 = v27 / 0x14;
            if ( DisplayID_Type7Timing_Parser::IsValidBlock((DisplayID_Type7Timing_Parser *)&v52) )
            {
              v31 = 0;
              if ( v30 )
              {
                while ( 1 )
                {
                  v32 = v43;
                  if ( !(_WORD)v43 )
                    break;
                  LOWORD(v32) = v43 - 1;
                  v43 = v32;
                  v49 = &a3[v22];
                  if ( v31 >= v30 )
                    v33 = 0LL;
                  else
                    v33 = (const struct _DISPLAYID_DETAILED_TIMING_DESCRIPTOR *)&v25[20 * v31 + 3];
                  if ( (int)DisplayID_GetVideoModeFromType7Desc(v33, &a3[v22]) >= 0 )
                  {
                    if ( v16 )
                    {
                      LOBYTE(v34) = (_BYTE)v56;
                      AddVideoModesWithStereoCode(v18, v34, v35, v47, &v41, a3);
                      v22 = v41;
                    }
                    else
                    {
                      v49->StereoModeType = 0;
                      v41 = ++v22;
                    }
                  }
                  v30 = v50;
                  if ( ++v31 >= (unsigned __int8)v50 )
                  {
                    v28 = (int)v44;
                    v29 = v51;
                    v23 = v43;
                    goto LABEL_53;
                  }
                }
                v23 = 0;
                break;
              }
LABEL_53:
              if ( !v23 )
                break;
            }
          }
          v24 -= v28;
          v25 += v29;
        }
        while ( v24 >= 3 );
        v21 = v48;
        v20 = v42;
        v5 = v57;
        v7 = a1;
      }
      if ( !v20 && v22 )
        *v5 = 0;
      if ( !v23 )
        break;
      ++v20;
      v36 = *(_BYTE *)(v21 + 1) + 5;
      v42 = v20;
      v21 += v36;
      v48 = v21;
    }
    while ( v20 < *((_DWORD *)v7 + 5) );
    LOWORD(v13) = v45;
  }
  *a2 = v22;
  if ( v47 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v47);
  if ( !v22 )
    return 3221225659LL;
  if ( *v5 == 0xFFFF )
  {
    *v5 = 0;
    for ( i = 0; i < v22; ++i )
    {
      if ( (unsigned __int16)_mm_extract_epi16(*(__m128i *)&a3[i].HorizontalSyncPulseWidth, 2) )
      {
        *v5 = i;
        break;
      }
    }
  }
  v38 = v46;
  p_HorizontalImageSize = &a3->HorizontalImageSize;
  v40 = v22;
  do
  {
    *((_BYTE *)p_HorizontalImageSize + 17) = 2;
    *p_HorizontalImageSize = v13;
    p_HorizontalImageSize[1] = v38;
    p_HorizontalImageSize += 28;
    --v40;
  }
  while ( v40 );
  return 0LL;
}
