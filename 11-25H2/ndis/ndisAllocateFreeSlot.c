/*
 * XREFs of ndisAllocateFreeSlot @ 0x14006E570
 * Callers:
 *     ?ndisAllocatePerProcessorSlot@@YAPEAUPNDIS_PER_PROCESSOR_SLOT__@@K@Z @ 0x14006E4B0 (-ndisAllocatePerProcessorSlot@@YAPEAUPNDIS_PER_PROCESSOR_SLOT__@@K@Z.c)
 * Callees:
 *     <none>
 */

char *__fastcall ndisAllocateFreeSlot(int a1)
{
  _LIST_ENTRY *i; // rax
  int Flink; // edx
  __int64 v3; // rdx

  for ( i = ndisPerProcessorDescriptorList.Flink; i != &ndisPerProcessorDescriptorList; i = i->Flink )
  {
    Flink = (int)i[1].Flink;
    if ( Flink != -16777217 )
    {
      v3 = Flink & 0x1FFFFFF;
      LODWORD(i[1].Flink) = *((_DWORD *)&i[1].Flink + v3 + 1);
      *((_DWORD *)&i[1].Flink + v3 + 1) = a1;
      if ( (_LIST_ENTRY *)((char *)&i[256] + 8 * v3) )
        return (char *)&i[256] + 8 * v3;
    }
  }
  return 0LL;
}
