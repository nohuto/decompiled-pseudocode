/*
 * XREFs of AslpMemoryCheckBounds @ 0x140696A48
 * Callers:
 *     AslpFileGetImageResourceDirectoryRoot @ 0x14080E06C (AslpFileGetImageResourceDirectoryRoot.c)
 *     AslpFileGetVersionBlockFromResourceRoot @ 0x14080EB1C (AslpFileGetVersionBlockFromResourceRoot.c)
 *     AslpFileGetVersionBlockImageOnly @ 0x14080ED88 (AslpFileGetVersionBlockImageOnly.c)
 * Callees:
 *     <none>
 */

bool __fastcall AslpMemoryCheckBounds(
        unsigned __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  unsigned __int64 v4; // r10
  unsigned __int64 v5; // rax

  v4 = a1 + a2;
  v5 = a3 + a4;
  return a1 >= a3 && a1 <= v4 && a1 <= v5 && v4 >= a3 && v4 <= v5 && a3 <= v5 && a2 <= a4;
}
