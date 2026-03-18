/*
 * XREFs of MiFinalizeLagePageImageMapping @ 0x1407ED7C4
 * Callers:
 *     MiMapViewOfSection @ 0x14089A1A0 (MiMapViewOfSection.c)
 * Callees:
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     MiMapViewOfImageSection @ 0x1408E3418 (MiMapViewOfImageSection.c)
 *     MiUnmapViewOfSection @ 0x1408E4E04 (MiUnmapViewOfSection.c)
 */

__int64 __fastcall MiFinalizeLagePageImageMapping(int a1, __int64 a2, void *a3, int a4, __int64 a5, int a6, int a7)
{
  int v9; // edi
  void *Src; // [rsp+40h] [rbp-18h] BYREF

  Src = 0LL;
  v9 = MiMapViewOfImageSection(a1, a2, (unsigned int)&Src, a4, a5, a6, a7, 16);
  if ( v9 >= 0 )
    memmove(a3, Src, *(_QWORD *)(a2 + 24));
  if ( Src )
    MiUnmapViewOfSection(*(PRKPROCESS *)(a2 + 88));
  return (unsigned int)v9;
}
