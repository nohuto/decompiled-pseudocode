/*
 * XREFs of HalAllocateCommonBufferDmaThinEx @ 0x140396820
 * Callers:
 *     HalAllocateCommonBufferDmaThin @ 0x140396AD0 (HalAllocateCommonBufferDmaThin.c)
 * Callees:
 *     HalpAllocateCommonBufferDmaThin @ 0x1403962A4 (HalpAllocateCommonBufferDmaThin.c)
 */

__int64 __fastcall HalAllocateCommonBufferDmaThinEx(
        __int64 a1,
        PHYSICAL_ADDRESS *a2,
        int a3,
        PHYSICAL_ADDRESS *a4,
        char a5,
        int a6)
{
  __int64 v6; // rbx
  MEMORY_CACHING_TYPE *v8; // r9
  _QWORD v10[3]; // [rsp+50h] [rbp-18h] BYREF
  int v11; // [rsp+70h] [rbp+8h] BYREF

  v6 = 0LL;
  v11 = 0;
  v10[0] = 0LL;
  if ( a5 && *(_BYTE *)(a1 + 445) )
  {
    v11 = 1;
    v8 = (MEMORY_CACHING_TYPE *)&v11;
  }
  else
  {
    v8 = 0LL;
  }
  if ( (int)HalpAllocateCommonBufferDmaThin(*(_QWORD *)(a1 + 512), 0LL, a2, a3, 0, v8, a6, a4, v10) >= 0 )
    return v10[0];
  a4->QuadPart = 0LL;
  return v6;
}
