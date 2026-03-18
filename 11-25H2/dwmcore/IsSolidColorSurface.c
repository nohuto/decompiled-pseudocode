/*
 * XREFs of IsSolidColorSurface @ 0x1802B8878
 * Callers:
 *     DebugInspectSysMemSurface_NoOpt @ 0x1802B8294 (DebugInspectSysMemSurface_NoOpt.c)
 * Callees:
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x1801887CC (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1802E8968 (memcmp_0.c)
 *     memcpy_0 @ 0x1802E8974 (memcpy_0.c)
 */

char __fastcall IsSolidColorSurface(char *Src, unsigned int a2, unsigned int a3, int a4, int a5)
{
  unsigned __int8 PixelFormatSize; // al
  unsigned __int8 v9; // si
  unsigned int i; // edi
  unsigned int j; // ebx
  _BYTE Buf1[16]; // [rsp+20h] [rbp-48h] BYREF

  PixelFormatSize = GetPixelFormatSize(a4);
  if ( (PixelFormatSize & 7) != 0 )
    return 0;
  v9 = PixelFormatSize >> 3;
  memcpy_0(Buf1, Src, PixelFormatSize >> 3);
  for ( i = 0; i < a3; ++i )
  {
    for ( j = 0; j < a2; ++j )
    {
      if ( memcmp_0(Buf1, &Src[j * v9 + a5 * i], v9) )
        return 0;
    }
  }
  return 1;
}
