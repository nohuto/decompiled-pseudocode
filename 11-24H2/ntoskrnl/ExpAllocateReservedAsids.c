/*
 * XREFs of ExpAllocateReservedAsids @ 0x140658C0C
 * Callers:
 *     ExpAllocateAsid @ 0x140658A58 (ExpAllocateAsid.c)
 * Callees:
 *     <none>
 */

void __fastcall ExpAllocateReservedAsids(_QWORD *a1)
{
  *a1 = -1LL;
  a1[1] = 1LL;
  ++dword_140EFA448;
}
