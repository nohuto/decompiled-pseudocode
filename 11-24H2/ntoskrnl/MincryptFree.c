/*
 * XREFs of MincryptFree @ 0x1408289A0
 * Callers:
 *     SymCryptCallbackFree @ 0x1406A5848 (SymCryptCallbackFree.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall MincryptFree(void *a1)
{
  ExFreePoolWithTag(a1, 0x72634943u);
}
