/*
 * XREFs of SmmGetOrderBlockSizeInBytes @ 0x14009561C
 * Callers:
 *     ?SmmAllocateLogicalAddressAt@@YAJPEAUSYSMM_LOGICAL_ALLOCATOR@@_K1PEBXPEAPEAUSYSMM_LOGICAL_BLOCK@@@Z @ 0x140286BC0 (-SmmAllocateLogicalAddressAt@@YAJPEAUSYSMM_LOGICAL_ALLOCATOR@@_K1PEBXPEAPEAUSYSMM_LOGICAL_BLOCK@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmmGetOrderBlockSizeInBytes(char a1)
{
  return 4096LL << a1;
}
