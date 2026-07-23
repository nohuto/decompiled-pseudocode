/*
 * XREFs of MiInitPerfMemoryFlags @ 0x1404F7E3C
 * Callers:
 *     MiLogSectionCreate @ 0x1407EC72C (MiLogSectionCreate.c)
 *     MiDeleteVad @ 0x140895840 (MiDeleteVad.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiInitPerfMemoryFlags(int a1, char a2)
{
  return (2 * (a2 & 0xF)) | (unsigned int)(a1 != 0);
}
