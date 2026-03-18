/*
 * XREFs of VfBugCheckNoStackUsage @ 0x140611F88
 * Callers:
 *     IovpCallDriverWithStackBuffer @ 0x140B82950 (IovpCallDriverWithStackBuffer.c)
 *     VfAfterCallDriver @ 0x140B8DA94 (VfAfterCallDriver.c)
 *     VfBeforeCallDriver @ 0x140B8DC68 (VfBeforeCallDriver.c)
 *     IovCallDriver @ 0x140BA7D40 (IovCallDriver.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

void __noreturn VfBugCheckNoStackUsage()
{
  KeBugCheckEx(VfBugcheckTmpData, BugCheckParameter1, qword_140FFCA40, xmmword_140FFCA48, *(&xmmword_140FFCA48 + 1));
}
