/*
 * XREFs of IopFileObjectRevoked @ 0x140405E80
 * Callers:
 *     IopIoRingDispatchWrite @ 0x140714A08 (IopIoRingDispatchWrite.c)
 *     NtQueryVolumeInformationFile @ 0x140957060 (NtQueryVolumeInformationFile.c)
 *     NtLockFile @ 0x1409C2A10 (NtLockFile.c)
 *     NtCopyFileChunk @ 0x140ABE950 (NtCopyFileChunk.c)
 * Callees:
 *     PsIsProcessAppContainer @ 0x1408592D0 (PsIsProcessAppContainer.c)
 */

bool __fastcall IopFileObjectRevoked(__int64 a1)
{
  _DWORD *v1; // rax

  v1 = *(_DWORD **)(a1 + 208);
  return v1 && (*v1 & 4) != 0 && (unsigned __int8)PsIsProcessAppContainer(KeGetCurrentThread()->ApcState.Process);
}
