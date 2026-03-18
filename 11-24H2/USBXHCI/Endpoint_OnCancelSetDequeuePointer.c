/*
 * XREFs of Endpoint_OnCancelSetDequeuePointer @ 0x14000AB48
 * Callers:
 *     Endpoint_SM_UpdateTransferRingDequeuePointers @ 0x1400097B4 (Endpoint_SM_UpdateTransferRingDequeuePointers.c)
 * Callees:
 *     Endpoint_StreamsOnCancelSetDequeuePointerComplete @ 0x1400087C4 (Endpoint_StreamsOnCancelSetDequeuePointerComplete.c)
 *     Endpoint_IsTransferRingEmpty @ 0x140009ED8 (Endpoint_IsTransferRingEmpty.c)
 *     TR_GetDequeuePointer @ 0x14000A060 (TR_GetDequeuePointer.c)
 *     Endpoint_InitializeTransferRing @ 0x14000AAA8 (Endpoint_InitializeTransferRing.c)
 *     Command_SendCommand @ 0x14000BCD4 (Command_SendCommand.c)
 *     WPP_RECORDER_SF_dddi @ 0x14002C0D0 (WPP_RECORDER_SF_dddi.c)
 *     memset @ 0x140058EC0 (memset.c)
 */

PDEVICE_OBJECT __fastcall Endpoint_OnCancelSetDequeuePointer(__int64 a1, unsigned int a2)
{
  __int64 v4; // r14
  __int64 v5; // rbx
  unsigned int v6; // ebp
  unsigned int v7; // r9d
  int v8; // r9d
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int64 DequeuePointer; // rcx
  int v12; // edx
  __int64 v14; // r10

  v4 = *(_QWORD *)(*(_QWORD *)a1 + 144LL);
  if ( *(_BYTE *)(a1 + 37) )
  {
    if ( Endpoint_IsTransferRingEmpty(a1, a2) && (*(_QWORD *)(v14 + 736) & 0x200000LL) == 0 )
      return Endpoint_StreamsOnCancelSetDequeuePointerComplete(a1, a2);
    v6 = a2 - 1;
    v5 = 104LL * (a2 - 1) + *(_QWORD *)(a1 + 144) + 56LL;
  }
  else
  {
    v5 = a1 + 168;
    v6 = a2 - 1;
  }
  Endpoint_InitializeTransferRing((__int64 *)a1, a2);
  memset((void *)v5, 0, 0x60uLL);
  v7 = *(_DWORD *)(v5 + 36) & 0xFFFF43FF;
  *(_QWORD *)(v5 + 40) = Endpoint_OnCancelSetDequeuePointerCompletion;
  v8 = v7 | 0x4000;
  *(_QWORD *)(v5 + 48) = a1;
  *(_DWORD *)(v5 + 36) = v8;
  if ( *(_BYTE *)(a1 + 37) )
  {
    v9 = *(_QWORD *)(a1 + 144);
    if ( !a2 )
    {
      DequeuePointer = *(_QWORD *)(*(_QWORD *)(v9 + 32) + 24LL);
      goto LABEL_8;
    }
    v10 = *(_QWORD *)(104LL * v6 + v9 + 48);
  }
  else
  {
    v10 = *(_QWORD *)(a1 + 88);
  }
  DequeuePointer = TR_GetDequeuePointer(v10);
LABEL_8:
  *(_QWORD *)(v5 + 24) = DequeuePointer;
  *(_DWORD *)(v5 + 36) = v8 ^ (v8 ^ (*(_DWORD *)(a1 + 152) << 16)) & 0x1F0000;
  v12 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 16) + 143LL);
  *(_BYTE *)(v5 + 39) = v12;
  if ( *(_BYTE *)(a1 + 37) )
    *(_WORD *)(v5 + 34) = a2;
  *(_QWORD *)(v5 + 72) = 0LL;
  *(_DWORD *)(v5 + 80) = 0;
  *(_DWORD *)(v5 + 84) = 0;
  *(_QWORD *)(v5 + 88) = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dddi(*(_QWORD *)(a1 + 80), v12, *(_WORD *)(v5 + 38) & 0x1F, v8);
  return (PDEVICE_OBJECT)Command_SendCommand(v4, v5);
}
