/*
 * XREFs of MiInitializeLockedPagesTracking @ 0x1407E7F80
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x14091A9E8 (MmInitializeProcessAddressSpace.c)
 *     MmInitializeHandBuiltProcess2 @ 0x140AA3638 (MmInitializeHandBuiltProcess2.c)
 * Callees:
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
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
