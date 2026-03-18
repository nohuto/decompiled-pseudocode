/*
 * XREFs of PopBcdClose @ 0x14085EEC0
 * Callers:
 *     PopAdaptivePersistSystemInitatedRebootState @ 0x1405DAE54 (PopAdaptivePersistSystemInitatedRebootState.c)
 * Callees:
 *     BcdCloseStore @ 0x14085EED8 (BcdCloseStore.c)
 */

__int64 __fastcall PopBcdClose(__int64 a1)
{
  return BcdCloseStore(a1);
}
