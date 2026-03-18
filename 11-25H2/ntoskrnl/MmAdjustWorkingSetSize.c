/*
 * XREFs of MmAdjustWorkingSetSize @ 0x1403C5170
 * Callers:
 *     PspApplyWorkingSetLimits @ 0x140767A00 (PspApplyWorkingSetLimits.c)
 *     PspApplyWorkingSetLimitsToProcess @ 0x1408D8888 (PspApplyWorkingSetLimitsToProcess.c)
 * Callees:
 *     MmAdjustWorkingSetSizeEx @ 0x1403C5254 (MmAdjustWorkingSetSizeEx.c)
 */

__int64 __fastcall MmAdjustWorkingSetSize(int a1, int a2, int a3, int a4)
{
  _BYTE v5[24]; // [rsp+30h] [rbp-18h] BYREF

  v5[0] = 0;
  return MmAdjustWorkingSetSizeEx(a1, a2, a3, a4, 0, (__int64)v5);
}
