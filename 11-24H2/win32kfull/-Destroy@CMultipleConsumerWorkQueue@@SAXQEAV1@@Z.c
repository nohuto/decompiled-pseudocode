/*
 * XREFs of ?Destroy@CMultipleConsumerWorkQueue@@SAXQEAV1@@Z @ 0x140101FD0
 * Callers:
 *     ?UmfdCallSessionInitialize@@YAJXZ @ 0x140101D34 (-UmfdCallSessionInitialize@@YAJXZ.c)
 *     ?UmfdCallSessionUninitialize@@YAXXZ @ 0x1401021B0 (-UmfdCallSessionUninitialize@@YAXXZ.c)
 * Callees:
 *     ?Destroy@CWorkItemQueue@@SAXQEAV1@@Z @ 0x140101F60 (-Destroy@CWorkItemQueue@@SAXQEAV1@@Z.c)
 *     ?Destroy@CEventPool@@SAXQEAV1@@Z @ 0x1402191AC (-Destroy@CEventPool@@SAXQEAV1@@Z.c)
 */

void __fastcall CMultipleConsumerWorkQueue::Destroy(union _SLIST_HEADER **pv)
{
  union _SLIST_HEADER *v2; // rcx
  union _SLIST_HEADER *v3; // rcx

  v2 = *pv;
  if ( v2 )
    CWorkItemQueue::Destroy(v2);
  v3 = pv[1];
  if ( v3 )
    CEventPool::Destroy(v3);
  EngFreeMem(pv);
}
