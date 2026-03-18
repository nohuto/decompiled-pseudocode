/*
 * XREFs of SmProcessDeleteNotification @ 0x140A4DE0C
 * Callers:
 *     PspProcessDelete @ 0x1408E1310 (PspProcessDelete.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     SmKmStoreGet @ 0x140324324 (SmKmStoreGet.c)
 *     SmpKeyedStoreEntryGet @ 0x1403243B0 (SmpKeyedStoreEntryGet.c)
 *     SmKmStoreDereference @ 0x14034AECC (SmKmStoreDereference.c)
 *     SmKmStoreDeleteWhenEmpty @ 0x14044B4F0 (SmKmStoreDeleteWhenEmpty.c)
 *     CmSiFreeMemory @ 0x14046F140 (CmSiFreeMemory.c)
 *     SmpGetProcessPartition @ 0x140498E1C (SmpGetProcessPartition.c)
 *     SmCompressionProcessHoldsPartitionReference @ 0x1404F4434 (SmCompressionProcessHoldsPartitionReference.c)
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
