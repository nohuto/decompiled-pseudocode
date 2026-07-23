/*
 * XREFs of PopBcdClose @ 0x140A24B74
 * Callers:
 *     PopAdaptivePersistSystemInitatedRebootState @ 0x1405D632C (PopAdaptivePersistSystemInitatedRebootState.c)
 * Callees:
 *     BcdCloseStore @ 0x140A24B8C (BcdCloseStore.c)
 */

NTSTATUS __fastcall PopBcdClose(void *a1)
{
  return BcdCloseStore(a1);
}
