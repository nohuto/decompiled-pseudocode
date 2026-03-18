/*
 * XREFs of VidSchiAllocateDmaPacket @ 0x1400AE420
 * Callers:
 *     VidSchiSubmitPreemptionCommand @ 0x1400ADF8C (VidSchiSubmitPreemptionCommand.c)
 *     VidSchiSubmitPagingCommand @ 0x1400AE064 (VidSchiSubmitPagingCommand.c)
 *     VidSchiSubmitRenderCommand @ 0x1400AEEB8 (VidSchiSubmitRenderCommand.c)
 *     VidSchiSwitchNodeFromContext @ 0x1400AFC90 (VidSchiSwitchNodeFromContext.c)
 * Callees:
 *     VidSchiInterlockedRemoveHeadListIfExist @ 0x14002AB40 (VidSchiInterlockedRemoveHeadListIfExist.c)
 *     memset @ 0x140056780 (memset.c)
 *     VidSchWaitForCompletionEvent @ 0x1400AD1D4 (VidSchWaitForCompletionEvent.c)
 */

_QWORD *__fastcall VidSchiAllocateDmaPacket(__int64 a1)
{
  __int64 i; // rbx
  _QWORD *v3; // rax
  _QWORD *v4; // rbx
  int v6; // eax
  _DWORD v7[40]; // [rsp+20h] [rbp-B8h] BYREF

  for ( i = *(_QWORD *)(a1 + 24); ; VidSchWaitForCompletionEvent(i, (__int64)v7, 20) )
  {
    *(_QWORD *)(i + 1712) = MEMORY[0xFFFFF78000000320];
    KeResetEvent((PRKEVENT)(i + 1672));
    v3 = VidSchiInterlockedRemoveHeadListIfExist((KSPIN_LOCK *)(i + 1992), (_QWORD **)(a1 + 16528), 0LL);
    if ( v3 )
      break;
    memset(v7, 0, sizeof(v7));
    v6 = *(unsigned __int16 *)(a1 + 4);
    v7[8] |= 0x41u;
    v7[12] = v6;
    v7[5] = 1;
  }
  v4 = v3 - 2;
  memset(v3 - 2, 0, 0xD0uLL);
  return v4;
}
