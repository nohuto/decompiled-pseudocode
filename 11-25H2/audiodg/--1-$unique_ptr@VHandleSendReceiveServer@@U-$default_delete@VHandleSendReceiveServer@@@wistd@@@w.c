/*
 * XREFs of ??1?$unique_ptr@VHandleSendReceiveServer@@U?$default_delete@VHandleSendReceiveServer@@@wistd@@@wistd@@QEAA@XZ @ 0x14004C32C
 * Callers:
 *     _StartALPCHandleServer_::_1_::dtor$1 @ 0x140094189 (_StartALPCHandleServer_--_1_--dtor$1.c)
 *     _CCrossProcessBaseEndpoint_StaticControlData_V1_VolatileControlData_V0_ControlData_V1_::CCrossProcessBaseEndpoint_StaticControlData_V1_VolatileControlData_V0_ControlData_V1__::_1_::dtor$1 @ 0x140094A87 (_CCrossProcessBaseEndpoint_StaticControlData_V1_VolatileControlData_V0_ControlData__ea_140094A87.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wistd::unique_ptr<HandleSendReceiveServer,wistd::default_delete<HandleSendReceiveServer>>::~unique_ptr<HandleSendReceiveServer,wistd::default_delete<HandleSendReceiveServer>>(
        __int64 (__fastcall ****a1)(_QWORD, __int64))
{
  return wistd::unique_ptr<HandleSendReceiveServer,wistd::default_delete<HandleSendReceiveServer>>::reset(a1, 0LL);
}
