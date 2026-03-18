/*
 * XREFs of HvlRequestProcessorHalt @ 0x140586070
 * Callers:
 *     <none>
 * Callees:
 *     HvcallInitiateHypercall @ 0x14026D230 (HvcallInitiateHypercall.c)
 *     HvlpHvToNtStatus @ 0x14026E418 (HvlpHvToNtStatus.c)
 */

__int64 HvlRequestProcessorHalt()
{
  unsigned __int16 v0; // ax

  v0 = HvcallInitiateHypercall(65758);
  return HvlpHvToNtStatus(v0);
}
