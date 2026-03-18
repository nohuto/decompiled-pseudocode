/*
 * XREFs of CBufferAllocate @ 0x14003CCE4
 * Callers:
 *     CreateNewEventEntry @ 0x14003CA7C (CreateNewEventEntry.c)
 * Callees:
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall CBufferAllocate(char a1, _QWORD *a2, SIZE_T a3)
{
  PVOID PoolWithTag; // rax
  PVOID v6; // rbx
  __int64 result; // rax

  if ( a3 )
  {
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)(a1 != 0 ? PagedPool : 512), a3, 0x47417254u);
    v6 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset_0(PoolWithTag, 0, a3);
      result = 1LL;
      *a2 = v6;
      a2[1] = a3;
      return result;
    }
    *a2 = 0LL;
  }
  return 0LL;
}
