/*
 * XREFs of ?Release@CFlipPropertySetBase@@QEAAKXZ @ 0x140019DE8
 * Callers:
 *     ??1CFlipPresentUpdate@@UEAA@XZ @ 0x140017F74 (--1CFlipPresentUpdate@@UEAA@XZ.c)
 *     ?PostFlipManagerIFlipFrameStatistics@CFlipManager@@AEAAJPEAVCFlipManagerToken@@@Z @ 0x140018050 (-PostFlipManagerIFlipFrameStatistics@CFlipManager@@AEAAJPEAVCFlipManagerToken@@@Z.c)
 *     ?ClearAllContentBindings@CEndpointResourceStateManager@@QEAAXXZ @ 0x140018C58 (-ClearAllContentBindings@CEndpointResourceStateManager@@QEAAXXZ.c)
 *     ?ReleaseKernelPresentUpdateReferences@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@@Z @ 0x140018E68 (-ReleaseKernelPresentUpdateReferences@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@@Z.c)
 *     ?SetFlipPropertySet@CFlipPresentUpdate@@QEAAXPEAVCFlipPropertySet@@@Z @ 0x140019948 (-SetFlipPropertySet@CFlipPresentUpdate@@QEAAXPEAVCFlipPropertySet@@@Z.c)
 *     ?PostFlipManagerPresentStatusStatistics@CFlipManager@@AEAAJ_K0W4FlipPresentProcessResult@@@Z @ 0x140019988 (-PostFlipManagerPresentStatusStatistics@CFlipManager@@AEAAJ_K0W4FlipPresentProcessResult@@@Z.c)
 *     ?SetBoundPropertySet@CContentResourceState@@QEAAXPEAVCFlipPropertySet@@@Z @ 0x140019DA0 (-SetBoundPropertySet@CContentResourceState@@QEAAXPEAVCFlipPropertySet@@@Z.c)
 *     NtFlipObjectReadNextMessageToProducer @ 0x14001A080 (NtFlipObjectReadNextMessageToProducer.c)
 *     NtFlipObjectSetContent @ 0x140045AC0 (NtFlipObjectSetContent.c)
 *     ?Clear@CBackchannelManager@@QEAAXXZ @ 0x140046798 (-Clear@CBackchannelManager@@QEAAXXZ.c)
 *     NtFlipObjectQueryNextMessageToProducer @ 0x140047940 (NtFlipObjectQueryNextMessageToProducer.c)
 *     NtFlipObjectConsumerAcquirePresent @ 0x14004CA70 (NtFlipObjectConsumerAcquirePresent.c)
 *     NtFlipObjectConsumerPostMessage @ 0x14004E220 (NtFlipObjectConsumerPostMessage.c)
 *     NtFlipObjectAddPoolBuffer @ 0x140053010 (NtFlipObjectAddPoolBuffer.c)
 *     ??1CContentResourceState@@UEAA@XZ @ 0x140054024 (--1CContentResourceState@@UEAA@XZ.c)
 *     NtFlipObjectAddContent @ 0x140055F80 (NtFlipObjectAddContent.c)
 *     ??1CFlipResource@@MEAA@XZ @ 0x140056470 (--1CFlipResource@@MEAA@XZ.c)
 *     ?Remove@CContentResourceState@@UEAAXXZ @ 0x140056CB0 (-Remove@CContentResourceState@@UEAAXXZ.c)
 *     ?FlipManagerCreateProducerTokenInitInfo@@YAJPEAXU_LUID@@_N_KIPEAUFlipPropertyItem@@PEAUFlipManagerTokenInitInfo@@@Z @ 0x14009E4EC (-FlipManagerCreateProducerTokenInitInfo@@YAJPEAXU_LUID@@_N_KIPEAUFlipPropertyItem@@PEAUFlipManag.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
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
