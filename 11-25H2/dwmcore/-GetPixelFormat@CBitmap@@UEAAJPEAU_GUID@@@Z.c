/*
 * XREFs of ?GetPixelFormat@CBitmap@@UEAAJPEAU_GUID@@@Z @ 0x18022BC40
 * Callers:
 *     <none>
 * Callees:
 *     ?DXGIFormatToPixelFormat@@YA?AW4Enum@MilPixelFormat@@W4DXGI_FORMAT@@_N@Z @ 0x18022BC6C (-DXGIFormatToPixelFormat@@YA-AW4Enum@MilPixelFormat@@W4DXGI_FORMAT@@_N@Z.c)
 */

__int64 __fastcall CBitmap::GetPixelFormat(CBitmap *this, struct _GUID *a2)
{
  struct _GUID *v2; // r8
  unsigned int v3; // eax
  __int64 v4; // r8

  v2 = a2;
  LOBYTE(a2) = *((_DWORD *)this + 19) == 1;
  v3 = DXGIFormatToPixelFormat(*((unsigned int *)this + 18), a2, v2);
  return MilPfToWic(v3, v4);
}
