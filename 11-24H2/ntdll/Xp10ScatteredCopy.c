/*
 * XREFs of Xp10ScatteredCopy @ 0x18014E6B8
 * Callers:
 *     Xp10ScatteredCopyFromPrevious @ 0x18011B588 (Xp10ScatteredCopyFromPrevious.c)
 * Callees:
 *     Xp10ScatteredNextBuffer @ 0x18011DF2C (Xp10ScatteredNextBuffer.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 */

__int64 __fastcall Xp10ScatteredCopy(__int64 a1, __int64 a2, int a3)
{
  unsigned int v6; // ebp
  unsigned __int64 v7; // rdx
  __int64 v8; // rbx

  v6 = 0;
  do
  {
    v7 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
    if ( v7 >= *(_QWORD *)(a2 + 8) - *(_QWORD *)a2 )
      v7 = *(_QWORD *)(a2 + 8) - *(_QWORD *)a2;
    if ( a3 - v6 <= v7 )
      LODWORD(v7) = a3 - v6;
    v8 = (unsigned int)v7;
    memmove(*(void **)a1, *(const void **)a2, (unsigned int)v7);
    *(_QWORD *)a1 += v8;
    v6 += v8;
    *(_QWORD *)a2 += v8;
  }
  while ( v6 != a3
       && (*(_QWORD *)a1 != *(_QWORD *)(a1 + 8) || (unsigned int)Xp10ScatteredNextBuffer((_QWORD *)a1))
       && (*(_QWORD *)a2 != *(_QWORD *)(a2 + 8) || (unsigned int)Xp10ScatteredNextBuffer((_QWORD *)a2)) );
  return v6;
}
