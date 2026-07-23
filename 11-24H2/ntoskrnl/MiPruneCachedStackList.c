/*
 * XREFs of MiPruneCachedStackList @ 0x1404878E8
 * Callers:
 *     MiAdjustCachedStackList @ 0x1402AF530 (MiAdjustCachedStackList.c)
 *     MiAdjustCachedStacks @ 0x1402AF604 (MiAdjustCachedStacks.c)
 * Callees:
 *     MiDeleteCachedKernelShadowStack @ 0x14021E9E8 (MiDeleteCachedKernelShadowStack.c)
 *     MiDeleteCachedKernelStack @ 0x14021F06C (MiDeleteCachedKernelStack.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406B4830 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B4870 (RtlpInterlockedPushEntrySList.c)
 */

__int64 __fastcall MiPruneCachedStackList(_SLIST_HEADER *a1, _SLIST_HEADER *a2, unsigned int a3, int a4)
{
  __int64 result; // rax
  PSLIST_ENTRY v9; // rax
  _SLIST_ENTRY *v10; // rbx

  for ( result = LOWORD(a2->Alignment); (unsigned int)result > a3; result = LOWORD(a2->Alignment) )
  {
    v9 = RtlpInterlockedPopEntrySList(a2);
    v10 = v9;
    if ( v9 )
    {
      if ( a4 )
      {
        MiDeleteCachedKernelShadowStack((int)a1, (unsigned __int64)v9[1].Next);
        RtlpInterlockedPushEntrySList(a1 + 28, v10);
      }
      else
      {
        MiDeleteCachedKernelStack((int)a1, (__int64)v9);
      }
    }
  }
  return result;
}
