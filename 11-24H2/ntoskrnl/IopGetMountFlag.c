/*
 * XREFs of IopGetMountFlag @ 0x140469480
 * Callers:
 *     NtQueryVolumeInformationFile @ 0x140957060 (NtQueryVolumeInformationFile.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x1402CB820 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140357D70 (KeAcquireQueuedSpinLock.c)
 */

bool __fastcall IopGetMountFlag(__int64 a1)
{
  bool v2; // di
  KIRQL v3; // dl
  __int64 v4; // rax

  v2 = 0;
  v3 = KeAcquireQueuedSpinLock(9uLL);
  v4 = *(_QWORD *)(a1 + 56);
  if ( v4 )
    v2 = (*(_BYTE *)(v4 + 4) & 1) != 0;
  KeReleaseQueuedSpinLock(9uLL, v3);
  return v2;
}
