/*
 * XREFs of ?BuildValueDeviceUsages@@YAHKPEAPEAUtagINPUT_INJECTION_VALUE@@PEAK@Z @ 0x1C0198634
 * Callers:
 *     RIMIDEInjectHIDReportFromPointerInfo @ 0x1C01960D8 (RIMIDEInjectHIDReportFromPointerInfo.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C000A528 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C004F0F4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C00744D4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00919C0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C016DC58 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C016DD0C (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C016E25C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C016E628 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C016F5AC (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C016FA4C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 */

__int64 __fastcall BuildValueDeviceUsages(int a1, struct tagINPUT_INJECTION_VALUE **a2, unsigned int *a3)
{
  unsigned int v3; // ebx
  __int64 v6; // r12
  unsigned int v7; // r13d
  int v8; // r15d
  NSInstrumentation::CLeakTrackingAllocator *v9; // rsi
  int v10; // eax
  __int64 Pool2; // rdi
  _QWORD *v12; // rax
  unsigned int v13; // r10d
  __int64 v14; // r11
  _WORD *v15; // rcx
  __int16 *v16; // rdx
  unsigned int v17; // r8d
  __int16 v18; // ax
  unsigned int v19; // edx
  _WORD *v20; // rdi
  __int64 v21; // rcx
  char v22; // dl
  char v23; // dl
  char v25; // dl
  char *v26; // [rsp+50h] [rbp-B0h]
  char *v27; // [rsp+58h] [rbp-A8h]
  __int64 v28; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v29[2]; // [rsp+70h] [rbp-90h] BYREF
  PVOID BackTrace[28]; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v31; // [rsp+170h] [rbp+70h] BYREF
  unsigned __int64 v32; // [rsp+178h] [rbp+78h] BYREF
  unsigned int *v33; // [rsp+180h] [rbp+80h]
  __int64 v34; // [rsp+188h] [rbp+88h] BYREF

  v33 = a3;
  v3 = 0;
  if ( *a2 )
  {
    v31 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 450);
  }
  v6 = 5LL;
  if ( a1 == 3 )
  {
    v26 = (char *)&unk_1C0264D22;
    v7 = 6;
    v27 = (char *)&unk_1C0264D24;
    v8 = 11;
    goto LABEL_7;
  }
  if ( a1 == 2 )
  {
    v7 = 5;
    v26 = (char *)&unk_1C0264E02;
    v8 = 10;
    v27 = (char *)&unk_1C0264E04;
LABEL_7:
    v9 = gpLeakTrackingAllocator;
    v34 = 260LL;
    v31 = 1785620818;
    v10 = *(_DWORD *)gpLeakTrackingAllocator;
    v28 = 144LL;
    switch ( v10 )
    {
      case 0:
        Pool2 = ExAllocatePool2(260LL, 144LL, 1785620818LL);
        if ( Pool2 )
          _InterlockedIncrement64((volatile signed __int64 *)v9 + 14);
        goto LABEL_24;
      case 1:
        if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x6A6E6952u) )
        {
          v12 = (_QWORD *)ExAllocatePool2(v34 & 0xFFFFFFFFFFFFFFFDuLL, 160LL, v31);
          Pool2 = (__int64)v12;
          if ( !v12
            || (_InterlockedIncrement64((volatile signed __int64 *)v9 + 14),
                *v12 = 1785620818LL,
                Pool2 = (__int64)(v12 + 2),
                v12 == (_QWORD *)-16LL) )
          {
            NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
              *((NSInstrumentation::CPointerHashTable **)v9 + 1),
              0x6A6E6952uLL);
          }
LABEL_24:
          *a2 = (struct tagINPUT_INJECTION_VALUE *)Pool2;
          if ( Pool2 )
          {
LABEL_25:
            v15 = (_WORD *)Pool2;
            v16 = (__int16 *)&unk_1C0264EE4;
            v17 = 5;
            do
            {
              *v15 = *(v16 - 1);
              v18 = *v16;
              v16 += 16;
              v15[1] = v18;
              v15 += 6;
              --v6;
            }
            while ( v6 );
            v19 = 0;
            v20 = (_WORD *)(Pool2 + 60);
            do
            {
              if ( v19 >= v7 )
                break;
              ++v17;
              v21 = 32LL * v19++;
              *v20 = *(_WORD *)&v26[v21];
              v20[1] = *(_WORD *)&v27[v21];
              v20 += 6;
            }
            while ( v17 < 0xC );
            if ( v17 == v8 )
            {
              v3 = 1;
              *v33 = 12;
            }
            else
            {
              if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
                || (v22 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
              {
                v22 = 0;
              }
              if ( v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_AND_TRACE_SF_dd(
                  (__int64)WPP_GLOBAL_Control->AttachedDevice,
                  v22,
                  WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
                  (__int64)gRimLog,
                  2u,
                  1u,
                  0xCu,
                  (__int64)&WPP_6d824989394b3ce9cab05ad9d55f12ee_Traceguids,
                  v17,
                  v8);
            }
            return v3;
          }
LABEL_41:
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
            || (v23 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
          {
            v23 = 0;
          }
          if ( v23 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_AND_TRACE_SF_d(
              (__int64)WPP_GLOBAL_Control->AttachedDevice,
              v23,
              WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
              (__int64)gRimLog,
              2u,
              1u,
              0xDu,
              (__int64)&WPP_6d824989394b3ce9cab05ad9d55f12ee_Traceguids,
              -1073741801);
          return v3;
        }
        break;
      case 2:
        v32 = 0LL;
        if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 1785620818, &v32) )
        {
          v29[0] = &v34;
          v29[1] = &v31;
          Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                    (__int64)v9,
                    (__int64)v29,
                    &v28);
          goto LABEL_24;
        }
        Pool2 = ExAllocatePool2(v14, 160LL, v13);
        if ( Pool2 )
        {
          _InterlockedIncrement64((volatile signed __int64 *)v9 + 16);
          NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
          if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
          {
            if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                   (__int64)v9,
                   (const void *)Pool2,
                   v32,
                   (struct NSInstrumentation::CBackTrace *)BackTrace) )
            {
              Pool2 += 16LL;
              goto LABEL_24;
            }
          }
          else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                      (__int64)v9,
                      Pool2,
                      v32,
                      (struct NSInstrumentation::CBackTrace *)BackTrace) )
          {
            *a2 = (struct tagINPUT_INJECTION_VALUE *)Pool2;
            goto LABEL_25;
          }
          _InterlockedIncrement64((volatile signed __int64 *)v9 + 17);
          _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
        }
        break;
    }
    *a2 = 0LL;
    goto LABEL_41;
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (v25 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
  {
    v25 = 0;
  }
  if ( v25 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v25,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)gRimLog,
      2u,
      1u,
      0xBu,
      (__int64)&WPP_6d824989394b3ce9cab05ad9d55f12ee_Traceguids,
      a1);
  return 0LL;
}
