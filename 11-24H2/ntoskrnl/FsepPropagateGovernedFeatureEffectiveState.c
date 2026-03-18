/*
 * XREFs of FsepPropagateGovernedFeatureEffectiveState @ 0x140828BC4
 * Callers:
 *     FseInitializeGovernedFeaturesEffectiveStates @ 0x1408289BC (FseInitializeGovernedFeaturesEffectiveStates.c)
 * Callees:
 *     AllocateZeroMemory @ 0x1406A09B0 (AllocateZeroMemory.c)
 *     SafeFree @ 0x1406A0A0C (SafeFree.c)
 */

__int64 __fastcall FsepPropagateGovernedFeatureEffectiveState(__int64 a1, unsigned __int16 a2, __int64 a3, int *a4)
{
  int v4; // r8d
  int v7; // esi
  int v8; // r11d
  __int64 v9; // r13
  __int64 v10; // r14
  int v11; // ecx
  _QWORD *v12; // rdi
  __int64 v13; // r8
  unsigned __int64 v14; // r10
  int v15; // ebx
  unsigned __int64 v16; // r10
  bool v17; // r9
  unsigned int v18; // edx
  unsigned int v19; // r12d
  int v20; // r10d
  __int16 v21; // r11
  __int64 v22; // rax
  __int64 v23; // r14
  unsigned int v24; // edx
  unsigned int v25; // eax
  int v26; // ecx
  unsigned int v27; // eax
  unsigned int v28; // edx
  bool v29; // zf
  int v30; // eax
  unsigned int v31; // r15d
  __int64 v33; // [rsp+20h] [rbp-50h]
  unsigned __int64 v34; // [rsp+20h] [rbp-50h]
  __int64 v35; // [rsp+20h] [rbp-50h]
  __int64 v36; // [rsp+28h] [rbp-48h]
  _QWORD *v37; // [rsp+40h] [rbp-30h] BYREF
  __int128 v38; // [rsp+48h] [rbp-28h]
  __int128 v39; // [rsp+58h] [rbp-18h]
  int v41; // [rsp+C0h] [rbp+50h]
  unsigned int v42; // [rsp+C8h] [rbp+58h]

  v4 = *a4;
  v37 = 0LL;
  v7 = AllocateZeroMemory(&v37, 8LL * (unsigned __int16)v4);
  if ( v7 >= 0 )
  {
    v8 = a4[1];
    v9 = (__int64)a4 + *((_QWORD *)a4 + 1);
    v10 = (__int64)a4 + *((_QWORD *)a4 + 2);
    v11 = a2;
    v12 = v37;
    HIDWORD(v33) = (unsigned __int16)v8;
    LODWORD(v33) = v11;
    v42 = (unsigned __int16)v8;
    *v37 = v33;
    LODWORD(v13) = 1;
    v36 = v10;
    v41 = v8;
    while ( 1 )
    {
      v13 = (unsigned int)(v13 - 1);
      v14 = v12[v13];
      v15 = (unsigned __int16)v14;
      v34 = v14;
      v38 = *(_OWORD *)(v9 + 16LL * (unsigned __int16)v14);
      v39 = *(_OWORD *)(v9 + 16LL * ((unsigned int)(unsigned __int16)v14 + 1));
      if ( (int)v14 >> 16 )
        break;
      if ( WORD2(v38) != WORD2(v39) )
      {
        LODWORD(v34) = (unsigned __int16)v14 | 0x10000;
        v12[v13] = v34;
        LODWORD(v13) = v13 + 1;
      }
LABEL_42:
      if ( !(_DWORD)v13 )
        goto LABEL_45;
    }
    if ( (int)v14 >> 16 == 1 )
    {
      v16 = HIDWORD(v14);
      v17 = 0;
      if ( (unsigned __int16)v16 == v8 )
        v18 = v16 ^ (unsigned __int16)(v16 ^ WORD2(v38));
      else
        v18 = HIDWORD(v34) & 0xFFFF0000 | (unsigned __int16)(WORD2(v34) + 1);
      while ( 1 )
      {
        HIDWORD(v34) = v18;
        if ( (unsigned __int16)v18 >= (unsigned int)WORD2(v39) )
          goto LABEL_42;
        if ( (unsigned __int16)(*(_WORD *)(v10 + 4LL * (unsigned __int16)v18 + 2) - 1) <= 1u )
          break;
        v18 ^= (unsigned __int16)(v18 ^ (v18 + 1));
      }
      if ( (unsigned __int16)v18 >= (unsigned int)WORD2(v39) )
        goto LABEL_42;
      v19 = HIDWORD(v38);
      v12[v13] = v34;
      v13 = (unsigned int)(v13 + 1);
      v20 = (v19 >> 1) & 3;
      v21 = *(_WORD *)(v36 + 4LL * (unsigned __int16)v18 + 2);
      v22 = (unsigned __int16)*(_DWORD *)(v10 + 4LL * (unsigned __int16)v18);
      v23 = v22;
      v35 = 16 * v22;
      v24 = *(_DWORD *)(16 * v22 + v9 + 12);
      if ( (v24 & 1) != 0 || (v25 = *(_DWORD *)(a1 + 4 * v22), (v25 & 1) == 0) )
        v25 = 2 * ((16 * (v24 >> 1)) | (v24 >> 3) & 0xF);
      v26 = v25 & 0x60;
      if ( !v20 )
        goto LABEL_41;
      v27 = (v25 >> 1) & 0xF;
      v28 = (v19 >> 3) & 0xF;
      if ( v28 > v27 )
      {
        if ( v21 != 2 || v20 != 1 )
        {
          v29 = v21 == 1;
          goto LABEL_32;
        }
LABEL_33:
        v17 = 1;
        goto LABEL_37;
      }
      if ( v28 != v27 )
      {
        if ( v21 == 2 && v20 == 1 )
          v17 = v26 != 32;
LABEL_37:
        if ( v17 )
          goto LABEL_38;
LABEL_41:
        v8 = v41;
        v10 = v36;
        goto LABEL_42;
      }
      if ( v21 == 1 )
      {
        if ( v20 == 2 )
        {
          if ( v26 == 32 && !v27 )
          {
LABEL_25:
            v17 = 1;
LABEL_38:
            v31 = (*(_DWORD *)(v35 + v9 + 12) ^ ((unsigned __int8)*(_DWORD *)(v35 + v9 + 12) ^ v17) & 1 ^ ((unsigned __int8)(*(_DWORD *)(v35 + v9 + 12) ^ (*(_DWORD *)(v35 + v9 + 12) ^ v17) & 1) ^ (unsigned __int8)(8 * (v19 >> 3))) & 0x78) & 0xFFFFFFF9 ^ (2 * ((v19 >> 1) & 3));
            *(_DWORD *)(v35 + v9 + 12) = ((v15 << 7) | v31 & 0xFF80007F) ^ (((v15 << 7) | v31 & 0xFF80007F) ^ v19 & 0xFF800000) & 0x800000;
            v12[v13] = __PAIR64__(v42, (unsigned int)v23 | 0x10000);
            LODWORD(v13) = v13 + 1;
            goto LABEL_41;
          }
        }
        else if ( v20 == 1 && v26 != 32 )
        {
          goto LABEL_25;
        }
        v30 = *(_DWORD *)(a1 + 4 * v23);
        if ( (v30 & 1) == 0 )
          goto LABEL_33;
        v29 = (v30 & 0x60) == 0;
      }
      else
      {
        if ( v21 != 2 )
          goto LABEL_37;
        v29 = v20 == 1;
      }
LABEL_32:
      if ( !v29 )
        goto LABEL_37;
      goto LABEL_33;
    }
    v7 = -1073741811;
  }
LABEL_45:
  SafeFree((void **)&v37);
  return (unsigned int)v7;
}
