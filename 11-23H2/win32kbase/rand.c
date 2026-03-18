/*
 * XREFs of rand @ 0x1C00CE648
 * Callers:
 *     ?SampleRandomPickStart@MousePerfSummary@@AEAAXXZ @ 0x1C00551CC (-SampleRandomPickStart@MousePerfSummary@@AEAAXXZ.c)
 *     ?ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z @ 0x1C00E5CCA (-ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z.c)
 * Callees:
 *     <none>
 */

int __cdecl rand()
{
  dword_1C0289910 = 214013 * dword_1C0289910 + 2531011;
  return (dword_1C0289910 >> 16) & 0x7FFF;
}
