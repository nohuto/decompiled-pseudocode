/*
 * XREFs of HalStartProfileInterrupt @ 0x1405428F0
 * Callers:
 *     <none>
 * Callees:
 *     HalpStartProfileInterruptEx @ 0x1405439D0 (HalpStartProfileInterruptEx.c)
 */

__int64 __fastcall HalStartProfileInterrupt(int a1)
{
  return HalpStartProfileInterruptEx(a1, 0, 0, 0, 0LL);
}
