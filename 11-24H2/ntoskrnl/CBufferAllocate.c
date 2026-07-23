/*
 * XREFs of CBufferAllocate @ 0x1404626A4
 * Callers:
 *     CreateNewEventEntry @ 0x140462434 (CreateNewEventEntry.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExAllocatePoolWithTag @ 0x140B74010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CBufferAllocate(char a1, _QWORD *a2, SIZE_T a3)
{
  PVOID PoolWithTag; // rax
  PVOID v6; // rbx
  __int64 result; // rax

  if ( a3 )
  {
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)(a1 != 0 ? PagedPool : NonPagedPoolNx), a3, 0x47417254u);
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
