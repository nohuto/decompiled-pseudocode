/*
 * XREFs of PpvUtilInit @ 0x140B84C48
 * Callers:
 *     VfIoPendingEntry @ 0x1406108F0 (VfIoPendingEntry.c)
 *     VfIoPendingUnload @ 0x1406109C0 (VfIoPendingUnload.c)
 * Callees:
 *     <none>
 */

void __fastcall PpvUtilInit(char a1)
{
  PpvUtilVerifierEnabled = a1;
}
