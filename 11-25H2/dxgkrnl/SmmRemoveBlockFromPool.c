/*
 * XREFs of SmmRemoveBlockFromPool @ 0x1400932BC
 * Callers:
 *     SmmCoalesceBlocks @ 0x140092DC8 (SmmCoalesceBlocks.c)
 *     SmmGetAnyFreeBlockFromPool @ 0x140093020 (SmmGetAnyFreeBlockFromPool.c)
 *     SmmGetFreeBlockFromPool @ 0x1400930A8 (SmmGetFreeBlockFromPool.c)
 *     ?SmmDestroyLogicalAllocator@@YAXPEAUSYSMM_LOGICAL_ALLOCATOR@@@Z @ 0x14027FBE0 (-SmmDestroyLogicalAllocator@@YAXPEAUSYSMM_LOGICAL_ALLOCATOR@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 */

_QWORD *__fastcall SmmRemoveBlockFromPool(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  _QWORD *result; // rax

  if ( !*(_DWORD *)(a1 + 16) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 671;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"pPool->NumFreeBlocks > 0", 671LL, 0LL, 0LL, 0LL, 0LL);
  }
  --*(_DWORD *)(a1 + 16);
  v4 = *(_QWORD *)(a2 + 16);
  if ( *(_QWORD *)(v4 + 8) != a2 + 16 || (result = *(_QWORD **)(a2 + 24), *result != a2 + 16) )
    __fastfail(3u);
  *result = v4;
  *(_QWORD *)(v4 + 8) = result;
  return result;
}
