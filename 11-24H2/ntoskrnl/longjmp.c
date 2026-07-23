/*
 * XREFs of longjmp @ 0x1404F91E0
 * Callers:
 *     XmPopStack @ 0x140460AD8 (XmPopStack.c)
 *     XmGroup45General @ 0x140460FD0 (XmGroup45General.c)
 *     XmGetStringAddressRange @ 0x1404610D8 (XmGetStringAddressRange.c)
 *     XmOutOp @ 0x140461300 (XmOutOp.c)
 *     XmPushStack @ 0x1404615D8 (XmPushStack.c)
 *     XmGetWordImmediate @ 0x14046172C (XmGetWordImmediate.c)
 *     XmEvaluateAddressSpecifier @ 0x140461774 (XmEvaluateAddressSpecifier.c)
 *     XmGetCodeByte @ 0x140461BC8 (XmGetCodeByte.c)
 *     XmInOp @ 0x140461D40 (XmInOp.c)
 *     XmGetLongImmediate @ 0x140569D80 (XmGetLongImmediate.c)
 *     XmEffectiveOffset @ 0x140572320 (XmEffectiveOffset.c)
 *     XmGeneralRegister @ 0x140572450 (XmGeneralRegister.c)
 *     XmGroup7General @ 0x140572630 (XmGroup7General.c)
 *     XmLoadSegment @ 0x140572860 (XmLoadSegment.c)
 *     XmEnterOp @ 0x140573BB0 (XmEnterOp.c)
 *     XmHltOp @ 0x140573C60 (XmHltOp.c)
 *     XmBoundOp @ 0x140574480 (XmBoundOp.c)
 *     XmIllOp @ 0x140574550 (XmIllOp.c)
 *     XmDivOp @ 0x140574840 (XmDivOp.c)
 *     XmIdivOp @ 0x140574910 (XmIdivOp.c)
 *     XmEvaluateIndexSpecifier @ 0x140574AC8 (XmEvaluateIndexSpecifier.c)
 *     XmGetOffsetAddress @ 0x140574D24 (XmGetOffsetAddress.c)
 *     XmGetStringAddress @ 0x140574D6C (XmGetStringAddress.c)
 * Callees:
 *     KeCheckStackAndTargetAddress @ 0x14042A370 (KeCheckStackAndTargetAddress.c)
 *     __longjmp_internal @ 0x1406A69B0 (__longjmp_internal.c)
 */

void __cdecl __noreturn longjmp(jmp_buf Buf, int Value)
{
  KeCheckStackAndTargetAddress(Buf[5].Part[0], Buf[1].Part[0]);
  _longjmp_internal(Buf, (unsigned int)Value);
}
