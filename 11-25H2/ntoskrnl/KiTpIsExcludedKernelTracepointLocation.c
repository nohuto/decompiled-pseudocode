/*
 * XREFs of KiTpIsExcludedKernelTracepointLocation @ 0x140731ED0
 * Callers:
 *     KiTpIsSupportedKernelTracepointLocation @ 0x140731FC8 (KiTpIsSupportedKernelTracepointLocation.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     RtlNumberOfSetBitsInRange @ 0x1404BD140 (RtlNumberOfSetBitsInRange.c)
 *     KiTpBuildExcludedKernelTracepointBitmap @ 0x140731CB0 (KiTpBuildExcludedKernelTracepointBitmap.c)
 */

__int64 __fastcall KiTpIsExcludedKernelTracepointLocation(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 *v3; // rax
  signed __int8 v4; // cf
  __int64 *v5; // rdi
  __int64 v7; // rt1
  _RTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-18h] BYREF

  v1 = 0;
  if ( !KiTpExcludedRangeBitMap.Buffer )
  {
    v3 = KeAbPreAcquire((__int64)&KiTpStateLock, 0LL);
    v4 = _interlockedbittestandset64((volatile signed __int32 *)&KiTpStateLock, 0LL);
    v5 = v3;
    if ( v4 )
      ExfAcquirePushLockExclusiveEx(&KiTpStateLock, v3, (__int64)&KiTpStateLock);
    if ( v5 )
      *((_BYTE *)v5 + 10) = 1;
    if ( !KiTpExcludedRangeBitMap.Buffer )
      KiTpExcludedRangeBitMap = *KiTpBuildExcludedKernelTracepointBitmap(&BitMapHeader);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&KiTpStateLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&KiTpStateLock);
    KeAbPostRelease((ULONG_PTR)&KiTpStateLock);
    if ( !KiTpExcludedRangeBitMap.Buffer )
      return 1LL;
  }
  v7 = *(_QWORD *)&KeNumberProcessorsGroup0[9];
  LOBYTE(v1) = RtlNumberOfSetBitsInRange(
                 &KiTpExcludedRangeBitMap,
                 (unsigned __int64)(a1 - v7) >> 4,
                 ((unsigned __int64)(a1 - v7 + 16) >> 4) - ((unsigned __int64)(a1 - v7) >> 4)) != 0;
  return v1;
}
