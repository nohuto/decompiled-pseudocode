/*
 * XREFs of MincryptFree @ 0x140829170
 * Callers:
 *     SymCryptCallbackFree @ 0x1406A6848 (SymCryptCallbackFree.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall MincryptFree(void *a1)
{
  ExFreePoolWithTag(a1, 0x72634943u);
}
