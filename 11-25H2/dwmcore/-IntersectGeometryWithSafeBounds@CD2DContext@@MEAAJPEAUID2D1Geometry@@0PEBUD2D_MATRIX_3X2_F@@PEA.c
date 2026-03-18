/*
 * XREFs of ?IntersectGeometryWithSafeBounds@CD2DContext@@MEAAJPEAUID2D1Geometry@@0PEBUD2D_MATRIX_3X2_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAPEAU2@@Z @ 0x1802C5690
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$ReleaseInterface@UIDXGIFactory7@@@@YAXAEAPEAUIDXGIFactory7@@@Z @ 0x1801779AC (--$ReleaseInterface@UIDXGIFactory7@@@@YAXAEAPEAUIDXGIFactory7@@@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ceilf_0 @ 0x1802E886C (ceilf_0.c)
 *     floorf_0 @ 0x1802E88A8 (floorf_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD2DContext::IntersectGeometryWithSafeBounds(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6)
{
  _QWORD *v10; // rax
  int v11; // eax
  unsigned int v12; // ebx
  int v13; // eax
  __m128 v14; // xmm6
  float v15; // xmm7_4
  __m128 v16; // xmm8
  float v17; // xmm1_4
  __int64 v18; // rax
  unsigned int v20; // [rsp+28h] [rbp-A9h]
  __int64 v21; // [rsp+48h] [rbp-89h] BYREF
  __int64 v22; // [rsp+50h] [rbp-81h] BYREF
  __int64 v23; // [rsp+58h] [rbp-79h] BYREF
  __int64 v24; // [rsp+60h] [rbp-71h] BYREF
  __int64 v25; // [rsp+68h] [rbp-69h] BYREF
  _QWORD v26[2]; // [rsp+70h] [rbp-61h] BYREF
  __int128 X; // [rsp+80h] [rbp-51h] BYREF

  v22 = 0LL;
  v23 = 0LL;
  *a6 = 0LL;
  v24 = 0LL;
  v21 = 0LL;
  v25 = 0LL;
  v10 = *(_QWORD **)(a1 + 176);
  X = 0LL;
  v11 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v10 + 80LL))(*v10, &v22);
  v12 = v11;
  if ( v11 < 0 )
  {
    v20 = 1307;
  }
  else
  {
    v11 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(***(_QWORD ***)(a1 + 176) + 80LL))(
            **(_QWORD **)(a1 + 176),
            &v24);
    v12 = v11;
    if ( v11 < 0 )
    {
      v20 = 1308;
    }
    else
    {
      v11 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v22 + 136LL))(v22, &v23);
      v12 = v11;
      if ( v11 < 0 )
      {
        v20 = 1309;
      }
      else
      {
        v11 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v24 + 136LL))(v24, &v21);
        v12 = v11;
        if ( v11 < 0 )
        {
          v20 = 1310;
        }
        else
        {
          v11 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _DWORD, __int64))(*(_QWORD *)a3 + 88LL))(
                  a3,
                  a2,
                  1LL,
                  a4,
                  LODWORD(FLOAT_0_25),
                  v23);
          v12 = v11;
          if ( v11 < 0 )
          {
            v20 = 1318;
          }
          else
          {
            v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v23 + 72LL))(v23);
            v12 = v13;
            if ( v13 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0x528u, 0LL);
              goto LABEL_32;
            }
            v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v22 + 32LL))(v22, 0LL, &X);
            v12 = v11;
            if ( v11 < 0 )
            {
              v20 = 1325;
            }
            else
            {
              v14 = (__m128)(unsigned int)X;
              v15 = *((float *)&X + 2);
              if ( *(float *)&X > *((float *)&X + 2) )
                goto LABEL_32;
              if ( COERCE_FLOAT(X & _xmm) < 8388608.0 )
                v14 = (__m128)COERCE_UNSIGNED_INT((float)(int)floorf_0(*(float *)&X));
              v16 = (__m128)DWORD1(X);
              if ( COERCE_FLOAT(DWORD1(X) & _xmm) < 8388608.0 )
                v16 = (__m128)COERCE_UNSIGNED_INT((float)(int)floorf_0(*((float *)&X + 1)));
              if ( COERCE_FLOAT(LODWORD(v15) & _xmm) < 8388608.0 )
                v15 = (float)(int)ceilf_0(v15);
              v17 = *((float *)&X + 3);
              if ( COERCE_FLOAT(HIDWORD(X) & _xmm) < 8388608.0 )
                v17 = (float)(int)ceilf_0(*((float *)&X + 3));
              if ( a5 )
              {
                *(_DWORD *)a5 = v14.m128_i32[0];
                *(float *)(a5 + 8) = v15;
                *(_DWORD *)(a5 + 4) = v16.m128_i32[0];
                *(float *)(a5 + 12) = v17;
              }
              v14.m128_f32[0] = v14.m128_f32[0] - 1.0;
              v16.m128_f32[0] = v16.m128_f32[0] - 1.0;
              *(_QWORD *)&X = __PAIR64__(v16.m128_u32[0], v14.m128_u32[0]);
              *((float *)&X + 2) = v15 + 1.0;
              *((float *)&X + 3) = v17 + 1.0;
              (*(void (__fastcall **)(__int64, unsigned __int64, _QWORD))(*(_QWORD *)v21 + 40LL))(
                v21,
                _mm_unpacklo_ps(v14, v16).m128_u64[0],
                0LL);
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v21 + 64LL))(v21, 1LL);
              (*(void (__fastcall **)(__int64, unsigned __int64, _QWORD))(*(_QWORD *)v21 + 40LL))(
                v21,
                _mm_unpacklo_ps((__m128)DWORD2(X), (__m128)HIDWORD(X)).m128_u64[0],
                0LL);
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v21 + 64LL))(v21, 1LL);
              v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 72LL))(v21);
              v12 = v11;
              if ( v11 < 0 )
              {
                v20 = 1371;
              }
              else
              {
                v26[0] = v22;
                v26[1] = v24;
                v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD *, __int64, __int64 *))(***(_QWORD ***)(a1 + 176)
                                                                                              + 64LL))(
                        **(_QWORD **)(a1 + 176),
                        0LL,
                        v26,
                        2LL,
                        &v25);
                v12 = v11;
                if ( v11 >= 0 )
                {
                  v18 = v25;
                  v25 = 0LL;
                  *a6 = v18;
                  goto LABEL_32;
                }
                v20 = 1381;
              }
            }
          }
        }
      }
    }
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, v20, 0LL);
LABEL_32:
  ReleaseInterface<IDXGIFactory7>(&v22);
  ReleaseInterface<IDXGIFactory7>(&v23);
  ReleaseInterface<IDXGIFactory7>(&v24);
  ReleaseInterface<IDXGIFactory7>(&v21);
  if ( v25 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  return v12;
}
