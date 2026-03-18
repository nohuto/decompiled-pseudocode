/*
 * XREFs of HalAllocateCommonBufferWithBoundsDmarThin @ 0x14054EEB0
 * Callers:
 *     <none>
 * Callees:
 *     HalpAllocateCommonBufferDmarThin @ 0x140412D64 (HalpAllocateCommonBufferDmarThin.c)
 */

__int64 __fastcall HalAllocateCommonBufferWithBoundsDmarThin(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        MEMORY_CACHING_TYPE *a6,
        int a7,
        _QWORD *a8)
{
  _QWORD *v8; // rdi
  __int64 *v9; // rcx
  __int64 v10; // rbx
  __int64 v12; // [rsp+60h] [rbp+8h] BYREF

  v8 = a8;
  v9 = *(__int64 **)(a1 + 512);
  v10 = 0LL;
  v12 = 0LL;
  if ( (int)HalpAllocateCommonBufferDmarThin(v9, a2, a3, a4, a5, a6, a7, a8, &v12) >= 0 )
    return v12;
  *v8 = 0LL;
  return v10;
}
