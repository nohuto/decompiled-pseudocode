/*
 * XREFs of CmpLockKcbStackExclusive @ 0x1409188C8
 * Callers:
 *     CmDeleteLayeredKey @ 0x14041AAA8 (CmDeleteLayeredKey.c)
 *     CmpAssignKeySecurity @ 0x1407DC9C0 (CmpAssignKeySecurity.c)
 * Callees:
 *     CmpLockKcbExclusive @ 0x140870470 (CmpLockKcbExclusive.c)
 *     CmpGetKcbAtLayerHeight @ 0x140918910 (CmpGetKcbAtLayerHeight.c)
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
