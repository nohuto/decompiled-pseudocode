/*
 * XREFs of ?ConsumerAdjustUsageReference@FlipManagerObject@@QEAAJ_K_N@Z @ 0x140007D1C
 * Callers:
 *     ?Complete@CFlipWaitedConsumerReturn@@UEAAXXZ @ 0x140007CE0 (-Complete@CFlipWaitedConsumerReturn@@UEAAXXZ.c)
 *     NtFlipObjectConsumerAdjustUsageReference @ 0x14009BAD0 (NtFlipObjectConsumerAdjustUsageReference.c)
 * Callees:
 *     ?FindResourceState@CEndpointResourceStateManager@@AEAAPEAVCFlipResourceState@@_KPEAU_LIST_ENTRY@@@Z @ 0x140009B60 (-FindResourceState@CEndpointResourceStateManager@@AEAAPEAVCFlipResourceState@@_KPEAU_LIST_ENTRY@.c)
 *     ?AddUsageReference@CPoolBufferResource@@QEAAXXZ @ 0x14000A014 (-AddUsageReference@CPoolBufferResource@@QEAAXXZ.c)
 *     ?RemoveUsageReference@CPoolBufferResource@@QEAAXXZ @ 0x14000A074 (-RemoveUsageReference@CPoolBufferResource@@QEAAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x14000B474 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x14000C610 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 */

__int64 __fastcall FlipManagerObject::ConsumerAdjustUsageReference(
        FlipManagerObject *this,
        unsigned __int64 a2,
        char a3)
{
  CEndpointResourceStateManager *v6; // rcx
  int v7; // ebx
  struct CFlipResourceState *ResourceState; // rax
  CPoolBufferResource *v9; // rcx

  v7 = CPushLock::AcquireLockExclusive((FlipManagerObject *)((char *)this + 40));
  if ( v7 >= 0 )
  {
    v7 = 0;
    ResourceState = CEndpointResourceStateManager::FindResourceState(v6, a2, (struct _LIST_ENTRY *)((char *)this + 136));
    if ( ResourceState )
    {
      v9 = (CPoolBufferResource *)*((_QWORD *)ResourceState + 3);
      if ( a3 )
        CPoolBufferResource::AddUsageReference(v9);
      else
        CPoolBufferResource::RemoveUsageReference(v9);
    }
    else
    {
      v7 = -1073741811;
    }
    CPushLock::ReleaseLock((FlipManagerObject *)((char *)this + 40));
  }
  return (unsigned int)v7;
}
