/*
 * XREFs of PopPepGetReadyActivityType @ 0x140444778
 * Callers:
 *     PopPepProcessEvent @ 0x1402C0980 (PopPepProcessEvent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopPepGetReadyActivityType(__int64 a1, unsigned int a2, int a3)
{
  int **v3; // r9
  int v4; // ecx

  v3 = (int **)(a1 + 8LL * (int)a2);
  while ( (int)a2 <= a3 )
  {
    v4 = **v3;
    if ( (v4 & 2) != 0 || (v4 & 8) != 0 )
      return a2;
    ++a2;
    ++v3;
  }
  return 6;
}
