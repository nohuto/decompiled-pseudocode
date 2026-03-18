/*
 * XREFs of Controller_WdfEvtWatchdogTimerFunc @ 0x1400292A0
 * Callers:
 *     <none>
 * Callees:
 *     Controller_ReportFatalError @ 0x140006A08 (Controller_ReportFatalError.c)
 *     Controller_CheckHealth @ 0x14000CDC4 (Controller_CheckHealth.c)
 *     WPP_RECORDER_SF_ @ 0x14001A724 (WPP_RECORDER_SF_.c)
 *     CommonBuffer_RebalanceResources @ 0x1400294CC (CommonBuffer_RebalanceResources.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

KIRQL __fastcall Controller_WdfEvtWatchdogTimerFunc(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  _QWORD *v4; // rax
  char v5; // dl
  int v6; // edx
  KIRQL result; // al
  unsigned __int32 v8; // ecx
  int v9; // eax

  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01033 + 2568))(WdfDriverGlobals, a1);
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
         WdfDriverGlobals,
         v2,
         off_14006B290);
  ++*(_DWORD *)(v3 + 800);
  v4 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
                   WdfDriverGlobals,
                   a1,
                   off_14006AE60);
  if ( (__int64)(MEMORY[0xFFFFF78000000014] - *v4) >= 864000000000LL )
  {
    v5 = 1;
    *v4 = MEMORY[0xFFFFF78000000014];
  }
  else
  {
    v5 = 0;
  }
  if ( Controller_CheckHealth(v3, v5) )
  {
    v8 = _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 1256), 0, 0);
    if ( !v8 || (v6 = *(_DWORD *)(v3 + 800) % v8) != 0 )
    {
      v9 = *(_DWORD *)(v3 + 812) + 1;
      *(_DWORD *)(v3 + 812) = v9;
      if ( v9 == 60 )
      {
        *(_QWORD *)(v3 + 808) = 0LL;
        *(_DWORD *)(v3 + 804) = 0;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v6) = 4;
          WPP_RECORDER_SF_(*(_QWORD *)(v3 + 72), v6, 4, 184, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids);
        }
      }
      if ( *(_QWORD *)(v3 + 120) )
        CommonBuffer_RebalanceResources();
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v6) = 4;
        WPP_RECORDER_SF_(*(_QWORD *)(v3 + 72), v6, 4, 181, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids);
      }
      Controller_ReportFatalError(v3, 2, 4159, 0, 0LL, 0LL, 0LL);
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 1;
    WPP_RECORDER_SF_(*(_QWORD *)(v3 + 72), v6, 4, 180, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids);
  }
  result = KeGetCurrentIrql();
  if ( !result )
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01033 + 2552))(
             WdfDriverGlobals,
             *(_QWORD *)(v3 + 760),
             -50000000LL);
  return result;
}
