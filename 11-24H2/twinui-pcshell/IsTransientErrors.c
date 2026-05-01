/*
 * XREFs of IsTransientErrors @ 0x1805D4D2C
 * Callers:
 *     ?evaluate@_tip_CallDashboardExtensionTIP@@QEAAXXZ @ 0x180283890 (-evaluate@_tip_CallDashboardExtensionTIP@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsTransientErrors(int a1)
{
  int v1; // edx
  bool result; // al

  result = (unsigned int)(a1 + 2147418110) <= 0x10 && (v1 = 65569, _bittest(&v1, a1 + 2147418110))
        || a1 == -2147417848
        || a1 == -2147023728
        || a1 == -2147023174
        || a1 == -2147009280
        || a1 == -2147009190
        || a1 == -2146959355;
  return result;
}
