/*
 * XREFs of MiInitPerfMemoryFlags @ 0x1404FA55C
 * Callers:
 *     MiLogSectionCreate @ 0x1407EC15C (MiLogSectionCreate.c)
 *     MiDeleteVad @ 0x1408E5390 (MiDeleteVad.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiInitPerfMemoryFlags(int a1, char a2)
{
  return (2 * (a2 & 0xF)) | (unsigned int)(a1 != 0);
}
