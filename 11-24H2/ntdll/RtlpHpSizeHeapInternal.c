/*
 * XREFs of RtlpHpSizeHeapInternal @ 0x180059880
 * Callers:
 *     RtlpHpTagReAllocateHeap @ 0x18005ADE0 (RtlpHpTagReAllocateHeap.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18003CC20 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18003CC80 (RtlReleaseSRWLockShared.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x180059400 (RtlCSparseBitmapBitmaskRead.c)
 */

__int64 __fastcall RtlpHpSizeHeapInternal(_RTL_SRWLOCK *a1, unsigned __int64 a2, int *a3)
{
  int v3; // esi
  int v7; // eax
  _RTL_SRWLOCK *v8; // r10
  unsigned __int64 Value; // r11
  unsigned __int64 v10; // r8
  char v11; // cl
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rdx
  char v14; // r9
  __int64 v16; // rax
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  int v19; // edx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rdi
  char v23; // cl
  unsigned __int64 v24; // r9
  int v25; // edi
  unsigned __int64 v26; // r11
  __int64 v27; // r8
  _DWORD *v28; // rcx
  __int64 v29; // rdx
  unsigned __int16 v30; // cx
  int v31; // r8d
  __int64 v32; // rdi
  unsigned __int64 v33; // rdx
  char v34; // r8
  __int64 v35; // rcx
  unsigned __int16 v36; // ax

  v3 = 0;
  if ( (_WORD)a2 )
  {
    v7 = 0;
LABEL_3:
    v8 = &a1[24 * v7 + 40];
    Value = v8->Value;
    v10 = a2 & v8->Value;
    if ( (_RTL_SRWLOCK *)(RtlpHpHeapGlobals ^ *(_QWORD *)(v10 + 0x10) ^ v10) != v8 )
      return -1LL;
    v11 = (char)v8[1].0;
    v12 = v10 + 32 * ((unsigned __int64)(unsigned int)(a2 - v10) >> v11);
    v13 = -32LL * *(unsigned __int8 *)(v12 + 26) + v12;
    v14 = *(_BYTE *)(v13 + 24);
    if ( (v14 & 3) != 3 || v10 + ((__int64)(v13 - v10) >> 5 << v11) != a2 && (v14 & 0xCu) < 8 )
      return -1LL;
    if ( !v13 )
      return -1LL;
    v23 = (char)v8[1].0;
    v24 = (Value & v13) + ((__int64)(v13 - (Value & v13)) >> 5 << v23);
    if ( a2 <= v24 )
    {
      v32 = ((unsigned __int64)*(unsigned __int8 *)(v13 + 31) << v23) - *(unsigned int *)(v13 + 4);
      if ( a3 )
        *a3 = *(_WORD *)(v13 + 8) & 1;
      return v32;
    }
    if ( (*(_BYTE *)(v13 + 24) & 0xC) == 8 )
    {
      v25 = *(_DWORD *)((Value & v13) + ((__int64)(v13 - (Value & v13)) >> 5 << v23) + 0x28);
      v26 = (((unsigned int)a2
            - (((unsigned int)qword_1801CCEC8 ^ (unsigned int)(v24 >> 12) ^ *(_DWORD *)(v24 + 40)) >> 16)
            - (unsigned int)v24)
           * (unsigned __int64)*(unsigned int *)(((unsigned __int64)*(unsigned __int16 *)(v24 + 44) << 6)
                                               + v8[3].Value
                                               + 72)) >> 32;
      if ( (_DWORD)a2
         - (((unsigned int)qword_1801CCEC8 ^ (unsigned int)(v24 >> 12) ^ *(_DWORD *)(v24 + 40)) >> 16)
         - (_DWORD)v24 == (_DWORD)v26 * (unsigned __int16)(qword_1801CCEC8 ^ (v24 >> 12) ^ *(_WORD *)(v24 + 40)) )
      {
        v27 = 1LL << (v26 & 0x1F);
        v28 = (_DWORD *)(v24
                       + 8
                       * (((((unsigned int)a2
                           - (((unsigned int)qword_1801CCEC8 ^ (unsigned int)(v24 >> 12) ^ *(_DWORD *)(v24 + 40)) >> 16)
                           - (unsigned int)v24)
                          * (unsigned __int64)*(unsigned int *)(((unsigned __int64)*(unsigned __int16 *)(v24 + 44) << 6)
                                                              + v8[3].Value
                                                              + 72)) >> 37)
                        + 8));
        if ( (*v28 & (unsigned int)v27) == 0 )
          return -1LL;
        v29 = (unsigned __int16)qword_1801CCEC8 ^ (unsigned int)(unsigned __int16)(v25 ^ (v24 >> 12));
        if ( (HIDWORD(*(_QWORD *)v28) & v27) != 0 )
        {
          v30 = *(_WORD *)(v29 + a2 - 2);
          v31 = v30 & 0x3FF;
          if ( (v30 & 0x8000u) != 0 )
            v31 = 1;
          if ( a3 )
            *a3 = (v30 >> 14) & 1;
          LODWORD(v29) = v29 - v31;
        }
        else if ( a3 )
        {
          *a3 = 0;
        }
        return (unsigned int)v29;
      }
    }
    else
    {
      v33 = a2 - 16;
      v34 = *(_BYTE *)(v8[4].Value + 4) & 1;
      if ( v34 && (a2 & 0xFFF) == 0 )
        v33 = a2 - 32;
      if ( ((RtlpHpHeapGlobals ^ *(_QWORD *)v33 ^ v33) & 0xFF000000000000LL) != 0 )
      {
        v35 = 16 * (WORD1(RtlpHpHeapGlobals) ^ (((unsigned int)v33 ^ (unsigned int)*(_QWORD *)v33) >> 16)) - 16;
        if ( v34 && ((v33 + 32) & 0xFFF) == 0 )
          v35 = 16 * (WORD1(RtlpHpHeapGlobals) ^ (((unsigned int)v33 ^ (unsigned int)*(_QWORD *)v33) >> 16)) - 32;
        v32 = (unsigned int)v35;
        if ( (*(_DWORD *)(v33 + 8) & 0x100) != 0 )
        {
          v36 = *(_WORD *)(v35 + a2 - 2);
          if ( (v36 & 0x8000u) == 0 )
            v32 = (unsigned int)v35 - (unsigned __int64)(*(_WORD *)(v35 + a2 - 2) & 0x1FFF);
          else
            v32 = (unsigned int)v35 - 1LL;
          v3 = (v36 >> 14) & 1;
        }
        if ( a3 )
        {
          *a3 = v3;
          return v32;
        }
        return v32;
      }
    }
    return -1LL;
  }
  v16 = RtlCSparseBitmapBitmaskRead((__int64)&BaseAddress, 2 * ((a2 - qword_1801CD918) >> 20));
  if ( v16 )
  {
    v7 = v16 - 1;
    if ( v7 != 2 )
      goto LABEL_3;
  }
  RtlAcquireSRWLockShared(a1 + 8);
  v17 = a1[10].Value;
  v18 = a1[9].Value;
  if ( (v17 & 1) != 0 )
  {
    if ( !v18 )
      goto LABEL_26;
    v18 ^= (unsigned __int64)&a1[9];
  }
  v19 = v17 & 1;
  if ( !v18 )
  {
LABEL_26:
    RtlReleaseSRWLockShared(a1 + 8);
    return -1LL;
  }
  do
  {
    v20 = *(_QWORD *)(v18 + 24) & 0xFFFFFFFFFFFF0000uLL;
    if ( a2 >= v20 )
    {
      if ( a2 <= v20 )
        break;
      v21 = *(_QWORD *)(v18 + 8);
      if ( v19 && v21 )
      {
        v18 ^= v21;
        continue;
      }
LABEL_18:
      v18 = v21;
      continue;
    }
    v21 = *(_QWORD *)v18;
    if ( !v19 || !v21 )
      goto LABEL_18;
    v18 ^= v21;
  }
  while ( v18 );
  if ( !v18 )
    goto LABEL_26;
  if ( a3 )
    *a3 = *(_DWORD *)(v18 + 32) & 1;
  v22 = (*(_QWORD *)(v18 + 32) & 0xFFFFFFFFFFFFF000uLL) - *(unsigned __int16 *)(v18 + 24);
  RtlReleaseSRWLockShared(a1 + 8);
  return v22;
}
