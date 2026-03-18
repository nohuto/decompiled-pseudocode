/*
 * XREFs of ?vRop2Function5@@YAXPEAK00K@Z @ 0x1403203E0
 * Callers:
 *     ?BltLnkRect@@YAXPEAU_BLTLNKINFO@@PEAU_RECTL@@@Z @ 0x1401227DC (-BltLnkRect@@YAXPEAU_BLTLNKINFO@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall vRop2Function5(unsigned int *a1, unsigned int *a2, unsigned int *a3, int a4)
{
  int v4; // eax

  for ( ; a4; --a4 )
  {
    v4 = *a2++;
    *a1++ = ~v4;
  }
}
