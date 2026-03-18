/*
 * XREFs of MmGetCacheAttributeEx @ 0x140663B00
 * Callers:
 *     HalCreateCommonBufferFromMdl @ 0x14054D450 (HalCreateCommonBufferFromMdl.c)
 *     MmGetCacheAttribute @ 0x140663AE0 (MmGetCacheAttribute.c)
 * Callees:
 *     MiMirrorInSingleProcessorMode @ 0x140390068 (MiMirrorInSingleProcessorMode.c)
 *     MiIsPageInHugePfn @ 0x140392030 (MiIsPageInHugePfn.c)
 *     MiLookupIoPageNode @ 0x1403920A8 (MiLookupIoPageNode.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

__int64 __fastcall MmGetCacheAttributeEx(unsigned __int64 a1, int a2, _DWORD *a3)
{
  char v4; // r8
  ULONG_PTR v6; // rbx
  __int64 v7; // rdx
  unsigned __int64 v8; // r8
  int v9; // eax
  int v10; // eax

  v4 = a2;
  if ( (a2 & 0xFFFFFFFE) != 0 )
    return 3221225712LL;
  v6 = a1 >> 12;
  if ( a1 >> 12 <= qword_140E2D9A0 && (v7 = 6 * v6, ((*(_QWORD *)(48 * v6 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0) )
  {
    v8 = 0xFFFFDE0000000000uLL;
    if ( !(unsigned __int16)*(_DWORD *)(48 * v6 - 0x220000000000LL + 32) )
    {
      LOBYTE(v9) = MiMirrorInSingleProcessorMode();
      if ( !v9 )
        KeBugCheckEx(0x1Au, 0x1232uLL, v6, *(_BYTE *)(v8 + 8 * v7 + 34) & 7, 0LL);
    }
    v10 = (unsigned __int8)BYTE2(*(_DWORD *)(v8 + 8 * v7 + 32)) >> 6;
  }
  else
  {
    if ( (v4 & 1) == 0 )
      return 3221225793LL;
    v10 = MiLookupIoPageNode(v6, 0);
    if ( v10 == 3 )
    {
      if ( (unsigned int)MiIsPageInHugePfn(v6) )
      {
LABEL_14:
        *a3 = 1;
        return 0LL;
      }
      v10 = 3;
    }
  }
  switch ( v10 )
  {
    case 1:
      goto LABEL_14;
    case 0:
      *a3 = 0;
      return 0LL;
    case 2:
      *a3 = 2;
      return 0LL;
  }
  return 3221225711LL;
}
