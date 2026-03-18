/*
 * XREFs of MiInitializeLockedPagesTracking @ 0x1407D7AF8
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x140904AC8 (MmInitializeProcessAddressSpace.c)
 *     MmInitializeHandBuiltProcess2 @ 0x140AA4AB4 (MmInitializeHandBuiltProcess2.c)
 * Callees:
 *     MiAllocatePool @ 0x1402DA740 (MiAllocatePool.c)
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
