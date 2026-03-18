/*
 * XREFs of MiAddMappedPtes @ 0x140243C60
 * Callers:
 *     MiInsertInSystemSpace @ 0x140415F30 (MiInsertInSystemSpace.c)
 *     MiMapSystemImage @ 0x140A8B428 (MiMapSystemImage.c)
 * Callees:
 *     MiUnlockWorkingSetOptimal @ 0x14024231C (MiUnlockWorkingSetOptimal.c)
 *     MiLockWorkingSetOptimal @ 0x1402424F0 (MiLockWorkingSetOptimal.c)
 *     MiIncreaseUsedPtes @ 0x14028A180 (MiIncreaseUsedPtes.c)
 *     MiMakeDemandZeroPte @ 0x1402E3CC0 (MiMakeDemandZeroPte.c)
 *     MiGetSharedProtos @ 0x1403025FC (MiGetSharedProtos.c)
 *     MiOffsetToProtos @ 0x140319D40 (MiOffsetToProtos.c)
 *     MiAddMappedPtesPadding @ 0x1404D0B44 (MiAddMappedPtesPadding.c)
 */

__int64 __fastcall MiAddMappedPtes(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        _DWORD *a4,
        _QWORD *a5,
        unsigned int a6,
        int a7)
{
  unsigned __int64 v7; // rdi
  unsigned __int64 v9; // r13
  __int64 DemandZeroPte; // rbx
  __int64 v11; // r10
  __int64 v12; // rcx
  unsigned int v13; // ebp
  unsigned __int64 v14; // r15
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // r12
  int v17; // r14d
  unsigned __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rdx
  unsigned __int64 v22; // rax
  __int64 v23; // rax
  __int64 SharedProtos; // rax
  __int64 v25; // rax
  int v26; // r8d
  __int64 v27; // rdx
  unsigned int v28; // r8d
  __int64 v30; // [rsp+40h] [rbp-68h] BYREF
  unsigned __int64 v31; // [rsp+48h] [rbp-60h]
  unsigned __int64 v32; // [rsp+50h] [rbp-58h]
  BOOL v34; // [rsp+B8h] [rbp+10h]
  __int64 v35; // [rsp+C0h] [rbp+18h]

  v7 = a2;
  v30 = 0LL;
  v34 = 0;
  if ( a7 && (MiFlags & 0x8000) != 0 )
    v34 = (MiFlags & 0x4000) != 0;
  v9 = a2 + 8 * a3;
  v31 = 0LL;
  DemandZeroPte = 0LL;
  v35 = MiOffsetToProtos(a4, *a5, &v30);
  v11 = v35;
  if ( !v35 )
    return 3221225503LL;
  v12 = *(_QWORD *)(v35 + 8);
  v13 = 0;
  v14 = 0LL;
  v32 = *(unsigned int *)(*(_QWORD *)a4 + 8LL) | ((unsigned __int64)(*(_WORD *)(*(_QWORD *)a4 + 12LL) & 0x3FF) << 32);
  LOBYTE(a5) = 17;
  v15 = v12 + 8 * v30;
  v16 = v12 + 8LL * *(unsigned int *)(v35 + 44);
  if ( (*(_DWORD *)(v35 + 32) & 0x20000) != 0 && (a4[14] & 0x8000000) != 0 )
    v15 = 0LL;
  v17 = 0;
  while ( v7 < v9 )
  {
    if ( v14 )
    {
      if ( (v7 & 0xFFF) != 0 )
        goto LABEL_8;
      if ( v13 )
      {
        MiIncreaseUsedPtes(v12, v14, v13, 2LL);
        v13 = 0;
      }
      MiUnlockWorkingSetOptimal(a1, v14, (char)a5);
    }
    v22 = MiLockWorkingSetOptimal(a1, v7, (unsigned __int8 *)&a5);
    v11 = v35;
    v14 = v22;
LABEL_8:
    if ( v15 >= v16 )
    {
      v23 = *(_QWORD *)(v11 + 16);
      if ( !v23 )
      {
        MiAddMappedPtesPadding(v11, a1, (unsigned __int8)a5, v7, v9, v32, v13);
        return 0LL;
      }
      v11 = *(_QWORD *)(v11 + 16);
      v35 = v23;
    }
    else if ( v15 )
    {
      goto LABEL_10;
    }
    if ( (*(_DWORD *)(v11 + 32) & 0x20000) == 0
      || (a4[14] & 0x8000000) == 0
      || (SharedProtos = MiGetSharedProtos(a4, a6, v11), v11 = v35, (v15 = *(_QWORD *)(SharedProtos + 72)) == 0) )
    {
      v15 = *(_QWORD *)(v11 + 8);
    }
    v25 = *(unsigned int *)(v11 + 44);
    v17 = 0;
    v16 = v15 + 8 * v25;
    if ( v34 && (v26 = *(_DWORD *)(v11 + 32) >> 1, (v26 & 2) != 0) )
    {
      v27 = ((unsigned int)((*(_DWORD *)(v11 + 32) >> 20) + (*(_DWORD *)(v11 + 40) << 9)) >> 12)
          + ((((*(_DWORD *)(v11 + 32) >> 20) + ((unsigned __int16)*(_DWORD *)(v11 + 40) << 9)) & 0xFFF) != 0);
      v31 = v15 + 8 * v27;
      v17 = ((8 * v25 - 8 * v27) >> 3) - (*(_DWORD *)(v11 + 52) & 0x3FFFFFFF);
      v28 = v26 & 0x1D;
      if ( !v28 )
        v28 = 1;
      DemandZeroPte = MiMakeDemandZeroPte(v28);
LABEL_10:
      if ( !v17 || v15 < v31 )
        goto LABEL_11;
      *(_QWORD *)v7 = DemandZeroPte;
      --v17;
      v7 += 8LL;
      ++v13;
      v15 += 8LL;
      v12 = DemandZeroPte;
    }
    else
    {
LABEL_11:
      v18 = v15 << 16;
      v12 = (v15 << 16) | 0x400;
      if ( qword_140E2DB80 )
      {
        v19 = v18 | qword_140E2DB80;
        v20 = v18 | 0x410;
        v21 = v19 | 0x400;
        if ( (qword_140E2DB80 & v12) == 0 )
          v20 = v21;
        v12 = v20;
      }
      if ( !a7 && (a4[14] & 0x20) != 0 )
        v12 |= 8uLL;
      *(_QWORD *)v7 = v12;
      ++v13;
      v7 += 8LL;
      v15 += 8LL;
    }
  }
  if ( v13 )
    MiIncreaseUsedPtes(v12, v14, v13, 2LL);
  MiUnlockWorkingSetOptimal(a1, v14, (char)a5);
  return 0LL;
}
