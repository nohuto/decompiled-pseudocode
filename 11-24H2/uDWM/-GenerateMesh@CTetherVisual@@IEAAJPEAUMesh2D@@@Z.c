/*
 * XREFs of ?GenerateMesh@CTetherVisual@@IEAAJPEAUMesh2D@@@Z @ 0x1800D94CC
 * Callers:
 *     ?UpdateInstructions@CTetherVisual@@IEAAJXZ @ 0x1800D9C18 (-UpdateInstructions@CTetherVisual@@IEAAJXZ.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArray@UD2D_POINT_3F@@$0A@@@QEAAJPEFBUD2D_POINT_3F@@I@Z @ 0x180011B70 (-AddMultipleAndSet@-$DynArray@UD2D_POINT_3F@@$0A@@@QEAAJPEFBUD2D_POINT_3F@@I@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@UD2D_POINT_2F@@$0A@@@QEAAJPEFBUD2D_POINT_2F@@I@Z @ 0x180011C1C (-AddMultipleAndSet@-$DynArray@UD2D_POINT_2F@@$0A@@@QEAAJPEFBUD2D_POINT_2F@@I@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180025C28 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 *     _o_sqrtf_0 @ 0x18009C4A4 (_o_sqrtf_0.c)
 */

__int64 __fastcall CTetherVisual::GenerateMesh(CTetherVisual *this, struct Mesh2D *a2)
{
  int v2; // r8d
  int v4; // edi
  int v6; // ebx
  int v7; // r14d
  int v8; // r15d
  int v9; // ecx
  int v10; // edx
  float v11; // xmm6_4
  float v12; // xmm0_4
  __int64 v13; // r8
  __int64 v14; // rax
  float v15; // xmm1_4
  int v16; // r8d
  int v17; // r10d
  __m128i v18; // xmm3
  __m128i v19; // xmm2
  float v20; // xmm1_4
  int v21; // eax
  unsigned int v22; // ebx
  __int64 i; // rsi
  unsigned int v24; // eax
  _DWORD *v25; // r9
  unsigned int v26; // r8d
  int v27; // edi
  unsigned int v28; // eax
  unsigned int v30; // [rsp+28h] [rbp-69h]
  _DWORD v31[6]; // [rsp+40h] [rbp-51h] BYREF
  float v32; // [rsp+58h] [rbp-39h] BYREF
  unsigned __int32 v33; // [rsp+5Ch] [rbp-35h]
  float v34; // [rsp+60h] [rbp-31h]
  unsigned __int32 v35; // [rsp+64h] [rbp-2Dh]
  float v36; // [rsp+68h] [rbp-29h]
  unsigned __int32 v37; // [rsp+6Ch] [rbp-25h]
  float v38; // [rsp+70h] [rbp-21h]
  unsigned __int32 v39; // [rsp+74h] [rbp-1Dh]
  float v40[12]; // [rsp+78h] [rbp-19h] BYREF

  v2 = *((_DWORD *)this + 64);
  v4 = *((_DWORD *)this + 66);
  v6 = v2 - v4;
  if ( v2 == v4 )
  {
    v7 = 6;
    v8 = 0;
  }
  else
  {
    v9 = *((_DWORD *)this + 65);
    v10 = *((_DWORD *)this + 67);
    if ( v9 == v10 )
    {
      v7 = 0;
      v8 = 6;
    }
    else
    {
      v11 = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)v2 - (float)v4) ^ _xmm) / (float)((float)v9 - (float)v10);
      v12 = o_sqrtf_0((float)(v11 * v11) + 1.0);
      v7 = (int)(float)(6.0 / v12);
      v8 = (int)(float)((float)(6.0 / v12) * v11);
    }
  }
  v13 = *((_QWORD *)this + 44);
  v14 = *((_QWORD *)this + 33);
  if ( v13 )
  {
    v15 = *(double *)(v13 + 48);
    v16 = v4 + (int)(float)((float)v6 * v15);
    v17 = *((_DWORD *)this + 67) + (int)(float)((float)(*((_DWORD *)this + 65) - *((_DWORD *)this + 67)) * v15);
  }
  else
  {
    v17 = HIDWORD(*((_QWORD *)this + 32));
    v16 = *((_QWORD *)this + 32);
  }
  v18 = _mm_cvtsi32_si128(*((_DWORD *)this + 79));
  v19 = _mm_cvtsi32_si128(*((_DWORD *)this + 81));
  v40[2] = 0.0;
  v40[5] = 0.0;
  v40[8] = 0.0;
  v40[11] = 0.0;
  v31[0] = 0;
  *((_DWORD *)this + 72) = v16 + v7;
  *((_DWORD *)this + 73) = v17 + v8;
  *((_DWORD *)this + 68) = v16 - v7;
  *((_DWORD *)this + 75) = HIDWORD(v14) + v8;
  *((_DWORD *)this + 69) = v17 - v8;
  *((_DWORD *)this + 70) = v14 - v7;
  *((_DWORD *)this + 71) = HIDWORD(v14) - v8;
  *((_DWORD *)this + 74) = v14 + v7;
  v31[1] = 1;
  v31[3] = 1;
  v40[1] = (float)(v17 - v8);
  v40[0] = (float)(v16 - v7);
  v31[5] = 3;
  v40[3] = (float)(v14 - v7);
  v40[4] = (float)(HIDWORD(v14) - v8);
  v40[6] = (float)(v16 + v7);
  v40[7] = (float)(v17 + v8);
  v31[2] = 2;
  v31[4] = 2;
  v40[10] = (float)(HIDWORD(v14) + v8);
  v36 = (float)*((int *)this + 80);
  v40[9] = (float)(v14 + v7);
  v20 = (float)*((int *)this + 78);
  v38 = v36;
  v32 = v20;
  v34 = v20;
  v33 = _mm_cvtepi32_ps(v18).m128_u32[0];
  v35 = _mm_cvtepi32_ps(v19).m128_u32[0];
  v37 = v33;
  v39 = v35;
  v21 = DynArray<D2D_POINT_3F,0>::AddMultipleAndSet((__int64)a2, v40, 4LL);
  v22 = v21;
  if ( v21 < 0 )
  {
    v30 = 189;
  }
  else
  {
    v21 = DynArray<D2D_POINT_2F,0>::AddMultipleAndSet((__int64)a2 + 32, &v32, 4LL);
    v22 = v21;
    if ( v21 >= 0 )
    {
      for ( i = 0LL; ; i = (unsigned int)(i + 1) )
      {
        if ( (unsigned int)i >= 6 )
          return v22;
        v24 = *((_DWORD *)a2 + 22);
        v25 = &v31[i];
        v26 = v24 + 1;
        if ( v24 + 1 < v24 )
          break;
        v27 = 0;
        if ( v26 > *((_DWORD *)a2 + 21) )
        {
          v27 = DynArrayImpl<0>::AddMultipleAndSet((__int64)a2 + 64, 4, 1, v25);
          v22 = v27;
          if ( v27 < 0 )
          {
            v28 = 190;
LABEL_20:
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v22, v28, 0LL);
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v27, 0xC2u, 0LL);
            return v22;
          }
        }
        else
        {
          *(_DWORD *)(*((_QWORD *)a2 + 8) + 4LL * v24) = *v25;
          *((_DWORD *)a2 + 22) = v26;
        }
        v22 = v27;
      }
      v22 = -2147024362;
      v28 = 179;
      v27 = -2147024362;
      goto LABEL_20;
    }
    v30 = 190;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v21, v30, 0LL);
  return v22;
}
