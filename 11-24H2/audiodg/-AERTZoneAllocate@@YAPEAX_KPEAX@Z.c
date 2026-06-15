/*
 * XREFs of ?AERTZoneAllocate@@YAPEAX_KPEAX@Z @ 0x140042440
 * Callers:
 *     ?SetMapSize@CSparseIndexMapRT@@QEAAJI@Z @ 0x14008F974 (-SetMapSize@CSparseIndexMapRT@@QEAAJI@Z.c)
 * Callees:
 *     McTemplateU0pqpqqqqqq_EventWriteTransfer @ 0x14000EDDC (McTemplateU0pqpqqqqqq_EventWriteTransfer.c)
 *     ?AERTAddMemoryToHeap@@YAXPEAX_K@Z @ 0x140074588 (-AERTAddMemoryToHeap@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall AERTZoneAllocate(unsigned __int64 a1, void *a2)
{
  char v4; // al
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  unsigned __int64 v9; // rdx
  __int64 v10; // [rsp+40h] [rbp-28h]
  __int64 v11; // [rsp+80h] [rbp+18h] BYREF

  v11 = 0LL;
  v4 = RtlAllocateMemoryZone(a2, a1, &v11);
  if ( !v11 )
  {
    v9 = 0x100000LL;
    if ( a1 > 0x100000 )
      v9 = (a1 + 0x2000) & 0xFFFFFFFFFFFFE000uLL;
    AERTAddMemoryToHeap(a2, v9);
    v4 = RtlAllocateMemoryZone(a2, a1, &v11);
  }
  if ( (byte_1400C4541 & 4) != 0 )
    McTemplateU0pqpqqqqqq_EventWriteTransfer(v6, v5, v7, 6, (char)a2, a1, 0, 0, v10, 0, v4);
  return v11;
}
