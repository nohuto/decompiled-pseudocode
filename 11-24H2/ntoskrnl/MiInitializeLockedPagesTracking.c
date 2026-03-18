/*
 * XREFs of MiInitializeLockedPagesTracking @ 0x1407E79B0
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x1408F8590 (MmInitializeProcessAddressSpace.c)
 *     MmInitializeHandBuiltProcess2 @ 0x140AA8538 (MmInitializeHandBuiltProcess2.c)
 * Callees:
 *     MiAllocatePool @ 0x1402ACA70 (MiAllocatePool.c)
 */

__int64 __fastcall MiInitializeLockedPagesTracking(__int64 a1)
{
  __int64 result; // rax

  result = MiAllocatePool(0x40uLL, 0x20uLL, 2018798925);
  if ( result )
  {
    *(_QWORD *)result = 0LL;
    *(_QWORD *)(result + 8) = 0LL;
    *(_DWORD *)(result + 28) = 1;
    *(_QWORD *)(a1 + 920) = result;
  }
  return result;
}
