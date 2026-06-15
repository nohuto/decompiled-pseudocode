/*
 * XREFs of ??_E?$CComObject@V?$CCrossProcessServerInputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@UEAAPEAXI@Z @ 0x140055090
 * Callers:
 *     <none>
 * Callees:
 *     ?OnCancel@SendCommandAsyncOperation@Devices@Media@Windows@@MEAAXXZ @ 0x140045410 (-OnCancel@SendCommandAsyncOperation@Devices@Media@Windows@@MEAAXXZ.c)
 *     ??1?$CComObject@V?$CCrossProcessServerInputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@UEAA@XZ @ 0x1400550DC (--1-$CComObject@V-$CCrossProcessServerInputEndpoint@UStaticControlData_V1@@UVolatileControlData_.c)
 *     ??3?$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@SAXPEAX@Z @ 0x140055148 (--3-$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlD.c)
 */

Windows::Media::Devices::SendCommandAsyncOperation *__fastcall ATL::CComObject<CCrossProcessServerInputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>>::`vector deleting destructor'(
        Windows::Media::Devices::SendCommandAsyncOperation *a1,
        char a2)
{
  ATL::CComObject<CCrossProcessServerInputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>>::~CComObject<CCrossProcessServerInputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>>();
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      Windows::Media::Devices::SendCommandAsyncOperation::OnCancel(a1);
    else
      CCrossProcessClientOutputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>::operator delete(a1);
  }
  return a1;
}
