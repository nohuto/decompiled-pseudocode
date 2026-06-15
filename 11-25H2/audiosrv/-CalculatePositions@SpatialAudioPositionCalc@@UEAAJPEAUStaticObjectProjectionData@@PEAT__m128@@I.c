/*
 * XREFs of ?CalculatePositions@SpatialAudioPositionCalc@@UEAAJPEAUStaticObjectProjectionData@@PEAT__m128@@I@Z @ 0x18002F440
 * Callers:
 *     <none>
 * Callees:
 *     ?ComputeRadialProjectionOffsets@SpatialAudioPositionCalc@@AEAAXPEAUSpatialAudioProjectionOffsets@@PEAUStaticObjectProjectionData@@@Z @ 0x18002FE4C (-ComputeRadialProjectionOffsets@SpatialAudioPositionCalc@@AEAAXPEAUSpatialAudioProjectionOffsets.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1800475CC (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     _o_sinf_0 @ 0x1800A8B7C (_o_sinf_0.c)
 */

__int64 __fastcall SpatialAudioPositionCalc::CalculatePositions(
        SpatialAudioPositionCalc *this,
        struct StaticObjectProjectionData *a2,
        union __m128 *a3,
        int a4)
{
  _BYTE *v4; // rbx
  union __m128 *v5; // rdi
  float v7; // xmm6_4
  __m128 v8; // xmm14
  __m128 v9; // xmm13
  float v10; // xmm10_4
  float v11; // xmm0_4
  float v12; // xmm6_4
  float v13; // xmm10_4
  float v14; // xmm7_4
  float v15; // xmm0_4
  float v16; // xmm6_4
  float v17; // xmm7_4
  __m128 v18; // xmm6
  __m128 v19; // xmm0
  __m128 v20; // xmm15
  __m128 v21; // xmm0
  __m128 v22; // xmm6
  __m128 v23; // xmm12
  __m128 v24; // xmm0
  __m128 v25; // xmm9
  __m128 v26; // xmm10
  unsigned int v27; // r10d
  __int64 v28; // r9
  int v29; // edx
  float v30; // xmm7_4
  __m128 v31; // xmm3
  __m128 v32; // xmm0
  __m128 v33; // xmm2
  __m128 v34; // xmm3
  __m128 v35; // xmm4
  __m128 v36; // xmm5
  __m128 v37; // xmm4
  __m128 v38; // xmm1
  __m128 v39; // xmm2
  __m128 v40; // xmm3
  __m128 v41; // xmm3
  float v43; // [rsp+40h] [rbp-F8h]
  float v44; // [rsp+44h] [rbp-F4h]
  unsigned int v45; // [rsp+48h] [rbp-F0h]
  float v46; // [rsp+4Ch] [rbp-ECh]
  const char *v47; // [rsp+50h] [rbp-E8h] BYREF
  __int128 v48; // [rsp+58h] [rbp-E0h] BYREF
  __int128 v49; // [rsp+68h] [rbp-D0h]
  __int128 v50; // [rsp+78h] [rbp-C0h]
  unsigned int v51; // [rsp+88h] [rbp-B0h]
  unsigned int v52; // [rsp+148h] [rbp+10h] BYREF
  unsigned int v53; // [rsp+150h] [rbp+18h] BYREF

  v4 = &SpatialAudioPositionCalc::_offsetMapTable;
  v5 = a3;
  v51 = 0;
  v48 = 0LL;
  v49 = 0LL;
  v50 = 0LL;
  if ( a2 && a3 && a4 == 304 )
  {
    if ( *((_DWORD *)a2 + 27) )
    {
      SpatialAudioPositionCalc::ComputeRadialProjectionOffsets(this, (struct SpatialAudioProjectionOffsets *)&v48, a2);
      v25 = (__m128)v51;
      v23 = (__m128)DWORD2(v50);
      v9 = (__m128)(unsigned int)v50;
      v8 = (__m128)HIDWORD(v49);
      v20 = (__m128)DWORD2(v49);
      v26 = (__m128)(unsigned int)v49;
      v44 = *((float *)&v50 + 3);
      v43 = *((float *)&v50 + 1);
      v46 = *((float *)&v49 + 1);
      v45 = HIDWORD(v48);
      v52 = DWORD2(v48);
      v53 = v48;
    }
    else
    {
      v8 = (__m128)*((unsigned int *)a2 + 2);
      v9 = (__m128)*(unsigned int *)a2;
      v7 = *((float *)a2 + 9);
      v8.m128_f32[0] = v8.m128_f32[0] * 0.5;
      v9.m128_f32[0] = v9.m128_f32[0] * 0.5;
      *(float *)&v47 = *((float *)a2 + 1) * 0.5;
      v10 = o_sinf_0(v7 * 0.017453292) * v9.m128_f32[0];
      v11 = o_sinf_0((float)(90.0 - v7) * 0.017453292);
      v12 = *((float *)a2 + 6);
      v13 = v10 / v11;
      v53 = v8.m128_i32[0];
      v45 = v8.m128_i32[0] ^ _xmm;
      v14 = o_sinf_0(v12 * 0.017453292) * *(float *)&v47;
      v15 = o_sinf_0((float)(90.0 - v12) * 0.017453292);
      v16 = 90.0 - *((float *)a2 + 7);
      *(float *)&v52 = v14 / v15;
      v17 = o_sinf_0(v16 * 0.017453292) * v8.m128_f32[0];
      v46 = v17 / o_sinf_0((float)(90.0 - v16) * 0.017453292);
      v18 = (__m128)LODWORD(FLOAT_180_0);
      v18.m128_f32[0] = 180.0 - *((float *)a2 + 8);
      v19 = v18;
      v19.m128_f32[0] = o_sinf_0(v18.m128_f32[0] * 0.017453292);
      v20 = v19;
      v20.m128_f32[0] = v19.m128_f32[0] * *(float *)&v47;
      v19.m128_f32[0] = o_sinf_0((float)(90.0 - v18.m128_f32[0]) * 0.017453292);
      v18.m128_i32[0] = *((_DWORD *)a2 + 10);
      v20.m128_f32[0] = v20.m128_f32[0] / v19.m128_f32[0];
      v43 = o_sinf_0(v18.m128_f32[0] * 0.017453292) * v13;
      v21 = (__m128)LODWORD(FLOAT_90_0);
      v21.m128_f32[0] = o_sinf_0((float)(90.0 - v18.m128_f32[0]) * 0.017453292);
      v22 = (__m128)*((unsigned int *)a2 + 11);
      v23 = v21;
      v23.m128_f32[0] = v21.m128_f32[0] * v13;
      v44 = o_sinf_0((float)(180.0 - v22.m128_f32[0]) * 0.017453292) * v13;
      v22.m128_f32[0] = (float)(v22.m128_f32[0] - 90.0) * 0.017453292;
      v24 = v22;
      v24.m128_f32[0] = o_sinf_0(v22.m128_f32[0]);
      v25 = v24;
      v25.m128_f32[0] = v24.m128_f32[0] * v13;
      v26 = (__m128)(unsigned int)v47;
    }
    v27 = 0;
    v28 = 0LL;
    do
    {
      v29 = dword_1801913A0[v28];
      v30 = FLOAT_1_0;
      if ( (v29 & 0x10) != 0 )
      {
        v30 = *((float *)a2 + 17);
      }
      else if ( (v29 & 0x20) != 0 )
      {
        v30 = *((float *)a2 + 18);
      }
      else if ( (v29 & 0x41) == 0x41 )
      {
        v30 = *((float *)a2 + 15);
      }
      else if ( (v29 & 0x42) == 0x42 )
      {
        v30 = *((float *)a2 + 16);
      }
      else if ( (v29 & 0x80u) != 0 )
      {
        v30 = *((float *)a2 + 13);
      }
      else if ( (v29 & 1) != 0 )
      {
        v30 = *((float *)a2 + 12);
      }
      else if ( (v29 & 2) != 0 )
      {
        v30 = *((float *)a2 + 14);
      }
      v31 = 0LL;
      switch ( *v4 )
      {
        case 1:
          v31 = _mm_xor_ps((__m128)v52, (__m128)(unsigned int)_xmm);
          break;
        case 2:
          v31 = (__m128)v52;
          break;
        case 3:
          v31 = _mm_xor_ps((__m128)v53, (__m128)(unsigned int)_xmm);
          break;
        case 4:
          v31 = (__m128)v53;
          break;
        case 5:
          v31 = (__m128)v45;
          break;
        case 6:
          v31 = _mm_xor_ps((__m128)LODWORD(v46), (__m128)(unsigned int)_xmm);
          break;
        case 7:
          v31 = _mm_xor_ps(v26, (__m128)(unsigned int)_xmm);
          break;
        case 8:
          v31 = v26;
          break;
        case 9:
          v31 = _mm_xor_ps(v20, (__m128)(unsigned int)_xmm);
          break;
        case 0xA:
          v31 = v20;
          break;
        case 0xB:
          v31 = v8;
          break;
        case 0xC:
          v31 = _mm_xor_ps((__m128)LODWORD(v43), (__m128)(unsigned int)_xmm);
          break;
        case 0xD:
          v31 = (__m128)LODWORD(v43);
          break;
        case 0xE:
          v31 = _mm_xor_ps((__m128)LODWORD(v44), (__m128)(unsigned int)_xmm);
          break;
        case 0xF:
          v31 = (__m128)LODWORD(v44);
          break;
        case 0x10:
          v31 = _mm_xor_ps(v23, (__m128)(unsigned int)_xmm);
          break;
        case 0x11:
          v31 = v23;
          break;
        case 0x12:
          v31 = _mm_xor_ps(v25, (__m128)(unsigned int)_xmm);
          break;
        case 0x13:
          v31 = v25;
          break;
        case 0x14:
          v31 = _mm_xor_ps(v9, (__m128)(unsigned int)_xmm);
          break;
        case 0x15:
          v31 = v9;
          break;
        default:
          break;
      }
      v32 = 0LL;
      switch ( v4[1] )
      {
        case 1:
          v32 = _mm_xor_ps((__m128)v52, (__m128)(unsigned int)_xmm);
          break;
        case 2:
          v32 = (__m128)v52;
          break;
        case 3:
          v32 = _mm_xor_ps((__m128)v53, (__m128)(unsigned int)_xmm);
          break;
        case 4:
          v32 = (__m128)v53;
          break;
        case 5:
          v32 = (__m128)v45;
          break;
        case 6:
          v32 = _mm_xor_ps((__m128)LODWORD(v46), (__m128)(unsigned int)_xmm);
          break;
        case 7:
          v32 = _mm_xor_ps(v26, (__m128)(unsigned int)_xmm);
          break;
        case 8:
          v32 = v26;
          break;
        case 9:
          v32 = _mm_xor_ps(v20, (__m128)(unsigned int)_xmm);
          break;
        case 0xA:
          v32 = v20;
          break;
        case 0xB:
          v32 = v8;
          break;
        case 0xC:
          v32 = _mm_xor_ps((__m128)LODWORD(v43), (__m128)(unsigned int)_xmm);
          break;
        case 0xD:
          v32 = (__m128)LODWORD(v43);
          break;
        case 0xE:
          v32 = _mm_xor_ps((__m128)LODWORD(v44), (__m128)(unsigned int)_xmm);
          break;
        case 0xF:
          v32 = (__m128)LODWORD(v44);
          break;
        case 0x10:
          v32 = _mm_xor_ps(v23, (__m128)(unsigned int)_xmm);
          break;
        case 0x11:
          v32 = v23;
          break;
        case 0x12:
          v32 = _mm_xor_ps(v25, (__m128)(unsigned int)_xmm);
          break;
        case 0x13:
          v32 = v25;
          break;
        case 0x14:
          v32 = _mm_xor_ps(v9, (__m128)(unsigned int)_xmm);
          break;
        case 0x15:
          v32 = v9;
          break;
        default:
          break;
      }
      v33 = 0LL;
      switch ( v4[2] )
      {
        case 1:
          v33 = _mm_xor_ps((__m128)v52, (__m128)(unsigned int)_xmm);
          break;
        case 2:
          v33 = (__m128)v52;
          break;
        case 3:
          v33 = _mm_xor_ps((__m128)v53, (__m128)(unsigned int)_xmm);
          break;
        case 4:
          v33 = (__m128)v53;
          break;
        case 5:
          v33 = (__m128)v45;
          break;
        case 6:
          v33 = _mm_xor_ps((__m128)LODWORD(v46), (__m128)(unsigned int)_xmm);
          break;
        case 7:
          v33 = _mm_xor_ps(v26, (__m128)(unsigned int)_xmm);
          break;
        case 8:
          v33 = v26;
          break;
        case 9:
          v33 = _mm_xor_ps(v20, (__m128)(unsigned int)_xmm);
          break;
        case 0xA:
          v33 = v20;
          break;
        case 0xB:
          v33 = v8;
          break;
        case 0xC:
          v33 = _mm_xor_ps((__m128)LODWORD(v43), (__m128)(unsigned int)_xmm);
          break;
        case 0xD:
          v33 = (__m128)LODWORD(v43);
          break;
        case 0xE:
          v33 = _mm_xor_ps((__m128)LODWORD(v44), (__m128)(unsigned int)_xmm);
          break;
        case 0xF:
          v33 = (__m128)LODWORD(v44);
          break;
        case 0x10:
          v33 = _mm_xor_ps(v23, (__m128)(unsigned int)_xmm);
          break;
        case 0x11:
          v33 = v23;
          break;
        case 0x12:
          v33 = _mm_xor_ps(v25, (__m128)(unsigned int)_xmm);
          break;
        case 0x13:
          v33 = v25;
          break;
        case 0x14:
          v33 = _mm_xor_ps(v9, (__m128)(unsigned int)_xmm);
          break;
        case 0x15:
          v33 = v9;
          break;
        default:
          break;
      }
      v34 = _mm_movelh_ps(_mm_unpacklo_ps(v31, v32), _mm_unpacklo_ps(v33, (__m128)0LL));
      *v5 = v34;
      v35 = v34;
      if ( !*((_DWORD *)a2 + 27) )
      {
        v36 = (__m128)LODWORD(FLOAT_1_0);
        if ( (v29 & 0x10) != 0 )
        {
          v36 = (__m128)*((unsigned int *)a2 + 24);
        }
        else if ( (v29 & 0x20) != 0 )
        {
          v36 = (__m128)*((unsigned int *)a2 + 25);
        }
        else if ( (v29 & 0x41) == 0x41 )
        {
          v36 = (__m128)*((unsigned int *)a2 + 22);
        }
        else if ( (v29 & 0x42) == 0x42 )
        {
          v36 = (__m128)*((unsigned int *)a2 + 23);
        }
        else if ( (v29 & 0x80u) != 0 )
        {
          v36 = (__m128)*((unsigned int *)a2 + 20);
        }
        else if ( (v29 & 1) != 0 )
        {
          v36 = (__m128)*((unsigned int *)a2 + 19);
        }
        else if ( (v29 & 2) != 0 )
        {
          v36 = (__m128)*((unsigned int *)a2 + 21);
        }
        v35 = v34;
        if ( v36.m128_f32[0] != 1.0 )
        {
          v35 = _mm_mul_ps(_mm_movelh_ps(_mm_unpacklo_ps(v36, v36), _mm_unpacklo_ps(v36, (__m128)0LL)), v34);
          *v5 = v35;
        }
      }
      v37 = _mm_mul_ps(v35, (__m128)_xmm);
      v4 += 3;
      ++v27;
      ++v28;
      v38 = _mm_or_ps(_mm_and_ps(v37, DirectX::g_XMNegativeZero), DirectX::g_XMNoFraction);
      v39 = _mm_cmple_ps(_mm_and_ps(v37, DirectX::g_XMAbsMask), DirectX::g_XMNoFraction);
      v40 = _mm_div_ps(
              _mm_xor_ps(_mm_and_ps(_mm_sub_ps(_mm_add_ps(v38, v37), v38), v39), _mm_andnot_ps(v39, v37)),
              (__m128)_xmm);
      v41 = _mm_shuffle_ps(v40, v40, 39);
      v41.m128_f32[0] = v30;
      *v5++ = _mm_shuffle_ps(v41, v41, 39);
    }
    while ( v27 < 0x13 );
    return 0LL;
  }
  else
  {
    if ( (unsigned int)dword_1801CC2E8 > 2 )
    {
      v52 = -2147024809;
      v47 = "SpatialAudioPositionCalc::CalculatePositions";
      v53 = 267;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (unsigned int)&v47,
        (unsigned int)&unk_1801A3DAF,
        (_DWORD)a3,
        a4,
        (__int64)&v47,
        (__int64)&v53,
        (__int64)&v52);
    }
    return 2147942487LL;
  }
}
