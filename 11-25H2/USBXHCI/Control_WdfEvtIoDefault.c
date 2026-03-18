/*
 * XREFs of Control_WdfEvtIoDefault @ 0x140022110
 * Callers:
 *     <none>
 * Callees:
 *     Control_MapTransfer @ 0x140004680 (Control_MapTransfer.c)
 *     Control_TransferData_Initialize @ 0x140006CB0 (Control_TransferData_Initialize.c)
 *     Control_Transfer_CompleteCancelable @ 0x140012B50 (Control_Transfer_CompleteCancelable.c)
 *     Controller_LowerAndTrackIrql @ 0x140019630 (Controller_LowerAndTrackIrql.c)
 *     Controller_RaiseAndTrackIrql @ 0x14001C700 (Controller_RaiseAndTrackIrql.c)
 *     WPP_RECORDER_SF_DDqDq @ 0x140023F90 (WPP_RECORDER_SF_DDqDq.c)
 *     WPP_RECORDER_SF_DDd @ 0x140049AD8 (WPP_RECORDER_SF_DDd.c)
 *     __security_check_cookie @ 0x1400596A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

void __fastcall Control_WdfEvtIoDefault(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  char v4; // bp
  __int16 v5; // ax
  __int64 v6; // r14
  int v7; // edx
  __int64 v8; // rsi
  int v9; // r8d
  KIRQL v10; // al
  __int64 v11; // rdx
  int v12; // eax
  __int64 v13; // rdx
  char v14; // r8
  KIRQL v15; // dl
  _OWORD v16[2]; // [rsp+50h] [rbp-58h] BYREF
  __int64 v17; // [rsp+70h] [rbp-38h]

  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
         WdfDriverGlobals,
         a1,
         off_14006B1F0);
  v4 = 0;
  if ( KeGetCurrentIrql() != 2 )
    v4 = Controller_RaiseAndTrackIrql(*(_QWORD *)(v3 + 40));
  memset(v16, 0, sizeof(v16));
  v17 = 0LL;
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount <= 0x33 )
      v5 = -1;
    else
      v5 = *(_WORD *)(WdfStructures + 408);
  }
  else
  {
    v5 = 40;
  }
  LOWORD(v16[0]) = v5;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01033 + 2128))(
    WdfDriverGlobals,
    a2,
    v16);
  v6 = *((_QWORD *)&v16[0] + 1);
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
         WdfDriverGlobals,
         a2,
         off_14006AE88);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DDqDq(*(_QWORD *)(*(_QWORD *)(v3 + 56) + 80LL), v7, v9, *(_DWORD *)(*(_QWORD *)(v3 + 56) + 144LL));
  Control_TransferData_Initialize(v3, a2, v6, (_QWORD *)v8);
  v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 96));
  *(_QWORD *)(v3 + 360) = v8;
  *(_BYTE *)(v3 + 104) = v10;
  v11 = *(_QWORD *)(v8 + 24);
  *(_QWORD *)(v8 + 128) = 0LL;
  *(_DWORD *)(v8 + 112) = 1;
  v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)()))(WdfFunctions_01033 + 3144))(
          WdfDriverGlobals,
          v11,
          Control_WdfEvtRequestCancel);
  if ( v12 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v13 = *(_QWORD *)(v3 + 48);
      v14 = *(_BYTE *)(v13 + 135);
      LOBYTE(v13) = 3;
      WPP_RECORDER_SF_DDd(
        *(_QWORD *)(*(_QWORD *)(v3 + 56) + 80LL),
        v13,
        14,
        39,
        (__int64)&WPP_c4903a4407353a45c75e6304bdbc5226_Traceguids,
        v14,
        *(_DWORD *)(*(_QWORD *)(v3 + 56) + 144LL),
        v12);
    }
    *(_DWORD *)(v8 + 112) = 3;
    Control_Transfer_CompleteCancelable(v3);
    v15 = *(_BYTE *)(v3 + 104);
    goto LABEL_14;
  }
  v15 = *(_BYTE *)(v3 + 104);
  if ( *(_DWORD *)(v3 + 108) != 2 )
  {
LABEL_14:
    KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), v15);
    goto LABEL_15;
  }
  *(_DWORD *)(v3 + 108) = 3;
  KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), v15);
  Control_MapTransfer(v3);
LABEL_15:
  if ( v4 )
  {
    if ( KeGetCurrentIrql() == 2 )
      Controller_LowerAndTrackIrql(*(_QWORD **)(v3 + 40));
  }
}
