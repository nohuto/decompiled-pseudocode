/*
 * XREFs of KiTpIsExcludedKernelTracepointLocation @ 0x14073BE20
 * Callers:
 *     KiTpIsSupportedKernelTracepointLocation @ 0x14073BF18 (KiTpIsSupportedKernelTracepointLocation.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     RtlNumberOfSetBitsInRange @ 0x1404B71B0 (RtlNumberOfSetBitsInRange.c)
 *     KiTpBuildExcludedKernelTracepointBitmap @ 0x14073BC00 (KiTpBuildExcludedKernelTracepointBitmap.c)
 */

__int64 __fastcall KiTpIsExcludedKernelTracepointLocation(__int64 a1)
{
  unsigned int v1; // ebx
  char *v3; // rax
  signed __int8 v4; // cf
  char *v5; // rdi
  _RTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-18h] BYREF

  v1 = 0;
  if ( !KiTpExcludedRangeBitMap.Buffer )
  {
    v3 = (char *)KeAbPreAcquire((__int64)&KiTpStateLock, 0LL);
    v4 = _interlockedbittestandset64((volatile signed __int32 *)&KiTpStateLock, 0LL);
    v5 = v3;
    if ( v4 )
      ExfAcquirePushLockExclusiveEx(&KiTpStateLock, v3, (__int64)&KiTpStateLock);
    if ( v5 )
      v5[10] = 1;
    if ( !KiTpExcludedRangeBitMap.Buffer )
      KiTpExcludedRangeBitMap = *KiTpBuildExcludedKernelTracepointBitmap(&BitMapHeader);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&KiTpStateLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&KiTpStateLock);
    KeAbPostRelease((ULONG_PTR)&KiTpStateLock);
    if ( !KiTpExcludedRangeBitMap.Buffer )
      return 1LL;
  }
  LOBYTE(v1) = RtlNumberOfSetBitsInRange(
                 &KiTpExcludedRangeBitMap,
                 (unsigned __int64)(a1 - (_QWORD)PsNtosImageBase) >> 4,
                 ((unsigned __int64)(a1 - (_QWORD)PsNtosImageBase + 16) >> 4)
               - ((unsigned __int64)(a1 - (_QWORD)PsNtosImageBase) >> 4)) != 0;
  return v1;
}
