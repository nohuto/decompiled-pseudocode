/*
 * XREFs of InitPerfFeedbackInternal @ 0x140036F80
 * Callers:
 *     RegisterHvPerfFeedbackCounters @ 0x140030E30 (RegisterHvPerfFeedbackCounters.c)
 *     RegisterKernelPerfFeedback @ 0x140038A20 (RegisterKernelPerfFeedback.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140003CF8 (WPP_RECORDER_SF_.c)
 *     EnumerateNextDevice @ 0x140004B78 (EnumerateNextDevice.c)
 *     ResetEnumerationContext @ 0x1400053BC (ResetEnumerationContext.c)
 *     _guard_dispatch_icall @ 0x14000FF90 (_guard_dispatch_icall.c)
 *     GetRegistryDwordValue @ 0x140028658 (GetRegistryDwordValue.c)
 *     AllocateAndInitKernelPerfStatesRegistration @ 0x1400299E0 (AllocateAndInitKernelPerfStatesRegistration.c)
 *     GetLogicalProcessorIndex @ 0x1400355E0 (GetLogicalProcessorIndex.c)
 *     GetPerfDomain @ 0x140045878 (GetPerfDomain.c)
 *     InitCommonPerfStateContext @ 0x140046EC0 (InitCommonPerfStateContext.c)
 */

__int64 __fastcall InitPerfFeedbackInternal(_QWORD *a1, __int64 (__fastcall *a2)(_QWORD *))
{
  void (__fastcall *v3)(PWDF_DRIVER_GLOBALS, __int64, _QWORD); // rax
  _QWORD *v4; // rsi
  int PerfDomain; // ebx
  char *v6; // r14
  int v7; // ebx
  __int64 inited; // rax
  _DWORD *v9; // r13
  int v10; // edx
  __int64 v11; // rax
  __int64 v12; // rax
  _QWORD *v13; // rsi
  _DWORD *v14; // r12
  int v15; // r14d
  __int64 v16; // rdi
  _QWORD *v18; // [rsp+30h] [rbp-40h]
  _QWORD *v19; // [rsp+38h] [rbp-38h]
  __int64 Pool2; // [rsp+40h] [rbp-30h]
  _OWORD v21[2]; // [rsp+48h] [rbp-28h] BYREF
  __int64 v23; // [rsp+C0h] [rbp+50h] BYREF
  __int64 v24; // [rsp+C8h] [rbp+58h] BYREF

  v24 = 0LL;
  v3 = *(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504);
  v4 = 0LL;
  memset(v21, 0, sizeof(v21));
  LODWORD(v23) = 0;
  v3(WdfDriverGlobals, qword_140019188, 0LL);
  PerfDomain = GetPerfDomain(a1, v21, &v23);
  Pool2 = ExAllocatePool2(64LL, (unsigned int)(576 * PerfDomain), 1919119952LL);
  v6 = (char *)Pool2;
  if ( Pool2
    && (inited = AllocateAndInitKernelPerfStatesRegistration((__int64)a1, PerfDomain, 1),
        v19 = (_QWORD *)inited,
        (v4 = (_QWORD *)inited) != 0LL) )
  {
    *(_WORD *)(inited + 4) = v23;
    *(_DWORD *)(inited + 24) = 100;
    v9 = (_DWORD *)(inited + 20);
    *(_DWORD *)(inited + 28) = 100;
    *(_DWORD *)(inited + 32) = 100;
    *(_QWORD *)(inited + 464) = AcpiCStateIdleComplete;
    *(_WORD *)(inited + 6) = 1;
    *(_BYTE *)(inited + 52) = 2;
    *(_BYTE *)(inited + 14) = byte_140019710;
    *(_QWORD *)(inited + 472) = AcpiCStateIdleComplete;
    *(_QWORD *)(inited + 56) = 100LL;
    *(_QWORD *)(inited + 64) = 100LL;
    *(_QWORD *)(inited + 448) = PerfSelectionFeedback;
    *(_DWORD *)(inited + 20) = 0;
    GetRegistryDwordValue(
      (__int64)L"\\Registry\\Machine\\Hardware\\Description\\System\\CentralProcessor\\0",
      (__int64)L"~MHz",
      (_DWORD *)(inited + 20));
    if ( *v9 )
    {
      v11 = a1[43];
      if ( v11 )
        v4[47] = v11;
      v12 = v4[70];
      *(_QWORD *)v12 = PerfReadWrappingCounter;
      *(_QWORD *)(v12 + 8) = 0x10000LL;
      *(_WORD *)(v12 + 16) = 257;
      v18 = (_QWORD *)v4[72];
      v23 = v4[71];
      ResetEnumerationContext((__int64 *)v21);
      if ( !(unsigned int)EnumerateNextDevice((__int64 *)v21, &v24) )
      {
        v13 = v18;
        v14 = (_DWORD *)(Pool2 + 104);
        v15 = v23;
        do
        {
          v16 = v24;
          InitCommonPerfStateContext(v24, (_DWORD)v14 - 104, v15, 100, 0);
          a1[27] = v14 - 26;
          v14[116] = *v9;
          *v14 = GetLogicalProcessorIndex(v16);
          *((_QWORD *)v14 - 2) = *(_QWORD *)(v16 + 336);
          v15 += 32;
          *v13 = v14 - 16;
          v14 += 144;
          ++v13;
        }
        while ( !(unsigned int)EnumerateNextDevice((__int64 *)v21, &v24) );
        v4 = v19;
        v6 = (char *)Pool2;
      }
      v7 = a2(v4);
      if ( v7 >= 0 )
      {
        ResetEnumerationContext((__int64 *)v21);
        while ( !(unsigned int)EnumerateNextDevice((__int64 *)v21, &v24) )
        {
          *(_QWORD *)(v24 + 232) = v6;
          v6 += 576;
        }
        v6 = 0LL;
        v7 = 0;
      }
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v10) = 2;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v10,
          3,
          30,
          (__int64)&WPP_98f9ac7a230638fb843a3fa300c5ade8_Traceguids);
      }
      a1[35] &= ~0x4000000uLL;
      v7 = -1073741823;
    }
  }
  else
  {
    v7 = -1073741670;
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_140019188);
  if ( v4 )
    ExFreePoolWithTag(v4, (ULONG)1919119952);
  if ( v6 )
    ExFreePoolWithTag(v6, (ULONG)1919119952);
  return (unsigned int)v7;
}
