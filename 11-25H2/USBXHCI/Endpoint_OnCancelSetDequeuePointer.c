/*
 * XREFs of Endpoint_OnCancelSetDequeuePointer @ 0x140010288
 * Callers:
 *     Endpoint_SM_UpdateTransferRingDequeuePointers @ 0x1400101F4 (Endpoint_SM_UpdateTransferRingDequeuePointers.c)
 * Callees:
 *     Command_SendCommand @ 0x140008550 (Command_SendCommand.c)
 *     WPP_RECORDER_SF_dddi @ 0x14000E5F4 (WPP_RECORDER_SF_dddi.c)
 *     Endpoint_InitializeTransferRing @ 0x140010424 (Endpoint_InitializeTransferRing.c)
 *     TR_GetDequeuePointer @ 0x140010580 (TR_GetDequeuePointer.c)
 *     Endpoint_IsTransferRingEmpty @ 0x1400105BC (Endpoint_IsTransferRingEmpty.c)
 *     Endpoint_StreamsOnCancelSetDequeuePointerComplete @ 0x140014F54 (Endpoint_StreamsOnCancelSetDequeuePointerComplete.c)
 *     memset @ 0x140059AC0 (memset.c)
 */

__int64 __fastcall Endpoint_OnCancelSetDequeuePointer(__int64 a1, unsigned int a2)
{
  __int64 v4; // r14
  __int64 v5; // rbx
  unsigned int v6; // ebp
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 DequeuePointer; // rcx
  __int64 v11; // rdx
  __int64 v13; // r10
  int v14; // [rsp+20h] [rbp-38h]

  v4 = *(_QWORD *)(*(_QWORD *)a1 + 144LL);
  if ( *(_BYTE *)(a1 + 37) )
  {
    if ( (unsigned __int8)Endpoint_IsTransferRingEmpty() && (*(_QWORD *)(v13 + 736) & 0x200000LL) == 0 )
      return Endpoint_StreamsOnCancelSetDequeuePointerComplete(a1, a2);
    v6 = a2 - 1;
    v5 = 104LL * (a2 - 1) + *(_QWORD *)(a1 + 136) + 56LL;
  }
  else
  {
    v5 = a1 + 160;
    v6 = a2 - 1;
  }
  Endpoint_InitializeTransferRing(a1, a2);
  memset((void *)v5, 0, 0x60uLL);
  v7 = *(_DWORD *)(v5 + 36) & 0xFFFF43FF;
  *(_QWORD *)(v5 + 40) = Endpoint_OnCancelSetDequeuePointerCompletion;
  LODWORD(v7) = v7 | 0x4000;
  *(_QWORD *)(v5 + 48) = a1;
  *(_DWORD *)(v5 + 36) = v7;
  if ( *(_BYTE *)(a1 + 37) )
  {
    v8 = *(_QWORD *)(a1 + 136);
    if ( !a2 )
    {
      DequeuePointer = *(_QWORD *)(*(_QWORD *)(v8 + 32) + 24LL);
      goto LABEL_8;
    }
    v9 = *(_QWORD *)(104LL * v6 + v8 + 48);
  }
  else
  {
    v9 = *(_QWORD *)(a1 + 88);
  }
  DequeuePointer = TR_GetDequeuePointer(v9);
LABEL_8:
  *(_QWORD *)(v5 + 24) = DequeuePointer;
  *(_DWORD *)(v5 + 36) = v7 ^ (v7 ^ (*(_DWORD *)(a1 + 144) << 16)) & 0x1F0000;
  v11 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 16) + 135LL);
  *(_BYTE *)(v5 + 39) = v11;
  if ( *(_BYTE *)(a1 + 37) )
    *(_WORD *)(v5 + 34) = a2;
  *(_QWORD *)(v5 + 72) = 0LL;
  *(_DWORD *)(v5 + 80) = 0;
  *(_DWORD *)(v5 + 84) = 0;
  *(_QWORD *)(v5 + 88) = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dddi(*(_QWORD *)(a1 + 80), v11, *(_WORD *)(v5 + 38) & 0x1F, v7, v14);
  return Command_SendCommand(v4, v5);
}
