/*
 * XREFs of sub_180088AB0 @ 0x180088AB0
 * Callers:
 *     <none>
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

char __fastcall sub_180088AB0(__int64 a1, __int64 a2, double (__fastcall ***a3)(_QWORD))
{
  double v4; // xmm0_8

  v4 = (**a3)(a3);
  return sub_1800885FC(a1, (float)(*(float *)(a1 + 44) - *(float *)(a1 + 40)) * v4 + *(float *)(a1 + 40));
}
