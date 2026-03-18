/*
 * XREFs of Command_InternalSendCommand @ 0x1400080E4
 * Callers:
 *     Command_SendCommand @ 0x140008550 (Command_SendCommand.c)
 *     Command_HandleCommandCompletionEvent @ 0x140008884 (Command_HandleCommandCompletionEvent.c)
 *     Command_HandleCommandRingStoppedEvent @ 0x1400367E8 (Command_HandleCommandRingStoppedEvent.c)
 *     Command_ControllerResetPostResetSuccess @ 0x14003D270 (Command_ControllerResetPostResetSuccess.c)
 *     Command_WdfEvtWatchdogTimerFunction @ 0x14003D7A0 (Command_WdfEvtWatchdogTimerFunction.c)
 * Callees:
 *     WPP_RECORDER_SF_ddL @ 0x140001D34 (WPP_RECORDER_SF_ddL.c)
 *     McTemplateK0ppb16_EtwWriteTransfer @ 0x14000805C (McTemplateK0ppb16_EtwWriteTransfer.c)
 *     XilCoreCommand_AddCommandTRBToRing @ 0x14000A19C (XilCoreCommand_AddCommandTRBToRing.c)
 *     XilCommand_SendAddCommandCRBToRingRequest @ 0x14000AACC (XilCommand_SendAddCommandCRBToRingRequest.c)
 *     WPP_RECORDER_SF_ @ 0x14000CCC8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qLq @ 0x14002AF3C (WPP_RECORDER_SF_qLq.c)
 *     Command_ProcessCrbCompletion @ 0x14002F8F8 (Command_ProcessCrbCompletion.c)
 *     Command_StartCommandWatchdogTimer @ 0x14002FA30 (Command_StartCommandWatchdogTimer.c)
 *     Etw_CommandWaitlisted @ 0x140034610 (Etw_CommandWaitlisted.c)
 *     WPP_RECORDER_SF_qddd @ 0x14003E374 (WPP_RECORDER_SF_qddd.c)
 *     WPP_RECORDER_SF_qdqddd @ 0x14003E488 (WPP_RECORDER_SF_qdqddd.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

char __fastcall Command_InternalSendCommand(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rdx
  int v9; // r10d
  _DWORD *v10; // r14
  int v11; // ecx
  _QWORD *v12; // r8
  __int64 v13; // rdx
  __int64 *v14; // rcx
  __int64 v15; // rbp
  __int64 *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r9
  __int64 v19; // rdi
  BOOL v20; // ecx
  int v21; // eax
  __int64 v22; // rcx
  signed __int32 v24[8]; // [rsp+0h] [rbp-88h] BYREF
  __int64 v25; // [rsp+20h] [rbp-68h]
  __int64 v26; // [rsp+28h] [rbp-60h]
  __int64 v27; // [rsp+30h] [rbp-58h]
  __int64 v28; // [rsp+38h] [rbp-50h]

  v6 = *(unsigned int *)(a1 + 36);
  if ( (unsigned int)(v6 - 2) <= 1 )
  {
    v18 = 4LL;
    goto LABEL_34;
  }
  if ( *(_BYTE *)(a1 + 121) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qLq(
        *(_QWORD *)(a1 + 16),
        a2,
        a3,
        51,
        v25,
        a2,
        (unsigned __int8)HIBYTE(*(_WORD *)(a2 + 36)) >> 2,
        *(_QWORD *)(a2 + 48));
    v18 = 3LL;
LABEL_34:
    Etw_CommandWaitlisted(v6, a1, a2, v18);
    v16 = *(__int64 **)(a1 + 104);
    v19 = a1 + 96;
    if ( *v16 == v19 )
    {
      *(_QWORD *)a2 = v19;
      *(_QWORD *)(a2 + 8) = v16;
      *v16 = a2;
      *(_QWORD *)(v19 + 8) = a2;
      return (char)v16;
    }
    goto LABEL_30;
  }
  if ( (_DWORD)v6 == 4 )
  {
    LOBYTE(v16) = Command_ProcessCrbCompletion(a2, 3LL);
    return (char)v16;
  }
  if ( *(_QWORD *)(a1 + 80) != a1 + 80 && _bittest64((const signed __int64 *)(*(_QWORD *)(a1 + 8) + 736LL), 0x1Fu) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qLq(
        *(_QWORD *)(a1 + 16),
        a2,
        a3,
        52,
        v25,
        a2,
        (unsigned __int8)HIBYTE(*(_WORD *)(a2 + 36)) >> 2,
        *(_QWORD *)(a2 + 48));
    v18 = 2LL;
    goto LABEL_34;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qLq(
      *(_QWORD *)(a1 + 16),
      a2,
      a3,
      53,
      v25,
      a2,
      (unsigned __int8)HIBYTE(*(_WORD *)(a2 + 36)) >> 2,
      *(_QWORD *)(a2 + 48));
  *(_DWORD *)(a2 + 56) = 10;
  v7 = *(unsigned int *)(a1 + 40);
  v8 = 0LL;
  v9 = *(_DWORD *)(a1 + 44);
  if ( (_DWORD)v7 + 1 != *(_DWORD *)(a1 + 48) )
    v8 = (unsigned int)(v7 + 1);
  if ( (_DWORD)v8 == v9 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_qddd(*(_QWORD *)(a1 + 16), v8, v7, a4, v25, a2, v7, v9, v8);
    *(_DWORD *)(a2 + 16) = 0;
    v18 = 1LL;
    goto LABEL_34;
  }
  v10 = (_DWORD *)(a1 + 40);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    WPP_RECORDER_SF_qdqddd(
      *(_QWORD *)(a1 + 16),
      v8,
      v7,
      a4,
      v25,
      a2,
      v7,
      *(_BYTE *)(a1 + 72) + 16 * v7,
      v9,
      *(_DWORD *)(a1 + 64),
      v8);
    v10 = (_DWORD *)(a1 + 40);
  }
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 0x20) != 0 )
    McTemplateK0ppb16_EtwWriteTransfer(v6, v8, v7, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL), a2, a2 + 24);
  else
    v10 = (_DWORD *)(a1 + 40);
  *(_DWORD *)(a2 + 36) = *(_DWORD *)(a2 + 36) & 0xFFFFFFFE | (*(_DWORD *)(a1 + 64) != 1);
  *(_OWORD *)(*(_QWORD *)(a1 + 72) + 16LL * (unsigned int)*v10) = *(_OWORD *)(a2 + 24);
  if ( *(_BYTE *)(a1 + 136) )
  {
    v11 = XilCommand_SendAddCommandCRBToRingRequest(a1 + 136, a2);
  }
  else
  {
    XilCoreCommand_AddCommandTRBToRing(a1 + 168, a2 + 24);
    v11 = 0;
  }
  v12 = (_QWORD *)(a1 + 72);
  if ( *(_QWORD *)(a1 + 152) )
  {
    **(_DWORD **)(a1 + 152) = 0;
    _InterlockedOr(v24, 0);
    v12 = (_QWORD *)(a1 + 72);
  }
  if ( v11 < 0 )
  {
    LOBYTE(v16) = (*(__int64 (__fastcall **)(__int64, __int64))(a2 + 40))(a2, 1LL);
    return (char)v16;
  }
  v13 = 2LL * (unsigned int)*v10;
  *(_BYTE *)(*(_QWORD *)(a1 + 72) + 16LL * (unsigned int)*v10 + 12) ^= 1u;
  _InterlockedOr(v24, 0);
  *(_DWORD *)(a2 + 16) = 1;
  *(_DWORD *)(a2 + 20) = *v10;
  v14 = *(__int64 **)(a1 + 88);
  v15 = *(_QWORD *)(a1 + 80);
  if ( *v14 != a1 + 80 )
LABEL_30:
    __fastfail(3u);
  *(_QWORD *)a2 = a1 + 80;
  *(_QWORD *)(a2 + 8) = v14;
  *v14 = a2;
  *(_QWORD *)(a1 + 88) = a2;
  LODWORD(v16) = ++*v10;
  v17 = *(unsigned int *)(a1 + 48);
  if ( *v10 == (_DWORD)v17 )
  {
    v13 = 2 * v17;
    LOBYTE(v16) = *(_BYTE *)(*v12 + 16 * v17 + 12) ^ 1;
    *(_BYTE *)(*v12 + 16 * v17 + 12) = (_BYTE)v16;
    _InterlockedOr(v24, 0);
    v20 = *(_DWORD *)(a1 + 64) != 1;
    *(_DWORD *)(a1 + 64) = v20;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v16) = (_BYTE)WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v21 = *(_DWORD *)(a1 + 48);
        LODWORD(v28) = v20;
        v22 = *(_QWORD *)(a1 + 16);
        LODWORD(v27) = v21;
        LODWORD(v26) = *(_DWORD *)(a1 + 40);
        LOBYTE(v16) = WPP_RECORDER_SF_ddL(
                        v22,
                        5u,
                        7u,
                        0x38u,
                        (__int64)&WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids,
                        v26,
                        v27,
                        v28);
      }
    }
    *(_DWORD *)(a1 + 40) = 0;
  }
  if ( v15 == a1 + 80 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v13) = 5;
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 16), v13, 7, 57, (__int64)&WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids);
    }
    LOBYTE(v16) = Command_StartCommandWatchdogTimer(a1, v13, v12);
  }
  return (char)v16;
}
