/*
 * XREFs of ?DXGIFormatToPixelFormat@@YA?AW4Enum@MilPixelFormat@@W4DXGI_FORMAT@@_N@Z @ 0x1800207A4
 * Callers:
 *     ?GetPixelFormat@CBitmap@@UEAAJPEAU_GUID@@@Z @ 0x180020760 (-GetPixelFormat@CBitmap@@UEAAJPEAU_GUID@@@Z.c)
 *     ?GetPixelFormat@CBitmapLock@@UEAAJPEAU_GUID@@@Z @ 0x18010FAF0 (-GetPixelFormat@CBitmapLock@@UEAAJPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGIFormatToPixelFormat(int a1, unsigned __int8 a2)
{
  int v2; // ecx
  __int64 result; // rax
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx

  v2 = a1 - 2;
  if ( !v2 )
    return (unsigned int)(a2 != 0) + 25;
  result = 8LL;
  v4 = v2 - 8;
  if ( !v4 )
    return (unsigned int)a2 + 22;
  v5 = v4 - 1;
  if ( !v5 )
    return (unsigned int)a2 + 22;
  v6 = v5 - 13;
  if ( !v6 )
    return 20LL;
  v7 = v6 - 4;
  if ( !v7 )
    return (unsigned int)a2 + 68;
  v8 = v7 - 21;
  if ( !v8 )
    return 11LL;
  v9 = v8 - 12;
  if ( v9 )
  {
    v10 = v9 - 26;
    if ( v10 )
    {
      if ( v10 == 1 )
        return 14LL;
      else
        return 0LL;
    }
    else
    {
      return (unsigned int)a2 + 15;
    }
  }
  return result;
}
