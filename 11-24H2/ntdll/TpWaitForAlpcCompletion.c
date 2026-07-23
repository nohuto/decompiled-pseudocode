/*
 * XREFs of TpWaitForAlpcCompletion @ 0x180085280
 * Callers:
 *     <none>
 * Callees:
 *     TppBarrierAdjust @ 0x18003E750 (TppBarrierAdjust.c)
 *     TppAlpcpValidateAlpc @ 0x18008663C (TppAlpcpValidateAlpc.c)
 *     ZwAlpcQueryInformation @ 0x1801611A0 (ZwAlpcQueryInformation.c)
 */

void __cdecl TpWaitForAlpcCompletion(PTP_ALPC Alpc)
{
  int PortInformation; // [rsp+48h] [rbp+10h] BYREF

  if ( (unsigned int)TppAlpcpValidateAlpc(Alpc, 0LL, 0LL) )
  {
    PortInformation = Alpc->DeferredSendCount;
    if ( PortInformation )
      ZwAlpcQueryInformation(Alpc->AlpcPort, AlpcWaitForPortReferences, &PortInformation, 4u, 0LL);
    TppBarrierAdjust((_RTL_SRWLOCK *)&Alpc->CleanupGroupMember.CallbackBarrier, 0, 1);
  }
}
