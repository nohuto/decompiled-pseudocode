/*
 * XREFs of MmSetAddressRangeModified @ 0x140481E80
 * Callers:
 *     <none>
 * Callees:
 *     MmSetAddressRangeModifiedEx @ 0x1402C18C0 (MmSetAddressRangeModifiedEx.c)
 */

BOOLEAN __stdcall MmSetAddressRangeModified(PVOID Address, SIZE_T Length)
{
  int v2; // r8d

  return MmSetAddressRangeModifiedEx((unsigned __int64)Address, Length, v2);
}
