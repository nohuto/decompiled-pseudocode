/*
 * XREFs of ?InitColorKey@CColorKeyBitmap@@IEAAJAEBUPixelFormatInfo@@@Z @ 0x1801C2D78
 * Callers:
 *     ?Initialize@CColorKeyBitmap@@IEAAJPEAVIBitmapRealization@@@Z @ 0x1801C2BDC (-Initialize@CColorKeyBitmap@@IEAAJPEAVIBitmapRealization@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Convert_D2D_COLOR_F_scRGB_To_D2D_COLOR_F_sRGB@@YA?AU_D3DCOLORVALUE@@PEBU1@@Z @ 0x1801F8A5C (-Convert_D2D_COLOR_F_scRGB_To_D2D_COLOR_F_sRGB@@YA-AU_D3DCOLORVALUE@@PEBU1@@Z.c)
 *     ?Convert_scRGB_Channel_To_sRGB_Byte@@YAEM@Z @ 0x1801F8B08 (-Convert_scRGB_Channel_To_sRGB_Byte@@YAEM@Z.c)
 *     floorf_0 @ 0x1802DF608 (floorf_0.c)
 */

__int64 __fastcall CColorKeyBitmap::InitColorKey(CColorKeyBitmap *this, const struct PixelFormatInfo *a2)
{
  int v3; // ecx
  unsigned int v4; // r12d
  __m128 v6; // xmm6
  __m128 v7; // xmm1
  __m128 v8; // xmm6
  int v9; // eax
  unsigned __int8 v10; // bp
  unsigned __int8 v11; // di
  int v12; // ebx
  int v13; // ebx
  unsigned __int8 v14; // al
  __m128 v15; // xmm6
  int v16; // eax
  int v17; // ebx
  int v18; // ebx
  __m128 v19; // xmm6
  int v20; // ecx
  unsigned __int8 v21; // bp
  unsigned __int8 v22; // al
  unsigned int v23; // edi
  int v24; // ebx
  int v25; // ebx
  unsigned __int8 v26; // al
  __m128 v27; // xmm6
  unsigned __int32 v28; // ebx
  int v29; // eax
  int v30; // ebx
  int v31; // ebx
  unsigned __int8 v32; // al
  unsigned __int32 v33; // ebx
  unsigned int v34; // r11d
  unsigned int v35; // edx
  int v36; // r11d
  __int16 v37; // r11
  int v38; // ecx
  unsigned int v39; // edx
  unsigned int v40; // ecx
  unsigned int v41; // r10d
  unsigned int v42; // edx
  int v43; // r10d
  __int16 v44; // r10
  int v45; // ecx
  unsigned int v46; // edx
  unsigned int v47; // ecx
  unsigned int v48; // r9d
  unsigned int v49; // edx
  int v50; // r9d
  __int16 v51; // r9
  int v52; // ecx
  unsigned int v53; // edx
  unsigned int v54; // ecx
  unsigned int v55; // r8d
  unsigned int v56; // edx
  int v57; // r8d
  __int16 v58; // r8
  int v59; // ecx
  unsigned int v60; // edx
  unsigned int v61; // ecx
  unsigned int v62; // edx
  unsigned int v63; // r11d
  unsigned int v64; // edx
  __int16 v65; // r11
  __int16 v66; // r11
  int v67; // ecx
  unsigned int v68; // edx
  unsigned int v69; // ecx
  unsigned int v70; // r10d
  unsigned int v71; // edx
  int v72; // r10d
  __int16 v73; // r10
  int v74; // ecx
  unsigned int v75; // edx
  unsigned int v76; // ecx
  unsigned int v77; // r9d
  unsigned int v78; // edx
  int v79; // r9d
  __int16 v80; // r9
  int v81; // ecx
  unsigned int v82; // edx
  unsigned int v83; // ecx
  unsigned int v84; // r8d
  unsigned int v85; // edx
  int v86; // r8d
  __int16 v87; // r8
  int v88; // ebx
  unsigned int v89; // edx
  unsigned int v90; // ecx
  unsigned int v92; // [rsp+20h] [rbp-58h]
  struct _D3DCOLORVALUE v93; // [rsp+30h] [rbp-48h] BYREF

  v3 = *((_DWORD *)a2 + 2);
  v4 = 0;
  if ( v3 )
  {
    if ( v3 != 1 )
    {
      v92 = 213;
LABEL_4:
      v4 = -2003292288;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003292288, v92, 0LL);
      return v4;
    }
    v6 = (__m128)_mm_loadu_si128((const __m128i *)((char *)this + 40));
    v7 = (__m128)_mm_loadu_si128((const __m128i *)((char *)this + 56));
  }
  else
  {
    v6 = (__m128)_mm_loadu_si128((const __m128i *)Convert_D2D_COLOR_F_scRGB_To_D2D_COLOR_F_sRGB(
                                                    &v93,
                                                    (const struct _D3DCOLORVALUE *)((char *)this + 40)));
    v7 = (__m128)_mm_loadu_si128((const __m128i *)Convert_D2D_COLOR_F_scRGB_To_D2D_COLOR_F_sRGB(
                                                    &v93,
                                                    (const struct _D3DCOLORVALUE *)((char *)this + 56)));
  }
  switch ( *(_DWORD *)a2 )
  {
    case 2:
      *(__m128 *)((char *)this + 92) = v6;
      *(__m128 *)((char *)this + 124) = v7;
      return v4;
    case 0xA:
      v34 = _mm_cvtsi128_si32((__m128i)v6);
      v35 = v34 & 0x7FFFFFFF;
      v36 = HIWORD(v34) & 0x8000;
      if ( v35 <= 0x47FFEFFF )
      {
        if ( v35 >= 0x38800000 )
        {
          v40 = v35 + ((v35 >> 13) & 1) - 939520001;
        }
        else
        {
          v38 = 113 - (v35 >> 23);
          if ( v38 >= 24 )
            v39 = 0;
          else
            v39 = (v35 & 0x7FFFFF | 0x800000) >> v38;
          v40 = ((v39 >> 13) & 1) + v39 + 4095;
        }
        v37 = (v40 >> 13) | v36;
      }
      else
      {
        v37 = v36 | 0x7FFF;
      }
      v41 = _mm_cvtsi128_si32((__m128i)_mm_shuffle_ps(v6, v6, 85));
      v42 = v41 & 0x7FFFFFFF;
      v43 = HIWORD(v41) & 0x8000;
      if ( v42 <= 0x47FFEFFF )
      {
        if ( v42 >= 0x38800000 )
        {
          v47 = v42 + ((v42 >> 13) & 1) - 939520001;
        }
        else
        {
          v45 = 113 - (v42 >> 23);
          if ( v45 >= 24 )
            v46 = 0;
          else
            v46 = (v42 & 0x7FFFFF | 0x800000) >> v45;
          v47 = ((v46 >> 13) & 1) + v46 + 4095;
        }
        v44 = (v47 >> 13) | v43;
      }
      else
      {
        v44 = v43 | 0x7FFF;
      }
      v48 = _mm_cvtsi128_si32((__m128i)_mm_shuffle_ps(v6, v6, 170));
      v49 = v48 & 0x7FFFFFFF;
      v50 = HIWORD(v48) & 0x8000;
      if ( v49 <= 0x47FFEFFF )
      {
        if ( v49 >= 0x38800000 )
        {
          v54 = v49 + ((v49 >> 13) & 1) - 939520001;
        }
        else
        {
          v52 = 113 - (v49 >> 23);
          if ( v52 >= 24 )
            v53 = 0;
          else
            v53 = (v49 & 0x7FFFFF | 0x800000) >> v52;
          v54 = ((v53 >> 13) & 1) + v53 + 4095;
        }
        v51 = (v54 >> 13) | v50;
      }
      else
      {
        v51 = v50 | 0x7FFF;
      }
      v55 = _mm_cvtsi128_si32((__m128i)_mm_shuffle_ps(v6, v6, 255));
      v56 = v55 & 0x7FFFFFFF;
      v57 = HIWORD(v55) & 0x8000;
      if ( v56 <= 0x47FFEFFF )
      {
        if ( v56 >= 0x38800000 )
        {
          v61 = v56 + ((v56 >> 13) & 1) - 939520001;
        }
        else
        {
          v59 = 113 - (v56 >> 23);
          if ( v59 >= 24 )
            v60 = 0;
          else
            v60 = (v56 & 0x7FFFFF | 0x800000) >> v59;
          v61 = ((v60 >> 13) & 1) + v60 + 4095;
        }
        v58 = (v61 >> 13) | v57;
      }
      else
      {
        v58 = v57 | 0x7FFF;
      }
      *((_WORD *)this + 42) = v37;
      v62 = _mm_cvtsi128_si32((__m128i)v7);
      *((_WORD *)this + 44) = v51;
      *((_WORD *)this + 45) = v58;
      *((_WORD *)this + 43) = v44;
      v63 = HIWORD(v62);
      v64 = v62 & 0x7FFFFFFF;
      v65 = v63 & 0x8000;
      if ( v64 <= 0x47FFEFFF )
      {
        if ( v64 >= 0x38800000 )
        {
          v69 = v64 + ((v64 >> 13) & 1) - 939520001;
        }
        else
        {
          v67 = 113 - (v64 >> 23);
          if ( v67 >= 24 )
            v68 = 0;
          else
            v68 = (v64 & 0x7FFFFF | 0x800000) >> v67;
          v69 = ((v68 >> 13) & 1) + v68 + 4095;
        }
        v66 = (v69 >> 13) | v65;
      }
      else
      {
        v66 = v65 | 0x7FFF;
      }
      v70 = _mm_cvtsi128_si32((__m128i)_mm_shuffle_ps(v7, v7, 85));
      v71 = v70 & 0x7FFFFFFF;
      v72 = HIWORD(v70) & 0x8000;
      if ( v71 <= 0x47FFEFFF )
      {
        if ( v71 >= 0x38800000 )
        {
          v76 = v71 + ((v71 >> 13) & 1) - 939520001;
        }
        else
        {
          v74 = 113 - (v71 >> 23);
          if ( v74 >= 24 )
            v75 = 0;
          else
            v75 = (v71 & 0x7FFFFF | 0x800000) >> v74;
          v76 = ((v75 >> 13) & 1) + v75 + 4095;
        }
        v73 = (v76 >> 13) | v72;
      }
      else
      {
        v73 = v72 | 0x7FFF;
      }
      v77 = _mm_cvtsi128_si32((__m128i)_mm_shuffle_ps(v7, v7, 170));
      v78 = v77 & 0x7FFFFFFF;
      v79 = HIWORD(v77) & 0x8000;
      if ( v78 <= 0x47FFEFFF )
      {
        if ( v78 >= 0x38800000 )
        {
          v83 = v78 + ((v78 >> 13) & 1) - 939520001;
        }
        else
        {
          v81 = 113 - (v78 >> 23);
          if ( v81 >= 24 )
            v82 = 0;
          else
            v82 = (v78 & 0x7FFFFF | 0x800000) >> v81;
          v83 = ((v82 >> 13) & 1) + v82 + 4095;
        }
        v80 = (v83 >> 13) | v79;
      }
      else
      {
        v80 = v79 | 0x7FFF;
      }
      v84 = _mm_cvtsi128_si32((__m128i)_mm_shuffle_ps(v7, v7, 255));
      v85 = v84 & 0x7FFFFFFF;
      v86 = HIWORD(v84) & 0x8000;
      if ( v85 <= 0x47FFEFFF )
      {
        if ( v85 >= 0x38800000 )
        {
          v90 = v85 + ((v85 >> 13) & 1) - 939520001;
        }
        else
        {
          v88 = 113 - (v85 >> 23);
          if ( v88 >= 24 )
            v89 = 0;
          else
            v89 = (v85 & 0x7FFFFF | 0x800000) >> v88;
          v90 = ((v89 >> 13) & 1) + v89 + 4095;
        }
        v87 = (v90 >> 13) | v86;
      }
      else
      {
        v87 = v86 | 0x7FFF;
      }
      *((_WORD *)this + 58) = v66;
      *((_WORD *)this + 59) = v73;
      *((_WORD *)this + 60) = v80;
      *((_WORD *)this + 61) = v87;
      break;
    case 0x1C:
      v19 = (__m128)_mm_loadu_si128((const __m128i *)((char *)this + 40));
      v20 = (int)floorf_0((float)(_mm_shuffle_ps(v19, v19, 255).m128_f32[0] * 255.0) + 0.5);
      v21 = -1;
      if ( v20 <= 255 )
      {
        v22 = 0;
        if ( v20 >= 0 )
          v22 = v20;
      }
      else
      {
        v22 = -1;
      }
      v23 = v22;
      v24 = Convert_scRGB_Channel_To_sRGB_Byte(v19.m128_f32[0]) << 8;
      v25 = (Convert_scRGB_Channel_To_sRGB_Byte(_mm_shuffle_ps(v19, v19, 85).m128_f32[0]) | v24) << 8;
      v26 = Convert_scRGB_Channel_To_sRGB_Byte(_mm_shuffle_ps(v19, v19, 170).m128_f32[0]);
      v27 = (__m128)_mm_loadu_si128((const __m128i *)((char *)this + 56));
      *((_BYTE *)this + 83) = v23;
      v28 = _byteswap_ulong(v23) | v26 | v25;
      *((_BYTE *)this + 80) = BYTE2(v28);
      *((_BYTE *)this + 81) = BYTE1(v28);
      *((_BYTE *)this + 82) = v28;
      v29 = (int)floorf_0((float)(_mm_shuffle_ps(v27, v27, 255).m128_f32[0] * 255.0) + 0.5);
      if ( v29 <= 255 )
      {
        v21 = 0;
        if ( v29 >= 0 )
          v21 = v29;
      }
      v30 = Convert_scRGB_Channel_To_sRGB_Byte(v27.m128_f32[0]) << 8;
      v31 = (Convert_scRGB_Channel_To_sRGB_Byte(_mm_shuffle_ps(v27, v27, 85).m128_f32[0]) | v30) << 8;
      v32 = Convert_scRGB_Channel_To_sRGB_Byte(_mm_shuffle_ps(v27, v27, 170).m128_f32[0]);
      *((_BYTE *)this + 115) = v21;
      v33 = _byteswap_ulong(v21) | v32 | v31;
      *((_BYTE *)this + 114) = v33;
      *((_BYTE *)this + 112) = BYTE2(v33);
      *((_BYTE *)this + 113) = BYTE1(v33);
      break;
    default:
      if ( (unsigned int)(*(_DWORD *)a2 - 87) >= 2 )
      {
        v92 = 287;
        goto LABEL_4;
      }
      v8 = (__m128)_mm_loadu_si128((const __m128i *)((char *)this + 40));
      v9 = (int)floorf_0((float)(_mm_shuffle_ps(v8, v8, 255).m128_f32[0] * 255.0) + 0.5);
      v10 = -1;
      if ( v9 <= 255 )
      {
        v11 = 0;
        if ( v9 >= 0 )
          v11 = v9;
      }
      else
      {
        v11 = -1;
      }
      v12 = Convert_scRGB_Channel_To_sRGB_Byte(v8.m128_f32[0]) << 8;
      v13 = (Convert_scRGB_Channel_To_sRGB_Byte(_mm_shuffle_ps(v8, v8, 85).m128_f32[0]) | v12) << 8;
      v14 = Convert_scRGB_Channel_To_sRGB_Byte(_mm_shuffle_ps(v8, v8, 170).m128_f32[0]);
      v15 = (__m128)_mm_loadu_si128((const __m128i *)((char *)this + 56));
      *((_DWORD *)this + 19) = _byteswap_ulong(v11) | v14 | v13;
      v16 = (int)floorf_0((float)(_mm_shuffle_ps(v15, v15, 255).m128_f32[0] * 255.0) + 0.5);
      if ( v16 <= 255 )
      {
        v10 = 0;
        if ( v16 >= 0 )
          v10 = v16;
      }
      v17 = Convert_scRGB_Channel_To_sRGB_Byte(v15.m128_f32[0]) << 8;
      v18 = (Convert_scRGB_Channel_To_sRGB_Byte(_mm_shuffle_ps(v15, v15, 85).m128_f32[0]) | v17) << 8;
      *((_DWORD *)this + 27) = _byteswap_ulong(v10) | Convert_scRGB_Channel_To_sRGB_Byte(_mm_shuffle_ps(v15, v15, 170).m128_f32[0]) | v18;
      break;
  }
  return v4;
}
