/*
 * XREFs of BcdSetElementData @ 0x140A94754
 * Callers:
 *     PopAdaptivePersistSystemInitatedRebootState @ 0x1405D632C (PopAdaptivePersistSystemInitatedRebootState.c)
 *     WheaPersistBadPageToBcd @ 0x140650F00 (WheaPersistBadPageToBcd.c)
 * Callees:
 *     BcdSetElementDataWithFlags @ 0x14096B5A4 (BcdSetElementDataWithFlags.c)
 */

int __fastcall BcdSetElementData(void *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  return BcdSetElementDataWithFlags(a1, a2, a3, a3, a4);
}
