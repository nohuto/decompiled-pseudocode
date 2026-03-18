/*
 * XREFs of HvlRequestProcessorHalt @ 0x1405896E0
 * Callers:
 *     <none>
 * Callees:
 *     HvlpHvToNtStatus @ 0x1403AE3F8 (HvlpHvToNtStatus.c)
 *     HvcallInitiateHypercall @ 0x1403AF710 (HvcallInitiateHypercall.c)
 */

__int64 HvlRequestProcessorHalt()
{
  unsigned __int16 v0; // ax

  v0 = HvcallInitiateHypercall(65758);
  return HvlpHvToNtStatus(v0);
}
