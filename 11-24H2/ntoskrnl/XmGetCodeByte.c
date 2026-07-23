/*
 * XREFs of XmGetCodeByte @ 0x140461BC8
 * Callers:
 *     XmGroup2ByByte @ 0x140460B70 (XmGroup2ByByte.c)
 *     XmMoveRegImmediate @ 0x140461550 (XmMoveRegImmediate.c)
 *     XmEvaluateAddressSpecifier @ 0x140461774 (XmEvaluateAddressSpecifier.c)
 *     XmShortJump @ 0x1404618F0 (XmShortJump.c)
 *     XmGetImmediateSourceValue @ 0x14046195C (XmGetImmediateSourceValue.c)
 *     XmAccumImmediate @ 0x1404619B0 (XmAccumImmediate.c)
 *     XmEmulateStream @ 0x140461A64 (XmEmulateStream.c)
 *     XmGroup8BitOffset @ 0x140572690 (XmGroup8BitOffset.c)
 *     XmImmediateEnter @ 0x140572740 (XmImmediateEnter.c)
 *     XmPortImmediate @ 0x140572B40 (XmPortImmediate.c)
 *     XmShiftDouble @ 0x140572CB0 (XmShiftDouble.c)
 *     XmEvaluateIndexSpecifier @ 0x140574AC8 (XmEvaluateIndexSpecifier.c)
 * Callees:
 *     x86BiosTranslateAddress @ 0x140461C10 (x86BiosTranslateAddress.c)
 *     longjmp @ 0x1404F91E0 (longjmp.c)
 */

char __fastcall XmGetCodeByte(__int64 a1)
{
  __int64 v1; // rdx

  v1 = *(unsigned int *)(a1 + 20);
  if ( (unsigned int)v1 > *(unsigned __int16 *)(a1 + 70) )
    longjmp((_JBTYPE *)(a1 + 160), 14);
  ++*(_WORD *)(a1 + 20);
  return *(_BYTE *)x86BiosTranslateAddress(*(unsigned __int16 *)(a1 + 58), v1);
}
