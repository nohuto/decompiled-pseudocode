/*
 * XREFs of XmGetCodeByte @ 0x140469218
 * Callers:
 *     XmGroup2ByByte @ 0x1404681C0 (XmGroup2ByByte.c)
 *     XmMoveRegImmediate @ 0x140468BA0 (XmMoveRegImmediate.c)
 *     XmEvaluateAddressSpecifier @ 0x140468DC4 (XmEvaluateAddressSpecifier.c)
 *     XmShortJump @ 0x140468F40 (XmShortJump.c)
 *     XmGetImmediateSourceValue @ 0x140468FAC (XmGetImmediateSourceValue.c)
 *     XmAccumImmediate @ 0x140469000 (XmAccumImmediate.c)
 *     XmEmulateStream @ 0x1404690B4 (XmEmulateStream.c)
 *     XmGroup8BitOffset @ 0x140575200 (XmGroup8BitOffset.c)
 *     XmImmediateEnter @ 0x1405752B0 (XmImmediateEnter.c)
 *     XmPortImmediate @ 0x1405756B0 (XmPortImmediate.c)
 *     XmShiftDouble @ 0x140575820 (XmShiftDouble.c)
 *     XmEvaluateIndexSpecifier @ 0x140577638 (XmEvaluateIndexSpecifier.c)
 * Callees:
 *     x86BiosTranslateAddress @ 0x140469260 (x86BiosTranslateAddress.c)
 *     longjmp @ 0x1404FB920 (longjmp.c)
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
