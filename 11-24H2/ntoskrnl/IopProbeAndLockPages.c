/*
 * XREFs of IopProbeAndLockPages @ 0x140267E4C
 * Callers:
 *     IopBuildDeviceIoControlRequest @ 0x140267920 (IopBuildDeviceIoControlRequest.c)
 *     IopBuildAsynchronousFsdRequest @ 0x1403754A0 (IopBuildAsynchronousFsdRequest.c)
 * Callees:
 *     MmProbeAndLockPages @ 0x140282330 (MmProbeAndLockPages.c)
 *     MmUpdateMdlTracker @ 0x1404384E4 (MmUpdateMdlTracker.c)
 */

__int64 __fastcall IopProbeAndLockPages(struct _MDL *a1, __int64 a2, LOCK_OPERATION a3, __int64 a4, unsigned int a5)
{
  __int64 result; // rax

  MmProbeAndLockPages(a1, 0, a3);
  result = (unsigned int)MmTrackLockedPages;
  if ( (MmTrackLockedPages & 1) != 0 )
    return MmUpdateMdlTracker(a1, *(_QWORD *)(*(_QWORD *)(a4 + 8) + 8LL * a5 + 112), a4);
  return result;
}
