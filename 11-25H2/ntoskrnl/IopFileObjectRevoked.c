/*
 * XREFs of IopFileObjectRevoked @ 0x1404063C0
 * Callers:
 *     IopIoRingDispatchWrite @ 0x14070AD78 (IopIoRingDispatchWrite.c)
 *     NtQueryVolumeInformationFile @ 0x140936F60 (NtQueryVolumeInformationFile.c)
 *     NtCopyFileChunk @ 0x140970910 (NtCopyFileChunk.c)
 *     NtLockFile @ 0x1409869D0 (NtLockFile.c)
 * Callees:
 *     PsIsProcessAppContainer @ 0x140969C10 (PsIsProcessAppContainer.c)
 */

bool __fastcall IopFileObjectRevoked(__int64 a1)
{
  _DWORD *v1; // rax

  v1 = *(_DWORD **)(a1 + 208);
  return v1 && (*v1 & 4) != 0 && (unsigned __int8)PsIsProcessAppContainer(KeGetCurrentThread()->ApcState.Process);
}
