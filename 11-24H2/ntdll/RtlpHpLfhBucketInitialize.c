/*
 * XREFs of RtlpHpLfhBucketInitialize @ 0x1800D6B18
 * Callers:
 *     RtlpHpLfhBucketActivate @ 0x1800D68F0 (RtlpHpLfhBucketActivate.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlpHpLfhBucketInitialize(unsigned __int8 *a1, char a2)
{
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // rax
  __int16 v5; // cx
  unsigned int v6; // ecx
  char v7; // al
  char result; // al

  *(_OWORD *)a1 = 0LL;
  *((_OWORD *)a1 + 1) = 0LL;
  *((_OWORD *)a1 + 2) = 0LL;
  *((_QWORD *)a1 + 6) = 0LL;
  *a1 = (2 * a2) | 1;
  *((_QWORD *)a1 + 4) = a1 + 24;
  *((_QWORD *)a1 + 3) = a1 + 24;
  *((_QWORD *)a1 + 6) = a1 + 40;
  *((_QWORD *)a1 + 5) = a1 + 40;
  *((_DWORD *)a1 + 22) = 0;
  *((_QWORD *)a1 + 10) = 0LL;
  v3 = (unsigned __int16)RtlpBucketBlockSizes[(*a1 >> 1) + 1];
  *((_DWORD *)a1 + 18) = (v3 + 0xFFFFFFFF) / v3;
  v4 = ((unsigned int)(v3 - 16)
      * (unsigned __int64)(unsigned int)((0x80000 << (((unsigned int)RtlpHpLfhPerfFlags >> 14) & 3)) - 0x10000)
      / 0x3FF0
      + 0x10000)
     / v3;
  if ( (unsigned int)v4 >= 0xFFFF )
  {
    LOWORD(v4) = -1;
    goto LABEL_5;
  }
  v5 = 4 * v4;
  if ( (unsigned int)(4 * v4) >= 0xFFFF )
LABEL_5:
    v5 = -1;
  *((_WORD *)a1 + 38) = v4;
  *((_WORD *)a1 + 39) = v5;
  v6 = RtlpHpLfhPerfFlags;
  *(_OWORD *)(a1 + 104) = 0LL;
  v7 = (v6 >> 6) ^ a1[107];
  a1[106] = 16;
  result = v7 & 1;
  a1[107] ^= result;
  return result;
}
