/*
 * XREFs of UpdateFairResourceUsage @ 0x14010CB0C
 * Callers:
 *     ??1VIDMM_DMA_POOL@@QEAA@XZ @ 0x1400B86C8 (--1VIDMM_DMA_POOL@@QEAA@XZ.c)
 *     VidMmInitDmaPool @ 0x1400B87A0 (VidMmInitDmaPool.c)
 * Callees:
 *     <none>
 */

__int64 UpdateFairResourceUsage()
{
  __int64 result; // rax

  if ( dword_140081A08 <= 1 )
  {
    qword_1400819D8 = qword_1400819E8;
    qword_1400819A8 = qword_1400819B8;
    result = qword_140081988;
  }
  else
  {
    qword_1400819D8 = qword_1400819F8 / (dword_140081A08 - 1);
    qword_1400819A8 = qword_1400819C8 / (dword_140081A08 - 1);
    result = qword_140081998 / (dword_140081A08 - 1);
  }
  qword_140081978 = result;
  return result;
}
