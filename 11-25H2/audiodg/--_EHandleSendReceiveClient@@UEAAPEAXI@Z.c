/*
 * XREFs of ??_EHandleSendReceiveClient@@UEAAPEAXI@Z @ 0x140083AA0
 * Callers:
 *     ?SetEventHandle@?$CCrossProcessBaseClientEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAAJPEAX@Z @ 0x140085B90 (-SetEventHandle@-$CCrossProcessBaseClientEndpoint@UStaticControlData_V1@@UVolatileControlData_V0.c)
 *     ?SetEventHandle@CSpatialCrossProcessClientEndpoint@@UEAAJPEAX@Z @ 0x14008FD90 (-SetEventHandle@CSpatialCrossProcessClientEndpoint@@UEAAJPEAX@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1400591B4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?CloseConnection@HandleSendReceiveClient@@QEAAJXZ @ 0x140091578 (-CloseConnection@HandleSendReceiveClient@@QEAAJXZ.c)
 */

HandleSendReceiveClient *__fastcall HandleSendReceiveClient::`vector deleting destructor'(
        HandleSendReceiveClient *this,
        char a2)
{
  *(_QWORD *)this = &HandleSendReceiveClient::`vftable';
  HandleSendReceiveClient::CloseConnection(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
