/*
 * XREFs of FsRtlpOplockTryStartBreakAckTimeout @ 0x140700750
 * Callers:
 *     FsRtlpOplockBreakByCacheFlags @ 0x1404E1CD0 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpOplockBreakToII @ 0x1404E44FC (FsRtlpOplockBreakToII.c)
 *     FsRtlpOplockBreakToNone @ 0x1404E4794 (FsRtlpOplockBreakToNone.c)
 * Callees:
 *     KiSetTimerEx @ 0x1402ED730 (KiSetTimerEx.c)
 *     KeQueryPerformanceCounter @ 0x14031B970 (KeQueryPerformanceCounter.c)
 *     FsRtlpOplockIsSubjectToTimeout @ 0x14057DFAC (FsRtlpOplockIsSubjectToTimeout.c)
 *     FsRtlpOplockGetThreadIntegrityLevel @ 0x1406FFB60 (FsRtlpOplockGetThreadIntegrityLevel.c)
 */

char __fastcall FsRtlpOplockTryStartBreakAckTimeout(LARGE_INTEGER *a1, __int64 a2)
{
  unsigned int v4; // eax
  __int64 v5; // rdx
  PVOID v7; // [rsp+40h] [rbp+8h] BYREF

  if ( !a1->QuadPart )
    *a1 = KeQueryPerformanceCounter(0LL);
  LOBYTE(v4) = FsRtlpOplockIsSubjectToTimeout((__int64)a1);
  if ( (_BYTE)v4 )
  {
    if ( a2 )
    {
      LODWORD(v7) = 0;
      LOBYTE(v4) = FsRtlpOplockGetThreadIntegrityLevel((__int64)KeGetCurrentThread(), &v7);
      if ( (_BYTE)v4 )
      {
        v4 = *(_DWORD *)(a2 + 176);
        if ( (unsigned int)v7 > v4 && !*(_BYTE *)(a2 + 180) )
        {
          v5 = -10000 * g_OplockAckTimeoutMs;
          *(_BYTE *)(a2 + 180) = 1;
          LOBYTE(v4) = KiSetTimerEx(a2, v5, 0, 0, a2 + 64);
        }
      }
    }
  }
  return v4;
}
