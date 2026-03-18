/*
 * XREFs of Command_HandleCommandCompletionEvent @ 0x14000B740
 * Callers:
 *     Interrupter_DeferredWorkProcessor @ 0x140025820 (Interrupter_DeferredWorkProcessor.c)
 * Callees:
 *     Controller_HwVerifierBreakIfEnabled @ 0x1400049B4 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x140006A08 (Controller_ReportFatalError.c)
 *     Command_HandleCommandRingStoppedEvent @ 0x14000A09C (Command_HandleCommandRingStoppedEvent.c)
 *     DynamicLock_Acquire @ 0x14000BF40 (DynamicLock_Acquire.c)
 *     Command_InternalSendCommand @ 0x14000C004 (Command_InternalSendCommand.c)
 *     DynamicLock_Release @ 0x14000C970 (DynamicLock_Release.c)
 *     XilCommand_GetCommandRingBufferLogicalAddress @ 0x14000CA34 (XilCommand_GetCommandRingBufferLogicalAddress.c)
 *     McTemplateK0ppb16qu_EtwWriteTransfer @ 0x14000D4F8 (McTemplateK0ppb16qu_EtwWriteTransfer.c)
 *     Controller_RaiseAndTrackIrql @ 0x14000DA20 (Controller_RaiseAndTrackIrql.c)
 *     Controller_LowerAndTrackIrql @ 0x14000DC30 (Controller_LowerAndTrackIrql.c)
 *     WPP_RECORDER_SF_ @ 0x14001A724 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x14001BF58 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_qLLdd @ 0x14002A6F0 (WPP_RECORDER_SF_qLLdd.c)
 *     WPP_RECORDER_SF_qL @ 0x14003E044 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qii @ 0x14003E4D0 (WPP_RECORDER_SF_qii.c)
 *     Etw_CommandCompleteError @ 0x14004E65C (Etw_CommandCompleteError.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

__int64 **__fastcall Command_HandleCommandCompletionEvent(__int64 a1, __int64 a2)
{
  bool v2; // zf
  char v5; // r12
  int v6; // r9d
  __int64 v7; // r15
  __int64 *i; // rdi
  void *v9; // rdx
  void *v10; // rdx
  __int64 v11; // rsi
  int v12; // r8d
  __int64 ***v13; // rdi
  int v14; // ecx
  __int64 **v15; // rax
  __int64 ****v16; // rcx
  _QWORD *v17; // rax
  _QWORD *v18; // rax
  _QWORD *v19; // rdx
  __int64 v20; // rcx
  int v21; // edx
  int v22; // r8d
  __int64 *v23; // rdi
  __int64 **result; // rax
  __int64 *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rcx
  unsigned int v28; // esi
  void (__fastcall *v29)(__int64, __int64 *); // rax
  int v30; // [rsp+20h] [rbp-40h]
  __int64 v31; // [rsp+20h] [rbp-40h]
  __int64 *v32; // [rsp+50h] [rbp-10h] BYREF
  __int64 **v33; // [rsp+58h] [rbp-8h]

  v2 = *(_BYTE *)(a2 + 11) == 24;
  v33 = &v32;
  v5 = 0;
  v32 = (__int64 *)&v32;
  if ( v2 )
    return (__int64 **)Command_HandleCommandRingStoppedEvent(a1, (__int128 *)a2);
  if ( KeGetCurrentIrql() == 2 && *(_BYTE *)(*(_QWORD *)(a1 + 8) + 1001LL) )
  {
    Controller_LowerAndTrackIrql();
    v5 = 1;
  }
  DynamicLock_Acquire(*(_QWORD *)(a1 + 112));
  v7 = a1 + 80;
  for ( i = *(__int64 **)(a1 + 80); ; i = (__int64 *)*i )
  {
    v9 = &WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids;
    if ( i == (__int64 *)v7 )
      goto LABEL_18;
    v11 = XilCommand_GetCommandRingBufferLogicalAddress(a1, &WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids)
        + 16LL * *((unsigned int *)i + 5);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        WPP_RECORDER_SF_qii(*(_QWORD *)(a1 + 16), (_DWORD)v10, v12, v6, v30, (char)i, v11, *(_QWORD *)a2);
        v10 = &WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v31 = (__int64)v10;
        LOBYTE(v10) = 5;
        WPP_RECORDER_SF_dD(*(_QWORD *)(a1 + 16), (_DWORD)v10, 7, 45, v31, *(_DWORD *)(a1 + 44), *(_DWORD *)(a1 + 40));
      }
    }
    if ( *(_QWORD *)a2 == v11 )
      break;
  }
  *((_DWORD *)i + 4) = 2;
  *((_BYTE *)i + 60) = *(_BYTE *)(a2 + 11);
  *((_DWORD *)i + 16) = *(_DWORD *)(a2 + 8) & 0xFFFFFF;
  if ( (*(_DWORD *)(a2 + 12) & 0xFC00) == 0x8400 )
    *((_BYTE *)i + 61) = *(_BYTE *)(a2 + 15);
  v9 = &WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids;
  if ( (*((_BYTE *)i + 62) & 2) != 0 )
    *(_OWORD *)(i + 3) = *(_OWORD *)a2;
LABEL_18:
  while ( 1 )
  {
    v13 = *(__int64 ****)(a1 + 80);
    if ( v13 == (__int64 ***)v7 )
      break;
    if ( *((_DWORD *)v13 + 4) != 2 )
    {
      if ( v32 == (__int64 *)&v32 && !*(_BYTE *)(a1 + 120) )
      {
        Controller_HwVerifierBreakIfEnabled(
          *(_QWORD *)(a1 + 8),
          0,
          0,
          0x10000LL,
          "Controller completed a command out of order",
          (__int128 *)(*(_QWORD *)(a1 + 72) + 16LL * *(unsigned int *)(a1 + 44)),
          (__int128 *)a2);
        Controller_ReportFatalError(*(_QWORD *)(a1 + 8), 0, 4114, 0, 0LL, 0LL, 0LL);
        *(_BYTE *)(a1 + 120) = 1;
      }
      break;
    }
    v14 = *(_DWORD *)(a1 + 44) + 1;
    *(_DWORD *)(a1 + 44) = v14;
    if ( v14 == *(_DWORD *)(a1 + 48) )
    {
      *(_DWORD *)(a1 + 44) = 0;
      LOBYTE(v14) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LOBYTE(v9) = 5;
        WPP_RECORDER_SF_dD(
          *(_QWORD *)(a1 + 16),
          (_DWORD)v9,
          7,
          46,
          (__int64)&WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids,
          v14,
          *(_DWORD *)(a1 + 40));
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qLLdd(
          *(_QWORD *)(a1 + 16),
          *(unsigned __int8 *)(a2 + 15),
          *(_DWORD *)(a2 + 12) & 1,
          v6,
          v30,
          (char)v13,
          (unsigned __int16)*((_DWORD *)v13 + 9) >> 10,
          *(_BYTE *)(a2 + 11),
          *(_BYTE *)(a2 + 12) & 1,
          *(_BYTE *)(a2 + 15));
    }
    v15 = *v13;
    if ( (*v13)[1] != (__int64 *)v13
      || (v16 = (__int64 ****)v13[1], *v16 != v13)
      || (*v16 = (__int64 ***)v15, v15[1] = (__int64 *)v16, v17 = v33, *v33 != (__int64 *)&v32) )
    {
LABEL_56:
      __fastfail(3u);
    }
    v13[1] = v33;
    *v13 = &v32;
    *v17 = v13;
    v18 = (_QWORD *)(a1 + 96);
    v19 = *(_QWORD **)(a1 + 96);
    v33 = (__int64 **)v13;
    if ( v19 != (_QWORD *)(a1 + 96) )
    {
      if ( (_QWORD *)v19[1] != v18 )
        goto LABEL_56;
      v20 = *v19;
      if ( *(_QWORD **)(*v19 + 8LL) != v19 )
        goto LABEL_56;
      *v18 = v20;
      *(_QWORD *)(v20 + 8) = v18;
      Command_InternalSendCommand(a1);
    }
    v9 = &WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids;
  }
  if ( *(_QWORD *)(a1 + 80) == a1 + 80 )
  {
    if ( *(_BYTE *)(a1 + 121) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v9) = 4;
        WPP_RECORDER_SF_(
          *(_QWORD *)(a1 + 16),
          (_DWORD)v9,
          7,
          49,
          (__int64)&WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids);
      }
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LOBYTE(v9) = 5;
        WPP_RECORDER_SF_(
          *(_QWORD *)(a1 + 16),
          (_DWORD)v9,
          7,
          48,
          (__int64)&WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids);
      }
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01033 + 2560))(
        WdfDriverGlobals,
        *(_QWORD *)(a1 + 24),
        0LL);
    }
  }
  DynamicLock_Release(*(_QWORD *)(a1 + 112));
  if ( v5 )
    Controller_RaiseAndTrackIrql(*(_QWORD *)(a1 + 8));
  while ( 1 )
  {
    v23 = v32;
    result = &v32;
    if ( v32 == (__int64 *)&v32 )
      return result;
    if ( (__int64 **)v32[1] != &v32 )
      goto LABEL_56;
    v25 = (__int64 *)*v32;
    if ( *(__int64 **)(*v32 + 8) != v32 )
      goto LABEL_56;
    v32 = (__int64 *)*v32;
    v25[1] = (__int64)&v32;
    v26 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 168LL);
    if ( v26 )
    {
      v29 = *(void (__fastcall **)(__int64, __int64 *))(v26 + 24);
      if ( v29 )
        v29(v26, v23);
    }
    v27 = (unsigned int)*((unsigned __int8 *)v23 + 60) - 1;
    if ( *((_BYTE *)v23 + 60) == 1 )
    {
      v28 = 0;
    }
    else if ( *((_BYTE *)v23 + 60) == 25 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v21) = 4;
        WPP_RECORDER_SF_qL(
          *(_QWORD *)(a1 + 16),
          v21,
          7,
          50,
          (__int64)&WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids,
          (char)v23,
          (unsigned __int8)HIBYTE(*((_WORD *)v23 + 18)) >> 2);
      }
      v28 = 2;
    }
    else
    {
      v28 = 1;
    }
    if ( *((_BYTE *)v23 + 60) == 1 )
    {
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 0x20) != 0 )
        McTemplateK0ppb16qu_EtwWriteTransfer(
          v27,
          (unsigned int)&USBXHCI_ETW_EVENT_COMMAND_COMPLETE,
          v22,
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL),
          (char)v23,
          (__int64)(v23 + 3),
          v28,
          1);
    }
    else
    {
      Etw_CommandCompleteError(v27, a1, v23, v28);
    }
    ((void (__fastcall *)(__int64 *, _QWORD, __int64))v23[5])(v23, v28, a2);
  }
}
