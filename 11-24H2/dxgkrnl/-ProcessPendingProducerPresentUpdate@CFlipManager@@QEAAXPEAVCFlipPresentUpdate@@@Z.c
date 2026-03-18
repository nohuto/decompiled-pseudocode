/*
 * XREFs of ?ProcessPendingProducerPresentUpdate@CFlipManager@@QEAAXPEAVCFlipPresentUpdate@@@Z @ 0x1400190D4
 * Callers:
 *     ?Pending@CFlipPresentUpdate@@UEAAXXZ @ 0x140018270 (-Pending@CFlipPresentUpdate@@UEAAXXZ.c)
 * Callees:
 *     ?ClearAllContentBindings@CEndpointResourceStateManager@@QEAAXXZ @ 0x140018C58 (-ClearAllContentBindings@CEndpointResourceStateManager@@QEAAXXZ.c)
 *     ?CommitPendingUpdates@CEndpointResourceStateManager@@QEAAXXZ @ 0x140019184 (-CommitPendingUpdates@CEndpointResourceStateManager@@QEAAXXZ.c)
 *     ?GetNextEntry@PresentHistory@CFlipManager@@QEAAAEAUEntry@12@XZ @ 0x140019460 (-GetNextEntry@PresentHistory@CFlipManager@@QEAAAEAUEntry@12@XZ.c)
 *     DxgkGetWin32kImportTable @ 0x14001C128 (DxgkGetWin32kImportTable.c)
 *     ?GetTracingId@CFlipManager@@QEAAIXZ @ 0x14009E7B4 (-GetTracingId@CFlipManager@@QEAAIXZ.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

void __fastcall CFlipManager::ProcessPendingProducerPresentUpdate(CFlipManager *this, struct CFlipPresentUpdate *a2)
{
  __int64 Win32kImportTable; // rax
  __int64 v5; // rdi
  __int64 v6; // rbx
  void (__fastcall *v7)(_QWORD, __int64, __int64); // rsi
  unsigned int TracingId; // eax
  CFlipManager::PresentHistory *v9; // rcx
  struct CFlipManager::PresentHistory::Entry *NextEntry; // rax

  Win32kImportTable = DxgkGetWin32kImportTable();
  v5 = *((_QWORD *)a2 + 10);
  v6 = *((_QWORD *)this + 29);
  v7 = *(void (__fastcall **)(_QWORD, __int64, __int64))(Win32kImportTable + 160);
  TracingId = CFlipManager::GetTracingId(this);
  v7(TracingId, v6, v5);
  CEndpointResourceStateManager::CommitPendingUpdates((CFlipManager *)((char *)this + 56));
  ++*((_QWORD *)this + 29);
  if ( !*((_BYTE *)a2 + 72) )
    CEndpointResourceStateManager::ClearAllContentBindings((CFlipManager *)((char *)this + 56));
  v9 = (CFlipManager::PresentHistory *)*((_QWORD *)this + 3);
  if ( v9 )
  {
    NextEntry = CFlipManager::PresentHistory::GetNextEntry(v9);
    *((_DWORD *)NextEntry + 10) = 1;
    *((_QWORD *)NextEntry + 2) = *((_QWORD *)a2 + 8);
  }
}
