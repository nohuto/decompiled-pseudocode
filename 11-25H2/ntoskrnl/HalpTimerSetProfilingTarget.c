/*
 * XREFs of HalpTimerSetProfilingTarget @ 0x1404C0B34
 * Callers:
 *     EmonSetIntervalEnhanced @ 0x14055BE30 (EmonSetIntervalEnhanced.c)
 *     EmonSetIntervalOriginal @ 0x14055C030 (EmonSetIntervalOriginal.c)
 *     Amd64SetInterval @ 0x1405694D0 (Amd64SetInterval.c)
 * Callees:
 *     HalpDisableInterrupts @ 0x140288F50 (HalpDisableInterrupts.c)
 */

bool HalpTimerSetProfilingTarget()
{
  bool result; // al
  __int64 v1; // r8
  __int64 v2; // r10
  int v3; // r11d
  int v4; // edx

  result = HalpDisableInterrupts();
  v1 = HalpProfileData;
  v2 = 296LL * KeGetPcr()->Prcb.Number;
  *(_DWORD *)(v2 + HalpProfileData + 20) = 0;
  *(_DWORD *)(v2 + v1 + 24) = v3;
  *(_DWORD *)(v2 + v1 + 16) = v4;
  *(_DWORD *)(v2 + v1 + 28) = v4;
  if ( result )
    _enable();
  return result;
}
