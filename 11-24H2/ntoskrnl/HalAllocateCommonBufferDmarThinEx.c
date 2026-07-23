/*
 * XREFs of HalAllocateCommonBufferDmarThinEx @ 0x140397AC0
 * Callers:
 *     HalAllocateCommonBufferDmarThin @ 0x140397A90 (HalAllocateCommonBufferDmarThin.c)
 * Callees:
 *     HalpAllocateCommonBufferDmarThin @ 0x140397478 (HalpAllocateCommonBufferDmarThin.c)
 */

_RTL_BALANCED_NODE *__fastcall HalAllocateCommonBufferDmarThinEx(
        __int64 a1,
        __int64 a2,
        int a3,
        _QWORD *a4,
        char a5,
        unsigned int a6)
{
  __int64 v6; // rbx
  MEMORY_CACHING_TYPE *v8; // r9
  _RTL_BALANCED_NODE *v10; // [rsp+50h] [rbp-18h] BYREF
  int v11; // [rsp+70h] [rbp+8h] BYREF

  v6 = 0LL;
  v11 = 0;
  v10 = 0LL;
  if ( a5 && *(_BYTE *)(a1 + 445) )
  {
    v11 = 1;
    v8 = (MEMORY_CACHING_TYPE *)&v11;
  }
  else
  {
    v8 = 0LL;
  }
  if ( (int)HalpAllocateCommonBufferDmarThin(*(_QWORD **)(a1 + 512), 0LL, a2, a3, 0, v8, a6, a4, &v10) >= 0 )
    return v10;
  *a4 = 0LL;
  return (_RTL_BALANCED_NODE *)v6;
}
