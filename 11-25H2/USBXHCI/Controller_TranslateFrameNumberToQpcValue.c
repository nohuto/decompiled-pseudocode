/*
 * XREFs of Controller_TranslateFrameNumberToQpcValue @ 0x1400327F4
 * Callers:
 *     Controller_UcxEvtGetFrameNumberAndQpcForTimeSync @ 0x1400322E0 (Controller_UcxEvtGetFrameNumberAndQpcForTimeSync.c)
 * Callees:
 *     Controller_GetFrameNumber @ 0x140015B50 (Controller_GetFrameNumber.c)
 *     Controller_GetQpcValueForFrameMicroFrameBoundary @ 0x1400407D4 (Controller_GetQpcValueForFrameMicroFrameBoundary.c)
 *     WPP_RECORDER_SF_dddd @ 0x140044E38 (WPP_RECORDER_SF_dddd.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Controller_TranslateFrameNumberToQpcValue(__int64 a1, LARGE_INTEGER *a2)
{
  unsigned int v2; // edi
  __int64 v3; // rbx
  __int64 v6; // rax
  _QWORD *v7; // rdx
  KIRQL v8; // bl
  unsigned int FrameNumber; // eax
  int HighPart; // r8d
  int v11; // r9d
  int v12; // r10d
  unsigned int v13; // ecx
  __int64 QpcValueForFrameMicroFrameBoundary; // rax
  int v15; // edx
  unsigned int LowPart; // ecx
  unsigned int v17; // r11d
  int v18; // r14d
  int v19; // r8d
  unsigned int v20; // r9d
  int v21; // r9d
  char v23; // [rsp+38h] [rbp-51h]
  char v24; // [rsp+40h] [rbp-49h]
  __int64 v25; // [rsp+60h] [rbp-29h] BYREF
  __int64 v26; // [rsp+68h] [rbp-21h] BYREF
  __int64 v27; // [rsp+70h] [rbp-19h] BYREF
  __int64 v28; // [rsp+78h] [rbp-11h] BYREF
  __int64 *v29; // [rsp+80h] [rbp-9h]
  __int64 *v30; // [rsp+88h] [rbp-1h]
  int *v31; // [rsp+90h] [rbp+7h]
  int *v32; // [rsp+98h] [rbp+Fh]
  int *v33; // [rsp+A0h] [rbp+17h]
  char v34; // [rsp+F0h] [rbp+67h] BYREF
  int v35; // [rsp+F8h] [rbp+6Fh] BYREF
  int v36; // [rsp+100h] [rbp+77h] BYREF
  int v37; // [rsp+108h] [rbp+7Fh] BYREF

  v2 = 0;
  v3 = a1 + 1072;
  v34 = 0;
  v29 = (__int64 *)&v34;
  v27 = 0LL;
  v30 = &v27;
  v36 = 0;
  v31 = &v36;
  v37 = 0;
  v32 = &v37;
  v35 = 0;
  v33 = &v35;
  v6 = *(_QWORD *)(a1 + 128);
  v26 = 0LL;
  v25 = 0LL;
  v7 = *(_QWORD **)(v6 + 40);
  v28 = a1 + 1072;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 (__fastcall *)(), __int64 *))(WdfFunctions_01033 + 1144))(
    WdfDriverGlobals,
    *v7,
    Interrupter_QueryBusEdgeInformationRoutineWithIsrSync,
    &v28);
  v29 = &v26;
  v28 = v3;
  v30 = &v25;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 (__fastcall *)(), __int64 *))(WdfFunctions_01033 + 1144))(
    WdfDriverGlobals,
    **(_QWORD **)(*(_QWORD *)(a1 + 128) + 40LL),
    Interrupter_ReadAccumulatedQpcAndFrameDataForTimeSync,
    &v28);
  v8 = KfRaiseIrql(2u);
  FrameNumber = Controller_GetFrameNumber(a1, 0, (unsigned int *)&a2[6], &a2[6].HighPart);
  HighPart = a2[6].HighPart;
  v11 = v35;
  v12 = v36;
  a2[7].LowPart = FrameNumber;
  v13 = HighPart + 8 * FrameNumber;
  if ( v13 < v11 + 8 * v12 )
  {
    a2[5] = KeQueryPerformanceCounter(0LL);
    goto LABEL_14;
  }
  QpcValueForFrameMicroFrameBoundary = Controller_GetQpcValueForFrameMicroFrameBoundary(
                                         v13,
                                         FrameNumber,
                                         HighPart,
                                         FrameNumber,
                                         HighPart,
                                         v34,
                                         v27,
                                         v12,
                                         v11,
                                         v26,
                                         v25,
                                         (__int64)&a2[4]);
  LowPart = a2[1].LowPart;
  a2[5].QuadPart = QpcValueForFrameMicroFrameBoundary;
  if ( LowPart || a2[1].HighPart )
  {
    v17 = a2[7].LowPart;
    v18 = a2[6].HighPart;
    v19 = a2[1].HighPart;
    v20 = v19 + 8 * LowPart;
    if ( v18 + 8 * v17 >= v20 )
    {
      v15 = v35;
      if ( v20 >= v35 + 8 * v36 )
      {
        a2[2].QuadPart = Controller_GetQpcValueForFrameMicroFrameBoundary(
                           LowPart,
                           v17,
                           v18,
                           LowPart,
                           v19,
                           v34,
                           v27,
                           v36,
                           v35,
                           v26,
                           v25,
                           (__int64)&a2[4]);
        goto LABEL_15;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v24 = v35;
        v21 = 321;
        v23 = v36;
        goto LABEL_8;
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v24 = a2[6].HighPart;
      v21 = 320;
      v23 = a2[7].LowPart;
LABEL_8:
      LOBYTE(v15) = 2;
      WPP_RECORDER_SF_dddd(
        *(_QWORD *)(a1 + 72),
        v15,
        4,
        v21,
        (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids,
        LowPart,
        v19,
        v23,
        v24);
    }
LABEL_14:
    v2 = -1073741811;
    goto LABEL_15;
  }
  a2[2].QuadPart = 0LL;
LABEL_15:
  KeLowerIrql(v8);
  return v2;
}
