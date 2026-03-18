/*
 * XREFs of HUBSM_FindAndSetTargetState @ 0x14000B6C0
 * Callers:
 *     HUBSM_RunStateMachine @ 0x14000BEE4 (HUBSM_RunStateMachine.c)
 * Callees:
 *     HUBHTX_CompleteGetPortStatusWithFailedStatus @ 0x1400032F4 (HUBHTX_CompleteGetPortStatusWithFailedStatus.c)
 *     HUBSM_LogUnhandledEvent @ 0x14000BCD8 (HUBSM_LogUnhandledEvent.c)
 *     McTemplateK0ppqqqq_EtwWriteTransfer @ 0x14000C5B4 (McTemplateK0ppqqqq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_qLLL @ 0x14000C758 (WPP_RECORDER_SF_qLLL.c)
 *     HUBFDO_CompleteGetDescriptorRequest @ 0x14000CDAC (HUBFDO_CompleteGetDescriptorRequest.c)
 *     HUBMISC_DbgBreak @ 0x14002FAB8 (HUBMISC_DbgBreak.c)
 *     _guard_dispatch_icall @ 0x140045D00 (_guard_dispatch_icall.c)
 *     memset @ 0x1400460C0 (memset.c)
 */

char __fastcall HUBSM_FindAndSetTargetState(__int64 a1, unsigned int a2, _BYTE *a3)
{
  unsigned int v3; // r13d
  __int64 v5; // rcx
  unsigned int v6; // edi
  unsigned int v7; // r12d
  char v8; // bp
  __int64 v9; // r9
  __int64 v10; // rdx
  unsigned int v11; // ebx
  __int64 v12; // r8
  int v13; // eax
  _BYTE *v14; // r10
  struct _KEVENT *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rbx
  _QWORD *v18; // rdi
  __int64 v19; // rbx
  __int64 v20; // rax
  _UNKNOWN **v21; // rdx
  _QWORD *v22; // r15
  int v23; // esi
  int v24; // eax
  int v25; // r9d
  __int64 v26; // rax
  __int64 v27; // rcx
  int v28; // eax
  int v29; // r9d
  __int64 v30; // rax
  unsigned int v31; // edx
  int v33; // [rsp+20h] [rbp-78h]
  int v34; // [rsp+A0h] [rbp+8h]
  __int64 v37; // [rsp+B8h] [rbp+20h]

  v3 = *(_DWORD *)(a1 + 880);
  v5 = *(_QWORD *)(a1 + 976);
  v6 = a2;
  *a3 = 0;
  v7 = v3;
  v37 = v5;
  v8 = 1;
  v34 = *(_DWORD *)(a1 + 984);
  while ( 1 )
  {
    v9 = v7;
    LODWORD(v10) = 0;
    v11 = 1002;
    v12 = *(_QWORD *)(v5 + 8LL * (unsigned int)(*(_DWORD *)(a1 + 4LL * v7 + 852) - *(_DWORD *)(a1 + 984)));
    v13 = *(_DWORD *)(v12 + 32);
    if ( v13 != 1000 )
    {
      v5 = 0LL;
      while ( v6 != v13 )
      {
        v10 = (unsigned int)(v10 + 1);
        v5 = (unsigned int)v10;
        v13 = *(_DWORD *)(v12 + 8 * v10 + 32);
        if ( v13 == 1000 )
          goto LABEL_8;
      }
      v11 = *(_DWORD *)(v12 + 8 * v5 + 36);
      if ( v11 != 1002 )
        break;
LABEL_8:
      v5 = v37;
    }
    if ( !v7 )
      break;
    --v7;
  }
  v14 = a3;
  if ( v11 > 0x3EE )
  {
    switch ( v11 )
    {
      case 0x3EFu:
        v31 = -1073741630;
        break;
      case 0x3F0u:
        v31 = -1073741810;
        break;
      case 0x3F1u:
        v15 = (struct _KEVENT *)(*(_QWORD *)(a1 + 960) + 1608LL);
        goto LABEL_19;
      case 0x3F2u:
        v15 = (struct _KEVENT *)(*(_QWORD *)(a1 + 960) + 1584LL);
        goto LABEL_19;
      case 0x3F3u:
        v16 = 3027LL;
LABEL_21:
        (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(a1 + 960) + 8LL) + 1240LL))(
          *(_QWORD *)(*(_QWORD *)(a1 + 960) + 8LL),
          v16);
        return 0;
      default:
        goto LABEL_31;
    }
    HUBHTX_CompleteGetPortStatusWithFailedStatus(*(_QWORD *)(a1 + 960), v31);
    return 0;
  }
  switch ( v11 )
  {
    case 0x3EEu:
      v18 = *(_QWORD **)(a1 + 960);
      v19 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2280))(
              WdfDriverGlobals,
              v18[62]);
      memset((void *)(*(_QWORD *)(v19 + 184) - 72LL), 0, 0x48uLL);
      *(_DWORD *)(v19 + 48) = -1073741823;
      HUBFDO_CompleteGetDescriptorRequest(*v18, *(unsigned __int16 *)(v18[1] + 200LL), v18[62], -1073741823, 0);
      v20 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *))(WdfFunctions_01015 + 1632))(
              WdfDriverGlobals,
              v18);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015
                                                                                                + 1648))(
        WdfDriverGlobals,
        v20,
        "User Mode FDO Request",
        583LL,
        "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\smengine.c");
      return 0;
    case 0x3E8u:
      return 0;
    case 0x3EAu:
      HUBSM_LogUnhandledEvent(a1, v6);
      return 0;
    case 0x3EBu:
      v17 = *(_QWORD *)(a1 + 960);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01015 + 2104))(
        WdfDriverGlobals,
        *(_QWORD *)(v17 + 456),
        3221225473LL);
      if ( (*(_DWORD *)(v17 + 1636) & 0x40) != 0 )
      {
        *(_OWORD *)(a1 + 1012) = 0LL;
        _InterlockedAnd((volatile signed __int32 *)(v17 + 1636), 0xFFFFFFBF);
      }
      return 0;
    case 0x3ECu:
      v16 = 3011LL;
      goto LABEL_21;
    case 0x3EDu:
      v15 = (struct _KEVENT *)(*(_QWORD *)(a1 + 960) + 472LL);
