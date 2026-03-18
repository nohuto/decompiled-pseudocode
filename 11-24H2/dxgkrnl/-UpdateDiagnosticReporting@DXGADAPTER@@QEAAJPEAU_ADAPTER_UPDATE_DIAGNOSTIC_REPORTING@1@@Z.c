/*
 * XREFs of ?UpdateDiagnosticReporting@DXGADAPTER@@QEAAJPEAU_ADAPTER_UPDATE_DIAGNOSTIC_REPORTING@1@@Z @ 0x1401964D4
 * Callers:
 *     ?InitializeDriverDiagnosticReporting@DXGADAPTER@@AEAAXXZ @ 0x140192004 (-InitializeDriverDiagnosticReporting@DXGADAPTER@@AEAAXXZ.c)
 *     ?UpdateDiagnosticAdapterCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1401CEA90 (-UpdateDiagnosticAdapterCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?DdiControlDiagnosticReporting@DXGADAPTER@@QEAAJPEAU_DXGKARG_CONTROLDIAGNOSTICREPORTING@@@Z @ 0x1401A2164 (-DdiControlDiagnosticReporting@DXGADAPTER@@QEAAJPEAU_DXGKARG_CONTROLDIAGNOSTICREPORTING@@@Z.c)
 *     ?DdiQueryDiagnosticTypesSupport@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYDIAGNOSTICTYPESSUPPORT@@@Z @ 0x1401A72A0 (-DdiQueryDiagnosticTypesSupport@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYDIAGNOSTICTYPESSUPPORT@@@Z.c)
 */

__int64 __fastcall DXGADAPTER::UpdateDiagnosticReporting(DXGADAPTER *this, UINT *a2)
{
  unsigned int v3; // r14d
  __int64 v4; // rcx
  __int64 v6; // rdi
  UINT v7; // eax
  int v8; // eax
  int v9; // eax
  UINT v10; // esi
  int v11; // eax
  _DXGKARG_CONTROLDIAGNOSTICREPORTING v13; // [rsp+50h] [rbp-20h] BYREF
  _DXGKARG_QUERYDIAGNOSTICTYPESSUPPORT v14; // [rsp+58h] [rbp-18h] BYREF

  v3 = 0;
  v4 = a2[3];
  v6 = v4;
  if ( *((_DWORD *)this + v4 + 1203) < *((_DWORD *)this + v4 + 1205) )
  {
    *((_DWORD *)this + v4 + 1205) = 0;
    if ( *((__int64 (__fastcall **)(void *const, struct _DXGKARG_CONTROLDIAGNOSTICREPORTING *))this + 167) == DXGADAPTER::DefaultDdiControlDiagnosticReporting )
    {
      if ( (_DWORD)v4 == 1 && *((int *)this + 684) >= 8960 )
        *((_DWORD *)this + v4 + 1203) = 1;
    }
    else
    {
      v7 = *a2;
      *(_QWORD *)&v14.NoninvasiveTypes.Notifications.0 = 0LL;
      v14.DiagnosticCategory.Value = v7;
      v8 = DXGADAPTER::DdiQueryDiagnosticTypesSupport(this, &v14);
      v3 = v8;
      if ( v8 < 0 )
      {
        WdLogSingleEntry3(3LL, v14.DiagnosticCategory.Value, v8, 3LL);
        WdLogGlobalForLineNumber = 12197;
      }
      else if ( ((v14.NoninvasiveTypes.Notifications.Value | v14.InvasiveTypes.Notifications.Value) & a2[2]) != 0 )
      {
        WdLogSingleEntry4(
          2LL,
          v14.DiagnosticCategory.Value,
          v14.NoninvasiveTypes.Notifications.Value,
          v14.InvasiveTypes.Notifications.Value,
          2LL);
        WdLogGlobalForLineNumber = 12189;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Ignoring diagnostics query for category 0x%.8x which reported non-zero reserved fields, Non-Invasive: %.8x, Invasive: %.8x",
          v14.DiagnosticCategory.Value,
          v14.NoninvasiveTypes.Notifications.Value,
          v14.InvasiveTypes.Notifications.Value,
          2LL,
          0LL);
      }
      else if ( (v14.InvasiveTypes.Notifications.Value & v14.NoninvasiveTypes.Notifications.Value) != 0 )
      {
        WdLogSingleEntry4(
          2LL,
          v14.DiagnosticCategory.Value,
          v14.NoninvasiveTypes.Notifications.Value,
          v14.InvasiveTypes.Notifications.Value,
          1LL);
        WdLogGlobalForLineNumber = 12179;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Ignoring diagnostics query for category 0x%.8x which reported overlapping types, Non-Invasive: %.8x, Invasive: %.8x",
          v14.DiagnosticCategory.Value,
          v14.NoninvasiveTypes.Notifications.Value,
          v14.InvasiveTypes.Notifications.Value,
          1LL,
          0LL);
      }
      else
      {
        *((_DWORD *)this + v6 + 1203) = v14.NoninvasiveTypes.Notifications.Value | v14.InvasiveTypes.Notifications.Value;
      }
    }
  }
  v9 = *((_DWORD *)this + v6 + 1203);
  v10 = v9 & a2[1];
  if ( v9 && *((_DWORD *)this + v6 + 1205) != v10 )
  {
    if ( *((__int64 (__fastcall **)(void *const, struct _DXGKARG_CONTROLDIAGNOSTICREPORTING *))this + 167) == DXGADAPTER::DefaultDdiControlDiagnosticReporting
      || (v13.DiagnosticCategory.Value = *(_QWORD *)a2,
          v13.RequestedDiagnostics.Notifications.Value = v10,
          v11 = DXGADAPTER::DdiControlDiagnosticReporting(this, &v13),
          v3 = v11,
          v11 >= 0) )
    {
      *((_DWORD *)this + v6 + 1205) = v10;
    }
    else
    {
      WdLogSingleEntry4(3LL, *a2, a2[1], v11, 4LL);
      WdLogGlobalForLineNumber = 12233;
    }
  }
  return v3;
}
