/*
 * XREFs of LdrpAcquireTlsIndex @ 0x180006038
 * Callers:
 *     LdrpAllocateTlsEntry @ 0x18000776C (LdrpAllocateTlsEntry.c)
 * Callees:
 *     RtlSetBits @ 0x180006260 (RtlSetBits.c)
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlClearBits @ 0x18008F0C0 (RtlClearBits.c)
 *     memmove @ 0x180167400 (memmove.c)
 */

__int64 __fastcall LdrpAcquireTlsIndex(unsigned int *a1, _BYTE *a2)
{
  unsigned __int64 v2; // rdi
  int v5; // r10d
  unsigned int v6; // r11d
  __int64 *v7; // r9
  __int64 *v8; // rbx
  __int64 i; // rax
  unsigned int v10; // ebx
  unsigned int v11; // ebx
  int v13; // r14d
  unsigned __int64 v14; // rbx
  void *Heap; // rax
  void *v16; // rbp

  v2 = (unsigned int)LdrpTlsBitmap;
  if ( LdrpTlsBitmap )
  {
    v5 = ((unsigned __int8)Src & 4) != 0LL ? 0x20 : 0;
    v6 = v5 + LdrpTlsBitmap - 1;
    v7 = (__int64 *)((char *)Src - (((unsigned __int8)Src & 4) != 0LL ? 4 : 0));
    v8 = v7;
    for ( i = *v7 | ((1LL << (((unsigned __int8)Src & 4) != 0LL ? 0x20 : 0)) - 1); i == -1; i = *v8 )
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
        RtlSetBits(&LdrpTlsBitmap, v11, 1LL);
        *a1 = v11;
        *a2 = 0;
        return 0LL;
      }
    }
LABEL_8:
    if ( ((unsigned __int64)(unsigned int)(LdrpTlsBitmap + 8) + 31) >> 5 <= LdrpActualBitmapSize )
    {
      LdrpTlsBitmap += 8;
      goto LABEL_10;
    }
    v13 = LdrpTlsBitmap + 8;
    v14 = ((unsigned __int64)(unsigned int)(LdrpTlsBitmap + 8) + 31) >> 5;
    Heap = (void *)RtlAllocateHeap(LdrpTlsHeap, (unsigned int)(NtdllBaseTag + 786432), 4 * v14);
    v16 = Heap;
    if ( !Heap )
      return 3221225495LL;
    LdrpActualBitmapSize = v14;
    memmove(Heap, Src, (unsigned __int64)(unsigned int)(v2 + 7) >> 3);
    if ( Src != &LdrpStaticTlsBitmapVector )
      RtlFreeHeap(LdrpTlsHeap, 0LL, Src);
    LdrpTlsBitmap = v13;
    Src = v16;
  }
  else
  {
    LdrpTlsBitmap = 8;
    Src = &LdrpStaticTlsBitmapVector;
    LdrpActualBitmapSize = 1LL;
  }
LABEL_10:
  RtlClearBits(&LdrpTlsBitmap, (unsigned int)(v2 + 1), 7LL);
  *((_BYTE *)Src + (v2 >> 3)) |= 1 << (v2 & 7);
  *a1 = v2;
  *a2 = 1;
  return 0LL;
}
