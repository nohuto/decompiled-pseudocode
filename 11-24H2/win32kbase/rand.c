/*
 * XREFs of rand @ 0x1401A09E4
 * Callers:
 *     ?ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z @ 0x1400BAA98 (-ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z.c)
 *     ?SampleRandomPickStart@MousePerfSummary@@AEAAXXZ @ 0x1400BDFC4 (-SampleRandomPickStart@MousePerfSummary@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

int __cdecl rand()
{
  dword_14029B210 = 214013 * dword_14029B210 + 2531011;
  return (dword_14029B210 >> 16) & 0x7FFF;
}
