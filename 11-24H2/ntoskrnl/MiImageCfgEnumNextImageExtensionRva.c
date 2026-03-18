/*
 * XREFs of MiImageCfgEnumNextImageExtensionRva @ 0x1408FA810
 * Callers:
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x1408F6F24 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MiImageCfgEnumRvaListFirst @ 0x1408F8478 (MiImageCfgEnumRvaListFirst.c)
 *     MiImageCfgEnumRvaListNext @ 0x1408FA6A0 (MiImageCfgEnumRvaListNext.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

__int64 __fastcall MiImageCfgEnumNextImageExtensionRva(_DWORD *a1)
{
  int v1; // r8d
  __int64 v2; // rdx
  _DWORD v4[4]; // [rsp+0h] [rbp-28h]

  v1 = a1[5];
  if ( !v1 )
    return 0LL;
  v2 = (unsigned int)a1[6];
  v4[0] = 64;
  v4[1] = 192;
  v4[2] = 320;
  v4[3] = 448;
  if ( (unsigned int)v2 >= 4 )
    return 0LL;
  a1[1] = 1;
  a1[6] = v2 + 1;
  return (unsigned int)(v1 + v4[v2]);
}
