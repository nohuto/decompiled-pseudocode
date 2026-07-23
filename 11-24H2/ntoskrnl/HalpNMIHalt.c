/*
 * XREFs of HalpNMIHalt @ 0x1405417D4
 * Callers:
 *     HalBugCheckSystem @ 0x14053BD40 (HalBugCheckSystem.c)
 *     HalHandleNMI @ 0x140541490 (HalHandleNMI.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

void __fastcall __noreturn HalpNMIHalt(unsigned __int8 a1)
{
  HalpDoingCrashDump = 1;
  HalpBugcheckInProgress = 1;
  KeBugCheckEx(0x80u, 0x4F4454uLL, a1, 0LL, 0LL);
}
