/*
 * XREFs of PpvUtilInit @ 0x140B82C48
 * Callers:
 *     VfIoPendingEntry @ 0x140612330 (VfIoPendingEntry.c)
 *     VfIoPendingUnload @ 0x140612400 (VfIoPendingUnload.c)
 * Callees:
 *     <none>
 */

void __fastcall PpvUtilInit(char a1)
{
  PpvUtilVerifierEnabled = a1;
}
