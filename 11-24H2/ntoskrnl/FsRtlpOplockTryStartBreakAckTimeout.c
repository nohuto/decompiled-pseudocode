/*
 * XREFs of FsRtlpOplockTryStartBreakAckTimeout @ 0x14070A1C4
 * Callers:
 *     FsRtlpOplockBreakToII @ 0x1403CE520 (FsRtlpOplockBreakToII.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x1403CF664 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpOplockBreakToNone @ 0x14057E780 (FsRtlpOplockBreakToNone.c)
 * Callees:
 *     KiSetTimerEx @ 0x140316810 (KiSetTimerEx.c)
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     FsRtlpOplockIsSubjectToTimeout @ 0x14057EADC (FsRtlpOplockIsSubjectToTimeout.c)
 *     FsRtlpOplockGetThreadIntegrityLevel @ 0x1407095D4 (FsRtlpOplockGetThreadIntegrityLevel.c)
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
