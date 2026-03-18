/*
 * XREFs of ?Convert_128bppABGR_64bppABGRFloat@@YAXPEBUPipelineParams@@PEBUScanOpParams@@@Z @ 0x1802DDBE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Convert_128bppABGR_64bppABGRFloat(const struct PipelineParams *a1, const struct ScanOpParams *a2)
{
  int v2; // r11d
  _DWORD *v3; // r10
  _WORD *i; // r9
  unsigned int v5; // edx
  int v6; // r8d
  __int16 v7; // r8
  int v8; // ecx
  unsigned int v9; // edx
  unsigned int v10; // ecx
  unsigned int v11; // edx
  int v12; // r8d
  __int16 v13; // r8
  int v14; // ecx
  unsigned int v15; // edx
  unsigned int v16; // ecx
  unsigned int v17; // edx
  int v18; // r8d
  __int16 v19; // r8
  int v20; // ecx
  unsigned int v21; // edx
  unsigned int v22; // ecx
  unsigned int v23; // edx
  int v24; // r8d
  __int16 v25; // r8
  int v26; // ecx
  unsigned int v27; // edx
  unsigned int v28; // ecx

  v2 = *((_DWORD *)a1 + 2);
  v3 = (_DWORD *)*((_QWORD *)a2 + 1);
  for ( i = *(_WORD **)a2; v2; i += 4 )
  {
    --v2;
    v5 = *v3 & 0x7FFFFFFF;
    v6 = HIWORD(*v3) & 0x8000;
    if ( v5 <= 0x47FFEFFF )
    {
      if ( v5 >= 0x38800000 )
      {
        v10 = v5 + ((v5 >> 13) & 1) - 939520001;
      }
      else
      {
        v8 = 113 - (v5 >> 23);
        if ( v8 >= 24 )
          v9 = 0;
        else
          v9 = (*v3 & 0x7FFFFF | 0x800000u) >> v8;
        v10 = ((v9 >> 13) & 1) + v9 + 4095;
      }
      v7 = (v10 >> 13) | v6;
    }
    else
    {
      v7 = v6 | 0x7FFF;
    }
    *i = v7;
    v11 = v3[1] & 0x7FFFFFFF;
    v12 = HIWORD(v3[1]) & 0x8000;
    if ( v11 <= 0x47FFEFFF )
    {
      if ( v11 >= 0x38800000 )
      {
        v16 = v11 + ((v11 >> 13) & 1) - 939520001;
      }
      else
      {
        v14 = 113 - (v11 >> 23);
        if ( v14 >= 24 )
          v15 = 0;
        else
          v15 = (v3[1] & 0x7FFFFF | 0x800000u) >> v14;
        v16 = ((v15 >> 13) & 1) + v15 + 4095;
      }
      v13 = (v16 >> 13) | v12;
    }
    else
    {
      v13 = v12 | 0x7FFF;
    }
    i[1] = v13;
    v17 = v3[2] & 0x7FFFFFFF;
    v18 = HIWORD(v3[2]) & 0x8000;
    if ( v17 <= 0x47FFEFFF )
    {
      if ( v17 >= 0x38800000 )
      {
        v22 = v17 + ((v17 >> 13) & 1) - 939520001;
      }
      else
      {
        v20 = 113 - (v17 >> 23);
        if ( v20 >= 24 )
          v21 = 0;
        else
          v21 = (v3[2] & 0x7FFFFF | 0x800000u) >> v20;
        v22 = ((v21 >> 13) & 1) + v21 + 4095;
      }
      v19 = (v22 >> 13) | v18;
    }
    else
    {
      v19 = v18 | 0x7FFF;
    }
    i[2] = v19;
    v23 = v3[3] & 0x7FFFFFFF;
    v24 = HIWORD(v3[3]) & 0x8000;
    if ( v23 <= 0x47FFEFFF )
    {
      if ( v23 >= 0x38800000 )
      {
        v28 = v23 + ((v23 >> 13) & 1) - 939520001;
      }
      else
      {
        v26 = 113 - (v23 >> 23);
        if ( v26 >= 24 )
          v27 = 0;
        else
          v27 = (v3[3] & 0x7FFFFF | 0x800000u) >> v26;
        v28 = ((v27 >> 13) & 1) + v27 + 4095;
      }
      v25 = (v28 >> 13) | v24;
    }
    else
    {
      v25 = v24 | 0x7FFF;
    }
    i[3] = v25;
    v3 += 4;
  }
}
