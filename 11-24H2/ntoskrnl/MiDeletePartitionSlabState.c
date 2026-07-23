/*
 * XREFs of MiDeletePartitionSlabState @ 0x1407FBCD0
 * Callers:
 *     MiDeletePartitionResources @ 0x1407FC4B4 (MiDeletePartitionResources.c)
 * Callees:
 *     MiEnumerateSlabAllocatorsEx @ 0x14046321C (MiEnumerateSlabAllocatorsEx.c)
 *     MiDeletePendingSlabIdentities @ 0x14068829C (MiDeletePendingSlabIdentities.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiDeletePartitionSlabState(__int64 a1)
{
  __int64 result; // rax
  unsigned int v3; // ebx
  __int64 v4; // rdi
  PVOID *v5; // rdi

  MiDeletePendingSlabIdentities(a1, 1);
  MiEnumerateSlabAllocatorsEx(a1, (__int64)MiDeleteSlabAllocator, 0LL, 0xFFFFFFFF, 9u);
  result = *(unsigned int *)(a1 + 18288);
  v3 = 0;
  if ( (_DWORD)result )
  {
    v4 = *(_QWORD *)(a1 + 16);
    if ( KeNumberNodes )
    {
      v5 = (PVOID *)(v4 + 57008);
      do
      {
        ExFreePoolWithTag(*v5, 0);
        result = (unsigned __int16)KeNumberNodes;
        v5 += 7152;
        ++v3;
      }
      while ( v3 < (unsigned __int16)KeNumberNodes );
    }
  }
  return result;
}
