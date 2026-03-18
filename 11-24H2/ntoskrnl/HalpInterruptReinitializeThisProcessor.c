/*
 * XREFs of HalpInterruptReinitializeThisProcessor @ 0x1404D8410
 * Callers:
 *     HalpInitializeInterruptsPn @ 0x140542178 (HalpInitializeInterruptsPn.c)
 *     HalpDpPostReplaceInitialization @ 0x140B4F9EC (HalpDpPostReplaceInitialization.c)
 *     HalpPostSleepMP @ 0x140B6886C (HalpPostSleepMP.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     HalpInterruptInitializeLocalUnit @ 0x1405565EC (HalpInterruptInitializeLocalUnit.c)
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
