/*
 * XREFs of ?GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C01CB674
 * Callers:
 *     NtUserGetPointerInputTransform @ 0x1C0145370 (NtUserGetPointerInputTransform.c)
 * Callees:
 *     ValidateHwndEx @ 0x1C0045FD0 (ValidateHwndEx.c)
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C004F0F4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     UserSetLastError @ 0x1C005E3B4 (UserSetLastError.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C00665BC (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00919C0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C00E4510 (-GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND.c)
 *     ValidateHbwnd @ 0x1C012FD70 (ValidateHbwnd.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C016DC58 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C016DD0C (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C016E25C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C016E628 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C016F5AC (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C016FA4C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 *     ?GetPointerDataQPCTimeList@CTouchProcessor@@QEAAH_KIPEA_KPEAH@Z @ 0x1C01C79E0 (-GetPointerDataQPCTimeList@CTouchProcessor@@QEAAH_KIPEA_KPEAH@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_L @ 0x1C01DA8F8 (WPP_RECORDER_AND_TRACE_SF_L.c)
 *     ApiSetGetInputTransformList @ 0x1C0207BA8 (ApiSetGetInputTransformList.c)
 *     ApiSetHasInputTransform @ 0x1C0207D9C (ApiSetHasInputTransform.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerTransform(
        CTouchProcessor *this,
        struct tagTHREADINFO *a2,
        __int16 a3,
        unsigned int a4,
        struct tagINPUT_TRANSFORM *a5)
{
  char v5; // r14
  __int64 v7; // r15
  char v10; // bl
  int v11; // r8d
  __int64 ThreadPointerData; // r13
  int v13; // edx
  int v14; // r8d
  int v15; // edx
  int v16; // r8d
  int v17; // r9d
  int v18; // edx
  int v19; // ecx
  __int64 UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64; // rdi
  NSInstrumentation::CLeakTrackingAllocator *v21; // rsi
  unsigned __int64 v22; // rdi
  int v23; // eax
  _QWORD *Pool2; // rax
  unsigned int v25; // r10d
  __int64 v26; // r11
  int v27; // edx
  unsigned int PointerDataQPCTimeList; // esi
  int v29; // r8d
  int v30; // r9d
  int v31; // ecx
  PDEVICE_OBJECT v32; // rcx
  int v33; // edx
  int v35; // edx
  int v36; // [rsp+28h] [rbp-D8h]
  __int16 v37; // [rsp+30h] [rbp-D0h]
  HWND v38; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v39[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v40; // [rsp+70h] [rbp-90h] BYREF
  __int64 v41; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v42[2]; // [rsp+80h] [rbp-80h] BYREF
  PVOID BackTrace[26]; // [rsp+90h] [rbp-70h] BYREF
  int v44; // [rsp+178h] [rbp+78h] BYREF
  unsigned int v45; // [rsp+180h] [rbp+80h] BYREF

  v5 = 0;
  v7 = a4;
  v42[0] = 0LL;
  v38 = 0LL;
  v10 = 1;
  if ( a3 == 1 )
  {
    v45 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 14409);
  }
  ThreadPointerData = CTouchProcessor::GetThreadPointerData(
                        this,
                        (struct tagTHREADINFO *)((char *)a2 + 1128),
                        a3,
                        0LL,
                        0LL,
                        &v38);
  if ( !ThreadPointerData )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v10 = 0;
    }
    if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v13 = 315;
      LOBYTE(v13) = v10;
      LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        v13,
        v11,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        4,
        315,
        (__int64)&WPP_2c5ea56a6e6f31fa38ff36b2483c7d67_Traceguids,
        a3);
    }
LABEL_94:
    v19 = 87;
LABEL_95:
    UserSetLastError(v19);
    return 0LL;
  }
  if ( !ValidateHbwnd((int)v38) && !ValidateHwndEx((__int64)v38, 1, 0) )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v10 = 0;
    }
    if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v15 = 316;
      LOBYTE(v15) = v10;
      LOBYTE(v14) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v15,
        v14,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        4,
        316,
        (__int64)&WPP_2c5ea56a6e6f31fa38ff36b2483c7d67_Traceguids);
    }
    goto LABEL_94;
  }
  if ( !(unsigned int)ApiSetHasInputTransform(v38) )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v10 = 0;
    }
    if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v18 = 317;
      LOBYTE(v18) = v10;
      LOBYTE(v16) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v18,
        v16,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        4,
        317,
        (__int64)&WPP_2c5ea56a6e6f31fa38ff36b2483c7d67_Traceguids);
    }
    v19 = 232;
    goto LABEL_95;
  }
  if ( (_DWORD)v7 == 1 )
  {
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)v42;
    goto LABEL_54;
  }
  v21 = gpLeakTrackingAllocator;
  v22 = 8 * v7;
  v41 = 8 * v7;
  v45 = 2020176725;
  v40 = 260LL;
  v23 = *(_DWORD *)gpLeakTrackingAllocator;
  if ( *(_DWORD *)gpLeakTrackingAllocator )
  {
    if ( v23 != 1 )
    {
      if ( v23 != 2 )
        goto LABEL_87;
      v39[0] = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 2020176725, v39) )
      {
        v39[0] = (unsigned __int64)&v40;
        v39[1] = (unsigned __int64)&v45;
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                                                                                           (__int64)v21,
                                                                                           (__int64)v39,
                                                                                           &v41);
        goto LABEL_51;
      }
      if ( v22 < 0x1000 || (v22 & 0xFFF) != 0 )
      {
        v22 += 16LL;
        v5 = 1;
        v41 = v22;
      }
      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(v26, v22, v25);
      if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
        goto LABEL_87;
      _InterlockedAdd64((volatile signed __int64 *)v21 + 16, 1uLL);
      NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
      if ( v5
        && (unsigned __int64)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 & 0xFFF)
         + 16 < 0x1000 )
      {
        if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
               (__int64)v21,
               (const void *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
               v39[0],
               (struct NSInstrumentation::CBackTrace *)BackTrace) )
        {
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 += 16LL;
          goto LABEL_51;
        }
      }
      else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                  (__int64)v21,
                  UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                  v39[0],
                  (struct NSInstrumentation::CBackTrace *)BackTrace) )
      {
        goto LABEL_54;
      }
      _InterlockedAdd64((volatile signed __int64 *)v21 + 17, 1uLL);
      _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
      goto LABEL_87;
    }
    if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x78697355u)
      || v22 + 16 < v22 )
    {
      goto LABEL_87;
    }
    Pool2 = (_QWORD *)ExAllocatePool2(v40 & 0xFFFFFFFFFFFFFFFDuLL, v22 + 16, v45);
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)Pool2;
    if ( !Pool2
      || (_InterlockedAdd64((volatile signed __int64 *)v21 + 14, 1uLL),
          *Pool2 = 2020176725LL,
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)(Pool2 + 2),
          Pool2 == (_QWORD *)-16LL) )
    {
      NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
        *((NSInstrumentation::CPointerHashTable **)v21 + 1),
        0x78697355uLL);
    }
  }
  else
  {
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                       260LL,
                                                                                       8 * v7,
                                                                                       2020176725LL);
    if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
      _InterlockedAdd64((volatile signed __int64 *)v21 + 14, 1uLL);
  }
LABEL_51:
  if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
  {
LABEL_87:
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v10 = 0;
    }
    if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v35 = 318;
      LOBYTE(v35) = v10;
      LOBYTE(v16) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_L(
        WPP_GLOBAL_Control->AttachedDevice,
        v35,
        v16,
        v17,
        2,
        v36,
        318,
        (__int64)&WPP_2c5ea56a6e6f31fa38ff36b2483c7d67_Traceguids,
        v7);
    }
    goto LABEL_94;
  }
LABEL_54:
  v44 = 1;
  PointerDataQPCTimeList = CTouchProcessor::GetPointerDataQPCTimeList(
                             (struct _KTHREAD **)this,
                             ThreadPointerData,
                             v7,
                             (unsigned __int64 *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                             &v44);
  if ( PointerDataQPCTimeList )
  {
    PointerDataQPCTimeList = ApiSetGetInputTransformList(
                               (_DWORD)v38,
                               v7,
                               UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                               v30,
                               (__int64)a5);
    if ( PointerDataQPCTimeList )
      goto LABEL_82;
    v32 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v10 = 0;
    }
    LOBYTE(v29) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_80;
    v33 = 321;
    goto LABEL_79;
  }
  if ( !v44 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v10 = 0;
    }
    if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v27) = v10;
      LOBYTE(v29) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v27,
        v29,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        4,
        319,
        (__int64)&WPP_2c5ea56a6e6f31fa38ff36b2483c7d67_Traceguids);
    }
    v31 = 232;
    goto LABEL_81;
  }
  v32 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
  {
    v10 = 0;
  }
  LOBYTE(v29) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v33 = 320;
LABEL_79:
    v37 = v33;
    LOBYTE(v33) = v10;
    WPP_RECORDER_AND_TRACE_SF_(
      v32->AttachedDevice,
      v33,
      v29,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      2,
      4,
      v37,
      (__int64)&WPP_2c5ea56a6e6f31fa38ff36b2483c7d67_Traceguids);
  }
LABEL_80:
  v31 = 87;
LABEL_81:
  UserSetLastError(v31);
LABEL_82:
  if ( (unsigned __int64 *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 != v42
    && UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(
      gpLeakTrackingAllocator,
      (char *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
  }
  return PointerDataQPCTimeList;
}
