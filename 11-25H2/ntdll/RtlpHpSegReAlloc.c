/*
 * XREFs of RtlpHpSegReAlloc @ 0x18002C120
 * Callers:
 *     RtlpHpReAllocateHeap @ 0x18002BF34 (RtlpHpReAllocateHeap.c)
 *     RtlpHpReAllocateHeapSlow @ 0x18011E180 (RtlpHpReAllocateHeapSlow.c)
 * Callees:
 *     RtlpHpSegPageRangeShrink @ 0x1800100E0 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpSegPageRangeCommit @ 0x1800125C0 (RtlpHpSegPageRangeCommit.c)
 *     RtlpHpReallocMove @ 0x18002C3C0 (RtlpHpReallocMove.c)
 *     RtlpHpVsContextGrowInPlace @ 0x18002D3B8 (RtlpHpVsContextGrowInPlace.c)
 *     RtlpHpExtrasSetPresent @ 0x1800C6F40 (RtlpHpExtrasSetPresent.c)
 *     memmove @ 0x180168980 (memmove.c)
 */

__int64 __fastcall RtlpHpSegReAlloc(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v6; // r8
  char v9; // cl
  unsigned __int64 v10; // rbx
  __int64 v11; // rbx
  char v12; // dl
  __int64 result; // rax
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r9
  unsigned __int8 v16; // al
  unsigned int v17; // ebp
  unsigned int v18; // r8d
  __int64 v19; // rbx
  __int64 v20; // r10
  __int64 v21; // rcx
  __int64 v22; // rdx
  unsigned __int8 *v23; // rdx
  __int64 v24; // rcx

  v6 = *(_QWORD *)a1 & a3;
  if ( (v6 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(v6 + 16)) != a1 )
    return -1LL;
  v9 = *(_BYTE *)(a1 + 8);
  v10 = v6 + 32 * ((unsigned __int64)(unsigned int)(a3 - v6) >> v9);
  v11 = -32LL * *(unsigned __int8 *)(v10 + 26) + v10;
  v12 = *(_BYTE *)(v11 + 24);
  if ( (v12 & 3) != 3 || v6 + ((v11 - v6) >> 5 << v9) != a3 && (v12 & 0xCu) < 8 )
    return -1LL;
  if ( !v11 )
    return -1LL;
  v14 = *(_QWORD *)(a4 + 32);
  v15 = (v14 + 4095) >> 12;
  if ( (unsigned int)((_DWORD)v15 << 12) < v14 )
    return 0LL;
  v16 = *(_BYTE *)(v11 + 24) & 0xC;
  v17 = (unsigned int)(v15 + (1 << *(_BYTE *)(a1 + 9)) - 1) >> *(_BYTE *)(a1 + 9);
  if ( v16 >= 8u )
  {
    if ( v16 == 12 && *(_QWORD *)(a4 + 24) > *(_QWORD *)a4 && v14 <= 0x20000 )
    {
      result = RtlpHpVsContextGrowInPlace(
                 *(_QWORD *)(a1 + 32),
                 ((v11 - (v11 & *(_QWORD *)a1)) >> 5 << *(_BYTE *)(a1 + 8)) + (v11 & *(_QWORD *)a1),
                 a3,
                 a4);
      v19 = result;
      if ( result )
      {
        if ( *(_DWORD *)(a4 + 16) )
        {
          v20 = a3 + *(_QWORD *)a4 + 16;
          if ( (a2 & 0x2000) == 0 )
            v20 = a3 + *(_QWORD *)a4;
          v21 = a3 + *(_QWORD *)(a4 + 24) + 16;
          if ( (a2 & 0x2000) == 0 )
            v21 = a3 + *(_QWORD *)(a4 + 24);
          memmove(
            (void *)((v21 + 15) & 0xFFFFFFFFFFFFFFF0uLL),
            (const void *)((v20 + 15) & 0xFFFFFFFFFFFFFFF0uLL),
            16 * (*(unsigned __int8 *)(((v20 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 3) + 1LL));
          RtlpHpExtrasSetPresent(*(_QWORD *)(a1 + 56), v19);
          return v19;
        }
        return result;
      }
    }
    goto LABEL_10;
  }
  if ( v17 > *(unsigned __int8 *)(v11 + 31) )
  {
LABEL_10:
    if ( (a2 & 0x10000000) == 0 )
      return RtlpHpReallocMove(*(_QWORD *)(a1 + 56), a3, a4, a2);
    return 0LL;
  }
  v18 = (unsigned __int16)~*(_WORD *)(v11 + 28);
  if ( (unsigned int)v15 > v18 && (int)RtlpHpSegPageRangeCommit(a1, v11, v18, (unsigned int)v15 - v18, 0, 0LL) < 0 )
    return 0LL;
  if ( *(_DWORD *)(a4 + 16) )
  {
    v22 = a3 + *(_QWORD *)a4 + 16;
    if ( (a2 & 0x2000) == 0 )
      v22 = a3 + *(_QWORD *)a4;
    v23 = (unsigned __int8 *)((v22 + 15) & 0xFFFFFFFFFFFFFFF0uLL);
    v24 = a3 + *(_QWORD *)(a4 + 24) + 16;
    if ( (a2 & 0x2000) == 0 )
      v24 = a3 + *(_QWORD *)(a4 + 24);
    memmove((void *)((v24 + 15) & 0xFFFFFFFFFFFFFFF0uLL), v23, 16 * (v23[3] + 1LL));
  }
  if ( v17 < *(unsigned __int8 *)(v11 + 31) )
    RtlpHpSegPageRangeShrink(a1, v11, v17);
  result = a3;
  *(_DWORD *)(v11 + 4) = (v17 << *(_BYTE *)(a1 + 8)) - *(_DWORD *)(a4 + 24);
  return result;
}
