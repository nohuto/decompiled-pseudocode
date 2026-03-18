/*
 * XREFs of MincryptFree @ 0x140818BAC
 * Callers:
 *     SymCryptCallbackFree @ 0x14069A618 (SymCryptCallbackFree.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall MincryptFree(void *a1)
{
  ExFreePoolWithTag(a1, 0x72634943u);
}
