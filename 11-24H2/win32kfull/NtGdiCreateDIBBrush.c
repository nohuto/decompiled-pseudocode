/*
 * XREFs of NtGdiCreateDIBBrush @ 0x14020DF40
 * Callers:
 *     <none>
 * Callees:
 *     ?GreCreateDIBBrush@@YAPEAUHBRUSH__@@PEAXKIHH0@Z @ 0x1400E40C0 (-GreCreateDIBBrush@@YAPEAUHBRUSH__@@PEAXKIHH0@Z.c)
 *     memmove @ 0x140340480 (memmove.c)
 */

__int64 __fastcall NtGdiCreateDIBBrush(void *Src, unsigned int a2, unsigned int a3, int a4, int a5, HBITMAP a6)
{
  size_t v7; // rsi
  void *v10; // rbx
  __int64 DIBBrush; // rdi

  v7 = a3;
  v10 = 0LL;
  if ( a3 <= 0x2710000 )
    v10 = (void *)AllocFreeTmpBuffer(a3);
  if ( !v10 )
    return 0LL;
  memmove(v10, Src, v7);
  DIBBrush = GreCreateDIBBrush((char *)v10, a2, v7, a4, a5, a6);
  FreeTmpBuffer(v10);
  return DIBBrush;
}
