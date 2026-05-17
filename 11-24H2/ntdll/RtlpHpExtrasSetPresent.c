/*
 * XREFs of RtlpHpExtrasSetPresent @ 0x1800C2830
 * Callers:
 *     RtlpHpReallocMove @ 0x180094540 (RtlpHpReallocMove.c)
 *     RtlpHpSegReAlloc @ 0x1800A3160 (RtlpHpSegReAlloc.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x180010220 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180010280 (RtlReleaseSRWLockShared.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x18002CA00 (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpLargeAllocGetMetadata @ 0x1800477C0 (RtlpHpLargeAllocGetMetadata.c)
 */

__int64 __fastcall RtlpHpExtrasSetPresent(__int64 a1, unsigned __int64 a2)
{
  int v4; // eax
  __int64 v5; // r10
  unsigned __int64 v6; // r8
  char v7; // cl
  unsigned __int64 v8; // rax
  __int64 result; // rax
  char v10; // r9
  unsigned __int8 v11; // dl
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  unsigned __int64 Metadata; // rbx
  unsigned __int64 v17; // rdx
  unsigned int v18; // ecx

  if ( (_WORD)a2 )
  {
    v4 = 0;
  }
  else
  {
    v15 = RtlCSparseBitmapBitmaskRead((__int64)&unk_1801CE930, 2 * ((a2 - qword_1801CE928) >> 20));
    if ( !v15 || (v4 = v15 - 1, v4 == 2) )
    {
      RtlAcquireSRWLockShared((volatile signed __int64 *)(a1 + 64));
      Metadata = RtlpHpLargeAllocGetMetadata(a1, a2);
      result = RtlReleaseSRWLockShared((volatile signed __int64 *)(a1 + 64));
      *(_QWORD *)(Metadata + 32) |= 1uLL;
      return result;
    }
  }
  v5 = a1 + 192LL * v4 + 320;
  v6 = a2 & *(_QWORD *)v5;
  if ( (v6 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(v6 + 0x10)) != v5
    || (v7 = *(_BYTE *)(v5 + 8),
        v8 = v6 + 32 * ((unsigned __int64)(unsigned int)(a2 - v6) >> v7),
        result = -32LL * *(unsigned __int8 *)(v8 + 26) + v8,
        v10 = *(_BYTE *)(result + 24),
        (v10 & 3) != 3)
    || v6 + ((__int64)(result - v6) >> 5 << v7) != a2 && (v10 & 0xCu) < 8 )
  {
    result = 0LL;
  }
  v11 = *(_BYTE *)(result + 24) & 0xC;
  if ( v11 < 8u )
  {
    *(_WORD *)(result + 8) |= 1u;
  }
  else
  {
    v12 = (result & *(_QWORD *)v5) + ((result - (result & *(_QWORD *)v5)) >> 5 << *(_BYTE *)(v5 + 8));
    if ( v11 == 8 )
    {
      v13 = (unsigned __int16)(v12 >> 12);
      v14 = *(unsigned __int16 *)(v12 + 40);
      result = (unsigned __int16)qword_1801CDEC8;
      *(_WORD *)(((unsigned __int16)qword_1801CDEC8 ^ v14 ^ v13) + a2 - 2) |= 0x4000u;
    }
    else
    {
      v17 = a2 - 16;
      if ( (*(_BYTE *)(*(_QWORD *)(v5 + 32) + 4LL) & 1) != 0 )
      {
        if ( (a2 & 0xFFF) == 0 )
          v17 = a2 - 32;
        v18 = 16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(v17) ^ *(unsigned __int16 *)(v17 + 2)) - 16;
        if ( ((v17 + 32) & 0xFFF) == 0 )
          v18 = 16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(v17) ^ *(unsigned __int16 *)(v17 + 2)) - 32;
      }
      else
      {
        v18 = 16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(v17) ^ *(unsigned __int16 *)(v17 + 2)) - 16;
      }
      result = v18;
      *(_WORD *)(v18 + a2 - 2) |= 0x4000u;
    }
  }
  return result;
}
