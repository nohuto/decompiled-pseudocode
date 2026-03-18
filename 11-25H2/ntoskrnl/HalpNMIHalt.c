/*
 * XREFs of HalpNMIHalt @ 0x140541654
 * Callers:
 *     HalBugCheckSystem @ 0x14053BC10 (HalBugCheckSystem.c)
 *     HalHandleNMI @ 0x140541310 (HalHandleNMI.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

void __fastcall __noreturn HalpNMIHalt(unsigned __int8 a1)
{
  HalpDoingCrashDump = 1;
  HalpBugcheckInProgress = 1;
  KeBugCheckEx(0x80u, 0x4F4454uLL, a1, 0LL, 0LL);
}
