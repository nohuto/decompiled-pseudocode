/*
 * XREFs of BgpGxFillRectangle @ 0x140474170
 * Callers:
 *     RaspAntiAlias @ 0x14047383C (RaspAntiAlias.c)
 *     BgpTxtDisplayCharacter @ 0x140473A88 (BgpTxtDisplayCharacter.c)
 *     BgpClearScreen @ 0x14068CAD8 (BgpClearScreen.c)
 *     BgpTxtAdjustStaticRegion @ 0x14068D438 (BgpTxtAdjustStaticRegion.c)
 *     BgpTxtCreateRegion @ 0x140BA2908 (BgpTxtCreateRegion.c)
 *     BgpTxtDisplayString @ 0x140BA2BB0 (BgpTxtDisplayString.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall BgpGxFillRectangle(__int64 a1, unsigned int a2)
{
  unsigned __int64 result; // rax
  __int64 v3; // r8
  __int64 v4; // r9

  result = (unsigned int)(*(_DWORD *)a1 * *(_DWORD *)(a1 + 4));
  v3 = *(_QWORD *)(a1 + 24);
  if ( (_DWORD)result )
  {
    v4 = (unsigned int)result;
    do
    {
      *(_WORD *)(v3 + 1) = a2 >> 8;
      *(_BYTE *)v3 = a2;
      if ( *(_DWORD *)(a1 + 8) == 32 )
        *(_BYTE *)(v3 + 3) = HIBYTE(a2);
      result = (unsigned __int64)*(unsigned int *)(a1 + 8) >> 3;
      v3 += result;
      --v4;
    }
    while ( v4 );
  }
  *(_DWORD *)(a1 + 16) &= ~0x10u;
  return result;
}
