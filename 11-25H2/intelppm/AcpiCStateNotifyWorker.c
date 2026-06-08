/*
 * XREFs of AcpiCStateNotifyWorker @ 0x14003E9A0
 * Callers:
 *     <none>
 * Callees:
 *     ProcLibTraceProcessorSpecificEvent @ 0x140003A48 (ProcLibTraceProcessorSpecificEvent.c)
 *     WPP_RECORDER_SF_ @ 0x140003CF8 (WPP_RECORDER_SF_.c)
 *     FireWmiEvent @ 0x140004484 (FireWmiEvent.c)
 *     _guard_dispatch_icall @ 0x14000FF90 (_guard_dispatch_icall.c)
 *     InitAcpi2CStates @ 0x14003EC1C (InitAcpi2CStates.c)
 *     InitAcpiIdleDomain @ 0x14003ED7C (InitAcpiIdleDomain.c)
 *     UpdateKernelPlatformStates @ 0x14003FD54 (UpdateKernelPlatformStates.c)
 *     PepNotifyReportCStates @ 0x140040220 (PepNotifyReportCStates.c)
 */

void __fastcall AcpiCStateNotifyWorker(__int64 a1, struct _IO_WORKITEM *a2)
{
  void *v3; // rbx
  __int64 v4; // rsi
  void *v5; // rbp
  void *v6; // r15
  char v7; // r13
  __int64 v8; // rdi
  int inited; // eax
  int v10; // eax
  __int64 v11; // rdx
  _QWORD *v12; // r14
  __int64 Pool2; // rax
  void *v14; // [rsp+70h] [rbp+8h] BYREF
  __int64 v15; // [rsp+78h] [rbp+10h] BYREF

  v15 = 0LL;
  v3 = 0LL;
  v14 = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0;
  if ( a2 )
    IoFreeWorkItem(a2);
  v8 = *(_QWORD *)(a1 + 64);
  if ( (*(_DWORD *)(v8 + 280) & 0x7F070) != 0 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      *(_QWORD *)(v8 + 208),
      0LL);
    v7 = 1;
    if ( (int)InitAcpi2CStates(v8, &v14) < 0 )
    {
      Pool2 = ExAllocatePool2(64LL, 24LL, 1919119952LL);
      v3 = (void *)Pool2;
      v12 = (_QWORD *)(v8 + 208);
      if ( !Pool2 )
        goto LABEL_11;
      *(_DWORD *)Pool2 = 1;
      *(_OWORD *)(Pool2 + 4) = 0LL;
      *(_BYTE *)(Pool2 + 4) = 127;
      *(_BYTE *)(Pool2 + 16) = 1;
      *(_WORD *)(Pool2 + 18) = 0;
      *(_DWORD *)(Pool2 + 20) = 0;
    }
    else
    {
      v3 = v14;
      inited = InitAcpiIdleDomain(v8, &v15);
      v4 = v15;
      if ( inited < 0 )
        v4 = 0LL;
    }
    v6 = *(void **)(v8 + 528);
    v10 = *(_DWORD *)(v8 + 280);
    v5 = *(void **)(v8 + 536);
    *(_QWORD *)(v8 + 528) = v3;
    v3 = 0LL;
    *(_QWORD *)(v8 + 536) = v4;
    if ( (v10 & 0x200) != 0 )
      PepNotifyReportCStates(v8);
    ((void (__fastcall *)(__int64))qword_1400196B8)(v8);
    v12 = (_QWORD *)(v8 + 208);
    if ( (*(_DWORD *)(v8 + 280) & 0x200LL) != 0 )
    {
      LOBYTE(v11) = 1;
      UpdateKernelPlatformStates(v8, v11);
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)a2,
        1,
        92,
        (__int64)&WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids);
    }
    v12 = (_QWORD *)(v8 + 208);
  }
LABEL_11:
  ProcLibTraceProcessorSpecificEvent(v8, (const EVENT_DESCRIPTOR *)"(", &PPM_ETW_NOTIFY_81_HV, 0, 0LL);
  FireWmiEvent((_QWORD *)(v8 + 680), 0LL);
  if ( v7 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, *v12);
  if ( v6 )
    ExFreePoolWithTag(v6, (ULONG)1919119952);
  if ( v5 )
    ExFreePoolWithTag(v5, (ULONG)1919119952);
  if ( v3 )
    ExFreePoolWithTag(v3, (ULONG)1919119952);
}
