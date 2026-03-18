/*
 * XREFs of ?RemoveContent@CFlipManager@@QEAAJ_KPEAPEAVCDisableScanoutToken@@@Z @ 0x1400565EC
 * Callers:
 *     ?RemoveContent@FlipManagerObject@@QEAAJ_KPEAPEAVCDisableScanoutToken@@@Z @ 0x140056578 (-RemoveContent@FlipManagerObject@@QEAAJ_KPEAPEAVCDisableScanoutToken@@@Z.c)
 * Callees:
 *     ?FindResourceState@CEndpointResourceStateManager@@AEAAPEAVCFlipResourceState@@_KPEAU_LIST_ENTRY@@@Z @ 0x140009B60 (-FindResourceState@CEndpointResourceStateManager@@AEAAPEAVCFlipResourceState@@_KPEAU_LIST_ENTRY@.c)
 *     DxgkGetWin32kImportTable @ 0x14000CC5C (DxgkGetWin32kImportTable.c)
 *     ?RemoveContentState@CEndpointResourceStateManager@@QEAAXPEAVCContentResourceState@@@Z @ 0x140056684 (-RemoveContentState@CEndpointResourceStateManager@@QEAAXPEAVCContentResourceState@@@Z.c)
 *     ?ClearCompositionSurfaceBinding@CContentResource@@QEAAJPEAPEAVCDisableScanoutToken@@@Z @ 0x140062A8C (-ClearCompositionSurfaceBinding@CContentResource@@QEAAJPEAPEAVCDisableScanoutToken@@@Z.c)
 *     ?GetTracingId@CFlipManager@@QEAAIXZ @ 0x14009C454 (-GetTracingId@CFlipManager@@QEAAIXZ.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CFlipManager::RemoveContent(CFlipManager *this, __int64 a2, struct CDisableScanoutToken **a3)
{
  CContentResource **ResourceState; // rsi
  unsigned int v6; // ebx
  __int64 Win32kImportTable; // rax
  CContentResource *v9; // rbx
  void (__fastcall *v10)(_QWORD, _QWORD, CContentResource *); // rdi
  unsigned int TracingId; // eax
  CEndpointResourceStateManager *v12; // rcx

  ResourceState = (CContentResource **)CEndpointResourceStateManager::FindResourceState(
                                         this,
                                         a2,
                                         (struct _LIST_ENTRY *)((char *)this + 72));
  if ( ResourceState )
  {
    Win32kImportTable = DxgkGetWin32kImportTable();
    v9 = ResourceState[3];
    v10 = *(void (__fastcall **)(_QWORD, _QWORD, CContentResource *))(Win32kImportTable + 288);
    TracingId = CFlipManager::GetTracingId(this);
    v10(0LL, TracingId, v9);
    v6 = CContentResource::ClearCompositionSurfaceBinding(ResourceState[3], a3);
    CEndpointResourceStateManager::RemoveContentState(v12, (struct CContentResourceState *)ResourceState);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v6;
}
