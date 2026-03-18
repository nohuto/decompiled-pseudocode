/*
 * XREFs of ?DXGIFormatToPixelFormat@@YA?AW4Enum@MilPixelFormat@@W4DXGI_FORMAT@@_N@Z @ 0x18022BC6C
 * Callers:
 *     ?GetPixelFormat@CBitmap@@UEAAJPEAU_GUID@@@Z @ 0x18022BC40 (-GetPixelFormat@CBitmap@@UEAAJPEAU_GUID@@@Z.c)
 *     ?GetPixelFormat@CBitmapLock@@UEAAJPEAU_GUID@@@Z @ 0x180261550 (-GetPixelFormat@CBitmapLock@@UEAAJPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGIFormatToPixelFormat(int a1, unsigned __int8 a2)
{
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx

  if ( a1 <= 49 )
  {
    if ( a1 == 49 )
      return 11LL;
    v2 = a1 - 2;
    if ( !v2 )
      return (unsigned int)a2 + 25;
    v3 = v2 - 8;
    if ( !v3 )
      return (unsigned int)a2 + 22;
    v4 = v3 - 1;
    if ( !v4 )
      return (unsigned int)a2 + 22;
    v5 = v4 - 13;
    if ( !v5 )
      return 20LL;
    if ( (unsigned int)(v5 - 4) <= 1 )
      return (unsigned int)a2 + 68;
    return 0LL;
  }
  v7 = a1 - 61;
  if ( !v7 )
    return 8LL;
  v8 = v7 - 4;
  if ( !v8 )
    return 67LL;
  v9 = v8 - 22;
  if ( v9 )
  {
    v10 = v9 - 1;
    if ( !v10 )
      return 14LL;
    if ( v10 != 3 )
      return 0LL;
  }
  return (unsigned int)a2 + 15;
}
