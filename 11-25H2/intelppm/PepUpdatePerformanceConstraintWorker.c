/*
 * XREFs of PepUpdatePerformanceConstraintWorker @ 0x14003BEC0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140003CF8 (WPP_RECORDER_SF_.c)
 *     PepNotifyPerfConstraints @ 0x14000EE08 (PepNotifyPerfConstraints.c)
 *     _guard_dispatch_icall @ 0x14000FF90 (_guard_dispatch_icall.c)
 *     ProcLibTracePerfConstraintChange @ 0x14002C164 (ProcLibTracePerfConstraintChange.c)
 *     ProcLibCapChange @ 0x140044B24 (ProcLibCapChange.c)
 */

void __fastcall PepUpdatePerformanceConstraintWorker(PDEVICE_OBJECT DeviceObject, PVOID Context)
{
  unsigned int *DeviceExtension; // rbp
  __int64 v3; // rdi
  __int64 v4; // rcx
  unsigned int v5; // eax
  unsigned int v6; // eax
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF

  DeviceExtension = (unsigned int *)DeviceObject->DeviceExtension;
  v7 = 0LL;
  v3 = *((_QWORD *)DeviceExtension + 149);
  if ( v3 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_140019188,
      0LL);
    _InterlockedExchange((volatile __int32 *)DeviceExtension + 293, 0);
    PepNotifyPerfConstraints((__int64)DeviceExtension, &v7, (_DWORD *)(v3 + 56));
    v4 = *(_QWORD *)(v3 + 40);
    v5 = v7;
    if ( (unsigned int)v7 > *(_DWORD *)(v4 + 8) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          3,
          1,
          41,
          (__int64)&WPP_a3d5211b01a83c7b779e65f1f4845e36_Traceguids);
      v4 = *(_QWORD *)(v3 + 40);
      v5 = *(_DWORD *)(v4 + 8);
      LODWORD(v7) = v5;
    }
    if ( v5 < *(_DWORD *)(v4 + 16) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          3,
          1,
          42,
          (__int64)&WPP_a3d5211b01a83c7b779e65f1f4845e36_Traceguids);
      v4 = *(_QWORD *)(v3 + 40);
      v5 = *(_DWORD *)(v4 + 16);
      LODWORD(v7) = v5;
    }
    v6 = 100 * v5 / *(_DWORD *)(v4 + 8);
    HIDWORD(v7) = v6;
    *(_QWORD *)(v3 + 64) = v7;
    ProcLibCapChange(DeviceExtension, DeviceExtension[116], DeviceExtension[128], v6);
    ((void (__fastcall *)(unsigned int *))qword_1400196C8)(DeviceExtension);
    ProcLibTracePerfConstraintChange((__int64)DeviceExtension, v7, *(_DWORD *)(v3 + 56));
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
      WdfDriverGlobals,
      qword_140019188);
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      2,
      3,
      40,
      (__int64)&WPP_a3d5211b01a83c7b779e65f1f4845e36_Traceguids);
  }
}
