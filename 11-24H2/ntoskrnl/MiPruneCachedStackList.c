/*
 * XREFs of MiPruneCachedStackList @ 0x14048CBC8
 * Callers:
 *     MiAdjustCachedStacks @ 0x140269740 (MiAdjustCachedStacks.c)
 *     MiAdjustCachedStackList @ 0x1402698A4 (MiAdjustCachedStackList.c)
 * Callees:
 *     MiDeleteCachedKernelShadowStack @ 0x140269224 (MiDeleteCachedKernelShadowStack.c)
 *     MiDeleteCachedKernelStack @ 0x140269ADC (MiDeleteCachedKernelStack.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406B3890 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B38D0 (RtlpInterlockedPushEntrySList.c)
 */

__int64 __fastcall MiPruneCachedStackList(union _SLIST_HEADER *a1, union _SLIST_HEADER *a2, unsigned int a3, int a4)
{
  __int64 result; // rax
  PSLIST_ENTRY v9; // rax
  struct _SLIST_ENTRY *v10; // rbx

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