LABEL_19:
      KeSetEvent(v15, 0, 0);
      return 0;
  }
LABEL_31:
  v21 = &WPP_RECORDER_INITIALIZED;
  if ( v7 >= v3 )
    goto LABEL_51;
  v22 = (_QWORD *)(a1 + 960);
  do
  {
    v23 = *(_DWORD *)(a1 + 4LL * (v3 - 1) + 852);
    v24 = *(_DWORD *)(a1 + 984);
    switch ( v24 )
    {
      case 2000:
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_46;
        v25 = 16;
        break;
      case 3000:
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_46;
        v22 = (_QWORD *)(a1 + 960);
        v25 = 17;
        break;
      case 4000:
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_46;
        v22 = (_QWORD *)(a1 + 960);
        v25 = 15;
        break;
      case 5000:
        v22 = (_QWORD *)(a1 + 960);
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_46;
        v25 = 18;
        break;
      default:
        goto LABEL_46;
    }
    WPP_RECORDER_SF_qLLL(
      v5,
      (_DWORD)v21,
      v12,
      v25,
      v33,
      *v22,
      *(_DWORD *)(a1 + 12LL * ((*(_BYTE *)(a1 + 832) - 1) & 0x3F) + 4),
      232,
      *(_DWORD *)(a1 + 4LL * (v3 - 1) + 852));
LABEL_46:
    *(_DWORD *)(a1 + 12LL * *(unsigned __int8 *)(a1 + 832) + 4) = v23;
    *(_DWORD *)(a1 + 12LL * *(unsigned __int8 *)(a1 + 832) + 8) = v3 - 1;
    v26 = *(unsigned __int8 *)(a1 + 832);
    LODWORD(v5) = 3 * v26;
    *(_DWORD *)(a1 + 12 * v26) = 1000;
    *(_BYTE *)(a1 + 832) = (*(_BYTE *)(a1 + 832) + 1) & 0x3F;
    if ( SBYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) >= 0 )
      v22 = (_QWORD *)(a1 + 960);
    else
      McTemplateK0ppqqqq_EtwWriteTransfer(
        v5,
        (unsigned int)&USBHUB3_ETW_EVENT_STATE_MACHINE,
        a1 + 1012,
        *(_QWORD *)(a1 + 1032),
        *v22,
        *(_DWORD *)(a1 + 984),
        **(_DWORD **)(*(_QWORD *)(a1 + 976) + 8LL * (unsigned int)(v23 - *(_DWORD *)(a1 + 984))),
        232,
        v3 - 1);
    --v3;
  }
  while ( v3 > v7 );
  v6 = a2;
  v21 = &WPP_RECORDER_INITIALIZED;
  v14 = a3;
  v9 = v7;
LABEL_51:
  v27 = *(_QWORD *)(v37 + 8LL * (unsigned int)(*(_DWORD *)(a1 + 4 * v9 + 852) - v34));
  if ( (*(_DWORD *)(v27 + 16) & 0x40) != 0 )
    *v14 = 1;
  *(_DWORD *)(a1 + 4 * v9 + 852) = v11;
  v28 = *(_DWORD *)(a1 + 984);
  *(_DWORD *)(a1 + 880) = v7;
  switch ( v28 )
  {
    case 2000:
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_66;
      v29 = 16;
      goto LABEL_65;
    case 3000:
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_66;
      v29 = 17;
      goto LABEL_65;
    case 4000:
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_66;
      v29 = 15;
LABEL_65:
      WPP_RECORDER_SF_qLLL(
        v27,
        (unsigned int)&WPP_RECORDER_INITIALIZED,
        v12,
        v29,
        v33,
        *(_QWORD *)(a1 + 960),
        *(_DWORD *)(a1 + 12LL * ((*(_BYTE *)(a1 + 832) - 1) & 0x3F) + 4),
        v6,
        v11);
      goto LABEL_66;
  }
  if ( v28 == 5000 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v29 = 18;
    goto LABEL_65;
  }
LABEL_66:
  *(_DWORD *)(a1 + 12LL * *(unsigned __int8 *)(a1 + 832) + 4) = v11;
  *(_DWORD *)(a1 + 12LL * *(unsigned __int8 *)(a1 + 832) + 8) = v7;
  v30 = *(unsigned __int8 *)(a1 + 832);
  *(_DWORD *)(a1 + 12 * v30) = v6;
  *(_BYTE *)(a1 + 832) = (*(_BYTE *)(a1 + 832) + 1) & 0x3F;
  if ( SBYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) < 0 )
    McTemplateK0ppqqqq_EtwWriteTransfer(
      3 * v30,
      (unsigned int)&USBHUB3_ETW_EVENT_STATE_MACHINE,
      a1 + 1012,
      *(_QWORD *)(a1 + 1032),
      *(_QWORD *)(a1 + 960),
      *(_DWORD *)(a1 + 984),
      **(_DWORD **)(*(_QWORD *)(a1 + 976) + 8LL * (v11 - *(_DWORD *)(a1 + 984))),
      v6,
      v7);
  if ( *(_BYTE *)(a1 + 1049) )
    HUBMISC_DbgBreak("Break On State Transition", v21);
  return v8;
}
