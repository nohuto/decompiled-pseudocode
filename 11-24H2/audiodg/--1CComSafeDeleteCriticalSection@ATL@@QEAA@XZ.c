/*
 * XREFs of ??1CComSafeDeleteCriticalSection@ATL@@QEAA@XZ @ 0x140007B30
 * Callers:
 *     ??1CAPOWrapperSrv@@QEAA@XZ @ 0x140006BA0 (--1CAPOWrapperSrv@@QEAA@XZ.c)
 *     ??1CAudioPump@@QEAA@XZ @ 0x14001C7E8 (--1CAudioPump@@QEAA@XZ.c)
 *     ??1CStreamInstance@@QEAA@XZ @ 0x14001CA44 (--1CStreamInstance@@QEAA@XZ.c)
 *     ??1CAudioDeviceGraph@@QEAA@XZ @ 0x14001CD0C (--1CAudioDeviceGraph@@QEAA@XZ.c)
 *     ??1CSystemAudioDeviceShared@@UEAA@XZ @ 0x14002A770 (--1CSystemAudioDeviceShared@@UEAA@XZ.c)
 *     ??1CProcessSubmix@@QEAA@XZ @ 0x14002AC24 (--1CProcessSubmix@@QEAA@XZ.c)
 *     ??1CStreamGroup@@QEAA@XZ @ 0x14002B1F4 (--1CStreamGroup@@QEAA@XZ.c)
 *     ??1CAudioProcessor@@QEAA@XZ @ 0x1400357A0 (--1CAudioProcessor@@QEAA@XZ.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModel@ATL@@@ATL@@QEAA@XZ @ 0x140045058 (--1-$CComObjectRootEx@VCComMultiThreadModel@ATL@@@ATL@@QEAA@XZ.c)
 *     ??1?$CCrossProcessServerInputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAA@XZ @ 0x14005546C (--1-$CCrossProcessServerInputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlDa.c)
 *     ??1CSpatialCrossProcessServerInputEndpoint@@UEAA@XZ @ 0x1400586D8 (--1CSpatialCrossProcessServerInputEndpoint@@UEAA@XZ.c)
 *     ??1?$CComObjectCached@VCComClassFactory@ATL@@@ATL@@QEAA@XZ @ 0x14005C068 (--1-$CComObjectCached@VCComClassFactory@ATL@@@ATL@@QEAA@XZ.c)
 *     ??1CSystemAudioDeviceExclusive@@UEAA@XZ @ 0x14006EFE4 (--1CSystemAudioDeviceExclusive@@UEAA@XZ.c)
 *     ??1CSystemAudioDeviceOffloadGraph@@UEAA@XZ @ 0x140070370 (--1CSystemAudioDeviceOffloadGraph@@UEAA@XZ.c)
 *     ??1CVpoContext@@IEAA@XZ @ 0x140073824 (--1CVpoContext@@IEAA@XZ.c)
 *     ??1?$CCrossProcessClientInputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAA@XZ @ 0x140080FEC (--1-$CCrossProcessClientInputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlDa.c)
 *     ??1?$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAA@XZ @ 0x140081014 (--1-$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlD.c)
 *     ??1?$CCrossProcessServerInputEndpoint@UStaticControlData_V0@@UVolatileControlData_V0@@UControlData_V0@@@@UEAA@XZ @ 0x14008103C (--1-$CCrossProcessServerInputEndpoint@UStaticControlData_V0@@UVolatileControlData_V0@@UControlDa.c)
 *     ??1?$CCrossProcessServerOutputEndpoint@UStaticControlData_V0@@UVolatileControlData_V0@@UControlData_V0@@@@UEAA@XZ @ 0x140081064 (--1-$CCrossProcessServerOutputEndpoint@UStaticControlData_V0@@UVolatileControlData_V0@@UControlD.c)
 *     ??1?$CCrossProcessServerOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAA@XZ @ 0x14008108C (--1-$CCrossProcessServerOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlD.c)
 *     ??1CRegObject@ATL@@UEAA@XZ @ 0x140089054 (--1CRegObject@ATL@@UEAA@XZ.c)
 *     ??1CSpatialCrossProcessClientOutputEndpoint@@UEAA@XZ @ 0x14008912C (--1CSpatialCrossProcessClientOutputEndpoint@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CComSafeDeleteCriticalSection::~CComSafeDeleteCriticalSection(
        ATL::CComSafeDeleteCriticalSection *this)
{
  if ( *((_BYTE *)this + 40) )
  {
    *((_BYTE *)this + 40) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)this);
  }
}
