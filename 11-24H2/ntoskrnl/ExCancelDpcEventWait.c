/*
 * XREFs of ExCancelDpcEventWait @ 0x140655CC0
 * Callers:
 *     <none>
 * Callees:
 *     ?KiDeregisterObjectWaitBlock@@YAEPEAXPEAU_KWAIT_BLOCK@@@Z @ 0x1402D381C (-KiDeregisterObjectWaitBlock@@YAEPEAXPEAU_KWAIT_BLOCK@@@Z.c)
 */

char __fastcall ExCancelDpcEventWait(struct _KWAIT_BLOCK *a1)
{
  return KiDeregisterObjectWaitBlock((volatile signed __int32 *)a1[1].WaitListEntry.Blink, a1);
}
