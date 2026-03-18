/*
 * XREFs of FsRtlpOplockTryStartBreakAckTimeout @ 0x14070C630
 * Callers:
 *     FsRtlpOplockBreakByCacheFlags @ 0x1404E1388 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpOplockBreakToII @ 0x1404E3964 (FsRtlpOplockBreakToII.c)
 *     FsRtlpOplockBreakToNone @ 0x1405813CC (FsRtlpOplockBreakToNone.c)
 * Callees:
 *     KiSetTimerEx @ 0x1403347A0 (KiSetTimerEx.c)
 *     KeQueryPerformanceCounter @ 0x14034FA10 (KeQueryPerformanceCounter.c)
 *     FsRtlpOplockIsSubjectToTimeout @ 0x140581758 (FsRtlpOplockIsSubjectToTimeout.c)
 *     FsRtlpOplockGetThreadIntegrityLevel @ 0x14070BA40 (FsRtlpOplockGetThreadIntegrityLevel.c)
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
