/*
 * XREFs of LdrpCorValidateImage @ 0x18006CD44
 * Callers:
 *     LdrpCompleteMapModule @ 0x18006DBC0 (LdrpCompleteMapModule.c)
 *     LdrpInitializeProcess @ 0x1800D29F4 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x180022220 (RtlImageDirectoryEntryToData.c)
 */

__int64 __fastcall LdrpCorValidateImage(unsigned __int64 a1)
{
  int v2; // [rsp+38h] [rbp+10h] BYREF

  return RtlImageDirectoryEntryToData(a1, 1, 9u, &v2) != 0 ? 0xC000007B : 0;
}
