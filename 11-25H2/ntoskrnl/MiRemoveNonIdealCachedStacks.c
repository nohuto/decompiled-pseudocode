/*
 * XREFs of MiRemoveNonIdealCachedStacks @ 0x140674890
 * Callers:
 *     MiAdjustCachedStackList @ 0x1403B1E10 (MiAdjustCachedStackList.c)
 * Callees:
 *     MiKernelShadowStackIdealForCaching @ 0x14048AE28 (MiKernelShadowStackIdealForCaching.c)
 *     MiDeleteCachedKernelShadowStack @ 0x14048AFC4 (MiDeleteCachedKernelShadowStack.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406A8600 (RtlpInterlockedPushEntrySList.c)
 *     RtlpInterlockedFlushSList @ 0x1406A8640 (RtlpInterlockedFlushSList.c)
 */

PSLIST_ENTRY __fastcall MiRemoveNonIdealCachedStacks(_SLIST_HEADER *a1)
{
  PSLIST_ENTRY result; // rax
  _SLIST_ENTRY *i; // rdi
  _SLIST_ENTRY *v4; // rbx
  _SLIST_ENTRY *v5; // rbp
  _SLIST_HEADER *v6; // rcx
  unsigned __int64 Next; // rdx
  ULONG *v8; // rbx
  int v9; // [rsp+40h] [rbp+8h] BYREF
  ULONG *v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = 0LL;
  v9 = 0;
  result = RtlpInterlockedFlushSList(a1);
  for ( i = result; i; result = RtlpInterlockedPushEntrySList(v6, v5) )
  {
    v4 = i;
    v5 = i;
    i = i->Next;
    if ( (unsigned int)MiKernelShadowStackIdealForCaching(
                         (_QWORD *)((((unsigned __int64)v4[1].Next >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL),
                         (((unsigned __int64)v4[1].Next >> 9) & 0x7FFFFFFFF8LL) - 0x97FFFFFFFF8LL,
                         (__int64 *)&v10,
                         &v9) )
    {
      Next = (unsigned __int64)v4[1].Next;
      v8 = v10;
      MiDeleteCachedKernelShadowStack(v10, Next);
      v6 = (_SLIST_HEADER *)(v8 + 112);
    }
    else
    {
      v6 = a1;
    }
  }
  return result;
}
