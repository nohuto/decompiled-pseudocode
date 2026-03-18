/*
 * XREFs of PopBcdClose @ 0x140A24B74
 * Callers:
 *     PopAdaptivePersistSystemInitatedRebootState @ 0x1405D632C (PopAdaptivePersistSystemInitatedRebootState.c)
 * Callees:
 *     BcdCloseStore @ 0x140A24B8C (BcdCloseStore.c)
 */

__int64 __fastcall PopBcdClose(__int64 a1)
{
  return BcdCloseStore(a1);
}
