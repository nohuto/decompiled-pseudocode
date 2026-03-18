/*
 * XREFs of ?SetDisplayId@CD2DBitmap@@UEAAXVDisplayId@@@Z @ 0x1801FD3A0
 * Callers:
 *     ?SetDisplayId@CDeviceTextureTarget@@WLI@EAAXVDisplayId@@@Z @ 0x1802CDE40 (-SetDisplayId@CDeviceTextureTarget@@WLI@EAAXVDisplayId@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CD2DBitmap::SetDisplayId(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 156) = a2;
}
