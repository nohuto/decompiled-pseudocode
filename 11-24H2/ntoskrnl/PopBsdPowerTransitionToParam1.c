/*
 * XREFs of PopBsdPowerTransitionToParam1 @ 0x14075BAB0
 * Callers:
 *     PopPowerButtonWorkCallback @ 0x1405D58C0 (PopPowerButtonWorkCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopBsdPowerTransitionToParam1(unsigned int *a1)
{
  __int64 result; // rax
  unsigned int v2; // r9d
  bool v3; // zf

  result = BYTE8(PopBsdPowerTransition);
  v2 = BYTE8(PopBsdPowerTransition) & 0xF0 | ((HIBYTE(PopBsdPowerTransition) & 0x80) << 19) | ((unsigned int)(BYTE14(PopBsdPowerTransition) & 0xCF | (BYTE11(PopBsdPowerTransition) >> 2)) >> 4) | ((BYTE14(PopBsdPowerTransition) & 0xF | (16 * (BYTE10(PopBsdPowerTransition) & 0x3F | ((BYTE10(PopBsdPowerTransition) ^ (BYTE10(PopBsdPowerTransition) ^ BYTE11(PopBsdPowerTransition)) & 0x3F) << 6)))) << 8);
  v3 = BYTE3(PopBsdPowerTransitionExtension) == 1;
  *a1 = v2;
  if ( v3 )
  {
    v2 |= 0x8000000u;
    *a1 = v2;
  }
  if ( BYTE4(PopBsdPowerTransitionExtension) == 1 )
    *a1 = v2 | 0x10000000;
  return result;
}
