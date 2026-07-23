/*
 * XREFs of CmpLockKcbStackExclusive @ 0x14090C338
 * Callers:
 *     CmDeleteLayeredKey @ 0x14040AAA8 (CmDeleteLayeredKey.c)
 *     CmpAssignKeySecurity @ 0x1407DCF10 (CmpAssignKeySecurity.c)
 * Callees:
 *     CmpLockKcbExclusive @ 0x1408747A0 (CmpLockKcbExclusive.c)
 *     CmpGetKcbAtLayerHeight @ 0x14090C380 (CmpGetKcbAtLayerHeight.c)
 */

void __fastcall CmpLockKcbStackExclusive(__int64 a1)
{
  __int16 i; // bx
  __int64 KcbAtLayerHeight; // rax

  for ( i = 0; i <= *(__int16 *)(a1 + 2); ++i )
  {
    KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1);
    CmpLockKcbExclusive(KcbAtLayerHeight);
  }
}
