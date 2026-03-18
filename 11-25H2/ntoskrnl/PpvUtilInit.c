/*
 * XREFs of PpvUtilInit @ 0x140B72C60
 * Callers:
 *     VfIoPendingEntry @ 0x140606370 (VfIoPendingEntry.c)
 *     VfIoPendingUnload @ 0x140606440 (VfIoPendingUnload.c)
 * Callees:
 *     <none>
 */

void __fastcall PpvUtilInit(char a1)
{
  PpvUtilVerifierEnabled = a1;
}
