/*
 * XREFs of MiFastReadLeafPte @ 0x1402BB030
 * Callers:
 *     MiMakeHyperRangeAccessible @ 0x1402B94E0 (MiMakeHyperRangeAccessible.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiFastReadLeafPte(unsigned __int64 a1, __int64 *a2)
{
  unsigned __int64 v3; // rsi
  unsigned __int8 CurrentIrql; // bl
  _DWORD *MmInternal; // rcx
  _DWORD *v6; // rdi

  v3 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
  MmInternal = KeGetCurrentPrcb()->MmInternal;
  if ( (MiFlags & 0x800000) != 0 && MmInternal && (v6 = MmInternal + 80, !MmInternal[80]) )
  {
    *v6 = 2;
    *a2 = MI_READ_PTE_LOCK_FREE(v3);
    *v6 = 0;
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
    return 0LL;
  }
  else
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
    return 3221225473LL;
  }
}
