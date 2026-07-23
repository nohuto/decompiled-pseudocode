/*
 * XREFs of ExpAllocateStringRoutine @ 0x1409EAC50
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall ExpAllocateStringRoutine(ULONG_PTR a1)
{
  return ExAllocatePool2(0x100uLL, a1, 0x67727453u);
}
