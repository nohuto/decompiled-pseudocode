/*
 * XREFs of MiGetProcessHotPatchContext @ 0x1407F2AD8
 * Callers:
 *     MiApplyImageHotPatchRequest @ 0x1407F191C (MiApplyImageHotPatchRequest.c)
 *     MiDeleteHotPatchEntry @ 0x1407F2550 (MiDeleteHotPatchEntry.c)
 *     MiLogHotPatchRundown @ 0x1407F44C4 (MiLogHotPatchRundown.c)
 *     MiQueryProcessActivePatches @ 0x140AAE3A8 (MiQueryProcessActivePatches.c)
 * Callees:
 *     MiAllocatePool @ 0x1402ACA70 (MiAllocatePool.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

_QWORD *__fastcall MiGetProcessHotPatchContext(__int64 a1, int a2)
{
  _QWORD *result; // rax
  _QWORD *Pool; // rax
  signed __int64 v5; // rbx

  result = *(_QWORD **)(a1 + 1912);
  if ( !result )
  {
    if ( a2 && (Pool = (_QWORD *)MiAllocatePool(0x40uLL, 0x28uLL, 1129336904)) != 0LL )
    {
      Pool[1] = Pool;
      *Pool = Pool;
      Pool[4] = Pool + 3;
      Pool[3] = Pool + 3;
      Pool[2] = 0LL;
      v5 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1912), (signed __int64)Pool, 0LL);
      if ( !v5 )
        return Pool;
      ExFreePoolWithTag(Pool, 0);
      return (_QWORD *)v5;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}
