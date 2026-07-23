/*
 * XREFs of BgpGxConvertRectangle @ 0x140699588
 * Callers:
 *     BgpGxProcessQrCodeBitmap @ 0x14069963C (BgpGxProcessQrCodeBitmap.c)
 *     BgConvertResources @ 0x140BB25CC (BgConvertResources.c)
 * Callees:
 *     BgpGxConvertRectangleEx @ 0x1404553DC (BgpGxConvertRectangleEx.c)
 *     BgpGxRectangleDestroy @ 0x140BB5F04 (BgpGxRectangleDestroy.c)
 */

__int64 __fastcall BgpGxConvertRectangle(int **a1, __int64 a2)
{
  int v3; // edi
  int *v4; // rcx
  int *v6; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  v4 = *a1;
  if ( v4[2] != (_DWORD)a2 )
  {
    v6 = 0LL;
    v3 = BgpGxConvertRectangleEx(v4, a2, &v6, 0);
    if ( v3 >= 0 )
    {
      BgpGxRectangleDestroy(*a1);
      *a1 = v6;
    }
  }
  return (unsigned int)v3;
}
