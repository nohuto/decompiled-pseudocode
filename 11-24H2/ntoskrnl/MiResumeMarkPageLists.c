/*
 * XREFs of MiResumeMarkPageLists @ 0x140674200
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall MiResumeMarkPageLists(__int64 a1, int a2)
{
  if ( a2 )
    *(_BYTE *)(a1 + 16100) = a2;
  *(_BYTE *)(a1 + 16101) = 1;
}
