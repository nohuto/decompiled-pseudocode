/*
 * XREFs of HalpInterruptReinitializeThisProcessor @ 0x1404D1860
 * Callers:
 *     HalpInitializeInterruptsPn @ 0x14053FAC8 (HalpInitializeInterruptsPn.c)
 *     HalpDpPostReplaceInitialization @ 0x140B51A3C (HalpDpPostReplaceInitialization.c)
 *     HalpPostSleepMP @ 0x140B70824 (HalpPostSleepMP.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     HalpInterruptInitializeLocalUnit @ 0x140553F2C (HalpInterruptInitializeLocalUnit.c)
 */

__int64 HalpInterruptReinitializeThisProcessor()
{
  ULONG_PTR BugCheckParameter4; // rbx
  __int64 result; // rax

  BugCheckParameter4 = HalpInterruptController;
  result = *(unsigned int *)(HalpInterruptController + 244);
  if ( (result & 1) != 0 )
  {
    result = HalpInterruptInitializeLocalUnit(HalpInterruptController);
    if ( (int)result < 0 )
      KeBugCheckEx(0x5Cu, 0x200uLL, HalpInterruptLastProblem, KeGetPcr()->Prcb.Number, BugCheckParameter4);
  }
  return result;
}
