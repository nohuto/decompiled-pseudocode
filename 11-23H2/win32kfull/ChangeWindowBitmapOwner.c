/*
 * XREFs of ChangeWindowBitmapOwner @ 0x1C01BC434
 * Callers:
 *     ?ProtectWindowBitmap@@YAHPEAUtagWND@@K@Z @ 0x1C022C494 (-ProtectWindowBitmap@@YAHPEAUtagWND@@K@Z.c)
 * Callees:
 *     GreSetBitmapContentOwner @ 0x1C0024E1C (GreSetBitmapContentOwner.c)
 *     GetRedirectionBitmap @ 0x1C011E440 (GetRedirectionBitmap.c)
 *     GreSetLWContentOwner @ 0x1C02D4A44 (GreSetLWContentOwner.c)
 */

__int64 __fastcall ChangeWindowBitmapOwner(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  unsigned int v5; // ebx
  int v6; // edi
  HSURF RedirectionBitmap; // rax

  v4 = *(_QWORD *)(a1 + 40);
  v5 = 0;
  v6 = a2;
  LOBYTE(a4) = *(_BYTE *)(v4 + 26);
  if ( (*(_BYTE *)(v4 + 27) & 0x20) == 0 )
  {
    if ( (a4 & 8) == 0 )
      return v5;
    return (unsigned int)GreSetLWContentOwner(*(HWND *)a1);
  }
  if ( (a4 & 0x20) == 0 )
  {
    RedirectionBitmap = (HSURF)GetRedirectionBitmap(a1, a2, a3, a4);
    if ( !RedirectionBitmap )
      return v5;
    return (unsigned int)GreSetBitmapContentOwner(RedirectionBitmap, -1LL, v6);
  }
  return 1;
}
