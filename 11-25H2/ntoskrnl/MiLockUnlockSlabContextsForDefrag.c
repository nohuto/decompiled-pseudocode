/*
 * XREFs of MiLockUnlockSlabContextsForDefrag @ 0x14067CC44
 * Callers:
 *     MiDefragmentSlabWorker @ 0x14067B5D0 (MiDefragmentSlabWorker.c)
 *     MiEstablishDefragSlabEntries @ 0x14067BF8C (MiEstablishDefragSlabEntries.c)
 * Callees:
 *     MiEnumerateSlabAllocatorsEx @ 0x14046BBB4 (MiEnumerateSlabAllocatorsEx.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiLockUnlockSlabContextsForDefrag(__int64 a1, unsigned int a2, int a3)
{
  __int64 v3; // rbp
  unsigned __int8 CurrentIrql; // si
  __int64 result; // rax
  unsigned __int64 v8; // rdi

  v3 = a2;
  if ( a2 && !a3 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
    *(_BYTE *)(a1 + 80) = CurrentIrql;
  }
  result = MiEnumerateSlabAllocatorsEx(
             *(_QWORD *)a1,
             (__int64)MiLockSlabAllocator,
             v3,
             *(_DWORD *)(a1 + 68),
             *(_DWORD *)(a1 + 72));
  if ( !(_DWORD)v3 && !a3 )
  {
    v8 = *(unsigned __int8 *)(a1 + 80);
    if ( KiIrqlFlags )
      result = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), *(_BYTE *)(a1 + 80));
    __writecr8(v8);
    *(_BYTE *)(a1 + 80) = 17;
  }
  return result;
}
