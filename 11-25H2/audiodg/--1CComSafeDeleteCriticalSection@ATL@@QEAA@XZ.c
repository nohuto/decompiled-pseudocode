/*
 * XREFs of ??1CComSafeDeleteCriticalSection@ATL@@QEAA@XZ @ 0x140007B00
 * Callers:
 *     ??1CAPOWrapperSrv@@QEAA@XZ @ 0x140006B70 (--1CAPOWrapperSrv@@QEAA@XZ.c)
 *     ??1CAudioPump@@QEAA@XZ @ 0x14001CAE8 (--1CAudioPump@@QEAA@XZ.c)
 *     ??1CStreamInstance@@QEAA@XZ @ 0x14001CD44 (--1CStreamInstance@@QEAA@XZ.c)
 *     ??1CAudioDeviceGraph@@QEAA@XZ @ 0x14001D00C (--1CAudioDeviceGraph@@QEAA@XZ.c)
 *     ??1CSystemAudioDeviceShared@@UEAA@XZ @ 0x14002AA70 (--1CSystemAudioDeviceShared@@UEAA@XZ.c)
 *     ??1CProcessSubmix@@QEAA@XZ @ 0x14002AF24 (--1CProcessSubmix@@QEAA@XZ.c)
 *     ??1CStreamGroup@@QEAA@XZ @ 0x14002B4F4 (--1CStreamGroup@@QEAA@XZ.c)
 *     ??1CAudioProcessor@@QEAA@XZ @ 0x140035AA0 (--1CAudioProcessor@@QEAA@XZ.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModel@ATL@@@ATL@@QEAA@XZ @ 0x140045358 (--1-$CComObjectRootEx@VCComMultiThreadModel@ATL@@@ATL@@QEAA@XZ.c)
 *     ??1?$CCrossProcessServerInputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAA@XZ @ 0x14005553C (--1-$CCrossProcessServerInputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlDa.c)
 *     ??1CSpatialCrossProcessServerInputEndpoint@@UEAA@XZ @ 0x1400587C8 (--1CSpatialCrossProcessServerInputEndpoint@@UEAA@XZ.c)
 *     ??1?$CComObjectCached@VCComClassFactory@ATL@@@ATL@@QEAA@XZ @ 0x14005C158 (--1-$CComObjectCached@VCComClassFactory@ATL@@@ATL@@QEAA@XZ.c)
 *     ??1CSystemAudioDeviceExclusive@@UEAA@XZ @ 0x14006F070 (--1CSystemAudioDeviceExclusive@@UEAA@XZ.c)
 *     ??1CSystemAudioDeviceOffloadGraph@@UEAA@XZ @ 0x1400728E0 (--1CSystemAudioDeviceOffloadGraph@@UEAA@XZ.c)
 *     ??1CVpoContext@@IEAA@XZ @ 0x140075D14 (--1CVpoContext@@IEAA@XZ.c)
 *     ??1?$CCrossProcessClientInputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAA@XZ @ 0x140082DBC (--1-$CCrossProcessClientInputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlDa.c)
 *     ??1?$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAA@XZ @ 0x140082DE4 (--1-$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlD.c)
 *     ??1?$CCrossProcessServerInputEndpoint@UStaticControlData_V0@@UVolatileControlData_V0@@UControlData_V0@@@@UEAA@XZ @ 0x140082E0C (--1-$CCrossProcessServerInputEndpoint@UStaticControlData_V0@@UVolatileControlData_V0@@UControlDa.c)
 *     ??1?$CCrossProcessServerOutputEndpoint@UStaticControlData_V0@@UVolatileControlData_V0@@UControlData_V0@@@@UEAA@XZ @ 0x140082E34 (--1-$CCrossProcessServerOutputEndpoint@UStaticControlData_V0@@UVolatileControlData_V0@@UControlD.c)
 *     ??1?$CCrossProcessServerOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAA@XZ @ 0x140082E5C (--1-$CCrossProcessServerOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlD.c)
 *     ??1CRegObject@ATL@@UEAA@XZ @ 0x1400895D4 (--1CRegObject@ATL@@UEAA@XZ.c)
 *     ??1CSpatialCrossProcessClientOutputEndpoint@@UEAA@XZ @ 0x1400896AC (--1CSpatialCrossProcessClientOutputEndpoint@@UEAA@XZ.c)
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
