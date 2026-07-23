/*
 * XREFs of HalAllocateCommonBufferWithBounds @ 0x14054C2B0
 * Callers:
 *     <none>
 * Callees:
 *     HalpAllocateDomainCommonBufferInternal @ 0x14054DC80 (HalpAllocateDomainCommonBufferInternal.c)
 */

__int64 __fastcall HalAllocateCommonBufferWithBounds(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        char a5,
        __int64 a6,
        int a7,
        __int64 a8)
{
  __int64 v9; // [rsp+60h] [rbp+8h] BYREF

  v9 = 0LL;
  HalpAllocateDomainCommonBufferInternal(*(_QWORD *)(a1 + 512), a2, a3, a4, a5, a6, a7, a8, (__int64)&v9);
  return v9;
}
