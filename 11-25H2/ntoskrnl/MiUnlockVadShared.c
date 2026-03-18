/*
 * XREFs of MiUnlockVadShared @ 0x1402A6620
 * Callers:
 *     MiReturnLockedVadOrNextVa @ 0x1402A77E4 (MiReturnLockedVadOrNextVa.c)
 *     MiObtainReferencedVadEx @ 0x1402A7A60 (MiObtainReferencedVadEx.c)
 *     MiHotPatchProcess @ 0x1407E2E80 (MiHotPatchProcess.c)
 *     NtAreMappedFilesTheSame @ 0x1408D8E90 (NtAreMappedFilesTheSame.c)
 *     MmIsFileMapped @ 0x140986274 (MmIsFileMapped.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x1409F5620 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MiReferenceCfgVad @ 0x140A9ED54 (MiReferenceCfgVad.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 */

_QWORD *__fastcall MiUnlockVadShared(__int64 a1, __int64 a2)
{
  ULONG_PTR v2; // rdi
  _QWORD *result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9

  v2 = a2 + 40;
  *(_DWORD *)(a1 + 1448) &= ~0x4000u;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 40), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a2 + 40));
  result = (_QWORD *)KeAbPostRelease(v2);
  if ( (*(_WORD *)(a1 + 486))++ == 0xFFFF )
  {
    result = (_QWORD *)(a1 + 152);
    if ( (_QWORD *)*result != result )
      return (_QWORD *)KiCheckForKernelApcDelivery(v6, v5, v7, v8);
  }
  return result;
}
