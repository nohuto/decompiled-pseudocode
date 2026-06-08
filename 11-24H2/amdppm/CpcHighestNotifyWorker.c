/*
 * XREFs of CpcHighestNotifyWorker @ 0x140041A78
 * Callers:
 *     CpcNativeInterruptWorker @ 0x140026640 (CpcNativeInterruptWorker.c)
 *     AcpiCppcHighestNotifyWorker @ 0x140028730 (AcpiCppcHighestNotifyWorker.c)
 * Callees:
 *     EnumerateNextDevice @ 0x140001490 (EnumerateNextDevice.c)
 *     ReadGenAddrMaybeHiddenEx @ 0x1400025A4 (ReadGenAddrMaybeHiddenEx.c)
 *     ProcLibTraceProcessorSpecificEvent @ 0x140002DE0 (ProcLibTraceProcessorSpecificEvent.c)
 *     ResetEnumerationContext @ 0x14000305C (ResetEnumerationContext.c)
 *     InitializeEnumerationContext @ 0x140003C50 (InitializeEnumerationContext.c)
 *     InitializeSingleEnumerationContext @ 0x14000574C (InitializeSingleEnumerationContext.c)
 *     WPP_RECORDER_SF_s @ 0x1400063C8 (WPP_RECORDER_SF_s.c)
 *     WPP_RECORDER_SF_sD @ 0x14000709C (WPP_RECORDER_SF_sD.c)
 *     __security_check_cookie @ 0x14000E310 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14000E3B0 (_guard_dispatch_icall.c)
 *     ExecutePccCommand @ 0x140027E24 (ExecutePccCommand.c)
 *     StartPccCommand @ 0x140028138 (StartPccCommand.c)
 */

