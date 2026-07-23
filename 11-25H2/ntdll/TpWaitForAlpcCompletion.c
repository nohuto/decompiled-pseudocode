/*
 * XREFs of TpWaitForAlpcCompletion @ 0x1800D6590
 * Callers:
 *     <none>
 * Callees:
 *     TppBarrierAdjust @ 0x180041550 (TppBarrierAdjust.c)
 *     TppAlpcpValidateAlpc @ 0x1800D6BDC (TppAlpcpValidateAlpc.c)
 *     ZwAlpcQueryInformation @ 0x180164370 (ZwAlpcQueryInformation.c)
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
