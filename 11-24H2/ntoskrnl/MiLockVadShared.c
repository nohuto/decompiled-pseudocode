/*
 * XREFs of MiLockVadShared @ 0x140345480
 * Callers:
 *     MiObtainReferencedVadEx @ 0x140344D30 (MiObtainReferencedVadEx.c)
 *     MiReturnLockedVadOrNextVa @ 0x140345020 (MiReturnLockedVadOrNextVa.c)
 *     MiCleanCfg @ 0x140481A2C (MiCleanCfg.c)
 *     MiWaitForRotateToComplete @ 0x140494E48 (MiWaitForRotateToComplete.c)
 *     MiHotPatchProcess @ 0x1407F32D8 (MiHotPatchProcess.c)
 *     MmIsFileMapped @ 0x140860F44 (MmIsFileMapped.c)
 *     NtAreMappedFilesTheSame @ 0x1408D8910 (NtAreMappedFilesTheSame.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x1409505E0 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MiFinishPlaceholderVadReplacement @ 0x140A69CDC (MiFinishPlaceholderVadReplacement.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 */

int __fastcall MiLockVadShared(__int64 a1, __int64 a2)
{
  signed __int64 *v2; // rsi
  char *v4; // rbx
  int result; // eax

  --*(_WORD *)(a1 + 486);
  v2 = (signed __int64 *)(a2 + 40);
  v4 = (char *)KeAbPreAcquire(a2 + 40, 0LL);
  if ( _InterlockedCompareExchange64(v2, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v2, 0, v4, (__int64)v2);
  if ( v4 )
    v4[10] = 1;
  result = *(_DWORD *)(a1 + 1448) | 0x4000;
  *(_DWORD *)(a1 + 1448) = result;
  return result;
}
