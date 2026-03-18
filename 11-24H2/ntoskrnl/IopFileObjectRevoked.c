/*
 * XREFs of IopFileObjectRevoked @ 0x14040DC30
 * Callers:
 *     IopIoRingDispatchWrite @ 0x140716E78 (IopIoRingDispatchWrite.c)
 *     NtQueryVolumeInformationFile @ 0x14096EFA0 (NtQueryVolumeInformationFile.c)
 *     NtCopyFileChunk @ 0x1409886C0 (NtCopyFileChunk.c)
 *     NtLockFile @ 0x1409D2BE0 (NtLockFile.c)
 * Callees:
 *     PsIsProcessAppContainer @ 0x14085D560 (PsIsProcessAppContainer.c)
 */

bool __fastcall IopFileObjectRevoked(__int64 a1)
{
  _DWORD *v1; // rax

  v1 = *(_DWORD **)(a1 + 208);
  return v1 && (*v1 & 4) != 0 && (unsigned __int8)PsIsProcessAppContainer(KeGetCurrentThread()->ApcState.Process);
}
