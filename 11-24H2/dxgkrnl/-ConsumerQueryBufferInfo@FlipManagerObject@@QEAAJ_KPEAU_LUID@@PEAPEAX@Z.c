/*
 * XREFs of ?ConsumerQueryBufferInfo@FlipManagerObject@@QEAAJ_KPEAU_LUID@@PEAPEAX@Z @ 0x14005BCB0
 * Callers:
 *     NtFlipObjectConsumerQueryBufferInfo @ 0x14005C260 (NtFlipObjectConsumerQueryBufferInfo.c)
 * Callees:
 *     ?FindResourceState@CEndpointResourceStateManager@@AEAAPEAVCFlipResourceState@@_KPEAU_LIST_ENTRY@@@Z @ 0x140019094 (-FindResourceState@CEndpointResourceStateManager@@AEAAPEAVCFlipResourceState@@_KPEAU_LIST_ENTRY@.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x14001A9A4 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x14001BAF0 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     DxgkGetSharedAllocationObjectType @ 0x1403C4A70 (DxgkGetSharedAllocationObjectType.c)
 */

__int64 __fastcall FlipManagerObject::ConsumerQueryBufferInfo(
        FlipManagerObject *this,
        __int64 a2,
        struct _LUID *a3,
        void **a4)
{
  CPushLock *v4; // rsi
  CEndpointResourceStateManager *v9; // rcx
  NTSTATUS v10; // ebx
  struct CFlipResourceState *ResourceState; // rdi
  struct _OBJECT_TYPE *ObjectType; // rax

  v4 = (FlipManagerObject *)((char *)this + 40);
  v10 = CPushLock::AcquireLockExclusive((FlipManagerObject *)((char *)this + 40));
  if ( v10 >= 0 )
  {
    ResourceState = CEndpointResourceStateManager::FindResourceState(v9, a2, (struct _LIST_ENTRY *)((char *)this + 136));
    if ( ResourceState )
    {
      ObjectType = (struct _OBJECT_TYPE *)DxgkGetSharedAllocationObjectType();
      v10 = ObOpenObjectByPointer(
              *(PVOID *)(*((_QWORD *)ResourceState + 3) + 56LL),
              0,
              0LL,
              0xF0000u,
              ObjectType,
              0,
              a4);
      if ( v10 >= 0 )
        *a3 = *(struct _LUID *)(*((_QWORD *)ResourceState + 3) + 72LL);
    }
    else
    {
      v10 = -1073741811;
    }
    CPushLock::ReleaseLock(v4);
  }
  return (unsigned int)v10;
}
