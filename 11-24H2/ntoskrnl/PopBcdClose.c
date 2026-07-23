/*
 * XREFs of PopBcdClose @ 0x140A819F0
 * Callers:
 *     PopAdaptivePersistSystemInitatedRebootState @ 0x1405D8174 (PopAdaptivePersistSystemInitatedRebootState.c)
 * Callees:
 *     BcdCloseStore @ 0x140A81A08 (BcdCloseStore.c)
 */

NTSTATUS __fastcall PopBcdClose(void *a1)
{
  return BcdCloseStore(a1);
}
