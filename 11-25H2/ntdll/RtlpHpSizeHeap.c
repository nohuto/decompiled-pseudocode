/*
 * XREFs of RtlpHpSizeHeap @ 0x180055D30
 * Callers:
 *     RtlpHpFreeHeapSlow @ 0x180054194 (RtlpHpFreeHeapSlow.c)
 *     RtlValidateHeap @ 0x1800931C0 (RtlValidateHeap.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18004F0C0 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18004F120 (RtlReleaseSRWLockShared.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x1800554D0 (RtlCSparseBitmapBitmaskRead.c)
 *     RtlCompareMemory @ 0x1801674A0 (RtlCompareMemory.c)
 */

__int64 __fastcall RtlpHpSizeHeap(__int64 a1, unsigned __int64 a2, int a3)
{
  int v4; // r14d
  int v6; // eax
  __int64 v7; // r11
  unsigned __int64 v8; // r8
  char v9; // cl
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rdx
  char v12; // r9
  __int64 v14; // rax
  _RTL_SRWLOCK *v15; // rsi
  __int64 v16; // rax
  unsigned __int64 *v17; // rdi
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
  _QWORD *v28; // rcx
  __int64 v29; // rdx
  int v30; // eax
  unsigned __int64 v31; // rdx
  char v32; // r8
  __int64 v33; // rcx
  __int64 v34; // rax

  v4 = *(_DWORD *)(a1 + 20) | a3;
  if ( !a2 || (a2 & 0xF) != 0 )
    return -1LL;
  if ( !(_WORD)a2 )
  {
    v14 = RtlCSparseBitmapBitmaskRead((__int64)&BaseAddress, 2 * ((a2 - qword_1801D0978) >> 20));
    if ( v14 )
    {
      v6 = v14 - 1;
      if ( v6 != 2 )
        goto LABEL_5;
    }
    v15 = (_RTL_SRWLOCK *)(a1 + 64);
    RtlAcquireSRWLockShared((PRTL_SRWLOCK)(a1 + 64));
    v16 = *(_QWORD *)(a1 + 80);
    v17 = (unsigned __int64 *)(a1 + 72);
    v18 = *v17;
    if ( (v16 & 1) != 0 )
    {
      if ( !v18 )
        goto LABEL_47;
      v18 ^= (unsigned __int64)v17;
    }
    v19 = v16 & 1;
    if ( !v18 )
    {
LABEL_47:
      v22 = -1LL;
      RtlReleaseSRWLockShared(v15);
      goto LABEL_37;
    }
    while ( 1 )
    {
      v20 = *(_QWORD *)(v18 + 24) & 0xFFFFFFFFFFFF0000uLL;
      if ( a2 < v20 )
        break;
      if ( a2 <= v20 )
        goto LABEL_23;
      v21 = *(_QWORD *)(v18 + 8);
      if ( !v19 || !v21 )
        goto LABEL_21;
      v18 ^= v21;
LABEL_22:
      if ( !v18 )
      {
LABEL_23:
        if ( v18 )
        {
          v22 = (*(_QWORD *)(v18 + 32) & 0xFFFFFFFFFFFFF000uLL) - *(unsigned __int16 *)(v18 + 24);
          RtlReleaseSRWLockShared(v15);
          goto LABEL_37;
        }
        goto LABEL_47;
      }
    }
    v21 = *(_QWORD *)v18;
    if ( v19 && v21 )
    {
      v18 ^= v21;
      goto LABEL_22;
    }
LABEL_21:
    v18 = v21;
    goto LABEL_22;
  }
  v6 = 0;
LABEL_5:
  v7 = a1 + 320 + 192LL * v6;
  v8 = a2 & *(_QWORD *)v7;
  if ( (RtlpHpHeapGlobals ^ *(_QWORD *)(v8 + 0x10) ^ v8) != v7 )
    return -1LL;
  v9 = *(_BYTE *)(v7 + 8);
  v10 = v8 + 32 * ((unsigned __int64)(unsigned int)(a2 - v8) >> v9);
  v11 = -32LL * *(unsigned __int8 *)(v10 + 26) + v10;
  v12 = *(_BYTE *)(v11 + 24);
  if ( (v12 & 3) != 3 || v8 + ((__int64)(v11 - v8) >> 5 << v9) != a2 && (v12 & 0xCu) < 8 )
    return -1LL;
  if ( !v11 )
    return -1LL;
  v23 = *(_BYTE *)(v7 + 8);
  v24 = (v11 & *(_QWORD *)v7) + ((__int64)(v11 - (v11 & *(_QWORD *)v7)) >> 5 << v23);
  if ( a2 <= v24 )
  {
    v34 = *(unsigned int *)(v11 + 4);
    v22 = (unsigned __int64)*(unsigned __int8 *)(v11 + 31) << v23;
    goto LABEL_49;
  }
  if ( (*(_BYTE *)(v11 + 24) & 0xC) == 8 )
  {
    v25 = *(_DWORD *)((v11 & *(_QWORD *)v7) + ((__int64)(v11 - (v11 & *(_QWORD *)v7)) >> 5 << v23) + 0x28);
    v26 = (((unsigned int)a2
          - (((unsigned int)qword_1801CFEC8 ^ (unsigned int)(v24 >> 12) ^ *(_DWORD *)(v24 + 40)) >> 16)
          - (unsigned int)v24)
         * (unsigned __int64)*(unsigned int *)(((unsigned __int64)*(unsigned __int16 *)(v24 + 44) << 6)
                                             + *(_QWORD *)(v7 + 24)
                                             + 72)) >> 32;
    if ( (_DWORD)a2
       - (((unsigned int)qword_1801CFEC8 ^ (unsigned int)(v24 >> 12) ^ *(_DWORD *)(v24 + 40)) >> 16)
       - (_DWORD)v24 == (_DWORD)v26 * (unsigned __int16)(qword_1801CFEC8 ^ (v24 >> 12) ^ *(_WORD *)(v24 + 40)) )
    {
      v27 = 1LL << (v26 & 0x1F);
      v28 = (_QWORD *)(v24 + 8 * ((v26 >> 5) + 8));
      if ( (*(_DWORD *)v28 & (unsigned int)v27) != 0 )
      {
        v29 = (unsigned __int16)qword_1801CFEC8 ^ (unsigned int)(unsigned __int16)(v25 ^ (v24 >> 12));
        if ( (HIDWORD(*v28) & v27) != 0 )
        {
          v30 = *(_WORD *)(v29 + a2 - 2) & 0x3FF;
          if ( *(__int16 *)(v29 + a2 - 2) < 0 )
            v30 = 1;
          LODWORD(v29) = v29 - v30;
        }
        v22 = (unsigned int)v29;
      }
      else
      {
        v22 = -1LL;
      }
      goto LABEL_37;
    }
LABEL_42:
    v22 = -1LL;
    goto LABEL_37;
  }
  v31 = a2 - 16;
  v32 = *(_BYTE *)(*(_QWORD *)(v7 + 32) + 4LL) & 1;
  if ( v32 && (a2 & 0xFFF) == 0 )
    v31 = a2 - 32;
  if ( ((RtlpHpHeapGlobals ^ *(_QWORD *)v31 ^ v31) & 0xFF000000000000LL) == 0 )
    goto LABEL_42;
  v33 = 16 * (WORD1(RtlpHpHeapGlobals) ^ (((unsigned int)v31 ^ (unsigned int)*(_QWORD *)v31) >> 16)) - 16;
  if ( v32 && ((v31 + 32) & 0xFFF) == 0 )
    v33 = 16 * (WORD1(RtlpHpHeapGlobals) ^ (((unsigned int)v31 ^ (unsigned int)*(_QWORD *)v31) >> 16)) - 32;
  v22 = (unsigned int)v33;
  if ( (*(_DWORD *)(v31 + 8) & 0x100) != 0 )
  {
    if ( *(__int16 *)(v33 + a2 - 2) < 0 )
    {
      v22 = (unsigned int)v33 - 1LL;
      goto LABEL_37;
    }
    v34 = *(_WORD *)(v33 + a2 - 2) & 0x1FFF;
LABEL_49:
    v22 -= v34;
  }
LABEL_37:
  if ( v22 != -1LL
    && (v4 & 0x2000) != 0
    && RtlCompareMemory((const void *)(v22 + a2), &CheckHeapFillPattern, 0x10uLL) != 16 )
  {
    return -1LL;
  }
  return v22;
}
