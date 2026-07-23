/*
 * XREFs of HalpReadWriteWheaPhysicalMemory @ 0x140560EB0
 * Callers:
 *     HalpReadWheaPhysicalMemory @ 0x140560E90 (HalpReadWheaPhysicalMemory.c)
 *     HalpWriteWheaPhysicalMemory @ 0x140561040 (HalpWriteWheaPhysicalMemory.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1402850F0 (KxAcquireSpinLock.c)
 *     HalpRemapVirtualAddress64 @ 0x14047C7B8 (HalpRemapVirtualAddress64.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

__int64 __fastcall HalpReadWriteWheaPhysicalMemory(char a1, __int64 a2, unsigned int a3, char *a4)
{
  char *v4; // r14
  unsigned int v5; // edi
  __int64 v6; // rbx
  int v7; // eax
  unsigned int Number; // ecx
  unsigned __int64 v9; // r12
  KSPIN_LOCK *v10; // rbp
  char v11; // r13
  unsigned __int8 CurrentIrql; // si
  __int64 v13; // r15
  unsigned int v14; // ecx
  const void *v15; // rdx
  void *v16; // rcx
  unsigned __int8 v19; // [rsp+68h] [rbp+10h]

  v4 = a4;
  v5 = a3;
  v6 = a2;
  if ( !a2 )
    return 3221225485LL;
  if ( a3 > 8 )
    return 3221225485LL;
  v7 = 278;
  if ( !_bittest(&v7, a3) || !a4 )
    return 3221225485LL;
  Number = KeGetPcr()->Prcb.Number;
  if ( HalpProcessorInMceHandler == Number )
  {
    v9 = HalpWheaMappingMceReservation;
    v10 = &HalpWheaMappingMceLock;
  }
  else if ( HalpProcessorInNmiHandler == Number )
  {
    v9 = HalpWheaMappingNmiReservation;
    v10 = (KSPIN_LOCK *)&HalpWheaMappingNmiLock;
  }
  else
  {
    v9 = HalpWheaMappingReservation;
    v10 = (KSPIN_LOCK *)&HalpWheaMappingLock;
  }
  v11 = 0;
  CurrentIrql = KeGetCurrentIrql();
  v19 = CurrentIrql;
  if ( CurrentIrql < 0xFu )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
    v19 = CurrentIrql;
    v11 = 1;
  }
  KxAcquireSpinLock(v10);
  if ( v5 )
  {
    do
    {
      HalpRemapVirtualAddress64(v9, v6, 1);
      v13 = v5;
      v14 = 4096 - (v6 & 0xFFF);
      if ( v5 >= v14 )
        v13 = v14;
      if ( a1 )
      {
        v15 = (const void *)(v9 + (v6 & 0xFFF));
        v16 = v4;
      }
      else
      {
        v15 = v4;
        v16 = (void *)(v9 + (v6 & 0xFFF));
      }
      memmove(v16, v15, (unsigned int)v13);
      v6 += v13;
      v4 += v13;
      v5 -= v13;
    }
    while ( v5 );
    CurrentIrql = v19;
  }
  KxReleaseSpinLock((volatile signed __int64 *)v10);
  if ( v11 )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  return 0LL;
}
