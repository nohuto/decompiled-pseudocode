/*
 * XREFs of RtlpHpReallocComputeSizes @ 0x18005DAE0
 * Callers:
 *     RtlpHpReAllocateHeap @ 0x18005CD30 (RtlpHpReAllocateHeap.c)
 *     RtlpHpReAllocateHeapSlow @ 0x18011AB20 (RtlpHpReAllocateHeapSlow.c)
 * Callees:
 *     RtlCSparseBitmapBitmaskRead @ 0x180059400 (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpVsChunkSize @ 0x18005DE50 (RtlpHpVsChunkSize.c)
 *     RtlpHpLargeAllocSize @ 0x18005DF20 (RtlpHpLargeAllocSize.c)
 */

__int64 __fastcall RtlpHpReallocComputeSizes(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        int a4,
        unsigned __int64 *a5)
{
  unsigned int v5; // edi
  int *v9; // r14
  int v10; // eax
  __int64 v11; // r11
  unsigned __int64 v12; // rdx
  char v13; // cl
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // r8
  char v16; // r9
  __int64 result; // rax
  __int64 v18; // rax
  unsigned __int64 v19; // rdx
  char v20; // cl
  unsigned __int64 v21; // r9
  int v22; // ebp
  unsigned int v23; // edx
  unsigned int v24; // ecx
  unsigned __int64 v25; // r11
  __int64 v26; // r8
  _QWORD *v27; // rcx
  unsigned __int16 v28; // cx
  int v29; // r8d
  int v30; // r9d
  int v31; // ecx
  unsigned __int64 v32; // rax
  int v33; // r10d
  __int64 v34; // r8
  __int64 v35; // rcx
  unsigned __int64 v36; // rcx
  unsigned int v37; // r15d
  unsigned __int64 v38; // rax
  __int64 v39; // rcx

  v5 = 0;
  *a5 = 0LL;
  v9 = (int *)(a5 + 2);
  a5[1] = 0LL;
  a5[2] = 0LL;
  a5[4] = 0LL;
  a5[3] = a3;
  if ( (_WORD)a2 )
  {
    v10 = 0;
  }
  else
  {
    v18 = RtlCSparseBitmapBitmaskRead((__int64)&BaseAddress, 2 * ((a2 - qword_1801CD918) >> 20));
    if ( !v18 || (v10 = v18 - 1, v10 == 2) )
    {
      v19 = RtlpHpLargeAllocSize(a1, a2, a5 + 2);
      goto LABEL_23;
    }
  }
  v11 = a1 + 192LL * v10 + 320;
  v12 = a2 & *(_QWORD *)v11;
  if ( (v12 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(v12 + 0x10)) != v11
    || (v13 = *(_BYTE *)(v11 + 8),
        v14 = v12 + 32 * ((unsigned __int64)(unsigned int)(a2 - v12) >> v13),
        v15 = -32LL * *(unsigned __int8 *)(v14 + 26) + v14,
        v16 = *(_BYTE *)(v15 + 24),
        (v16 & 3) != 3)
    || v12 + ((__int64)(v15 - v12) >> 5 << v13) != a2 && (v16 & 0xCu) < 8
    || !v15 )
  {
    *a5 = -1LL;
    return 0LL;
  }
  v20 = *(_BYTE *)(v11 + 8);
  v21 = (v15 & *(_QWORD *)v11) + ((__int64)(v15 - (v15 & *(_QWORD *)v11)) >> 5 << v20);
  if ( a2 <= v21 )
  {
    v19 = ((unsigned __int64)*(unsigned __int8 *)(v15 + 31) << v20) - *(unsigned int *)(v15 + 4);
    if ( a5 != (unsigned __int64 *)-16LL )
      *v9 = *(_WORD *)(v15 + 8) & 1;
  }
  else if ( (*(_BYTE *)(v15 + 24) & 0xC) == 8 )
  {
    v22 = *(_DWORD *)((v15 & *(_QWORD *)v11) + ((__int64)(v15 - (v15 & *(_QWORD *)v11)) >> 5 << v20) + 0x28);
    v23 = qword_1801CCEC8 ^ v22 ^ (v21 >> 12);
    v24 = a2 - HIWORD(v23) - v21;
    v25 = (v24
         * (unsigned __int64)*(unsigned int *)(((unsigned __int64)*(unsigned __int16 *)(v21 + 44) << 6)
                                             + *(_QWORD *)(v11 + 24)
                                             + 72)) >> 32;
    if ( v24 == (_DWORD)v25 * (unsigned __int16)v23 )
    {
      v26 = 1LL << (v25 & 0x1F);
      v27 = (_QWORD *)(v21 + 8 * ((v25 >> 5) + 8));
      if ( (*(_DWORD *)v27 & (unsigned int)v26) != 0 )
      {
        v19 = (unsigned __int16)qword_1801CCEC8 ^ (unsigned int)(unsigned __int16)(v22 ^ (v21 >> 12));
        if ( (HIDWORD(*v27) & v26) != 0 )
        {
          v28 = *(_WORD *)(v19 + a2 - 2);
          v29 = v28 & 0x3FF;
          if ( (v28 & 0x8000u) != 0 )
            v29 = 1;
          if ( a5 != (unsigned __int64 *)-16LL )
            *v9 = (v28 >> 14) & 1;
          v19 = (unsigned int)(v19 - v29);
        }
        else if ( a5 != (unsigned __int64 *)-16LL )
        {
          *v9 = 0;
        }
      }
      else
      {
        v19 = -1LL;
      }
    }
    else
    {
      v19 = -1LL;
    }
  }
  else
  {
    v19 = RtlpHpVsChunkSize(*(_QWORD *)(v11 + 32), a2, v15, a5 + 2);
  }
LABEL_23:
  *a5 = v19;
  if ( v19 == -1LL )
    return 0LL;
  v30 = *v9;
  v31 = a4 & 0x2000 | 8;
  if ( !*v9 )
    v31 = a4 & 0x2000;
  v32 = v19 + 16;
  v33 = v31 & 0x2000;
  if ( (v31 & 0x2000) == 0 )
    v32 = v19;
  if ( (v31 & 0x20000F08) != 0 )
    v32 = ((v32 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 16;
  v34 = 1LL;
  if ( v32 )
    v34 = v32;
  if ( v30 )
  {
    v35 = v19 + a2 + 16;
    if ( !v33 )
      v35 = v19 + a2;
    v5 = 16 * *(unsigned __int8 *)(((v35 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 3);
    v34 += v5;
  }
  v36 = a5[3];
  a5[1] = v34;
  v37 = a4 & 0xDFFFF0F7;
  v38 = v36 + 16;
  if ( (v37 & 0x2000) == 0 )
    v38 = v36;
  if ( v37 & 0x20000F08 | (v30 != 0 ? 8 : 0) )
    v38 = ((v38 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 16;
  v39 = 1LL;
  if ( v38 )
    v39 = v38;
  result = 1LL;
  a5[4] = v5 + v39;
  return result;
}
