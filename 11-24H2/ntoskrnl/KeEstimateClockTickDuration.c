/*
 * XREFs of KeEstimateClockTickDuration @ 0x1404C560C
 * Callers:
 *     PpmEstimateIdleDuration @ 0x1404BC1F4 (PpmEstimateIdleDuration.c)
 * Callees:
 *     Feature_Servicing_Kernel_ClockTickIdleEstimateFix__private_IsEnabledNoReportingNoInline @ 0x1402ABB08 (Feature_Servicing_Kernel_ClockTickIdleEstimateFix__private_IsEnabledNoReportingNoInline.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KiGetClockTimerEarliestDeadline @ 0x140317F70 (KiGetClockTimerEarliestDeadline.c)
 *     KiGetNextTimerExpirationDueTime @ 0x1405B91E0 (KiGetNextTimerExpirationDueTime.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

int *__fastcall KeEstimateClockTickDuration(
        __int64 a1,
        char a2,
        char a3,
        char a4,
        char a5,
        unsigned __int64 a6,
        _QWORD *a7,
        int *a8)
{
  __int64 v8; // r14
  __int64 v11; // rsi
  int IsEnabledNoReportingNoInline; // eax
  int v13; // edx
  int v14; // r9d
  __int64 v15; // r11
  int ClockTimerEarliestDeadline; // eax
  unsigned __int64 v17; // rbx
  int v18; // edi
  int v19; // eax
  int *result; // rax
  char v21; // [rsp+50h] [rbp-B0h] BYREF
  char v22; // [rsp+51h] [rbp-AFh] BYREF
  char v23; // [rsp+52h] [rbp-AEh] BYREF
  char v24; // [rsp+53h] [rbp-ADh] BYREF
  char v25; // [rsp+54h] [rbp-ACh] BYREF
  int v26; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v27; // [rsp+60h] [rbp-A0h] BYREF
  int v28; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v29; // [rsp+70h] [rbp-90h] BYREF
  _QWORD *v30; // [rsp+78h] [rbp-88h] BYREF
  __int64 v31; // [rsp+80h] [rbp-80h] BYREF
  int *v32; // [rsp+88h] [rbp-78h]
  struct _EVENT_DATA_DESCRIPTOR v33; // [rsp+90h] [rbp-70h] BYREF
  _QWORD **v34; // [rsp+B0h] [rbp-50h]
  __int64 v35; // [rsp+B8h] [rbp-48h]
  char *v36; // [rsp+C0h] [rbp-40h]
  __int64 v37; // [rsp+C8h] [rbp-38h]
  unsigned __int64 *v38; // [rsp+D0h] [rbp-30h]
  __int64 v39; // [rsp+D8h] [rbp-28h]
  unsigned __int64 *v40; // [rsp+E0h] [rbp-20h]
  __int64 v41; // [rsp+E8h] [rbp-18h]
  int *v42; // [rsp+F0h] [rbp-10h]
  __int64 v43; // [rsp+F8h] [rbp-8h]
  __int64 *v44; // [rsp+100h] [rbp+0h]
  __int64 v45; // [rsp+108h] [rbp+8h]
  int *v46; // [rsp+110h] [rbp+10h]
  __int64 v47; // [rsp+118h] [rbp+18h]
  char *v48; // [rsp+120h] [rbp+20h]
  __int64 v49; // [rsp+128h] [rbp+28h]
  char *v50; // [rsp+130h] [rbp+30h]
  __int64 v51; // [rsp+138h] [rbp+38h]
  char *v52; // [rsp+140h] [rbp+40h]
  __int64 v53; // [rsp+148h] [rbp+48h]
  char *v54; // [rsp+150h] [rbp+50h]
  __int64 v55; // [rsp+158h] [rbp+58h]

  v8 = -1LL;
  v30 = a7;
  v32 = a8;
  v11 = -1LL;
  v28 = KiClockState;
  v29 = -1LL;
  v26 = 7;
  v22 = a4;
  v21 = a3;
  IsEnabledNoReportingNoInline = Feature_Servicing_Kernel_ClockTickIdleEstimateFix__private_IsEnabledNoReportingNoInline();
  v15 = 0LL;
  if ( IsEnabledNoReportingNoInline && KiClockTimerPerCpuTickScheduling )
  {
    ClockTimerEarliestDeadline = KiGetClockTimerEarliestDeadline(a1, 0);
    v26 = ClockTimerEarliestDeadline;
    if ( ClockTimerEarliestDeadline >= 7 )
    {
      v17 = -1LL;
      v18 = v15;
      goto LABEL_8;
    }
    v17 = *(_QWORD *)(a1 + 16LL * ClockTimerEarliestDeadline + 38296)
        + *(unsigned int *)(a1 + 16LL * ClockTimerEarliestDeadline + 38304);
  }
  else
  {
    v17 = KiClockTimerNextTickTime;
  }
  v18 = 2;
LABEL_8:
  LODWORD(v27) = v18;
  if ( *(_BYTE *)(a1 + 33) == (_BYTE)v15 )
  {
    LOBYTE(v14) = v21;
    KiGetNextTimerExpirationDueTime(a1, 0, a6, v14, v22, a5, (__int64)&v29, (__int64)&v27, v15);
    v19 = Feature_Servicing_Kernel_ClockTickIdleEstimateFix__private_IsEnabledNoReportingNoInline();
    v11 = v29;
    v15 = 0LL;
    if ( !v19 )
    {
      if ( v17 <= v29 )
        v17 = v29;
      goto LABEL_24;
    }
    if ( v17 != -1LL && v17 >= v29 )
    {
      v18 = 2;
      goto LABEL_20;
    }
  }
  else
  {
    if ( !a2 )
      goto LABEL_25;
    if ( (_BYTE)KiDynamicTickDisableReason != (_BYTE)v15 || v28 != (_DWORD)v15 )
    {
      a2 = v15;
      goto LABEL_25;
    }
    LOBYTE(v14) = v21;
    LOBYTE(v13) = 1;
    KiGetNextTimerExpirationDueTime(a1, v13, a6, v14, v22, a5, (__int64)&v29, (__int64)&v27, v15);
    v15 = 0LL;
    v11 = v29;
    if ( a6 + (unsigned int)KiLastRequestedTimeIncrement >= v29 )
    {
      v18 = 2;
      goto LABEL_25;
    }
  }
  v17 = v11;
LABEL_24:
  v18 = v27;
LABEL_25:
  if ( v17 == -1LL )
  {
    v18 = v15;
    goto LABEL_28;
  }
LABEL_20:
  if ( v17 <= a6 )
    v8 = v15;
  else
    v8 = v17 - a6;
LABEL_28:
  *v30 = v8;
  if ( (unsigned int)dword_140E07080 > 5 )
  {
    v30 = (_QWORD *)a6;
    v34 = &v30;
    v23 = *(_BYTE *)(a1 + 33);
    v35 = 8LL;
    v36 = &v23;
    v37 = 1LL;
    v38 = &v29;
    v40 = &v27;
    v42 = &v28;
    v44 = &v31;
    v46 = &v26;
    v48 = &v24;
    v50 = &v21;
    v52 = &v22;
    v25 = a5;
    v54 = &v25;
    v29 = v8;
    v39 = 8LL;
    v27 = v17;
    v41 = 8LL;
    v28 = v18;
    v43 = 4LL;
    v31 = v11;
    v45 = 8LL;
    v47 = 4LL;
    v24 = a2;
    v49 = 1LL;
    v51 = 1LL;
    v53 = 1LL;
    v55 = 1LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E07080,
      (unsigned __int8 *)&dword_140047BAC,
      0LL,
      0LL,
      0xDu,
      &v33);
  }
  result = v32;
  *v32 = v18;
  return result;
}
