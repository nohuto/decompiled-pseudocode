/*
 * XREFs of KiQueueTebUpdateApc @ 0x1403B1DEC
 * Callers:
 *     KiSetAffinityThread @ 0x1403B1A08 (KiSetAffinityThread.c)
 *     ?KiSetIdealProcessorThread@@YAJPEAU_KTHREAD@@KEPEAKE@Z @ 0x1403B4344 (-KiSetIdealProcessorThread@@YAJPEAU_KTHREAD@@KEPEAKE@Z.c)
 * Callees:
 *     KiSignalThreadForApc @ 0x140296870 (KiSignalThreadForApc.c)
 *     KiInsertQueueApc @ 0x1403377A0 (KiInsertQueueApc.c)
 */

char __fastcall KiQueueTebUpdateApc(__int64 a1, char a2)
{
  struct _KPRCB *CurrentPrcb; // rsi
  __int64 v3; // rbx
  char result; // al

  CurrentPrcb = KeGetCurrentPrcb();
  v3 = a1 + 1824;
  if ( *(_QWORD *)(a1 + 240) && (*(_DWORD *)(a1 + 116) & 0x4000) != 0 && !*(_BYTE *)(a1 + 1906) )
  {
    *(_BYTE *)(a1 + 1906) = 1;
    KiInsertQueueApc(a1 + 1824);
    return KiSignalThreadForApc((__int64)CurrentPrcb, v3, a2, 1);
  }
  return result;
}