_UNKNOWN **__fastcall CpcHighestNotifyWorker(__int64 a1, struct _IO_WORKITEM *a2, const char *a3)
{
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rsi
  _UNKNOWN **result; // rax
  unsigned __int16 v9; // r9
  int started; // ecx
  unsigned __int16 v11; // r9
  char v12; // r14
  unsigned __int64 GenAddrMaybeHidden; // rsi
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rcx
  int v18; // edx
  __int64 v19; // rdx
  __int64 v20; // [rsp+40h] [rbp-29h] BYREF
  _OWORD v21[2]; // [rsp+48h] [rbp-21h] BYREF
  __int64 v22; // [rsp+68h] [rbp-1h] BYREF
  int v23; // [rsp+70h] [rbp+7h]
  struct _GROUP_AFFINITY Affinity; // [rsp+78h] [rbp+Fh] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+88h] [rbp+1Fh] BYREF

  v20 = 0LL;
  v22 = 0LL;
  v23 = 0;
  Affinity = 0LL;
  memset(v21, 0, sizeof(v21));
  PreviousAffinity = 0LL;
  if ( a2 )
    IoFreeWorkItem(a2);
  v5 = *(_QWORD *)(a1 + 64);
  if ( (*(_DWORD *)(v5 + 280) & 0x8000000) != 0 )
  {
    v6 = *(_QWORD *)(v5 + 248);
    if ( v6 )
    {
      v7 = *(_QWORD *)(v6 + 144);
      if ( *(_BYTE *)(v7 + 8) == 126 )
      {
        result = &WPP_RECORDER_INITIALIZED;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return result;
        v9 = 28;
        return (_UNKNOWN **)WPP_RECORDER_SF_s(
                              (__int64)WPP_GLOBAL_Control->DeviceExtension,
                              2u,
                              1u,
                              v9,
                              (__int64)&WPP_3811e805137834c013381b794b6128cc_Traceguids,
                              a3);
      }
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
        WdfDriverGlobals,
        qword_1400155D8,
        0LL);
      if ( *(_BYTE *)(v6 + 134) )
      {
        started = StartPccCommand(*(_QWORD *)(v5 + 256));
        if ( started < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            return (_UNKNOWN **)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
                                  WdfDriverGlobals,
                                  qword_1400155D8);
          v11 = 29;
LABEL_12:
          WPP_RECORDER_SF_sD(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            3u,
            v11,
            (__int64)&WPP_3811e805137834c013381b794b6128cc_Traceguids,
            a3,
            started);
          return (_UNKNOWN **)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
                                WdfDriverGlobals,
                                qword_1400155D8);
        }
        started = ExecutePccCommand(*(_QWORD *)(v5 + 256));
        if ( started < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            return (_UNKNOWN **)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
                                  WdfDriverGlobals,
                                  qword_1400155D8);
          v11 = 30;
          goto LABEL_12;
        }
      }
      if ( *(_BYTE *)(v7 + 8) != 127 || *(_DWORD *)(v5 + 80) )
      {
        v12 = 0;
      }
      else
      {
        KeProcessorGroupAffinity(&Affinity, *(unsigned int *)(v5 + 56));
        KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
        v12 = 1;
      }
      GenAddrMaybeHidden = ReadGenAddrMaybeHiddenEx(v5, v7 + 8);
      if ( v12 )
        KeRevertToUserGroupAffinityThread(&PreviousAffinity);
      v14 = *(_QWORD *)(v6 + 48);
      if ( GenAddrMaybeHidden < v14 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_s(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            1u,
            0x1Fu,
            (__int64)&WPP_3811e805137834c013381b794b6128cc_Traceguids,
            a3);
        GenAddrMaybeHidden = *(_QWORD *)(v6 + 48);
        v14 = GenAddrMaybeHidden;
      }
      *(_QWORD *)(v6 + 40) = GenAddrMaybeHidden;
      v15 = 100 * GenAddrMaybeHidden / v14;
      *(_DWORD *)(v6 + 100) = v15;
      if ( (unsigned int)v15 > *(_DWORD *)(v6 + 104) )
        *(_DWORD *)(v6 + 104) = v15;
      v23 = 0;
      LODWORD(v22) = *(_DWORD *)(v6 + 100);
      if ( *(_DWORD *)(v5 + 80) )
      {
        v23 = *(_DWORD *)(v5 + 80);
        v16 = *(_DWORD *)(v5 + 84);
      }
      else
      {
        v16 = *(_DWORD *)(v5 + 56);
      }
      HIDWORD(v22) = v16;
      v17 = *(_QWORD *)(v5 + 560);
      if ( v17 )
      {
        v18 = 568;
      }
      else
      {
        if ( !byte_140015B58 || (v17 = *(_QWORD *)(v5 + 1080)) == 0 || *(_DWORD *)(v17 + 36) <= 1u )
        {
          InitializeSingleEnumerationContext(v5, (__int64)v21);
LABEL_39:
          ResetEnumerationContext((__int64 *)v21);
          while ( !(unsigned int)EnumerateNextDevice((__int64 *)v21, &v20) )
          {
            v19 = v20;
            if ( v5 != v20 )
            {
              *(_QWORD *)(*(_QWORD *)(v20 + 248) + 40LL) = *(_QWORD *)(v6 + 40);
              *(_DWORD *)(*(_QWORD *)(v19 + 248) + 100LL) = *(_DWORD *)(v6 + 100);
              *(_DWORD *)(*(_QWORD *)(v19 + 248) + 104LL) = *(_DWORD *)(v6 + 104);
            }
          }
          ((void (__fastcall *)(__int64 *))qword_1400158F8)(&v22);
          ProcLibTraceProcessorSpecificEvent(v5, (int)&PPM_ETW_NOTIFY_85, (int)&PPM_ETW_NOTIFY_85_HV, 0, 0LL);
          return (_UNKNOWN **)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
                                WdfDriverGlobals,
                                qword_1400155D8);
        }
        v18 = 1088;
      }
      InitializeEnumerationContext(v17 + 16, v18, (__int64)v21);
      goto LABEL_39;
    }
  }
  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return result;
  v9 = 27;
  return (_UNKNOWN **)WPP_RECORDER_SF_s(
                        (__int64)WPP_GLOBAL_Control->DeviceExtension,
                        2u,
                        1u,
                        v9,
                        (__int64)&WPP_3811e805137834c013381b794b6128cc_Traceguids,
                        a3);
}
