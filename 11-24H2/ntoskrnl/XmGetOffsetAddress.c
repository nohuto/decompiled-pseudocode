/*
 * XREFs of XmGetOffsetAddress @ 0x140577894
 * Callers:
 *     XmGroup45General @ 0x140468620 (XmGroup45General.c)
 *     XmGeneralBitOffset @ 0x140574F10 (XmGeneralBitOffset.c)
 *     XmGroup8BitOffset @ 0x140575200 (XmGroup8BitOffset.c)
 *     XmLoadSegment @ 0x1405753D0 (XmLoadSegment.c)
 *     XmSegmentOffset @ 0x140575770 (XmSegmentOffset.c)
 *     XmXlatOpcode @ 0x1405758C0 (XmXlatOpcode.c)
 *     XmBoundOp @ 0x140576FF0 (XmBoundOp.c)
 * Callees:
 *     x86BiosTranslateAddress @ 0x140469260 (x86BiosTranslateAddress.c)
 *     longjmp @ 0x1404FB920 (longjmp.c)
 */

int *__fastcall XmGetOffsetAddress(__int64 a1, unsigned int a2)
{
  __int64 v2; // r10
  unsigned int v3; // r9d

  v2 = *(unsigned int *)(a1 + 116);
  v3 = *(unsigned __int16 *)(a1 + 2 * v2 + 68);
  if ( a2 > v3 || a2 + *(_DWORD *)(a1 + 120) > v3 )
    longjmp((_JBTYPE *)(a1 + 160), 14);
  return x86BiosTranslateAddress(*(_WORD *)(a1 + 2 * v2 + 56), a2);
}
