/*
 * XREFs of ?IsDefaultGammaRamp@DXGK_GAMMA_RAMP@@QEBAEXZ @ 0x1401974FC
 * Callers:
 *     ?UpdateGammaRamp@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1402D71F8 (-UpdateGammaRamp@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall DXGK_GAMMA_RAMP::IsDefaultGammaRamp(DXGK_GAMMA_RAMP *this)
{
  int v2; // eax
  char *v3; // rcx
  __int64 v4; // rdx
  _DWORD *v5; // rdx
  unsigned int v6; // r8d
  int v7; // r11d
  int v8; // r10d
  int v9; // r9d
  int v10; // eax
  __int64 v11; // rax
  __m128i v12; // xmm0
  unsigned int v13; // r8d
  _DWORD *v14; // rax
  int v15; // edx

  if ( *((_BYTE *)this + 40) )
    return *((_BYTE *)this + 41);
  v2 = *((_DWORD *)this + 4);
  *((_BYTE *)this + 40) = 1;
  if ( v2 == 1 )
  {
    v3 = (char *)this + 41;
    *v3 = 1;
  }
  else
  {
    if ( v2 != 2 )
    {
      if ( v2 == 3 )
      {
        v11 = *((_QWORD *)this + 4);
        v12 = 0LL;
        if ( *(_QWORD *)v11 == 0x3F8000003F800000LL
          && *(_DWORD *)(v11 + 8) == 1065353216
          && !*(_DWORD *)(v11 + 12)
          && !*(_DWORD *)(v11 + 16)
          && !*(_DWORD *)(v11 + 20) )
        {
          v3 = (char *)this + 41;
          v13 = 0;
          v14 = (_DWORD *)(v11 + 28);
          *v3 = 1;
          while ( v13 < 0x401 )
          {
            v15 = _mm_cvtsi128_si32(v12);
            *(float *)v12.m128i_i32 = *(float *)v12.m128i_i32 + 0.0009765625;
            if ( *(v14 - 1) != v15 || *v14 != v15 || v14[1] != v15 )
              goto LABEL_29;
            ++v13;
            v14 += 3;
          }
          return *v3;
        }
      }
      else
      {
        *((_BYTE *)this + 40) = 0;
      }
      v3 = (char *)this + 41;
LABEL_29:
      *v3 = 0;
      return *v3;
    }
    v4 = *((_QWORD *)this + 4);
    v3 = (char *)this + 41;
    v5 = (_DWORD *)(v4 + 512);
    v6 = 0;
    *v3 = 1;
    while ( v6 < 0x80 )
    {
      v7 = *(v5 - 128);
      v8 = (v6 | (v6 << 16) | 0x8000) << 9;
      v9 = (2 * (v6 | (v6 << 16) | 0x8000)) | v8;
      if ( v7 != v8 && v7 != v9 )
        goto LABEL_29;
      if ( *v5 != v8 && *v5 != v9 )
        goto LABEL_29;
      v10 = v5[128];
      if ( v10 != v8 && v10 != v9 )
        goto LABEL_29;
      ++v6;
      ++v5;
    }
  }
  return *v3;
}
