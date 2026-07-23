/*
 * XREFs of FsepPropagateGovernedFeatureEffectiveState @ 0x140829394
 * Callers:
 *     FseInitializeGovernedFeaturesEffectiveStates @ 0x14082918C (FseInitializeGovernedFeaturesEffectiveStates.c)
 * Callees:
 *     AllocateZeroMemory @ 0x1406A1AB8 (AllocateZeroMemory.c)
 *     SafeFree @ 0x1406A1B14 (SafeFree.c)
 */

__int64 __fastcall FsepPropagateGovernedFeatureEffectiveState(__int64 a1, unsigned __int16 a2, __int64 a3, int *a4)
{
  int v4; // r8d
  int v8; // r14d
  int v9; // r10d
  __int64 v10; // r13
  __int64 v11; // r11
  int v12; // ecx
  _QWORD *v13; // rsi
  __int64 v14; // r8
  unsigned __int64 v15; // r9
  int v16; // ebx
  unsigned __int64 v17; // r9
  unsigned int v18; // edx
  unsigned int v19; // r12d
  int v20; // r9d
  __int16 v21; // r10
  __int64 v22; // rax
  __int64 v23; // rdx
  unsigned int v24; // r11d
  unsigned int v25; // eax
  int v26; // ecx
  unsigned int v27; // r11d
  unsigned int v28; // eax
  int v29; // eax
  unsigned int v30; // r15d
  unsigned int v32; // [rsp+24h] [rbp-4Ch]
  __int64 v33; // [rsp+28h] [rbp-48h]
  unsigned __int64 v34; // [rsp+28h] [rbp-48h]
  __int64 v35; // [rsp+28h] [rbp-48h]
  __int64 v36; // [rsp+30h] [rbp-40h]
  _QWORD *v37; // [rsp+48h] [rbp-28h] BYREF
  __int128 v38; // [rsp+50h] [rbp-20h]
  __int128 v39; // [rsp+60h] [rbp-10h]
  int v40; // [rsp+C0h] [rbp+50h]

  v4 = *a4;
  v37 = 0LL;
  v8 = AllocateZeroMemory(&v37, 8LL * (unsigned __int16)v4);
  if ( v8 >= 0 )
  {
    v9 = a4[1];
    v10 = (__int64)a4 + *((_QWORD *)a4 + 1);
    v11 = (__int64)a4 + *((_QWORD *)a4 + 2);
    v12 = a2;
    v13 = v37;
    HIDWORD(v33) = (unsigned __int16)v9;
    LODWORD(v33) = v12;
    v32 = (unsigned __int16)v9;
    *v37 = v33;
    LODWORD(v14) = 1;
    v36 = v11;
    v40 = v9;
    while ( 1 )
    {
      v14 = (unsigned int)(v14 - 1);
      v15 = v13[v14];
      v16 = (unsigned __int16)v15;
      v34 = v15;
      v38 = *(_OWORD *)(v10 + 16LL * (unsigned __int16)v15);
      v39 = *(_OWORD *)(v10 + 16LL * ((unsigned int)(unsigned __int16)v15 + 1));
      if ( (int)v15 >> 16 )
        break;
      if ( WORD2(v38) != WORD2(v39) )
      {
        LODWORD(v34) = (unsigned __int16)v15 | 0x10000;
        v13[v14] = v34;
        LODWORD(v14) = v14 + 1;
      }
LABEL_40:
      if ( !(_DWORD)v14 )
        goto LABEL_54;
    }
    if ( (int)v15 >> 16 == 1 )
    {
      v17 = HIDWORD(v15);
      if ( (unsigned __int16)v17 == v9 )
        v18 = v17 ^ (unsigned __int16)(v17 ^ WORD2(v38));
      else
        v18 = HIDWORD(v34) & 0xFFFF0000 | (unsigned __int16)(WORD2(v34) + 1);
      while ( 1 )
      {
        HIDWORD(v34) = v18;
        if ( (unsigned __int16)v18 >= (unsigned int)WORD2(v39) )
          goto LABEL_40;
        if ( (unsigned __int16)(*(_WORD *)(v11 + 4LL * (unsigned __int16)v18 + 2) - 1) <= 1u )
          break;
        v18 ^= (unsigned __int16)(v18 ^ (v18 + 1));
      }
      if ( (unsigned __int16)v18 >= (unsigned int)WORD2(v39) )
        goto LABEL_40;
      v19 = HIDWORD(v38);
      v13[v14] = v34;
      v14 = (unsigned int)(v14 + 1);
      v20 = (v19 >> 1) & 3;
      v21 = *(_WORD *)(v11 + 4LL * (unsigned __int16)v18 + 2);
      v22 = (unsigned __int16)*(_DWORD *)(v11 + 4LL * (unsigned __int16)v18);
      v23 = v22;
      v35 = 16 * v22;
      v24 = *(_DWORD *)(16 * v22 + v10 + 12);
      if ( (v24 & 1) != 0 || (v25 = *(_DWORD *)(a1 + 4 * v22), (v25 & 1) == 0) )
        v25 = 2 * ((16 * (v24 >> 1)) | (v24 >> 3) & 0xF);
      v26 = v25 & 0x60;
      v27 = (v19 >> 3) & 0xF;
      if ( v20 == 2 )
      {
        if ( v27 == 15 )
          v27 = 0;
      }
      else if ( !v20 )
      {
        goto LABEL_39;
      }
      v28 = (v25 >> 1) & 0xF;
      if ( v27 <= v28 )
      {
        if ( v27 != v28 )
        {
          if ( v21 != 2 || v20 != 1 || v26 == 32 )
            goto LABEL_39;
          goto LABEL_48;
        }
        if ( v21 != 1 )
        {
          if ( v21 != 2 || v20 != 1 )
            goto LABEL_39;
          goto LABEL_48;
        }
        if ( v20 == 2 )
        {
          if ( v26 == 32 && !v28 )
          {
LABEL_38:
            if ( (*(_DWORD *)(a1 + 4 * v23) & 0x100) == 0 )
              goto LABEL_49;
LABEL_39:
            v11 = v36;
            v9 = v40;
            goto LABEL_40;
          }
        }
        else if ( v20 == 1 && v26 != 32 )
        {
          goto LABEL_49;
        }
        v29 = *(_DWORD *)(a1 + 4 * v23);
        if ( (v29 & 1) != 0 && (v29 & 0x60) != 0 )
          goto LABEL_39;
      }
      else
      {
        if ( (v21 != 2 || v20 != 1) && v21 != 1 )
          goto LABEL_39;
        if ( v21 == 2 )
        {
          if ( v20 == 1 )
LABEL_48:
            *(_DWORD *)(a1 + 4 * v23) |= 0x100u;
LABEL_49:
          v30 = (v16 << 7) | (((8 * v27) | (*(_DWORD *)(v35 + v10 + 12) & 0xFFFFFFFE ^ 1) & 0xFFFFFF81) ^ (2 * ((v19 >> 1) & 3))) & 0xFF80007F;
          *(_DWORD *)(v35 + v10 + 12) = v30 ^ (v30 ^ v19 & 0xFF800000) & 0x800000;
          v13[v14] = __PAIR64__(v32, (unsigned int)v23 | 0x10000);
          LODWORD(v14) = v14 + 1;
          goto LABEL_39;
        }
      }
      if ( v20 != 2 )
        goto LABEL_49;
      goto LABEL_38;
    }
    v8 = -1073741811;
  }
LABEL_54:
  SafeFree((void **)&v37);
  return (unsigned int)v8;
}
