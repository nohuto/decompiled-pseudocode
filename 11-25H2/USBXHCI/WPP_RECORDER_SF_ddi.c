/*
 * XREFs of WPP_RECORDER_SF_DDi @ 0x1400370AC
 * Callers:
 *     Control_MapTransfer @ 0x140004680 (Control_MapTransfer.c)
 *     Isoch_ProcessTransferEventWithED1 @ 0x140016B10 (Isoch_ProcessTransferEventWithED1.c)
 *     Isoch_Stage_Find @ 0x140017210 (Isoch_Stage_Find.c)
 *     Isoch_RetrieveNextStage @ 0x14001CE90 (Isoch_RetrieveNextStage.c)
 *     Isoch_TransferData_Initialize @ 0x1400237C0 (Isoch_TransferData_Initialize.c)
 *     TR_ValidateSecureTransferType @ 0x140023D80 (TR_ValidateSecureTransferType.c)
 *     Isoch_WdfEvtRequestCancel @ 0x140033CA0 (Isoch_WdfEvtRequestCancel.c)
 *     Control_WdfEvtTimerForTransferTimeout @ 0x140036E60 (Control_WdfEvtTimerForTransferTimeout.c)
 *     Control_ValidateED0TrbPointerOnMismatch @ 0x14003C710 (Control_ValidateED0TrbPointerOnMismatch.c)
 *     Control_WdfEvtIoCanceledOnQueue @ 0x14004C400 (Control_WdfEvtIoCanceledOnQueue.c)
 *     Control_WdfEvtRequestCancel @ 0x14004C610 (Control_WdfEvtRequestCancel.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

__int64 WPP_RECORDER_SF_DDi(__int64 a1, unsigned __int8 a2, __int64 a3, unsigned __int16 a4, __int64 a5, ...)
{
  unsigned int v7; // ebx
  int v9; // [rsp+20h] [rbp-48h]
  __int64 v10; // [rsp+98h] [rbp+30h] BYREF
  va_list va; // [rsp+98h] [rbp+30h]
  __int64 v12; // [rsp+A0h] [rbp+38h] BYREF
  va_list va1; // [rsp+A0h] [rbp+38h]
  va_list va2; // [rsp+A8h] [rbp+40h] BYREF

  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v10 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v12 = va_arg(va2, _QWORD);
  v7 = a2;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= a2 )
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, __int64, _QWORD, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      a5,
      a4,
      (__int64 *)va,
      4LL,
      (__int64 *)va1,
      4LL,
      va2,
      8LL,
      0LL);
  LOWORD(v9) = a4;
  return WppAutoLogTrace(a1, v7, 14LL, a5, v9, (__int64 *)va, 4LL, (__int64 *)va1, 4LL, va2);
}
