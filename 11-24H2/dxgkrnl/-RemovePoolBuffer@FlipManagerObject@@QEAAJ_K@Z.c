/*
 * XREFs of ?RemovePoolBuffer@FlipManagerObject@@QEAAJ_K@Z @ 0x14009DD78
 * Callers:
 *     NtFlipObjectRemovePoolBuffer @ 0x14009E2E0 (NtFlipObjectRemovePoolBuffer.c)
 * Callees:
 *     ?FindResourceState@CEndpointResourceStateManager@@AEAAPEAVCFlipResourceState@@_KPEAU_LIST_ENTRY@@@Z @ 0x140019094 (-FindResourceState@CEndpointResourceStateManager@@AEAAPEAVCFlipResourceState@@_KPEAU_LIST_ENTRY@.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x14001A9A4 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x14001BAF0 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     DxgkGetWin32kImportTable @ 0x14001C128 (DxgkGetWin32kImportTable.c)
 *     ?RemovePoolBufferState@CEndpointResourceStateManager@@QEAAXPEAVCPoolBufferResourceState@@@Z @ 0x140057998 (-RemovePoolBufferState@CEndpointResourceStateManager@@QEAAXPEAVCPoolBufferResourceState@@@Z.c)
 *     ?GetTracingId@CFlipManager@@QEAAIXZ @ 0x14009E7B4 (-GetTracingId@CFlipManager@@QEAAIXZ.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FlipManagerObject::RemovePoolBuffer(FlipManagerObject *this, __int64 a2)
{
  CPushLock *v2; // rbp
  CEndpointResourceStateManager *v5; // rcx
  int v6; // esi
  char *v7; // r15
  struct CFlipResourceState *ResourceState; // r14
  __int64 Win32kImportTable; // rax
  __int64 v10; // rbx
  void (__fastcall *v11)(_QWORD, __int64); // rdi
  unsigned int TracingId; // eax

  v2 = (FlipManagerObject *)((char *)this + 40);
  v6 = CPushLock::AcquireLockExclusive((FlipManagerObject *)((char *)this + 40));
  if ( v6 >= 0 )
  {
    v7 = (char *)this + 32;
    v6 = 0;
    ResourceState = CEndpointResourceStateManager::FindResourceState(v5, a2, (struct _LIST_ENTRY *)((char *)this + 88));
    if ( ResourceState )
    {
      Win32kImportTable = DxgkGetWin32kImportTable();
      v10 = *((_QWORD *)ResourceState + 3);
      v11 = *(void (__fastcall **)(_QWORD, __int64))(Win32kImportTable + 256);
      TracingId = CFlipManager::GetTracingId((CFlipManager *)v7);
      v11(TracingId, v10);
      CEndpointResourceStateManager::RemovePoolBufferState((CEndpointResourceStateManager *)(v7 + 56), ResourceState);
    }
    else
    {
      v6 = -1073741811;
    }
    CPushLock::ReleaseLock(v2);
  }
  return (unsigned int)v6;
}
