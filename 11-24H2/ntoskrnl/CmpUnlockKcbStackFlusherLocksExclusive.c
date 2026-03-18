/*
 * XREFs of CmpUnlockKcbStackFlusherLocksExclusive @ 0x1404C65D4
 * Callers:
 *     CmSaveKey @ 0x1407CDBFC (CmSaveKey.c)
 * Callees:
 *     CmpGetKcbAtLayerHeight @ 0x140918910 (CmpGetKcbAtLayerHeight.c)
 *     HvUnlockHiveFlusherExclusive @ 0x140BB9A98 (HvUnlockHiveFlusherExclusive.c)
 */

void __fastcall CmpUnlockKcbStackFlusherLocksExclusive(__int64 a1)
{
  __int16 i; // bx
  __int64 KcbAtLayerHeight; // rax

  for ( i = *(_WORD *)(a1 + 2); i >= 0; --i )
  {
    KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1);
    HvUnlockHiveFlusherExclusive(*(_QWORD *)(KcbAtLayerHeight + 32));
  }
}
