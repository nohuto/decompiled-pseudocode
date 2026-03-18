/*
 * XREFs of NtGdiExtCreatePen @ 0x140199EB0
 * Callers:
 *     <none>
 * Callees:
 *     GreExtCreatePen @ 0x1400E38BC (GreExtCreatePen.c)
 *     memmove @ 0x140340480 (memmove.c)
 */

__int64 __fastcall NtGdiExtCreatePen(
        int a1,
        int a2,
        int a3,
        unsigned int a4,
        void *a5,
        void *a6,
        unsigned int a7,
        char *Src,
        unsigned int Size,
        int a10,
        __int64 a11)
{
  void *v14; // rbx
  void *v15; // rdi
  __int64 Pen; // rsi
  size_t v17; // r8
  ULONG64 v18; // rcx

  v14 = 0LL;
  v15 = 0LL;
  Pen = 1LL;
  if ( Src )
  {
    if ( a7 <= 0x9C4000 && 4 * a7 )
      v14 = (void *)Win32AllocPool(4 * a7, 1886221383LL);
    Pen = -(__int64)(v14 != 0LL) & 1;
  }
  if ( a3 == 6 )
  {
    if ( Size <= 0x2710000 )
      v15 = (void *)AllocFreeTmpBuffer(Size);
    Pen &= -(__int64)(v15 != 0LL);
  }
  if ( Pen )
  {
    if ( Src )
    {
      v17 = 4LL * a7;
      if ( &Src[v17] < Src || (unsigned __int64)&Src[v17] > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v14, Src, v17);
    }
    if ( a3 == 6 )
    {
      v18 = (ULONG64)a6 + Size;
      if ( v18 < (unsigned __int64)a6 || v18 > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v15, a6, Size);
      a6 = v15;
    }
    Pen = GreExtCreatePen(a1, a2, a3, a4, a5, a6, a7, (int *)v14, Size, a10, a11);
  }
  if ( v15 )
    FreeTmpBuffer(v15);
  if ( v14 )
    Win32FreePool(v14);
  return Pen;
}
