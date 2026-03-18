/*
 * XREFs of NtGdiEngCreateDeviceBitmap @ 0x1C02C8DA0
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidUmpdSizl@@YAHUtagSIZE@@_N@Z @ 0x1C02C6F10 (-ValidUmpdSizl@@YAHUtagSIZE@@_N@Z.c)
 */

HBITMAP __fastcall NtGdiEngCreateDeviceBitmap(__int64 a1, struct tagSIZE a2)
{
  int v2; // r8d
  SIZEL v3; // r9
  DHSURF v4; // r10

  if ( ValidUmpdSizl(a2, 1) && (unsigned int)(v2 - 1) <= 7 )
    return EngCreateDeviceBitmap(v4, v3, v2 | 0x8000u);
  else
    return 0LL;
}
