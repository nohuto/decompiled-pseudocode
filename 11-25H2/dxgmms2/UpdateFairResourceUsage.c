/*
 * XREFs of UpdateFairResourceUsage @ 0x14010ED2C
 * Callers:
 *     ??1VIDMM_DMA_POOL@@QEAA@XZ @ 0x1400B0318 (--1VIDMM_DMA_POOL@@QEAA@XZ.c)
 *     VidMmInitDmaPool @ 0x1400B03F0 (VidMmInitDmaPool.c)
 * Callees:
 *     <none>
 */

__int64 UpdateFairResourceUsage()
{
  __int64 result; // rax

  if ( dword_140081980 <= 1 )
  {
    qword_140081950 = qword_140081960;
    qword_140081920 = qword_140081930;
    result = qword_140081900;
  }
  else
  {
    qword_140081950 = qword_140081970 / (dword_140081980 - 1);
    qword_140081920 = qword_140081940 / (dword_140081980 - 1);
    result = qword_140081910 / (dword_140081980 - 1);
  }
  qword_1400818F0 = result;
  return result;
}
