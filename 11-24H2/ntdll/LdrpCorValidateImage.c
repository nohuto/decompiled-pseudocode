/*
 * XREFs of LdrpCorValidateImage @ 0x18010DE14
 * Callers:
 *     LdrpInitializeProcess @ 0x180066D74 (LdrpInitializeProcess.c)
 *     LdrpCompleteMapModule @ 0x180073340 (LdrpCompleteMapModule.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x180008A00 (RtlImageDirectoryEntryToData.c)
 */

__int64 __fastcall LdrpCorValidateImage(unsigned __int64 a1)
{
  int v2; // [rsp+38h] [rbp+10h] BYREF

  return RtlImageDirectoryEntryToData(a1, 1, 9u, &v2) != 0 ? 0xC000007B : 0;
}
