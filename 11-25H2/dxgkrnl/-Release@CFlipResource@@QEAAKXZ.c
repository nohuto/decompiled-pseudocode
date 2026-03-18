/*
 * XREFs of ?Release@CFlipResource@@QEAAKXZ @ 0x14000A0E0
 * Callers:
 *     ?PrepareIncrementalUpdateForUser@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpdate@@@Z @ 0x140007FD0 (-PrepareIncrementalUpdateForUser@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpdate@@@Z.c)
 *     ?ServiceBufferSignals@CFlipManagerSignal@@QEAAXXZ @ 0x140008878 (-ServiceBufferSignals@CFlipManagerSignal@@QEAAXXZ.c)
 *     ?ClearAllContentBindings@CEndpointResourceStateManager@@QEAAXXZ @ 0x140009730 (-ClearAllContentBindings@CEndpointResourceStateManager@@QEAAXXZ.c)
 *     ?ReleaseKernelPresentUpdateReferences@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@@Z @ 0x140009934 (-ReleaseKernelPresentUpdateReferences@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@@Z.c)
 *     ?SetBoundBuffer@CContentResourceState@@QEAAXPEAVCPoolBufferResource@@@Z @ 0x140009FBC (-SetBoundBuffer@CContentResourceState@@QEAAXPEAVCPoolBufferResource@@@Z.c)
 *     ?Create@CPoolBufferResource@@SAJPEAVCFlipManager@@_KPEAXAEBU_LUID@@PEAVCFlipPropertySet@@PEAPEAVCPoolBufferResourceState@@@Z @ 0x140050CFC (-Create@CPoolBufferResource@@SAJPEAVCFlipManager@@_KPEAXAEBU_LUID@@PEAVCFlipPropertySet@@PEAPEAV.c)
 *     ??1CContentResourceState@@UEAA@XZ @ 0x140054294 (--1CContentResourceState@@UEAA@XZ.c)
 *     ??1CFlipResourceState@@MEAA@XZ @ 0x14005434C (--1CFlipResourceState@@MEAA@XZ.c)
 *     ?Remove@CContentResourceState@@UEAAXXZ @ 0x1400574A0 (-Remove@CContentResourceState@@UEAAXXZ.c)
 *     ?Create@CContentResource@@SAJ_KPEAVCFlipPropertySet@@PEAPEAVCContentResourceState@@PEAUPresentationSurfaceInfo@@@Z @ 0x14009E208 (-Create@CContentResource@@SAJ_KPEAVCFlipPropertySet@@PEAPEAVCContentResourceState@@PEAUPresentat.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CFlipResource::Release(CFlipResource *this)
{
  bool v1; // zf
  unsigned int v2; // ebx

  v1 = (*((_DWORD *)this + 6))-- == 1;
  v2 = *((_DWORD *)this + 6);
  if ( v1 )
    (**(void (__fastcall ***)(CFlipResource *, __int64))this)(this, 1LL);
  return v2;
}
