/*
 * XREFs of ?Release@CFlipPropertySetBase@@QEAAKXZ @ 0x14000A8B4
 * Callers:
 *     ??1CFlipPresentUpdate@@UEAA@XZ @ 0x140008A74 (--1CFlipPresentUpdate@@UEAA@XZ.c)
 *     ?PostFlipManagerIFlipFrameStatistics@CFlipManager@@AEAAJPEAVCFlipManagerToken@@@Z @ 0x140008B50 (-PostFlipManagerIFlipFrameStatistics@CFlipManager@@AEAAJPEAVCFlipManagerToken@@@Z.c)
 *     ?ClearAllContentBindings@CEndpointResourceStateManager@@QEAAXXZ @ 0x140009730 (-ClearAllContentBindings@CEndpointResourceStateManager@@QEAAXXZ.c)
 *     ?ReleaseKernelPresentUpdateReferences@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@@Z @ 0x140009934 (-ReleaseKernelPresentUpdateReferences@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@@Z.c)
 *     ?SetFlipPropertySet@CFlipPresentUpdate@@QEAAXPEAVCFlipPropertySet@@@Z @ 0x14000A414 (-SetFlipPropertySet@CFlipPresentUpdate@@QEAAXPEAVCFlipPropertySet@@@Z.c)
 *     ?PostFlipManagerPresentStatusStatistics@CFlipManager@@AEAAJ_K0W4FlipPresentProcessResult@@@Z @ 0x14000A454 (-PostFlipManagerPresentStatusStatistics@CFlipManager@@AEAAJ_K0W4FlipPresentProcessResult@@@Z.c)
 *     ?SetBoundPropertySet@CContentResourceState@@QEAAXPEAVCFlipPropertySet@@@Z @ 0x14000A86C (-SetBoundPropertySet@CContentResourceState@@QEAAXPEAVCFlipPropertySet@@@Z.c)
 *     NtFlipObjectReadNextMessageToProducer @ 0x14000AB40 (NtFlipObjectReadNextMessageToProducer.c)
 *     NtFlipObjectSetContent @ 0x1400460D0 (NtFlipObjectSetContent.c)
 *     ?Clear@CBackchannelManager@@QEAAXXZ @ 0x140046DC8 (-Clear@CBackchannelManager@@QEAAXXZ.c)
 *     NtFlipObjectQueryNextMessageToProducer @ 0x1400481C0 (NtFlipObjectQueryNextMessageToProducer.c)
 *     NtFlipObjectConsumerAcquirePresent @ 0x14004D020 (NtFlipObjectConsumerAcquirePresent.c)
 *     NtFlipObjectConsumerPostMessage @ 0x14004E920 (NtFlipObjectConsumerPostMessage.c)
 *     NtFlipObjectAddPoolBuffer @ 0x140053360 (NtFlipObjectAddPoolBuffer.c)
 *     ??1CContentResourceState@@UEAA@XZ @ 0x140054294 (--1CContentResourceState@@UEAA@XZ.c)
 *     NtFlipObjectAddContent @ 0x1400567D0 (NtFlipObjectAddContent.c)
 *     ??1CFlipResource@@MEAA@XZ @ 0x140056BC0 (--1CFlipResource@@MEAA@XZ.c)
 *     ?Remove@CContentResourceState@@UEAAXXZ @ 0x1400574A0 (-Remove@CContentResourceState@@UEAAXXZ.c)
 *     ?FlipManagerCreateProducerTokenInitInfo@@YAJPEAXU_LUID@@_N_KIPEAUFlipPropertyItem@@PEAUFlipManagerTokenInitInfo@@@Z @ 0x14009C18C (-FlipManagerCreateProducerTokenInitInfo@@YAJPEAXU_LUID@@_N_KIPEAUFlipPropertyItem@@PEAUFlipManag.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CFlipPropertySetBase::Release(CFlipPropertySetBase *this)
{
  bool v1; // zf
  unsigned int v2; // ebx

  v1 = (*((_DWORD *)this + 2))-- == 1;
  v2 = *((_DWORD *)this + 2);
  if ( v1 )
    (**(void (__fastcall ***)(CFlipPropertySetBase *, __int64))this)(this, 1LL);
  return v2;
}
