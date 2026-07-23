/*
 * XREFs of PiDcAllocateGenericTableEntry @ 0x140725200
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PiDcAllocateGenericTableEntry(__int64 a1, unsigned int a2)
{
  return ExAllocatePool2(0x100uLL, a2, 0x47706E50u);
}
