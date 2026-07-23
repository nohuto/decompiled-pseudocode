/*
 * XREFs of LdrpAcquireTlsIndex @ 0x180032A38
 * Callers:
 *     LdrpAllocateTlsEntry @ 0x18003416C (LdrpAllocateTlsEntry.c)
 * Callees:
 *     RtlClearBits @ 0x180026A90 (RtlClearBits.c)
 *     RtlSetBits @ 0x180032C60 (RtlSetBits.c)
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 */

__int64 __fastcall LdrpAcquireTlsIndex(ULONG *a1, _BYTE *a2)
{
  unsigned __int64 SizeOfBitMap; // rdi
  int v5; // r10d
  unsigned int v6; // r11d
  __int64 *v7; // r9
  __int64 *v8; // rbx
  __int64 i; // rax
  unsigned int v10; // ebx
  ULONG v11; // ebx
  unsigned int v13; // r14d
  unsigned __int64 v14; // rbx
  unsigned int *Heap; // rax
  unsigned int *v16; // rbp

  SizeOfBitMap = LdrpTlsBitmap.SizeOfBitMap;
  if ( LdrpTlsBitmap.SizeOfBitMap )
  {
    v5 = ((__int64)LdrpTlsBitmap.Buffer & 4) != 0LL ? 0x20 : 0;
    v6 = v5 + LdrpTlsBitmap.SizeOfBitMap - 1;
    v7 = (__int64 *)((char *)LdrpTlsBitmap.Buffer - (((__int64)LdrpTlsBitmap.Buffer & 4) != 0LL ? 4 : 0));
    v8 = v7;
    for ( i = *v7 | ((1LL << v5) - 1); i == -1; i = *v8 )
    {
      if ( ++v8 > &v7[(unsigned __int64)v6 >> 6] )
        goto LABEL_8;
    }
    _BitScanForward64((unsigned __int64 *)&i, ~i);
    v10 = i + ((unsigned int)(v8 - v7) << 6);
    if ( v10 <= v6 && v10 != -1 )
    {
      v11 = v10 - v5;
      if ( v11 != -1 )
      {
        RtlSetBits(&LdrpTlsBitmap, v11, 1u);
        *a1 = v11;
        *a2 = 0;
        return 0LL;
      }
    }
LABEL_8:
    if ( ((unsigned __int64)(LdrpTlsBitmap.SizeOfBitMap + 8) + 31) >> 5 <= LdrpActualBitmapSize )
    {
      LdrpTlsBitmap.SizeOfBitMap += 8;
      goto LABEL_10;
    }
    v13 = LdrpTlsBitmap.SizeOfBitMap + 8;
    v14 = ((unsigned __int64)(LdrpTlsBitmap.SizeOfBitMap + 8) + 31) >> 5;
    Heap = (unsigned int *)RtlAllocateHeap(LdrpTlsHeap, NtdllBaseTag + 786432, 4 * v14);
    v16 = Heap;
    if ( !Heap )
      return 3221225495LL;
    LdrpActualBitmapSize = v14;
    memmove(Heap, LdrpTlsBitmap.Buffer, (unsigned __int64)(unsigned int)(SizeOfBitMap + 7) >> 3);
    if ( (_UNKNOWN *)LdrpTlsBitmap.Buffer != &LdrpStaticTlsBitmapVector )
      RtlFreeHeap(LdrpTlsHeap, 0, LdrpTlsBitmap.Buffer);
    LdrpTlsBitmap.SizeOfBitMap = v13;
    LdrpTlsBitmap.Buffer = v16;
  }
  else
  {
    LdrpTlsBitmap.SizeOfBitMap = 8;
    LdrpTlsBitmap.Buffer = (unsigned int *)&LdrpStaticTlsBitmapVector;
    LdrpActualBitmapSize = 1LL;
  }
LABEL_10:
  RtlClearBits(&LdrpTlsBitmap, SizeOfBitMap + 1, 7u);
  *((_BYTE *)LdrpTlsBitmap.Buffer + (SizeOfBitMap >> 3)) |= 1 << (SizeOfBitMap & 7);
  *a1 = SizeOfBitMap;
  *a2 = 1;
  return 0LL;
}
