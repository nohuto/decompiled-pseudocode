/*
 * XREFs of ?vSpRemoveShapeHint@@YAXPEAVSPRITE@@H@Z @ 0x1401D466C
 * Callers:
 *     ?pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z @ 0x1401D43DC (-pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall vSpRemoveShapeHint(SURFOBJ **a1, int a2)
{
  int v4; // eax
  unsigned int v5; // eax
  SURFOBJ *v6; // rax
  SURFOBJ *v7; // [rsp+30h] [rbp+8h] BYREF
  SURFOBJ *v8; // [rsp+40h] [rbp+18h] BYREF

  if ( (*(_DWORD *)a1 & 0x40) != 0 )
  {
    EngUnlockSurface(a1[16]);
    v4 = *(_DWORD *)a1;
    a1[16] = 0LL;
    v5 = v4 & 0xFFFFFFBF;
    a1[30] = 0LL;
    *(_DWORD *)a1 = v5;
    if ( a2 )
      *(_DWORD *)a1 = v5 & 0xFFFFFF7F;
    v7 = a1[24];
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v7);
    v6 = a1[18];
    a1[24] = 0LL;
    v8 = v6;
    XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v8);
    a1[18] = 0LL;
  }
}
