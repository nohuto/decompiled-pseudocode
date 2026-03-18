/*
 * XREFs of PopBcdOpen @ 0x1409C2170
 * Callers:
 *     PopAdaptivePersistSystemInitatedRebootState @ 0x1405DAE54 (PopAdaptivePersistSystemInitatedRebootState.c)
 * Callees:
 *     BcdOpenStore @ 0x1409C2038 (BcdOpenStore.c)
 */

__int64 __fastcall PopBcdOpen(__int64 *a1)
{
  return BcdOpenStore((__int64)a1, 2, a1);
}
