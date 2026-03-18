/*
 * XREFs of Controller_TelemetryReportWorker @ 0x1400426F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x14001A724 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x14001A7FC (WPP_RECORDER_SF_d.c)
 *     Controller_InitiateRecovery @ 0x14004032C (Controller_InitiateRecovery.c)
 *     Controller_TelemetryReport @ 0x14004231C (Controller_TelemetryReport.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

LONG __fastcall Controller_TelemetryReportWorker(__int64 a1)
{
  ULONG v1; // edi
  __int64 v3; // rax
  _QWORD *v4; // r15
  int v5; // edx
  __int64 v6; // rbx
  KIRQL v7; // al
  __int64 *v8; // rcx
  int v9; // r13d
  NTSTATUS v10; // eax
  int v11; // edx
  PDEVICE_OBJECT *Pool2; // rax
  int v13; // edx
  PDEVICE_OBJECT *v14; // r14
  NTSTATUS v15; // eax
  int v16; // edx
  __int64 *i; // rsi
  PDEVICE_OBJECT *v18; // rcx
  __int64 *v19; // rax
  __int64 *v21; // [rsp+30h] [rbp-10h] BYREF
  _QWORD *v22; // [rsp+38h] [rbp-8h]
  ULONG ActualNumberDeviceObjects; // [rsp+88h] [rbp+48h] BYREF
  ULONG j; // [rsp+90h] [rbp+50h] BYREF

  v1 = 0;
  j = 0;
  v21 = 0LL;
  ActualNumberDeviceObjects = 0;
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01033 + 3048))(WdfDriverGlobals, a1);
  v4 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
                   WdfDriverGlobals,
                   v3,
                   off_14006B290);
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
         WdfDriverGlobals,
         a1,
         off_14006AF20);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = 4;
    WPP_RECORDER_SF_(v4[9], v5, 4, 240, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids);
  }
  KeWaitForSingleObject((PVOID)(v6 + 24), Executive, 0, 0, 0LL);
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 16));
  v8 = *(__int64 **)v6;
  if ( *(_QWORD *)v6 == v6 )
  {
    v22 = &v21;
    v21 = (__int64 *)&v21;
  }
  else
  {
    v21 = *(__int64 **)v6;
    v22 = *(_QWORD **)(v6 + 8);
    v8[1] = (__int64)&v21;
    *v22 = &v21;
    *(_QWORD *)(v6 + 8) = v6;
    *(_QWORD *)v6 = v6;
  }
  v9 = *(_DWORD *)(v6 + 80);
  *(_DWORD *)(v6 + 80) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 16), v7);
  v10 = IoEnumerateDeviceObjectList(
          *(PDRIVER_OBJECT *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters,
          0LL,
          0,
          &ActualNumberDeviceObjects);
  if ( v10 == -1073741789 )
  {
    Pool2 = (PDEVICE_OBJECT *)ExAllocatePool2(64LL, 8LL * ActualNumberDeviceObjects, 1229146200LL);
    v14 = Pool2;
    if ( Pool2 )
    {
      v15 = IoEnumerateDeviceObjectList(
              *(PDRIVER_OBJECT *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters,
              Pool2,
              8 * ActualNumberDeviceObjects,
              &j);
      if ( v15 >= 0 )
      {
        for ( i = v21; &v21 != (__int64 **)i; i = (__int64 *)*i )
          Controller_TelemetryReport((__int64)v4, v6, (__int64)i, v14, ActualNumberDeviceObjects);
        for ( j = 0; j < ActualNumberDeviceObjects; v1 = j )
        {
          ObfDereferenceObject(v14[v1]);
          ++j;
        }
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v16) = 2;
        WPP_RECORDER_SF_d(v4[9], v16, 4, 243, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids, v15);
      }
      v18 = v14;
      goto LABEL_21;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v13) = 2;
      WPP_RECORDER_SF_(v4[9], v13, 4, 242, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids);
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v11) = 2;
    WPP_RECORDER_SF_d(v4[9], v11, 4, 241, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids, v10);
  }
  while ( 1 )
  {
    v18 = (PDEVICE_OBJECT *)v21;
    if ( v21 == (__int64 *)&v21 )
      break;
    if ( (__int64 **)v21[1] != &v21 || (v19 = (__int64 *)*v21, *(__int64 **)(*v21 + 8) != v21) )
      __fastfail(3u);
    v21 = (__int64 *)*v21;
    v19[1] = (__int64)&v21;
LABEL_21:
    ExFreePoolWithTag(v18, 0x49434858u);
  }
  Controller_InitiateRecovery(v4, v6, v9);
  return KeReleaseMutex((PRKMUTEX)(v6 + 24), 0);
}
