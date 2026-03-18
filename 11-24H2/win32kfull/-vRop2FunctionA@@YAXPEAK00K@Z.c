/*
 * XREFs of ?vRop2FunctionA@@YAXPEAK00K@Z @ 0x140195DA0
 * Callers:
 *     ?BltLnkRect@@YAXPEAU_BLTLNKINFO@@PEAU_RECTL@@@Z @ 0x1401227DC (-BltLnkRect@@YAXPEAU_BLTLNKINFO@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     memmove @ 0x140340480 (memmove.c)
 */

void __fastcall vRop2FunctionA(unsigned int *a1, unsigned int *a2, unsigned int *a3, unsigned int a4)
{
  memmove(a1, a2, 4LL * a4);
}
