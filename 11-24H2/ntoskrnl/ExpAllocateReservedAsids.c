/*
 * XREFs of ExpAllocateReservedAsids @ 0x1406572AC
 * Callers:
 *     ExpAllocateAsid @ 0x1406570F8 (ExpAllocateAsid.c)
 * Callees:
 *     <none>
 */

void __fastcall ExpAllocateReservedAsids(_QWORD *a1)
{
  *a1 = -1LL;
  a1[1] = 1LL;
  ++dword_140EFA6C8;
}
