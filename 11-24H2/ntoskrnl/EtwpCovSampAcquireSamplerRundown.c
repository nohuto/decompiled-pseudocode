/*
 * XREFs of EtwpCovSampAcquireSamplerRundown @ 0x140900FE0
 * Callers:
 *     EtwpCoverageSamplerUnloadImage @ 0x1408E6A9C (EtwpCoverageSamplerUnloadImage.c)
 *     EtwpCovSampImageNotify @ 0x140900000 (EtwpCovSampImageNotify.c)
 *     EtwpCovSampSampleBufferProcess @ 0x1409022F4 (EtwpCovSampSampleBufferProcess.c)
 * Callees:
 *     ExfAcquireRundownProtection @ 0x140247210 (ExfAcquireRundownProtection.c)
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 */

__int64 __fastcall EtwpCovSampAcquireSamplerRundown(_QWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v3; // rtt

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  _m_prefetchw(&stru_140EFEC80);
  v3 = stru_140EFEC80.Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v3 == _InterlockedCompareExchange64(
               (volatile signed __int64 *)&stru_140EFEC80,
               (stru_140EFEC80.Count & 0xFFFFFFFFFFFFFFFEuLL) + 2,
               stru_140EFEC80.Count & 0xFFFFFFFFFFFFFFFEuLL)
    || ExfAcquireRundownProtection(&stru_140EFEC80) )
  {
    *a1 = qword_140EFEC78;
    return 0LL;
  }
  else
  {
    KeLeaveCriticalRegion();
    return 3221225865LL;
  }
}
