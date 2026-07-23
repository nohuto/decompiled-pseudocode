/*
 * XREFs of VfBugCheckNoStackUsage @ 0x140610548
 * Callers:
 *     IovpCallDriverWithStackBuffer @ 0x140B84950 (IovpCallDriverWithStackBuffer.c)
 *     VfAfterCallDriver @ 0x140B8FA94 (VfAfterCallDriver.c)
 *     VfBeforeCallDriver @ 0x140B8FC68 (VfBeforeCallDriver.c)
 *     IovCallDriver @ 0x140BA9D40 (IovCallDriver.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

void __noreturn VfBugCheckNoStackUsage()
{
  KeBugCheckEx(VfBugcheckTmpData, BugCheckParameter1, qword_140FFDA40, xmmword_140FFDA48, *(&xmmword_140FFDA48 + 1));
}
