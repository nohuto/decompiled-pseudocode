/*
 * XREFs of MiLockVadShared @ 0x1402FC580
 * Callers:
 *     MiObtainReferencedVadEx @ 0x1402FBE30 (MiObtainReferencedVadEx.c)
 *     MiReturnLockedVadOrNextVa @ 0x1402FC120 (MiReturnLockedVadOrNextVa.c)
 *     MiCleanCfg @ 0x14048643C (MiCleanCfg.c)
 *     MiWaitForRotateToComplete @ 0x14049A424 (MiWaitForRotateToComplete.c)
 *     MiHotPatchProcess @ 0x1407F2D08 (MiHotPatchProcess.c)
 *     NtAreMappedFilesTheSame @ 0x1408E8130 (NtAreMappedFilesTheSame.c)
 *     MmIsFileMapped @ 0x1408EF744 (MmIsFileMapped.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x140967B50 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MiFinishPlaceholderVadReplacement @ 0x140A7084C (MiFinishPlaceholderVadReplacement.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 */

int __fastcall MiLockVadShared(__int64 a1, __int64 a2)
{
  volatile signed __int64 *v2; // rsi
  __int64 v4; // rbx
  int result; // eax

  --*(_WORD *)(a1 + 486);
  v2 = (volatile signed __int64 *)(a2 + 40);
  v4 = KeAbPreAcquire(a2 + 40, 0LL, 0LL);
  if ( _InterlockedCompareExchange64(v2, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v2, 0LL, v4, v2);
  if ( v4 )
    *(_BYTE *)(v4 + 10) = 1;
  result = *(_DWORD *)(a1 + 1448) | 0x4000;
  *(_DWORD *)(a1 + 1448) = result;
  return result;
}
