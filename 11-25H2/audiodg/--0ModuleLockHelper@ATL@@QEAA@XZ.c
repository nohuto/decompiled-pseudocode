/*
 * XREFs of ??0ModuleLockHelper@ATL@@QEAA@XZ @ 0x14003E4EC
 * Callers:
 *     ?Release@?$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@UEAAKXZ @ 0x14003CC50 (-Release@-$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@UEAAKXZ.c)
 *     ?Release@?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@UEAAKXZ @ 0x14004B5A0 (-Release@-$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@UEAAKXZ.c)
 *     ?Release@?$CComAggObject@VCStreamInstance@@@ATL@@UEAAKXZ @ 0x14005DBA0 (-Release@-$CComAggObject@VCStreamInstance@@@ATL@@UEAAKXZ.c)
 *     ?Release@?$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@UEAAKXZ @ 0x1400716B0 (-Release@-$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@UEAAKXZ.c)
 *     ?Release@?$CComObject@VCVpoContext@@@ATL@@UEAAKXZ @ 0x140076400 (-Release@-$CComObject@VCVpoContext@@@ATL@@UEAAKXZ.c)
 *     ?Release@?$CComObject@V?$CCrossProcessClientInputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@UEAAKXZ @ 0x140083710 (-Release@-$CComObject@V-$CCrossProcessClientInputEndpoint@UStaticControlData_V1@@UVolatileContro.c)
 *     ?Release@?$CComObject@V?$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@UEAAKXZ @ 0x140083830 (-Release@-$CComObject@V-$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UVolatileContr.c)
 *     ?Release@?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@UEAAKXZ @ 0x14008C2D0 (-Release@-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@UEAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

ATL::ModuleLockHelper *__fastcall ATL::ModuleLockHelper::ModuleLockHelper(ATL::ModuleLockHelper *this)
{
  (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
  return this;
}
