/*
 * XREFs of MiInitPerfMemoryFlags @ 0x1404F8094
 * Callers:
 *     MiLogSectionCreate @ 0x1407DC2BC (MiLogSectionCreate.c)
 *     MiDeleteVad @ 0x1408B4F54 (MiDeleteVad.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiInitPerfMemoryFlags(int a1, char a2)
{
  return (2 * (a2 & 0xF)) | (unsigned int)(a1 != 0);
}
