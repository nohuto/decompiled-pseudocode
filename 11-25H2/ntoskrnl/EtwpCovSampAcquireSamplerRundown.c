/*
 * XREFs of EtwpCovSampAcquireSamplerRundown @ 0x14090D080
 * Callers:
 *     EtwpCovSampImageNotify @ 0x14090C0A0 (EtwpCovSampImageNotify.c)
 *     EtwpCovSampSampleBufferProcess @ 0x14090E394 (EtwpCovSampSampleBufferProcess.c)
 *     EtwpCoverageSamplerUnloadImage @ 0x140A0C120 (EtwpCoverageSamplerUnloadImage.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExfAcquireRundownProtection @ 0x140326BD0 (ExfAcquireRundownProtection.c)
 */

__int64 __fastcall EtwpCovSampAcquireSamplerRundown(_QWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v3; // rtt

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  _m_prefetchw(&stru_140EFE900);
  v3 = stru_140EFE900.Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v3 == _InterlockedCompareExchange64(
               (volatile signed __int64 *)&stru_140EFE900,
               (stru_140EFE900.Count & 0xFFFFFFFFFFFFFFFEuLL) + 2,
               stru_140EFE900.Count & 0xFFFFFFFFFFFFFFFEuLL)
    || ExfAcquireRundownProtection(&stru_140EFE900) )
  {
    *a1 = qword_140EFE8F8;
    return 0LL;
  }
  else
  {
    KeLeaveCriticalRegion();
    return 3221225865LL;
  }
}
