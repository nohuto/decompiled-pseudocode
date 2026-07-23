/*
 * XREFs of RtlpHpExtrasSetPresent @ 0x1800C6F40
 * Callers:
 *     RtlpHpSegReAlloc @ 0x18002C120 (RtlpHpSegReAlloc.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18004F0C0 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18004F120 (RtlReleaseSRWLockShared.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x1800554D0 (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpLargeAllocGetMetadata @ 0x18009B4A0 (RtlpHpLargeAllocGetMetadata.c)
 */

void __fastcall RtlpHpExtrasSetPresent(_RTL_SRWLOCK *a1, unsigned __int64 a2)
{
  int v4; // eax
  _RTL_SRWLOCK *v5; // r10
  unsigned __int64 v6; // r8
  char v7; // cl
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  char v10; // r9
  unsigned __int8 v11; // dl
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  unsigned __int64 Metadata; // rbx
  unsigned __int64 v15; // rdx
  unsigned int v16; // ecx

  if ( (_WORD)a2 )
  {
    v4 = 0;
  }
  else
  {
    v13 = RtlCSparseBitmapBitmaskRead((__int64)&BaseAddress, 2 * ((a2 - qword_1801D0978) >> 20));
    if ( !v13 || (v4 = v13 - 1, v4 == 2) )
    {
      RtlAcquireSRWLockShared(a1 + 8);
      Metadata = RtlpHpLargeAllocGetMetadata((__int64)a1, a2);
      RtlReleaseSRWLockShared(a1 + 8);
      *(_QWORD *)(Metadata + 32) |= 1uLL;
      return;
    }
  }
  v5 = &a1[24 * v4 + 40];
  v6 = a2 & v5->Value;
  if ( (_RTL_SRWLOCK *)(v6 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(v6 + 0x10)) != v5
    || (v7 = (char)v5[1].0,
        v8 = v6 + 32 * ((unsigned __int64)(unsigned int)(a2 - v6) >> v7),
        v9 = -32LL * *(unsigned __int8 *)(v8 + 26) + v8,
        v10 = *(_BYTE *)(v9 + 24),
        (v10 & 3) != 3)
    || v6 + ((__int64)(v9 - v6) >> 5 << v7) != a2 && (v10 & 0xCu) < 8 )
  {
    v9 = 0LL;
  }
  v11 = *(_BYTE *)(v9 + 24) & 0xC;
  if ( v11 < 8u )
  {
    *(_WORD *)(v9 + 8) |= 1u;
  }
  else
  {
    v12 = (v9 & v5->Value) + ((__int64)(v9 - (v9 & v5->Value)) >> 5 << *(_BYTE *)&v5[1].0);
    if ( v11 == 8 )
    {
      *(_WORD *)(((unsigned __int16)qword_1801CFEC8 ^ *(unsigned __int16 *)(v12 + 40) ^ (unsigned __int64)(unsigned __int16)(v12 >> 12))
               + a2
               - 2) |= 0x4000u;
    }
    else
    {
      v15 = a2 - 16;
      if ( (*(_BYTE *)(v5[4].Value + 4) & 1) != 0 )
      {
        if ( (a2 & 0xFFF) == 0 )
          v15 = a2 - 32;
        v16 = 16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(v15) ^ *(unsigned __int16 *)(v15 + 2)) - 16;
        if ( ((v15 + 32) & 0xFFF) == 0 )
          v16 = 16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(v15) ^ *(unsigned __int16 *)(v15 + 2)) - 32;
      }
      else
      {
        v16 = 16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(v15) ^ *(unsigned __int16 *)(v15 + 2)) - 16;
      }
      *(_WORD *)(v16 + a2 - 2) |= 0x4000u;
    }
  }
}
