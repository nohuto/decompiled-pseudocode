/*
 * XREFs of HalAllocateCommonBufferWithBoundsDmarThin @ 0x14054F0F0
 * Callers:
 *     <none>
 * Callees:
 *     HalpAllocateCommonBufferDmarThin @ 0x140397478 (HalpAllocateCommonBufferDmarThin.c)
 */

_RTL_BALANCED_NODE *__fastcall HalAllocateCommonBufferWithBoundsDmarThin(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        MEMORY_CACHING_TYPE *a6,
        unsigned int a7,
        _QWORD *a8)
{
  _QWORD *v8; // rdi
  _QWORD *v9; // rcx
  __int64 v10; // rbx
  _RTL_BALANCED_NODE *v12; // [rsp+60h] [rbp+8h] BYREF

  v8 = a8;
  v9 = *(_QWORD **)(a1 + 512);
  v10 = 0LL;
  v12 = 0LL;
  if ( (int)HalpAllocateCommonBufferDmarThin(v9, a2, a3, a4, a5, a6, a7, a8, &v12) >= 0 )
    return v12;
  *v8 = 0LL;
  return (_RTL_BALANCED_NODE *)v10;
}
