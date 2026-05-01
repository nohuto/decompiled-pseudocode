/*
 * XREFs of AslpMemoryCheckBounds @ 0x1800A3724
 * Callers:
 *     AslpFileGetImageResourceDirectoryRoot @ 0x1800A1484 (AslpFileGetImageResourceDirectoryRoot.c)
 *     AslpFileGetVersionBlockFromResourceRoot @ 0x1800A1FE0 (AslpFileGetVersionBlockFromResourceRoot.c)
 *     AslpFileGetVersionBlockImageOnly @ 0x1800A224C (AslpFileGetVersionBlockImageOnly.c)
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
