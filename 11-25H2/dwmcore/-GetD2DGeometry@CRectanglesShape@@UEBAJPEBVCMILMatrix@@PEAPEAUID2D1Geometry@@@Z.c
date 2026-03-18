/*
 * XREFs of ?GetD2DGeometry@CRectanglesShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x1801E3C90
 * Callers:
 *     ?D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18004DFE0 (-D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Transform@CMILMatrix@@QEBAXPEBUD2D_POINT_2F@@PEAU2@I@Z @ 0x18017070C (-Transform@CMILMatrix@@QEBAXPEBUD2D_POINT_2F@@PEAU2@I@Z.c)
 *     ?EnsureD2DGeometry@CRectanglesShape@@AEBAJXZ @ 0x1801E3F44 (-EnsureD2DGeometry@CRectanglesShape@@AEBAJXZ.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CRectanglesShape::GetD2DGeometry(
        CRectanglesShape *this,
        const struct CMILMatrix *a2,
        struct ID2D1Geometry **a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  int v9; // eax
  int v10; // eax
  __int64 v11; // rcx
  unsigned __int64 v12; // r15
  __int64 v13; // rbx
  FLOAT v14; // xmm2_4
  __int64 v15; // rax
  int v16; // xmm0_4
  int v17; // xmm1_4
  int v18; // eax
  struct ID2D1Geometry *v19; // rax
  __int64 v20; // [rsp+30h] [rbp-39h] BYREF
  struct ID2D1Geometry *v21; // [rsp+38h] [rbp-31h] BYREF
  struct D2D_POINT_2F v22; // [rsp+40h] [rbp-29h] BYREF
  unsigned int v23; // [rsp+48h] [rbp-21h]
  unsigned int v24; // [rsp+4Ch] [rbp-1Dh]
  unsigned int v25; // [rsp+50h] [rbp-19h]
  unsigned int v26; // [rsp+54h] [rbp-15h]
  unsigned int v27; // [rsp+58h] [rbp-11h]
  unsigned int v28; // [rsp+5Ch] [rbp-Dh]
  struct D2D_POINT_2F v29; // [rsp+60h] [rbp-9h] BYREF
  _DWORD v30[3]; // [rsp+68h] [rbp-1h]
  int v31; // [rsp+74h] [rbp+Bh]
  FLOAT v32; // [rsp+78h] [rbp+Fh]
  int v33; // [rsp+7Ch] [rbp+13h]

  v21 = 0LL;
  v20 = 0LL;
  if ( a2 )
  {
    v9 = (*(__int64 (__fastcall **)(__int64, struct ID2D1Geometry **))(*(_QWORD *)g_DeviceManager + 80LL))(
           g_DeviceManager,
           &v21);
    v7 = v9;
    if ( v9 >= 0 )
    {
      v10 = (*(__int64 (__fastcall **)(struct ID2D1Geometry *, __int64 *))(*(_QWORD *)v21 + 136LL))(v21, &v20);
      v7 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x3Au, 0LL);
      }
      else
      {
        v11 = *((_QWORD *)this + 2);
        v12 = 0LL;
        if ( (*((_QWORD *)this + 3) - v11) >> 4 )
        {
          v13 = 0LL;
          do
          {
            v14 = *(float *)(v13 + v11);
            v15 = 0LL;
            v16 = *(_DWORD *)(v13 + v11 + 4);
            v17 = *(_DWORD *)(v13 + v11 + 8);
            v29.x = v14;
            do
            {
              *((_DWORD *)&v29.y + 2 * v15) = v16;
              v30[2 * v15++] = v17;
            }
            while ( v15 < 2 );
            v31 = *(_DWORD *)(v13 + v11 + 12);
            v33 = v31;
            v32 = v14;
            CMILMatrix::Transform(a2, &v29, &v22, 4);
            (*(void (__fastcall **)(__int64, unsigned __int64, _QWORD))(*(_QWORD *)v20 + 40LL))(
              v20,
              _mm_unpacklo_ps((__m128)LODWORD(v22.x), (__m128)LODWORD(v22.y)).m128_u64[0],
              0LL);
            (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v20 + 80LL))(
              v20,
              _mm_unpacklo_ps((__m128)v23, (__m128)v24).m128_u64[0]);
            (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v20 + 80LL))(
              v20,
              _mm_unpacklo_ps((__m128)v25, (__m128)v26).m128_u64[0]);
            (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v20 + 80LL))(
              v20,
              _mm_unpacklo_ps((__m128)v27, (__m128)v28).m128_u64[0]);
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v20 + 64LL))(v20, 1LL);
            v11 = *((_QWORD *)this + 2);
            ++v12;
            v13 += 16LL;
          }
          while ( v12 < (*((_QWORD *)this + 3) - v11) >> 4 );
        }
        v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 72LL))(v20);
        v7 = v18;
        if ( v18 >= 0 )
        {
          v19 = v21;
          v21 = 0LL;
          *a3 = v19;
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v18, 0x5Cu, 0LL);
        }
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x38u, 0LL);
    }
  }
  else
  {
    v6 = CRectanglesShape::EnsureD2DGeometry(this);
    v7 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x31u, 0LL);
    }
    else
    {
      *a3 = (struct ID2D1Geometry *)*((_QWORD *)this + 7);
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 8LL))(*((_QWORD *)this + 7));
    }
  }
  if ( v21 )
  {
    (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v21 + 16LL))(v21);
    v21 = 0LL;
  }
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  return v7;
}
