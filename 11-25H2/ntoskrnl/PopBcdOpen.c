/*
 * XREFs of PopBcdOpen @ 0x140A24A78
 * Callers:
 *     PopAdaptivePersistSystemInitatedRebootState @ 0x1405D632C (PopAdaptivePersistSystemInitatedRebootState.c)
 * Callees:
 *     BcdOpenStore @ 0x140A24A98 (BcdOpenStore.c)
 */

__int64 __fastcall PopBcdOpen(__int64 a1)
{
  return BcdOpenStore(a1, 2LL, a1);
}
