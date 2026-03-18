/*
 * XREFs of HalFreeAdapterObject @ 0x140392B80
 * Callers:
 *     HalpAllocateDmaResourcesInternal @ 0x140392950 (HalpAllocateDmaResourcesInternal.c)
 * Callees:
 *     IoFreeAdapterChannelV3 @ 0x140392BB0 (IoFreeAdapterChannelV3.c)
 */

__int64 __fastcall HalFreeAdapterObject(__int64 a1, int a2)
{
  __int64 result; // rax

  if ( a2 != 2 )
  {
    if ( a2 != 3 )
      return result;
    *(_DWORD *)(a1 + 248) = 0;
  }
  return IoFreeAdapterChannelV3(a1);
}
