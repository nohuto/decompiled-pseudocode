/*
 * XREFs of SmmRemoveBlockFromPool @ 0x1400957C0
 * Callers:
 *     SmmCoalesceBlocks @ 0x1400952CC (SmmCoalesceBlocks.c)
 *     SmmGetAnyFreeBlockFromPool @ 0x140095524 (SmmGetAnyFreeBlockFromPool.c)
 *     SmmGetFreeBlockFromPool @ 0x1400955AC (SmmGetFreeBlockFromPool.c)
 *     ?SmmDestroyLogicalAllocator@@YAXPEAUSYSMM_LOGICAL_ALLOCATOR@@@Z @ 0x140287060 (-SmmDestroyLogicalAllocator@@YAXPEAUSYSMM_LOGICAL_ALLOCATOR@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 */

_QWORD *__fastcall SmmRemoveBlockFromPool(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  _QWORD *result; // rax

  if ( !*(_DWORD *)(a1 + 16) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 676;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"pPool->NumFreeBlocks > 0", 676LL, 0LL, 0LL, 0LL, 0LL);
  }
  --*(_DWORD *)(a1 + 16);
  v4 = *(_QWORD *)(a2 + 16);
  if ( *(_QWORD *)(v4 + 8) != a2 + 16 || (result = *(_QWORD **)(a2 + 24), *result != a2 + 16) )
    __fastfail(3u);
  *result = v4;
  *(_QWORD *)(v4 + 8) = result;
  return result;
}
