/*
 * XREFs of MiAddMappedPtes @ 0x140391F90
 * Callers:
 *     MiInsertInSystemSpace @ 0x140393BFC (MiInsertInSystemSpace.c)
 *     MiMapSystemImage @ 0x140A87914 (MiMapSystemImage.c)
 * Callees:
 *     MiUnlockWorkingSetOptimal @ 0x14020A46C (MiUnlockWorkingSetOptimal.c)
 *     MiLockWorkingSetOptimal @ 0x14020A640 (MiLockWorkingSetOptimal.c)
 *     MiIncreaseUsedPtes @ 0x140299D80 (MiIncreaseUsedPtes.c)
 *     MiOffsetToProtos @ 0x1402C28D0 (MiOffsetToProtos.c)
 *     MiGetSharedProtos @ 0x14030CC0C (MiGetSharedProtos.c)
 *     MiMakeDemandZeroPte @ 0x140392C40 (MiMakeDemandZeroPte.c)
 *     MiAddMappedPtesPadding @ 0x1404C9B84 (MiAddMappedPtesPadding.c)
 */

__int64 __fastcall MiAddMappedPtes(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        _DWORD *a4,
        unsigned __int64 *a5,
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
  __int64 v17; // r9
  int v18; // r14d
  unsigned __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdx
  ULONG_PTR v23; // rax
  __int64 v24; // rax
  __int64 SharedProtos; // rax
  __int64 v26; // rax
  int v27; // r8d
  __int64 v28; // rdx
  __int64 v29; // r8
  unsigned __int64 v31; // [rsp+40h] [rbp-68h] BYREF
  unsigned __int64 v32; // [rsp+48h] [rbp-60h]
  unsigned __int64 v33; // [rsp+50h] [rbp-58h]
  BOOL v35; // [rsp+B8h] [rbp+10h]
  __int64 v36; // [rsp+C0h] [rbp+18h]

  v7 = a2;
  v31 = 0LL;
  v35 = 0;
  if ( a7 && (MiFlags & 0x8000) != 0 )
    v35 = (MiFlags & 0x4000) != 0;
  v9 = a2 + 8 * a3;
  v32 = 0LL;
  DemandZeroPte = 0LL;
  v36 = MiOffsetToProtos((__int64)a4, *a5, &v31);
  v11 = v36;
  if ( !v36 )
    return 3221225503LL;
  v12 = *(_QWORD *)(v36 + 8);
  v13 = 0;
  v14 = 0LL;
  v33 = *(unsigned int *)(*(_QWORD *)a4 + 8LL) | ((unsigned __int64)(*(_WORD *)(*(_QWORD *)a4 + 12LL) & 0x3FF) << 32);
  LOBYTE(a5) = 17;
  v15 = v12 + 8 * v31;
  v16 = v12 + 8LL * *(unsigned int *)(v36 + 44);
  if ( (*(_DWORD *)(v36 + 32) & 0x20000) != 0 )
  {
    v17 = 0LL;
    if ( (a4[14] & 0x8000000) != 0 )
      v15 = 0LL;
  }
  else
  {
    v17 = 0LL;
  }
  v18 = 0;
  while ( v7 < v9 )
  {
    if ( v14 )
    {
      if ( (v7 & 0xFFF) != 0 )
        goto LABEL_9;
      if ( v13 )
      {
        MiIncreaseUsedPtes(v12, v14, v13, 2LL);
        v13 = 0;
      }
      MiUnlockWorkingSetOptimal(a1, v14, (char)a5);
    }
    v23 = MiLockWorkingSetOptimal(a1, v7, (unsigned __int8 *)&a5, v17);
    v11 = v36;
    v14 = v23;
LABEL_9:
    if ( v15 >= v16 )
    {
      v24 = *(_QWORD *)(v11 + 16);
      if ( !v24 )
      {
        MiAddMappedPtesPadding(v11, a1, (unsigned __int8)a5, v7, v9, v33, v13);
        return 0LL;
      }
      v11 = *(_QWORD *)(v11 + 16);
      v36 = v24;
    }
    else if ( v15 )
    {
      goto LABEL_11;
    }
    if ( (*(_DWORD *)(v11 + 32) & 0x20000) == 0
      || (a4[14] & 0x8000000) == 0
      || (SharedProtos = MiGetSharedProtos((__int64)a4, a6, v11), v11 = v36, (v15 = *(_QWORD *)(SharedProtos + 72)) == 0) )
    {
      v15 = *(_QWORD *)(v11 + 8);
    }
    v26 = *(unsigned int *)(v11 + 44);
    v17 = 0LL;
    v18 = 0;
    v16 = v15 + 8 * v26;
    if ( v35 && (v27 = *(_DWORD *)(v11 + 32) >> 1, (v27 & 2) != 0) )
    {
      v28 = ((unsigned int)((*(_DWORD *)(v11 + 32) >> 20) + (*(_DWORD *)(v11 + 40) << 9)) >> 12)
          + ((((*(_DWORD *)(v11 + 32) >> 20) + ((unsigned __int16)*(_DWORD *)(v11 + 40) << 9)) & 0xFFF) != 0);
      v32 = v15 + 8 * v28;
      v18 = ((8 * v26 - 8 * v28) >> 3) - (*(_DWORD *)(v11 + 52) & 0x3FFFFFFF);
      v29 = v27 & 0x1D;
      if ( !(_DWORD)v29 )
        v29 = 1LL;
      DemandZeroPte = MiMakeDemandZeroPte((unsigned int)v29, v28, v29, 0LL);
LABEL_11:
      if ( !v18 || v15 < v32 )
        goto LABEL_12;
      *(_QWORD *)v7 = DemandZeroPte;
      --v18;
      v7 += 8LL;
      ++v13;
      v15 += 8LL;
      v12 = DemandZeroPte;
    }
    else
    {
LABEL_12:
      v19 = v15 << 16;
      v12 = (v15 << 16) | 0x400;
      if ( qword_140E2DCC0 )
      {
        v20 = v19 | qword_140E2DCC0;
        v21 = v19 | 0x410;
        v22 = v20 | 0x400;
        if ( (qword_140E2DCC0 & v12) == 0 )
          v21 = v22;
        v12 = v21;
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
