/*
 * XREFs of KiTpIsExcludedKernelTracepointLocation @ 0x14073DEF0
 * Callers:
 *     KiTpIsSupportedKernelTracepointLocation @ 0x14073DFE8 (KiTpIsSupportedKernelTracepointLocation.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     RtlNumberOfSetBitsInRange @ 0x1404BC2A0 (RtlNumberOfSetBitsInRange.c)
 *     KiTpBuildExcludedKernelTracepointBitmap @ 0x14073DCD0 (KiTpBuildExcludedKernelTracepointBitmap.c)
 */

__int64 __fastcall KiTpIsExcludedKernelTracepointLocation(__int64 a1)
{
  unsigned int v1; // ebx
  _QWORD *v3; // rax
  signed __int8 v4; // cf
  _QWORD *v5; // rdi
  RTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-18h] BYREF

  v1 = 0;
  if ( !qword_140F0F978 )
  {
    v3 = KeAbPreAcquire((__int64)&KiTpStateLock, 0LL);
    v4 = _interlockedbittestandset64((volatile signed __int32 *)&KiTpStateLock, 0LL);
    v5 = v3;
    if ( v4 )
      ExfAcquirePushLockExclusiveEx(&KiTpStateLock, (__int64)v3, (__int64)&KiTpStateLock);
    if ( v5 )
      *((_BYTE *)v5 + 10) = 1;
    if ( !qword_140F0F978 )
      KiTpExcludedRangeBitMap = *KiTpBuildExcludedKernelTracepointBitmap(&BitMapHeader);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&KiTpStateLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&KiTpStateLock);
    KeAbPostRelease((ULONG_PTR)&KiTpStateLock);
    if ( !qword_140F0F978 )
      return 1LL;
  }
  LOBYTE(v1) = (unsigned int)RtlNumberOfSetBitsInRange(
                               (__int64)&KiTpExcludedRangeBitMap,
                               (a1 - PsNtosImageBase) >> 4,
                               (unsigned int)((a1 - PsNtosImageBase + 16) >> 4)
                             - (unsigned int)((a1 - PsNtosImageBase) >> 4)) != 0;
  return v1;
}
