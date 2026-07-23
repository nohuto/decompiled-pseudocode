/*
 * XREFs of KiQueueTebUpdateApc @ 0x1403A05FC
 * Callers:
 *     ?KiSetIdealProcessorThread@@YAJPEAU_KTHREAD@@KEPEAKE@Z @ 0x140370B7C (-KiSetIdealProcessorThread@@YAJPEAU_KTHREAD@@KEPEAKE@Z.c)
 *     KiSetAffinityThread @ 0x1403A0218 (KiSetAffinityThread.c)
 * Callees:
 *     KiSignalThreadForApc @ 0x1402DD8B0 (KiSignalThreadForApc.c)
 *     KiInsertQueueApc @ 0x1402DF8C0 (KiInsertQueueApc.c)
 */

void __fastcall KiQueueTebUpdateApc(__int64 a1, char a2)
{
  struct _KPRCB *CurrentPrcb; // rsi
  __int64 v3; // rbx

  CurrentPrcb = KeGetCurrentPrcb();
  v3 = a1 + 1824;
  if ( *(_QWORD *)(a1 + 240) && (*(_DWORD *)(a1 + 116) & 0x4000) != 0 && !*(_BYTE *)(a1 + 1906) )
  {
    *(_BYTE *)(a1 + 1906) = 1;
    KiInsertQueueApc(a1 + 1824);
    KiSignalThreadForApc((__int64)CurrentPrcb, v3, a2, 1);
  }
}
