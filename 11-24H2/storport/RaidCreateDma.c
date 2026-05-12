/*
 * XREFs of RaidCreateDma @ 0x140183EDC
 * Callers:
 *     RaidCreateAdapter @ 0x140043580 (RaidCreateAdapter.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidCreateDma(_OWORD *a1)
{
  if ( a1 )
  {
    *a1 = 0LL;
    a1[1] = 0LL;
  }
}
