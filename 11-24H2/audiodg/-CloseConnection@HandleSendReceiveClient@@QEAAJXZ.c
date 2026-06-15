/*
 * XREFs of ?CloseConnection@HandleSendReceiveClient@@QEAAJXZ @ 0x140090FF8
 * Callers:
 *     ??_EHandleSendReceiveClient@@UEAAPEAXI@Z @ 0x140081D00 (--_EHandleSendReceiveClient@@UEAAPEAXI@Z.c)
 *     ?SetEventHandle@?$CCrossProcessBaseClientEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAAJPEAX@Z @ 0x140085110 (-SetEventHandle@-$CCrossProcessBaseClientEndpoint@UStaticControlData_V1@@UVolatileControlData_V0.c)
 *     ?SetEventHandle@CSpatialCrossProcessClientEndpoint@@UEAAJPEAX@Z @ 0x14008F810 (-SetEventHandle@CSpatialCrossProcessClientEndpoint@@UEAAJPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HandleSendReceiveClient::CloseConnection(HandleSendReceiveClient *this)
{
  char *v2; // rcx

  v2 = (char *)*((_QWORD *)this + 1);
  if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    CloseHandle(v2);
    *((_QWORD *)this + 1) = 0LL;
  }
  return 0LL;
}
