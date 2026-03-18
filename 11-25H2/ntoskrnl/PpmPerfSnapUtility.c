/*
 * XREFs of PpmPerfSnapUtility @ 0x140409A60
 * Callers:
 *     PpmCheckSnapAllUtility @ 0x140409950 (PpmCheckSnapAllUtility.c)
 * Callees:
 *     PpmHeteroIsMultiClassParkingEnabled @ 0x140409E50 (PpmHeteroIsMultiClassParkingEnabled.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 */

void __fastcall PpmPerfSnapUtility(__int64 a1)
{
  __int64 v1; // r10
  _DWORD *v3; // r11
  char *v4; // r15
  __int64 v5; // rsi
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rcx
  __int64 v9; // rbp
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rcx
  __int64 v12; // r14
  char v13; // cl
  char *v14; // rdi
  _QWORD *v15; // r9
  __int64 v16; // rsi
  unsigned __int64 v17; // rcx
  __int64 v18; // rdx
  char v19; // cl
  __int64 v20; // rbp
  unsigned int i; // r8d
  signed int v22; // edx
  __int64 v23; // r13
  __int64 v24; // r9
  unsigned __int8 v25; // al
  unsigned int v26; // edi
  unsigned int m; // r9d
  __int64 v28; // rax
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // rax
  unsigned int v31; // edi
  unsigned int j; // r9d
  __int64 v33; // rax
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // rax
  char v36; // cl
  unsigned __int64 v37; // rax
  unsigned int v38; // edi
  unsigned int k; // r9d
  __int64 v40; // rax
  unsigned __int64 v41; // [rsp+20h] [rbp-58h]
  __int64 v42; // [rsp+28h] [rbp-50h]
  __int16 v43; // [rsp+80h] [rbp+8h]
  int v44; // [rsp+88h] [rbp+10h]
  __int64 v45; // [rsp+98h] [rbp+20h]

  v1 = *(_QWORD *)(a1 + 16);
  if ( !v1 )
    return;
  v3 = *(_DWORD **)(v1 + 152);
  v4 = *(char **)(v1 + 88);
  v5 = *(_QWORD *)(v1 + 96) - *(_QWORD *)(v1 + 32);
  v6 = *(_QWORD *)v3 - *(_QWORD *)v4;
  v7 = *(_QWORD *)(v1 + 104) - *(_QWORD *)(v1 + 40);
  v8 = v7;
  v9 = *(_QWORD *)(a1 + 8);
  v42 = v5;
  if ( !v7 )
    v8 = 1LL;
  v41 = *(_QWORD *)(v1 + 104) - *(_QWORD *)(v1 + 40);
  v45 = *(_QWORD *)(a1 + 8);
  v10 = (*(_QWORD *)(v1 + 128) - *(_QWORD *)(v1 + 64)) / v8;
  v11 = *(_QWORD *)v3 - *(_QWORD *)v4;
  v44 = v10;
  if ( !v6 )
    v11 = 1LL;
  LODWORD(v12) = (unsigned __int8)(100LL * (*((_QWORD *)v3 + 1) - *((_QWORD *)v4 + 1)) / v11);
  if ( (unsigned int)v12 > 0x64 )
    LOWORD(v12) = 100;
  v43 = v12;
  if ( !(_DWORD)v10 )
  {
    if ( v9 )
      v44 = *(_DWORD *)(v9 + 136);
    else
      v44 = 100;
  }
  if ( *(_BYTE *)(a1 + 68) )
  {
    v14 = (char *)(v1 + 232);
    v15 = v3 + 4;
    v16 = 4LL;
    do
    {
      v17 = v6;
      v18 = *v15 - *(_QWORD *)((char *)v15 + v4 - (char *)v3);
      ++v15;
      if ( !v6 )
        v17 = 1LL;
      v19 = 100 * v18 / v17;
      if ( (unsigned __int8)v19 > 0x64u )
        v19 = 100;
      *v14++ = v19;
      --v16;
    }
    while ( v16 );
    if ( PopHeteroSystem )
    {
      v12 = 0LL;
      v20 = 0LL;
      for ( i = 0; i < 7; ++i )
      {
        v22 = 0;
        v23 = 2LL * (int)i;
        do
        {
          if ( !PpmHeteroMultiClassParkingEnabled || PpmHeteroHgsParkingEnabled )
          {
            if ( KiDynamicHeteroCpuPolicy[v23 + v22] != 3 )
            {
              v31 = v3[12];
              for ( j = 0; j < v31; v12 += *(_QWORD *)&v3[2 * v33 + 14] - *(_QWORD *)&v4[8 * v33 + 56] )
              {
                v33 = j + v31 * (v22 + 2 * i);
                ++j;
              }
            }
          }
          else
          {
            v24 = v23 + v22;
            if ( KiDynamicHeteroCpuPolicy[v24] == 1 || KiDynamicHeteroCpuPolicy[v24] == 2 )
            {
              v25 = KiMultiCoreHeteroUpperArchThreshold[v24];
            }
            else if ( (unsigned int)(KiDynamicHeteroCpuPolicy[v24] - 3) > 1 )
            {
              v25 = -1;
            }
            else
            {
              v25 = KiMultiCoreHeteroLowerArchThreshold[v24];
            }
            if ( v25 > *(_BYTE *)(a1 + 88) )
            {
              v38 = v3[12];
              for ( k = 0; k < v38; v12 += *(_QWORD *)&v3[2 * v40 + 14] - *(_QWORD *)&v4[8 * v40 + 56] )
              {
                v40 = k + v38 * (v22 + 2 * i);
                ++k;
              }
            }
            else if ( v25 == *(_BYTE *)(a1 + 88) )
            {
              v26 = v3[12];
              for ( m = 0; m < v26; v20 += *(_QWORD *)&v3[2 * v28 + 14] - *(_QWORD *)&v4[8 * v28 + 56] )
              {
                v28 = m + v26 * (v22 + 2 * i);
                ++m;
              }
            }
          }
          ++v22;
        }
        while ( (unsigned int)v22 < 2 );
      }
      v34 = v6;
      if ( !v6 )
        v34 = 1LL;
      v35 = 100 * v12;
      LOWORD(v12) = v43;
      v36 = v35 / v34;
      if ( (unsigned __int8)v36 > 0x64u )
        v36 = 100;
      *(_BYTE *)(v1 + 236) = v36;
      if ( !v6 )
        v6 = 1LL;
      v37 = 100 * v20;
      v9 = v45;
      v13 = v37 / v6;
      if ( (unsigned __int8)v13 > 0x64u )
        v13 = 100;
    }
    else
    {
      *(_BYTE *)(v1 + 236) = 100;
      v13 = 100;
    }
    v7 = v41;
    v5 = v42;
    goto LABEL_11;
  }
  if ( (unsigned __int8)PpmHeteroIsMultiClassParkingEnabled(100LL) )
LABEL_11:
    *(_BYTE *)(v1 + 237) = v13;
  *(_WORD *)(a1 + 60) = v12;
  if ( v9 )
  {
    v29 = v7;
    if ( !v7 )
      v29 = 1LL;
    v30 = (*(_QWORD *)(v1 + 120) - *(_QWORD *)(v1 + 56)) / v29;
    if ( !(_DWORD)v30 )
      LODWORD(v30) = *(_DWORD *)(v9 + 132);
    *(_DWORD *)(v9 + 132) = v30;
    *(_DWORD *)(v9 + 136) = v44;
  }
  *(_OWORD *)(v1 + 32) = *(_OWORD *)(v1 + 96);
  *(_OWORD *)(v1 + 48) = *(_OWORD *)(v1 + 112);
  *(_OWORD *)(v1 + 64) = *(_OWORD *)(v1 + 128);
  *(_QWORD *)(v1 + 80) = *(_QWORD *)(v1 + 144);
  memmove(v4, v3, 112 * v3[12] + 56);
  if ( *(_BYTE *)(a1 + 68) )
  {
    *(_QWORD *)(a1 + 104) += v7;
    *(_QWORD *)(a1 + 112) += v5;
  }
}
