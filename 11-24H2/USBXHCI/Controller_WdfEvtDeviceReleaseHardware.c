/*
 * XREFs of Controller_WdfEvtDeviceReleaseHardware @ 0x14007A0C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x14002C6F8 (WPP_RECORDER_SF_q.c)
 *     Controller_IsSecureDevice @ 0x1400328B8 (Controller_IsSecureDevice.c)
 *     XilDeviceSlot_ReleaseHardware @ 0x1400464E4 (XilDeviceSlot_ReleaseHardware.c)
 *     Register_UnmapSecureMmio @ 0x1400492C0 (Register_UnmapSecureMmio.c)
 *     SleepstudyHelper_UnregisterComponent @ 0x1400589A0 (SleepstudyHelper_UnregisterComponent.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 *     Command_ReleaseHardware @ 0x140074720 (Command_ReleaseHardware.c)
 *     Interrupter_ReleaseInterrupter @ 0x14007CAFC (Interrupter_ReleaseInterrupter.c)
 *     RootHub_ReleaseHardware @ 0x14007EA88 (RootHub_ReleaseHardware.c)
 */

__int64 __fastcall Controller_WdfEvtDeviceReleaseHardware(__int64 a1)
{
  char v1; // bl
  int v2; // edx
  __int64 v3; // rdi
  void *v4; // rcx
  __int64 v5; // rbx
  unsigned int i; // esi
  void *v7; // rcx
  __int64 v8; // rbx

  v1 = a1;
  v3 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
                     WdfDriverGlobals,
                     a1,
                     off_14006B240)
                 + 8);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v2) = 4;
    WPP_RECORDER_SF_q(*(_QWORD *)(v3 + 72), v2, 4, 53, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids, v1);
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01033 + 3056))(
    WdfDriverGlobals,
    *(_QWORD *)(v3 + 768));
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01033 + 3056))(
    WdfDriverGlobals,
    *(_QWORD *)(v3 + 1232));
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01033 + 3056))(
    WdfDriverGlobals,
    *(_QWORD *)(v3 + 968));
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01033 + 3056))(
    WdfDriverGlobals,
    *(_QWORD *)(v3 + 1112));
  v4 = *(void **)(v3 + 1248);
  if ( v4 )
  {
    SleepstudyHelper_UnregisterComponent(v4);
    *(_QWORD *)(v3 + 1248) = 0LL;
  }
  RootHub_ReleaseHardware(*(_QWORD *)(v3 + 152));
  Command_ReleaseHardware(*(_QWORD *)(v3 + 144));
  XilDeviceSlot_ReleaseHardware(*(_QWORD *)(v3 + 136));
  v5 = *(_QWORD *)(v3 + 128);
  if ( *(_QWORD *)(v5 + 32) )
  {
    for ( i = 0; i < *(_DWORD *)(v5 + 92); ++i )
    {
      if ( *(_QWORD *)(*(_QWORD *)(v5 + 32) + 8LL * i) )
        Interrupter_ReleaseInterrupter();
    }
    ExFreePoolWithTag(*(PVOID *)(v5 + 32), 0x49434858u);
    *(_QWORD *)(v5 + 32) = 0LL;
  }
  v7 = *(void **)(v5 + 56);
  if ( v7 )
  {
    ExFreePoolWithTag(v7, 0x49434858u);
    *(_QWORD *)(v5 + 56) = 0LL;
  }
  v8 = *(_QWORD *)(v3 + 88);
  if ( *(_QWORD *)(v8 + 24) )
  {
    if ( Controller_IsSecureDevice(*(_QWORD *)(v8 + 8)) )
      Register_UnmapSecureMmio(v8);
    MmUnmapIoSpace(*(PVOID *)(v8 + 24), *(unsigned int *)(v8 + 20));
    *(_BYTE *)(v8 + 16) = 0;
    *(_QWORD *)(v8 + 24) = 0LL;
    *(_QWORD *)(v8 + 32) = 0LL;
    *(_QWORD *)(v8 + 40) = 0LL;
    *(_QWORD *)(v8 + 48) = 0LL;
    *(_QWORD *)(v8 + 56) = 0LL;
    *(_QWORD *)(v8 + 64) = 0LL;
    *(_QWORD *)(v8 + 72) = 0LL;
  }
  if ( !*(_BYTE *)(v3 + 16) )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01033 + 1664))(
      WdfDriverGlobals,
      *(_QWORD *)(v3 + 8));
  return 0LL;
}
