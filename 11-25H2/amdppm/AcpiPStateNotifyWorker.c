/*
 * XREFs of AcpiPStateNotifyWorker @ 0x14003FBF0
 * Callers:
 *     <none>
 * Callees:
 *     ProcLibTraceProcessorSpecificEvent @ 0x140002DE0 (ProcLibTraceProcessorSpecificEvent.c)
 *     FireWmiEvent @ 0x140003AB0 (FireWmiEvent.c)
 *     WPP_RECORDER_SF_ @ 0x140003C68 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall @ 0x14000D700 (_guard_dispatch_icall.c)
 *     ProcLibCapChange @ 0x14003FD48 (ProcLibCapChange.c)
 *     AcpiEval_PPC @ 0x14003FE44 (AcpiEval_PPC.c)
 */

__int64 __fastcall AcpiPStateNotifyWorker(__int64 a1, struct _IO_WORKITEM *a2)
{
  char v3; // si
  int v4; // edx
  __int64 v5; // rdi
  __int64 result; // rax
  unsigned int v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = 0;
  v3 = 0;
  IoFreeWorkItem(a2);
  v5 = *(_QWORD *)(a1 + 64);
  if ( (*(_DWORD *)(v5 + 280) & 0x70000000) != 0 )
  {
    if ( (int)AcpiEval_PPC(*(_QWORD *)(a1 + 64), &v7) >= 0 )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
        WdfDriverGlobals,
        qword_1400145A8,
        0LL);
      v3 = 1;
      ProcLibCapChange(v5, v7, *(unsigned int *)(v5 + 512), 100LL);
      ((void (__fastcall *)(__int64))qword_140014AE8)(v5);
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 2;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v4,
      1,
      90,
      (__int64)&WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids);
  }
  v7 = *(_DWORD *)(v5 + 464);
  ProcLibTraceProcessorSpecificEvent(v5, (int)&PPM_ETW_NOTIFY_80, (int)&PPM_ETW_NOTIFY_80_HV, 4, (__int64)&v7);
  result = FireWmiEvent((_QWORD *)(v5 + 664), v5 + 464);
  if ( v3 )
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
             WdfDriverGlobals,
             qword_1400145A8);
  return result;
}
