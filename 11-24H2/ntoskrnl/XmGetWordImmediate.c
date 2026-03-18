/*
 * XREFs of XmGetWordImmediate @ 0x140468D7C
 * Callers:
 *     XmMoveRegImmediate @ 0x140468BA0 (XmMoveRegImmediate.c)
 *     XmEvaluateAddressSpecifier @ 0x140468DC4 (XmEvaluateAddressSpecifier.c)
 *     XmGetImmediateSourceValue @ 0x140468FAC (XmGetImmediateSourceValue.c)
 *     XmAccumImmediate @ 0x140469000 (XmAccumImmediate.c)
 *     XmImmediateEnter @ 0x1405752B0 (XmImmediateEnter.c)
 *     XmImmediateJump @ 0x140575300 (XmImmediateJump.c)
 *     XmLongJump @ 0x1405754A0 (XmLongJump.c)
 *     XmSegmentOffset @ 0x140575770 (XmSegmentOffset.c)
 *     XmRetOp @ 0x140576960 (XmRetOp.c)
 * Callees:
 *     x86BiosTranslateAddress @ 0x140469260 (x86BiosTranslateAddress.c)
 *     longjmp @ 0x1404FB920 (longjmp.c)
 */

__int64 __fastcall XmGetWordImmediate(__int64 a1)
{
  int v1; // r8d

  v1 = *(_DWORD *)(a1 + 20);
  if ( v1 + 1 > (unsigned int)*(unsigned __int16 *)(a1 + 70) )
    longjmp((_JBTYPE *)(a1 + 160), 14);
  *(_WORD *)(a1 + 20) += 2;
  return *(unsigned __int16 *)x86BiosTranslateAddress(*(unsigned __int16 *)(a1 + 58), (unsigned __int16)v1);
}
