/*
 * XREFs of MiLockVadShared @ 0x1402A7C94
 * Callers:
 *     MiUserFaultAllowed @ 0x14024ACD0 (MiUserFaultAllowed.c)
 *     MiCleanCfg @ 0x1402A62C8 (MiCleanCfg.c)
 *     MiReturnLockedVadOrNextVa @ 0x1402A77E4 (MiReturnLockedVadOrNextVa.c)
 *     MiObtainReferencedVadEx @ 0x1402A7A60 (MiObtainReferencedVadEx.c)
 *     MiHotPatchProcess @ 0x1407E2E80 (MiHotPatchProcess.c)
 *     NtAreMappedFilesTheSame @ 0x1408D8E90 (NtAreMappedFilesTheSame.c)
 *     MmIsFileMapped @ 0x140986274 (MmIsFileMapped.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x1409F5620 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MiFinishPlaceholderVadReplacement @ 0x140A7248C (MiFinishPlaceholderVadReplacement.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 */

int __fastcall MiLockVadShared(__int64 a1, __int64 a2)
{
  signed __int64 *v2; // rsi
  __int64 *v4; // rbx
  int result; // eax

  --*(_WORD *)(a1 + 486);
  v2 = (signed __int64 *)(a2 + 40);
  v4 = KeAbPreAcquire(a2 + 40, 0LL);
  if ( _InterlockedCompareExchange64(v2, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v2, 0, v4, (unsigned __int64)v2);
  if ( v4 )
    *((_BYTE *)v4 + 10) = 1;
  result = *(_DWORD *)(a1 + 1448) | 0x4000;
  *(_DWORD *)(a1 + 1448) = result;
  return result;
}
