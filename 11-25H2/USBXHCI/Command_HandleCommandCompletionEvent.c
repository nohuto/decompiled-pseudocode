/*
 * XREFs of Command_HandleCommandCompletionEvent @ 0x140008884
 * Callers:
 *     Interrupter_DeferredWorkProcessor @ 0x140025E20 (Interrupter_DeferredWorkProcessor.c)
 *     Interrupter_DeferredWorkProcessorWithVelocityFor48657796Disabled @ 0x140048624 (Interrupter_DeferredWorkProcessorWithVelocityFor48657796Disabled.c)
 * Callees:
 *     Command_InternalSendCommand @ 0x1400080E4 (Command_InternalSendCommand.c)
 *     DynamicLock_Acquire @ 0x1400087C0 (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x140008E60 (DynamicLock_Release.c)
 *     XilCommand_GetCommandRingBufferLogicalAddress @ 0x140008F24 (XilCommand_GetCommandRingBufferLogicalAddress.c)
 *     McTemplateK0ppb16qu_EtwWriteTransfer @ 0x140009CA8 (McTemplateK0ppb16qu_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_ @ 0x14000CCC8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x14000D338 (WPP_RECORDER_SF_dD.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x14001103C (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x140013068 (Controller_ReportFatalError.c)
 *     Controller_LowerAndTrackIrql @ 0x140019630 (Controller_LowerAndTrackIrql.c)
 *     Controller_RaiseAndTrackIrql @ 0x14001C700 (Controller_RaiseAndTrackIrql.c)
 *     WPP_RECORDER_SF_qLLdd @ 0x14002B04C (WPP_RECORDER_SF_qLLdd.c)
 *     Command_HandleCommandRingStoppedEvent @ 0x1400367E8 (Command_HandleCommandRingStoppedEvent.c)
 *     WPP_RECORDER_SF_qL @ 0x14003E154 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qii @ 0x14003E5E0 (WPP_RECORDER_SF_qii.c)
 *     Etw_CommandCompleteError @ 0x14004EFBC (Etw_CommandCompleteError.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

__int64 **__fastcall Command_HandleCommandCompletionEvent(__int64 a1, __int64 a2)
{
  bool v2; // zf
  char v5; // r12
  __int64 v6; // rcx
  int v7; // r8d
  int v8; // r9d
  __int64 v9; // r15
  __int64 *i; // rdi
  void *v11; // rdx
  void *v12; // rdx
  __int64 v13; // rsi
  __int64 ***v14; // rdi
  int v15; // ecx
  __int64 **v16; // rax
  __int64 ****v17; // rcx
  _QWORD *v18; // rax
  _QWORD *v19; // rax
  _QWORD *v20; // rdx
  __int64 v21; // rcx
  int v22; // edx
  int v23; // r8d
  __int64 *v24; // rdi
  __int64 **result; // rax
  __int64 *v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rcx
  unsigned int v29; // esi
  void (__fastcall *v30)(__int64, __int64 *); // rax
  int v31; // [rsp+20h] [rbp-40h]
  __int64 v32; // [rsp+20h] [rbp-40h]
  __int64 *v33; // [rsp+50h] [rbp-10h] BYREF
  __int64 **v34; // [rsp+58h] [rbp-8h]

  v2 = *(_BYTE *)(a2 + 11) == 24;
  v34 = &v33;
  v5 = 0;
  v33 = (__int64 *)&v33;
  if ( v2 )
    return (__int64 **)Command_HandleCommandRingStoppedEvent();
  if ( KeGetCurrentIrql() == 2 )
  {
    v6 = *(_QWORD *)(a1 + 8);
    if ( *(_BYTE *)(v6 + 1001) )
    {
      Controller_LowerAndTrackIrql(v6);
      v5 = 1;
    }
  }
  DynamicLock_Acquire(*(_QWORD *)(a1 + 112));
  v9 = a1 + 80;
  for ( i = *(__int64 **)(a1 + 80); ; i = (__int64 *)*i )
  {
    v11 = &WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids;
    if ( i == (__int64 *)v9 )
      goto LABEL_18;
    v13 = XilCommand_GetCommandRingBufferLogicalAddress(a1, &WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids)
        + 16LL * *((unsigned int *)i + 5);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        WPP_RECORDER_SF_qii(*(_QWORD *)(a1 + 16), (_DWORD)v12, v7, v8, v31, (char)i, v13, *(_QWORD *)a2);
        v12 = &WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v32 = (__int64)v12;
        LOBYTE(v12) = 5;
        WPP_RECORDER_SF_dD(*(_QWORD *)(a1 + 16), (_DWORD)v12, 7, 45, v32, *(_DWORD *)(a1 + 44), *(_DWORD *)(a1 + 40));
      }
    }
    if ( *(_QWORD *)a2 == v13 )
      break;
  }
  *((_DWORD *)i + 4) = 2;
  *((_BYTE *)i + 60) = *(_BYTE *)(a2 + 11);
  *((_DWORD *)i + 16) = *(_DWORD *)(a2 + 8) & 0xFFFFFF;
  if ( (*(_DWORD *)(a2 + 12) & 0xFC00) == 0x8400 )
    *((_BYTE *)i + 61) = *(_BYTE *)(a2 + 15);
  v11 = &WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids;
  if ( (*((_BYTE *)i + 62) & 2) != 0 )
    *(_OWORD *)(i + 3) = *(_OWORD *)a2;
LABEL_18:
  while ( 1 )
  {
    v14 = *(__int64 ****)(a1 + 80);
    if ( v14 == (__int64 ***)v9 )
      break;
    if ( *((_DWORD *)v14 + 4) != 2 )
    {
      if ( v33 == (__int64 *)&v33 && !*(_BYTE *)(a1 + 120) )
      {
        Controller_HwVerifierBreakIfEnabled(
          *(_QWORD *)(a1 + 8),
          0,
          0,
          0x10000,
          (__int64)"Controller completed a command out of order",
          *(_QWORD *)(a1 + 72) + 16LL * *(unsigned int *)(a1 + 44),
          a2);
        Controller_ReportFatalError(*(_QWORD *)(a1 + 8), 0, 4114, 0, 0LL, 0LL, 0LL);
        *(_BYTE *)(a1 + 120) = 1;
      }
      break;
    }
    v15 = *(_DWORD *)(a1 + 44) + 1;
    *(_DWORD *)(a1 + 44) = v15;
    if ( v15 == *(_DWORD *)(a1 + 48) )
    {
      *(_DWORD *)(a1 + 44) = 0;
      LOBYTE(v15) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LOBYTE(v11) = 5;
        WPP_RECORDER_SF_dD(
          *(_QWORD *)(a1 + 16),
          (_DWORD)v11,
          7,
          46,
          (__int64)&WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids,
          v15,
          *(_DWORD *)(a1 + 40));
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qLLdd(
          *(_QWORD *)(a1 + 16),
          *(unsigned __int8 *)(a2 + 15),
          *(_DWORD *)(a2 + 12) & 1,
          v8,
          v31,
          (char)v14,
          (unsigned __int16)*((_DWORD *)v14 + 9) >> 10,
          *(_BYTE *)(a2 + 11),
          *(_BYTE *)(a2 + 12) & 1,
          *(_BYTE *)(a2 + 15));
    }
    v16 = *v14;
    if ( (*v14)[1] != (__int64 *)v14
      || (v17 = (__int64 ****)v14[1], *v17 != v14)
      || (*v17 = (__int64 ***)v16, v16[1] = (__int64 *)v17, v18 = v34, *v34 != (__int64 *)&v33) )
    {
LABEL_56:
      __fastfail(3u);
    }
    v14[1] = v34;
    *v14 = &v33;
    *v18 = v14;
    v19 = (_QWORD *)(a1 + 96);
    v20 = *(_QWORD **)(a1 + 96);
    v34 = (__int64 **)v14;
    if ( v20 != (_QWORD *)(a1 + 96) )
    {
      if ( (_QWORD *)v20[1] != v19 )
        goto LABEL_56;
      v21 = *v20;
      if ( *(_QWORD **)(*v20 + 8LL) != v20 )
        goto LABEL_56;
      *v19 = v21;
      *(_QWORD *)(v21 + 8) = v19;
      Command_InternalSendCommand(a1, (__int64)v20, v7, v8);
    }
    v11 = &WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids;
  }
  if ( *(_QWORD *)(a1 + 80) == a1 + 80 )
  {
    if ( *(_BYTE *)(a1 + 121) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v11) = 4;
        WPP_RECORDER_SF_(
          *(_QWORD *)(a1 + 16),
          (_DWORD)v11,
          7,
          49,
          (__int64)&WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids);
      }
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LOBYTE(v11) = 5;
        WPP_RECORDER_SF_(
          *(_QWORD *)(a1 + 16),
          (_DWORD)v11,
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
    v24 = v33;
    result = &v33;
    if ( v33 == (__int64 *)&v33 )
      return result;
    if ( (__int64 **)v33[1] != &v33 )
      goto LABEL_56;
    v26 = (__int64 *)*v33;
    if ( *(__int64 **)(*v33 + 8) != v33 )
      goto LABEL_56;
    v33 = (__int64 *)*v33;
    v26[1] = (__int64)&v33;
    v27 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 168LL);
    if ( v27 )
    {
      v30 = *(void (__fastcall **)(__int64, __int64 *))(v27 + 24);
      if ( v30 )
        v30(v27, v24);
    }
    v28 = (unsigned int)*((unsigned __int8 *)v24 + 60) - 1;
    if ( *((_BYTE *)v24 + 60) == 1 )
    {
      v29 = 0;
    }
    else if ( *((_BYTE *)v24 + 60) == 25 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v22) = 4;
        WPP_RECORDER_SF_qL(
          *(_QWORD *)(a1 + 16),
          v22,
          7,
          50,
          (__int64)&WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids,
          (char)v24,
          (unsigned __int8)HIBYTE(*((_WORD *)v24 + 18)) >> 2);
      }
      v29 = 2;
    }
    else
    {
      v29 = 1;
    }
    if ( *((_BYTE *)v24 + 60) == 1 )
    {
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 0x20) != 0 )
        McTemplateK0ppb16qu_EtwWriteTransfer(
          v28,
          (unsigned int)&USBXHCI_ETW_EVENT_COMMAND_COMPLETE,
          v23,
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL),
          (char)v24,
          (__int64)(v24 + 3),
          v29,
          1);
    }
    else
    {
      Etw_CommandCompleteError(v28, a1, v24, v29);
    }
    ((void (__fastcall *)(__int64 *, _QWORD, __int64))v24[5])(v24, v29, a2);
  }
}
