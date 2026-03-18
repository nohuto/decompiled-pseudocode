/*
 * XREFs of DifpLwSPProcessPostPoolAlloc @ 0x140B9425C
 * Callers:
 *     DifpExAllocatePoolWithQuota_LwSP_Exit @ 0x140B94200 (DifpExAllocatePoolWithQuota_LwSP_Exit.c)
 *     DifpExFreePoolWithTag_LwSP_Enter @ 0x140B94220 (DifpExFreePoolWithTag_LwSP_Enter.c)
 *     DifpExFreePool_LwSP_Enter @ 0x140B94240 (DifpExFreePool_LwSP_Enter.c)
 * Callees:
 *     ExIsSpecialPoolAddress @ 0x1403C6C50 (ExIsSpecialPoolAddress.c)
 */

__int64 __fastcall DifpLwSPProcessPostPoolAlloc(ULONG_PTR a1)
{
  __int64 result; // rax

  result = ExIsSpecialPoolAddress(a1);
  if ( (_DWORD)result )
    _InterlockedIncrement64(&LwSPAllocatedSpecialPools);
  DifpSpecialPoolEnabled = 0;
  return result;
}
