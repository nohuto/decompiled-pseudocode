/*
 * XREFs of ?RemoveUsageReference@CPoolBufferResource@@QEAAXXZ @ 0x1400195A8
 * Callers:
 *     ?ConsumerAdjustUsageReference@FlipManagerObject@@QEAAJ_K_N@Z @ 0x14001721C (-ConsumerAdjustUsageReference@FlipManagerObject@@QEAAJ_K_N@Z.c)
 *     ?ServiceBufferSignals@CFlipManagerSignal@@QEAAXXZ @ 0x140017D78 (-ServiceBufferSignals@CFlipManagerSignal@@QEAAXXZ.c)
 *     ?ClearAllContentBindings@CEndpointResourceStateManager@@QEAAXXZ @ 0x140018C58 (-ClearAllContentBindings@CEndpointResourceStateManager@@QEAAXXZ.c)
 *     ?ReleaseKernelPresentUpdateReferences@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@@Z @ 0x140018E68 (-ReleaseKernelPresentUpdateReferences@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@@Z.c)
 *     ?SetBoundBuffer@CContentResourceState@@QEAAXPEAVCPoolBufferResource@@@Z @ 0x1400194F0 (-SetBoundBuffer@CContentResourceState@@QEAAXPEAVCPoolBufferResource@@@Z.c)
 *     ??1CContentResourceState@@UEAA@XZ @ 0x140054024 (--1CContentResourceState@@UEAA@XZ.c)
 *     ?Remove@CContentResourceState@@UEAAXXZ @ 0x140056CB0 (-Remove@CContentResourceState@@UEAAXXZ.c)
 * Callees:
 *     DxgkGetWin32kImportTable @ 0x14001C128 (DxgkGetWin32kImportTable.c)
 *     ?GetTracingId@CFlipManager@@QEAAIXZ @ 0x14009E7B4 (-GetTracingId@CFlipManager@@QEAAIXZ.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

void __fastcall CPoolBufferResource::RemoveUsageReference(CPoolBufferResource *this)
{
  int v1; // eax
  int v3; // eax
  void (__fastcall *v4)(_QWORD, CPoolBufferResource *, __int64); // rbx
  unsigned int TracingId; // eax
  __int64 v6; // r8

  v1 = *((_DWORD *)this + 20);
  if ( v1 )
  {
    v3 = v1 - 1;
    *((_DWORD *)this + 20) = v3;
    if ( !v3 )
    {
      KeSetEvent(*((PRKEVENT *)this + 8), 1, 0);
      v4 = *(void (__fastcall **)(_QWORD, CPoolBufferResource *, __int64))(DxgkGetWin32kImportTable() + 240);
      TracingId = CFlipManager::GetTracingId(*((CFlipManager **)this + 6));
      LOBYTE(v6) = 1;
      v4(TracingId, this, v6);
    }
  }
}
