/*
 * XREFs of MiPruneCachedStackList @ 0x14048AF30
 * Callers:
 *     MiAdjustCachedStacks @ 0x1403B1C48 (MiAdjustCachedStacks.c)
 *     MiAdjustCachedStackList @ 0x1403B1E10 (MiAdjustCachedStackList.c)
 * Callees:
 *     MiDeleteCachedKernelStack @ 0x1403B318C (MiDeleteCachedKernelStack.c)
 *     MiDeleteCachedKernelShadowStack @ 0x14048AFC4 (MiDeleteCachedKernelShadowStack.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406A85C0 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406A8600 (RtlpInterlockedPushEntrySList.c)
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
        MiDeleteCachedKernelShadowStack(a1);
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
