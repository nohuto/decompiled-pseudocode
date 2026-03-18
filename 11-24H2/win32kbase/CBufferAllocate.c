/*
 * XREFs of CBufferAllocate @ 0x14012B6A0
 * Callers:
 *     CreateNewEventEntry @ 0x14012B438 (CreateNewEventEntry.c)
 * Callees:
 *     memset @ 0x14023F500 (memset.c)
 */

__int64 __fastcall CBufferAllocate(char a1, _QWORD *a2, SIZE_T a3)
{
  PVOID PoolWithTag; // rax
  PVOID v6; // rbx
  __int64 result; // rax

  if ( !a3 )
    return 0LL;
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)(a1 != 0 ? PagedPool : 512), a3, 0x47417254u);
  v6 = PoolWithTag;
  if ( !PoolWithTag )
  {
    *a2 = 0LL;
    return 0LL;
  }
  memset(PoolWithTag, 0, a3);
  result = 1LL;
  *a2 = v6;
  a2[1] = a3;
  return result;
}
