/*
 * XREFs of XmGetWordImmediate @ 0x14046172C
 * Callers:
 *     XmMoveRegImmediate @ 0x140461550 (XmMoveRegImmediate.c)
 *     XmEvaluateAddressSpecifier @ 0x140461774 (XmEvaluateAddressSpecifier.c)
 *     XmGetImmediateSourceValue @ 0x14046195C (XmGetImmediateSourceValue.c)
 *     XmAccumImmediate @ 0x1404619B0 (XmAccumImmediate.c)
 *     XmImmediateEnter @ 0x140572740 (XmImmediateEnter.c)
 *     XmImmediateJump @ 0x140572790 (XmImmediateJump.c)
 *     XmLongJump @ 0x140572930 (XmLongJump.c)
 *     XmSegmentOffset @ 0x140572C00 (XmSegmentOffset.c)
 *     XmRetOp @ 0x140573DF0 (XmRetOp.c)
 * Callees:
 *     x86BiosTranslateAddress @ 0x140461C10 (x86BiosTranslateAddress.c)
 *     longjmp @ 0x1404F91E0 (longjmp.c)
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
