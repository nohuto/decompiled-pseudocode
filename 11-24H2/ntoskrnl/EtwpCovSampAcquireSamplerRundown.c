/*
 * XREFs of EtwpCovSampAcquireSamplerRundown @ 0x1409238C0
 * Callers:
 *     EtwpCovSampImageNotify @ 0x1409228E0 (EtwpCovSampImageNotify.c)
 *     EtwpCovSampSampleBufferProcess @ 0x140924BD4 (EtwpCovSampSampleBufferProcess.c)
 *     EtwpCoverageSamplerUnloadImage @ 0x140A0E7A0 (EtwpCoverageSamplerUnloadImage.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfAcquireRundownProtection @ 0x1402F60C0 (ExfAcquireRundownProtection.c)
 */

__int64 __fastcall EtwpCovSampAcquireSamplerRundown(_QWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v3; // rtt

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  _m_prefetchw(&stru_140EFEFA0);
  v3 = stru_140EFEFA0.Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v3 == _InterlockedCompareExchange64(
               (volatile signed __int64 *)&stru_140EFEFA0,
               (stru_140EFEFA0.Count & 0xFFFFFFFFFFFFFFFEuLL) + 2,
               stru_140EFEFA0.Count & 0xFFFFFFFFFFFFFFFEuLL)
    || ExfAcquireRundownProtection(&stru_140EFEFA0) )
  {
    *a1 = qword_140EFEF98;
    return 0LL;
  }
  else
  {
    KeLeaveCriticalRegion();
    return 3221225865LL;
  }
}
