/*
 * XREFs of ??0CCriticalSection@ATL@@QEAA@XZ @ 0x14003D080
 * Callers:
 *     ??0CAudioProcessor@@QEAA@XZ @ 0x14003CF6C (--0CAudioProcessor@@QEAA@XZ.c)
 *     ??0?$CRealTimeSafeList@VCConnectionNode@@V?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@@@QEAA@XZ @ 0x14003D0B4 (--0-$CRealTimeSafeList@VCConnectionNode@@V-$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits.c)
 *     ??0?$CRealTimeSafeStruct@VCProcessingData@@$00@@QEAA@XZ @ 0x14003D10C (--0-$CRealTimeSafeStruct@VCProcessingData@@$00@@QEAA@XZ.c)
 *     ??0CSpatialCrossProcessBaseEndpoint@@IEAA@XZ @ 0x140088A6C (--0CSpatialCrossProcessBaseEndpoint@@IEAA@XZ.c)
 *     ??$MakeAtomicObj@UClockingSection@@VReaderLockPolicy@util@@UStorage@?$AtomicObjBase@UClockingSection@@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@VAtomicObjState@3@VReaderLockPolicy@3@$$V@3@@util@@YA?AV?$shared_ptr@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@std@@PEAUStorage@?$AtomicObjBase@UClockingSection@@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@VAtomicObjState@3@VReaderLockPolicy@3@$$V@0@@Z @ 0x14008D724 (--$MakeAtomicObj@UClockingSection@@VReaderLockPolicy@util@@UStorage@-$AtomicObjBase@UClockingSec.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14005619C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

struct _RTL_CRITICAL_SECTION *__fastcall ATL::CCriticalSection::CCriticalSection(struct _RTL_CRITICAL_SECTION *this)
{
  InitializeCriticalSection(this);
  return this;
}
