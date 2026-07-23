/*
 * XREFs of DifpLwSPProcessPostPoolAlloc @ 0x140BA623C
 * Callers:
 *     DifpExAllocatePoolWithQuota_LwSP_Exit @ 0x140BA61E0 (DifpExAllocatePoolWithQuota_LwSP_Exit.c)
 *     DifpExFreePoolWithTag_LwSP_Enter @ 0x140BA6200 (DifpExFreePoolWithTag_LwSP_Enter.c)
 *     DifpExFreePool_LwSP_Enter @ 0x140BA6220 (DifpExFreePool_LwSP_Enter.c)
 * Callees:
 *     ExIsSpecialPoolAddress @ 0x14048BD64 (ExIsSpecialPoolAddress.c)
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
