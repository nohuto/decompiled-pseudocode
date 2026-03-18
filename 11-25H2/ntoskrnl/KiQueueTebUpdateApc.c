/*
 * XREFs of KiQueueTebUpdateApc @ 0x140271C68
 * Callers:
 *     ?KiSetIdealProcessorThread@@YAJPEAU_KTHREAD@@KEPEAKE@Z @ 0x140201B78 (-KiSetIdealProcessorThread@@YAJPEAU_KTHREAD@@KEPEAKE@Z.c)
 *     KiSetAffinityThread @ 0x140271884 (KiSetAffinityThread.c)
 * Callees:
 *     KiInsertQueueApc @ 0x1402F0510 (KiInsertQueueApc.c)
 *     KiSignalThreadForApc @ 0x1402F1D40 (KiSignalThreadForApc.c)
 */

__int64 __fastcall KiQueueTebUpdateApc(__int64 a1, char a2)
{
  struct _KPRCB *CurrentPrcb; // rsi
  __int64 v3; // rbx
  __int64 v5; // r8
  __int64 result; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  v3 = a1 + 1824;
  if ( *(_QWORD *)(a1 + 240) && (*(_DWORD *)(a1 + 116) & 0x4000) != 0 && !*(_BYTE *)(a1 + 1906) )
  {
    *(_BYTE *)(a1 + 1906) = 1;
    KiInsertQueueApc(a1 + 1824);
    LOBYTE(v5) = a2;
    return KiSignalThreadForApc(CurrentPrcb, v3, v5, 1LL);
  }
  return result;
}
