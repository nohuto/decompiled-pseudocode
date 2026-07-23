/*
 * XREFs of PpmPerfSnapUtility @ 0x140407500
 * Callers:
 *     PpmCheckSnapAllUtility @ 0x1404073F0 (PpmCheckSnapAllUtility.c)
 * Callees:
 *     PpmHeteroIsMultiClassParkingEnabled @ 0x140407990 (PpmHeteroIsMultiClassParkingEnabled.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

void __fastcall PpmPerfSnapUtility(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v3; // r11
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // rcx
  _DWORD *v6; // rdi
  __int64 v7; // r12
  _QWORD *v8; // r14
  __int64 v9; // r9
  unsigned __int64 v10; // r13
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  __int64 v14; // r8
  _BYTE *v15; // rbx
  unsigned __int64 v16; // rcx
  char v17; // cl
  unsigned __int64 v18; // rcx
  char v19; // cl
  unsigned __int64 v20; // rcx
  char v21; // cl
  unsigned __int64 v22; // rcx
  char v23; // cl
  unsigned int v24; // esi
  __int64 v25; // rbp
  signed int v26; // ebx
  __int64 v27; // r12
  __int64 v28; // rdx
  int v29; // ecx
  int v30; // ecx
  int v31; // ecx
  unsigned __int8 v32; // cl
  unsigned int v33; // r10d
  unsigned int j; // eax
  __int64 v35; // rcx
  unsigned __int64 v36; // rcx
  unsigned __int64 v37; // rax
  char v38; // cl
  char v39; // cl
  unsigned __int64 v40; // rcx
  unsigned __int64 v41; // rax
  unsigned int v42; // r10d
  unsigned int v43; // r8d
  __int64 v44; // rax
  unsigned int v45; // r10d
  unsigned int i; // r8d
  __int64 v47; // rax
  unsigned __int64 v48; // [rsp+20h] [rbp-68h]
  __int64 v49; // [rsp+28h] [rbp-60h]
  __int64 v50; // [rsp+30h] [rbp-58h]
  __int16 v51; // [rsp+90h] [rbp+8h]
  __int64 v52; // [rsp+98h] [rbp+10h]
  int v53; // [rsp+A0h] [rbp+18h]
  __int64 v54; // [rsp+A8h] [rbp+20h]

  v1 = *(_QWORD *)(a1 + 16);
  v54 = v1;
  if ( !v1 )
    return;
  v3 = 1LL;
  v4 = *(_QWORD *)(v1 + 104) - *(_QWORD *)(v1 + 40);
  v5 = v4;
  v6 = *(_DWORD **)(v1 + 152);
  v7 = *(_QWORD *)(v1 + 96) - *(_QWORD *)(v1 + 32);
  v8 = *(_QWORD **)(v1 + 88);
  v50 = v7;
  v48 = v4;
  v9 = *((_QWORD *)v6 + 1) - v8[1];
  v10 = *(_QWORD *)v6 - *v8;
  if ( !v4 )
    v5 = 1LL;
  v11 = (*(_QWORD *)(v1 + 128) - *(_QWORD *)(v1 + 64)) / v5;
  v12 = *(_QWORD *)v6 - *v8;
  v53 = v11;
  if ( !v10 )
    v12 = 1LL;
  v13 = 100 * v9 % v12;
  LODWORD(v9) = (unsigned __int8)(100 * v9 / v12);
  if ( (unsigned int)v9 > 0x64 )
    LOWORD(v9) = 100;
  v14 = *(_QWORD *)(a1 + 8);
  v49 = v14;
  v51 = v9;
  if ( !(_DWORD)v11 )
  {
    if ( v14 )
      v53 = *(_DWORD *)(v14 + 136);
    else
      v53 = 100;
  }
  v15 = (_BYTE *)(a1 + 68);
  if ( !*(_BYTE *)(a1 + 68) )
  {
    if ( (unsigned __int8)PpmHeteroIsMultiClassParkingEnabled(v12, v13) )
      *(_BYTE *)(v1 + 237) = 100;
    goto LABEL_52;
  }
  v16 = *(_QWORD *)v6 - *v8;
  if ( !v10 )
    v16 = 1LL;
  v17 = 100LL * (*((_QWORD *)v6 + 2) - v8[2]) / v16;
  if ( (unsigned __int8)v17 > 0x64u )
    v17 = 100;
  *(_BYTE *)(v1 + 232) = v17;
  v18 = v10;
  if ( !v10 )
    v18 = 1LL;
  v19 = 100LL * (*((_QWORD *)v6 + 3) - v8[3]) / v18;
  if ( (unsigned __int8)v19 > 0x64u )
    v19 = 100;
  *(_BYTE *)(v1 + 233) = v19;
  v20 = v10;
  if ( !v10 )
    v20 = 1LL;
  v21 = 100LL * (*((_QWORD *)v6 + 4) - v8[4]) / v20;
  if ( (unsigned __int8)v21 > 0x64u )
    v21 = 100;
  *(_BYTE *)(v1 + 234) = v21;
  v22 = v10;
  if ( !v10 )
    v22 = 1LL;
  v23 = 100LL * (*((_QWORD *)v6 + 5) - v8[5]) / v22;
  if ( (unsigned __int8)v23 > 0x64u )
    v23 = 100;
  *(_BYTE *)(v1 + 235) = v23;
  if ( !PopHeteroSystem )
  {
    *(_BYTE *)(v1 + 236) = 100;
    v39 = 100;
    goto LABEL_51;
  }
  v9 = 0LL;
  v24 = 0;
  v52 = 0LL;
  v25 = 0LL;
  do
  {
    v26 = 0;
    v27 = 2LL * (int)v24;
    do
    {
      if ( PpmHeteroMultiClassParkingEnabled && !PpmHeteroHgsParkingEnabled )
      {
        v28 = v27 + v26;
        v29 = KiDynamicHeteroCpuPolicy[v28];
        if ( v29 == 4 )
          goto LABEL_64;
        v30 = v29 - 1;
        if ( !v30 || (v31 = v30 - 1) == 0 )
        {
          v32 = KiMultiCoreHeteroUpperArchThreshold[v28];
          goto LABEL_65;
        }
        if ( v31 == 1 )
LABEL_64:
          v32 = KiMultiCoreHeteroLowerArchThreshold[v28];
        else
          v32 = -1;
LABEL_65:
        if ( v32 > *(_BYTE *)(a1 + 88) )
        {
          v45 = v6[12];
          for ( i = 0; i < v45; v9 += *(_QWORD *)&v6[2 * v47 + 14] - v8[v47 + 7] )
            v47 = v45 * (v26 + 2 * v24) + i++;
        }
        else if ( v32 == *(_BYTE *)(a1 + 88) )
        {
          v42 = v6[12];
          v43 = 0;
          if ( v42 )
          {
            do
            {
              v44 = v42 * (v26 + 2 * v24) + v43++;
              v25 += *(_QWORD *)&v6[2 * v44 + 14] - v8[v44 + 7];
            }
            while ( v43 < v42 );
            v52 = v25;
          }
        }
        goto LABEL_40;
      }
      if ( KiDynamicHeteroCpuPolicy[v27 + v26] != 3 )
      {
        v33 = v6[12];
        for ( j = 0; j < v33; v9 += *(_QWORD *)&v6[2 * v35 + 14] - v8[v35 + 7] )
          v35 = v33 * (v26 + 2 * v24) + j++;
      }
LABEL_40:
      ++v26;
    }
    while ( (unsigned int)v26 < 2 );
    ++v24;
  }
  while ( v24 < 7 );
  v1 = v54;
  v4 = v48;
  v3 = 1LL;
  v7 = v50;
  v36 = v10;
  if ( !v10 )
    v36 = 1LL;
  v37 = 100 * v9;
  LOWORD(v9) = v51;
  v38 = v37 / v36;
  if ( (unsigned __int8)v38 > 0x64u )
    v38 = 100;
  *(_BYTE *)(v54 + 236) = v38;
  if ( !v10 )
    v10 = 1LL;
  v39 = 100 * v52 / v10;
  if ( (unsigned __int8)v39 > 0x64u )
    v39 = 100;
  v14 = v49;
LABEL_51:
  *(_BYTE *)(v1 + 237) = v39;
  v15 = (_BYTE *)(a1 + 68);
LABEL_52:
  *(_WORD *)(a1 + 60) = v9;
  if ( v14 )
  {
    v40 = v4;
    if ( !v4 )
      v40 = v3;
    v41 = (*(_QWORD *)(v1 + 120) - *(_QWORD *)(v1 + 56)) / v40;
    if ( !(_DWORD)v41 )
    {
      LODWORD(v41) = *(_DWORD *)(v14 + 132);
      v15 = (_BYTE *)(a1 + 68);
    }
    *(_DWORD *)(v14 + 132) = v41;
    *(_DWORD *)(v14 + 136) = v53;
  }
  *(_OWORD *)(v1 + 32) = *(_OWORD *)(v1 + 96);
  *(_OWORD *)(v1 + 48) = *(_OWORD *)(v1 + 112);
  *(_OWORD *)(v1 + 64) = *(_OWORD *)(v1 + 128);
  *(_QWORD *)(v1 + 80) = *(_QWORD *)(v1 + 144);
  memmove(v8, v6, 112 * v6[12] + 56);
  if ( *v15 )
  {
    *(_QWORD *)(a1 + 104) += v4;
    *(_QWORD *)(a1 + 112) += v7;
  }
}
