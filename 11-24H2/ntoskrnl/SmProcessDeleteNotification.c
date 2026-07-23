/*
 * XREFs of SmProcessDeleteNotification @ 0x140A4863C
 * Callers:
 *     PspProcessDelete @ 0x1408FFC10 (PspProcessDelete.c)
 * Callees:
 *     SmKmStoreGet @ 0x14020DEF4 (SmKmStoreGet.c)
 *     SmpKeyedStoreEntryGet @ 0x14020DF80 (SmpKeyedStoreEntryGet.c)
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     SmKmStoreDereference @ 0x14022FA28 (SmKmStoreDereference.c)
 *     SmKmStoreDeleteWhenEmpty @ 0x140441A20 (SmKmStoreDeleteWhenEmpty.c)
 *     CmSiFreeMemory @ 0x140464550 (CmSiFreeMemory.c)
 *     SmpGetProcessPartition @ 0x1404933CC (SmpGetProcessPartition.c)
 *     SmCompressionProcessHoldsPartitionReference @ 0x1404F4610 (SmCompressionProcessHoldsPartitionReference.c)
 */

void __fastcall SmProcessDeleteNotification(__int64 a1)
{
  __int64 ProcessPartition; // rax
  __int64 v2; // rcx
  __int64 v3; // rdi
  __int64 v4; // rax
  __int16 v5; // bx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  ProcessPartition = SmpGetProcessPartition(a1);
  v3 = ProcessPartition;
  if ( (*(_DWORD *)(v2 + 1532) & 0x40000000) != 0 )
  {
    if ( !SmCompressionProcessHoldsPartitionReference(v2) )
      KeSetEvent((PRKEVENT)(v3 + 2176), 0, 0);
  }
  else
  {
    v8 = v2;
    v4 = SmpKeyedStoreEntryGet(ProcessPartition + 2232, &v8, 2, 0);
    if ( v4 )
    {
      v5 = *(_WORD *)(v4 + 16);
      CmSiFreeMemory((PPRIVILEGE_SET)v4);
      v6 = SmKmStoreGet(v3, v5);
      SmKmStoreDeleteWhenEmpty(v7, v6, 1);
      SmKmStoreDereference(v3, v5);
    }
  }
}
