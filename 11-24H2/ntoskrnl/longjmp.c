/*
 * XREFs of longjmp @ 0x1404FB920
 * Callers:
 *     XmPopStack @ 0x140468128 (XmPopStack.c)
 *     XmGroup45General @ 0x140468620 (XmGroup45General.c)
 *     XmGetStringAddressRange @ 0x140468728 (XmGetStringAddressRange.c)
 *     XmOutOp @ 0x140468950 (XmOutOp.c)
 *     XmPushStack @ 0x140468C28 (XmPushStack.c)
 *     XmGetWordImmediate @ 0x140468D7C (XmGetWordImmediate.c)
 *     XmEvaluateAddressSpecifier @ 0x140468DC4 (XmEvaluateAddressSpecifier.c)
 *     XmGetCodeByte @ 0x140469218 (XmGetCodeByte.c)
 *     XmInOp @ 0x140469390 (XmInOp.c)
 *     XmGetLongImmediate @ 0x14056C8F0 (XmGetLongImmediate.c)
 *     XmEffectiveOffset @ 0x140574E90 (XmEffectiveOffset.c)
 *     XmGeneralRegister @ 0x140574FC0 (XmGeneralRegister.c)
 *     XmGroup7General @ 0x1405751A0 (XmGroup7General.c)
 *     XmLoadSegment @ 0x1405753D0 (XmLoadSegment.c)
 *     XmEnterOp @ 0x140576720 (XmEnterOp.c)
 *     XmHltOp @ 0x1405767D0 (XmHltOp.c)
 *     XmBoundOp @ 0x140576FF0 (XmBoundOp.c)
 *     XmIllOp @ 0x1405770C0 (XmIllOp.c)
 *     XmDivOp @ 0x1405773B0 (XmDivOp.c)
 *     XmIdivOp @ 0x140577480 (XmIdivOp.c)
 *     XmEvaluateIndexSpecifier @ 0x140577638 (XmEvaluateIndexSpecifier.c)
 *     XmGetOffsetAddress @ 0x140577894 (XmGetOffsetAddress.c)
 *     XmGetStringAddress @ 0x1405778DC (XmGetStringAddress.c)
 * Callees:
 *     KeCheckStackAndTargetAddress @ 0x1404378F0 (KeCheckStackAndTargetAddress.c)
 *     __longjmp_internal @ 0x1406A59B0 (__longjmp_internal.c)
 */

void __cdecl __noreturn longjmp(jmp_buf Buf, int Value)
{
  KeCheckStackAndTargetAddress(Buf[5].Part[0], Buf[1].Part[0]);
  _longjmp_internal(Buf, (unsigned int)Value);
}
