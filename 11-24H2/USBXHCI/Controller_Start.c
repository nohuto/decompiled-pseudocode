/*
 * XREFs of Controller_Start @ 0x14001B1F0
 * Callers:
 *     Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled @ 0x140037740 (Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled.c)
 *     Controller_InternalReset @ 0x1400406EC (Controller_InternalReset.c)
 * Callees:
 *     Controller_IsControllerAccessible @ 0x14000BE64 (Controller_IsControllerAccessible.c)
 *     DynamicLock_Acquire @ 0x14000BF40 (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x14000C970 (DynamicLock_Release.c)
 *     XilRegister_ReadUlong @ 0x14000D210 (XilRegister_ReadUlong.c)
 *     Debug_FreAssertMsg @ 0x140019AC8 (Debug_FreAssertMsg.c)
 *     WPP_RECORDER_SF_ @ 0x14001A724 (WPP_RECORDER_SF_.c)
 *     XilRegister_WriteUlong @ 0x14001BA28 (XilRegister_WriteUlong.c)
 *     Register_GetExtendedTBCTRBStatusSupported @ 0x14001BA64 (Register_GetExtendedTBCTRBStatusSupported.c)
 *     Register_GetExtendedTBCEnable @ 0x14001BA8C (Register_GetExtendedTBCEnable.c)
 *     WPP_RECORDER_SF_I @ 0x14002E390 (WPP_RECORDER_SF_I.c)
 *     Controller_DetectFrameMicroframeBoundary @ 0x14003FC38 (Controller_DetectFrameMicroframeBoundary.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Controller_Start(__int64 a1)
{
  unsigned int v1; // esi
  __int64 v3; // r12
  __int64 *v4; // r14
  __int64 v5; // rcx
  unsigned int *v6; // r13
  int Ulong; // eax
  char v8; // bl
  unsigned int v9; // eax
  char ExtendedTBCEnable; // di
  int v11; // r9d
  char v12; // dl
  int v13; // eax
  int v14; // edi
  int v15; // r8d
  unsigned int v16; // edi
  __int64 v17; // rcx
  int v18; // eax
  unsigned int v19; // edi
  ULONGLONG v20; // r15
  int v21; // r8d
  unsigned int i; // edi
  int v23; // r14d
  unsigned int j; // edi
  ULONGLONG v26; // rcx
  int v27; // r8d
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rdx
  __int64 v30; // rcx
  unsigned int *v31; // rbx
  int v32; // eax
  int Timeout; // [rsp+20h] [rbp-68h]
  struct _KEVENT Event; // [rsp+30h] [rbp-58h] BYREF
  ULONGLONG UnbiasedInterruptTime; // [rsp+90h] [rbp+8h]
  unsigned int *v36; // [rsp+98h] [rbp+10h]

  v1 = 0;
  memset(&Event, 0, sizeof(Event));
  if ( *(_BYTE *)(a1 + 1001) && KeGetCurrentIrql() )
    Debug_FreAssertMsg(
      (__int64)"Code Path Requires Passive Level",
      0,
      (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\controller.c",
      4477);
  v3 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), 4, 4, 121, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids);
  if ( !Controller_IsControllerAccessible(a1) )
    return v1;
  v4 = (__int64 *)(a1 + 88);
  v5 = *(_QWORD *)(a1 + 88);
  v6 = *(unsigned int **)(v5 + 32);
  v36 = v6 + 1;
  Ulong = XilRegister_ReadUlong(v5, v6 + 1);
  v8 = Ulong;
  if ( Ulong == -1 )
    return v1;
  if ( (Ulong & 1) == 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), 2, 4, 122, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids);
    return (unsigned int)-1073741630;
  }
  XilRegister_WriteUlong(*v4, *(_QWORD *)(*v4 + 32) + 20LL, 2LL);
  v9 = XilRegister_ReadUlong(*v4, v6);
  ExtendedTBCEnable = Register_GetExtendedTBCEnable(*v4, *(unsigned int *)(*v4 + 108), *(unsigned int *)(*v4 + 80), v9);
  *(_BYTE *)(a1 + 1005) = ExtendedTBCEnable;
  v13 = v11 | 0x10000;
  v14 = (v12 & 2 | (4 * (ExtendedTBCEnable & 1))) << 12;
  if ( v15 != 3 )
    v13 = v11;
  v16 = v13 & 0xFFFF9FFF | v14 | 5;
  *(_BYTE *)(a1 + 1006) = Register_GetExtendedTBCTRBStatusSupported();
  if ( !(unsigned __int8)Register_GetExtendedTBCTRBStatusSupported() )
    goto LABEL_12;
  if ( (*(_QWORD *)(*(_QWORD *)(v17 + 8) + 744LL) & 0x1000LL) != 0 )
  {
    v4 = (__int64 *)(a1 + 88);
LABEL_12:
    v18 = 0;
    goto LABEL_13;
  }
  v18 = 0x8000;
LABEL_13:
  v19 = v18 | v16 & 0xFFFF7FFF;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), 4, 4, 123, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids);
  UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
  v20 = 0LL;
  XilRegister_WriteUlong(*v4, v6, v19);
  for ( i = 0; i < 0x32; ++i )
  {
    KeStallExecutionProcessor(0x64u);
    v8 = XilRegister_ReadUlong(*v4, v36);
    if ( (v8 & 1) == 0 )
    {
      v20 = KeQueryUnbiasedInterruptTime();
      break;
    }
  }
  if ( (v8 & 1) == 0 )
    goto LABEL_20;
  v3 = ExAllocateTimer(&Controller_HighResTimerCompletion, &Event, 4LL);
  if ( !v3 )
    return (unsigned int)-1073741670;
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  for ( j = 0; j < 7; ++j )
  {
    ExSetTimer(v3, -50000LL, 0LL, 0LL);
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    v8 = XilRegister_ReadUlong(*(_QWORD *)(a1 + 88), v36);
    if ( (v8 & 1) == 0 )
    {
      v20 = KeQueryUnbiasedInterruptTime();
      break;
    }
  }
  if ( (v8 & 1) != 0 )
  {
    v26 = KeQueryUnbiasedInterruptTime();
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v28 = (v26 - UnbiasedInterruptTime) / 0x2710;
      LOBYTE(v28) = 2;
      WPP_RECORDER_SF_I(*(_QWORD *)(a1 + 72), v28, v27, 124, Timeout, (v26 - UnbiasedInterruptTime) / 0x2710);
    }
  }
  else
  {
LABEL_20:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v29 = (v20 - UnbiasedInterruptTime) / 0xA;
      LOBYTE(v29) = 4;
      WPP_RECORDER_SF_I(*(_QWORD *)(a1 + 72), v29, v21, 125, Timeout, (v20 - UnbiasedInterruptTime) / 0xA);
    }
  }
  DynamicLock_Acquire(*(_QWORD *)(a1 + 1072));
  ++*(_DWORD *)(a1 + 1080);
  v23 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01033 + 112))(
          WdfDriverGlobals,
          *(_QWORD *)(a1 + 1088));
  if ( v23 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 (__fastcall *)(), __int64))(WdfFunctions_01033 + 1144))(
      WdfDriverGlobals,
      **(_QWORD **)(*(_QWORD *)(a1 + 128) + 40LL),
      Interrupter_ClearBusEdgeInformationRoutineWithIsrSync,
      a1 + 1064);
    v30 = *(_QWORD *)(a1 + 88);
    v31 = *(unsigned int **)(v30 + 32);
    v32 = XilRegister_ReadUlong(v30, v31);
    XilRegister_WriteUlong(*(_QWORD *)(a1 + 88), v31, v32 | 0x400u);
    *(_BYTE *)(a1 + 1064) = 1;
  }
  DynamicLock_Release(*(_QWORD *)(a1 + 1072));
  if ( v23 )
    Controller_DetectFrameMicroframeBoundary(a1);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01033 + 2552))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 760),
    -50000000LL);
  if ( v3 )
    ExDeleteTimer(v3, 0LL, 0LL, 0LL);
  return v1;
}
