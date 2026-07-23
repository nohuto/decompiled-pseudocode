/*
 * XREFs of XmGetLongImmediate @ 0x140569D80
 * Callers:
 *     XmMoveRegImmediate @ 0x140461550 (XmMoveRegImmediate.c)
 *     XmEvaluateAddressSpecifier @ 0x140461774 (XmEvaluateAddressSpecifier.c)
 *     XmGetImmediateSourceValue @ 0x14046195C (XmGetImmediateSourceValue.c)
 *     XmAccumImmediate @ 0x1404619B0 (XmAccumImmediate.c)
 *     XmImmediateJump @ 0x140572790 (XmImmediateJump.c)
 *     XmLongJump @ 0x140572930 (XmLongJump.c)
 *     XmSegmentOffset @ 0x140572C00 (XmSegmentOffset.c)
 *     XmEvaluateIndexSpecifier @ 0x140574AC8 (XmEvaluateIndexSpecifier.c)
 * Callees:
 *     x86BiosTranslateAddress @ 0x140461C10 (x86BiosTranslateAddress.c)
 *     longjmp @ 0x1404F91E0 (longjmp.c)
 */

__int64 __fastcall XmGetLongImmediate(__int64 a1)
{
  int v1; // r8d

  v1 = *(_DWORD *)(a1 + 20);
  if ( v1 + 3 > (unsigned int)*(unsigned __int16 *)(a1 + 70) )
    longjmp((_JBTYPE *)(a1 + 160), 14);
  *(_WORD *)(a1 + 20) += 4;
  return (unsigned int)*x86BiosTranslateAddress(*(_WORD *)(a1 + 58), v1);
}
