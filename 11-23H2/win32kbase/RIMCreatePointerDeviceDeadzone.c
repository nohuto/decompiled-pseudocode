/*
 * XREFs of RIMCreatePointerDeviceDeadzone @ 0x1C017D7A0
 * Callers:
 *     <none>
 * Callees:
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C004F0F4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C00744D4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00919C0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C016DC58 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C016DD0C (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C016E25C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C016E628 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C016F5AC (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C016FA4C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 *     ?Initialize@RIMDeadzone@@QEAAJPEBUtagRIMDEADZONE@@@Z @ 0x1C019B144 (-Initialize@RIMDeadzone@@QEAAJPEBUtagRIMDEADZONE@@@Z.c)
 */

__int64 __fastcall RIMCreatePointerDeviceDeadzone(__int64 a1, const struct tagRIMDEADZONE *a2, _QWORD *a3)
{
  _QWORD *v3; // r15
  const struct tagRIMDEADZONE *v4; // r14
  NSInstrumentation::CLeakTrackingAllocator *v6; // rdi
  int v7; // eax
  __int64 Pool2; // rbx
  _QWORD *v9; // rax
  unsigned int v10; // r10d
  __int64 v11; // r11
  int v12; // edi
  int v13; // edx
  int v14; // r8d
  unsigned int v15; // ecx
  _QWORD *v16; // rax
  char v17; // dl
  __int64 v19; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v20[2]; // [rsp+60h] [rbp-A0h] BYREF
  PVOID BackTrace[26]; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v22; // [rsp+150h] [rbp+50h] BYREF
  unsigned __int64 v23; // [rsp+160h] [rbp+60h] BYREF
  __int64 v24; // [rsp+168h] [rbp+68h] BYREF

  v3 = a3;
  v4 = a2;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      (_DWORD)a3,
      (_DWORD)gRimLog,
      4,
      1,
      32,
      (__int64)&WPP_d0136f6132203aac44a878359d3f87a2_Traceguids);
  }
  if ( (*(_DWORD *)(a1 + 200) & 0x80u) == 0 || *(_DWORD *)(a1 + 448) >= 5u )
  {
    v12 = -1073741811;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
    {
      LOBYTE(a2) = 0;
    }
    if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)a2,
        (_DWORD)a3,
        (_DWORD)gRimLog,
        3,
        1,
        34,
        (__int64)&WPP_d0136f6132203aac44a878359d3f87a2_Traceguids);
    }
    goto LABEL_50;
  }
  v6 = gpLeakTrackingAllocator;
  v19 = 64LL;
  v22 = 1853506642;
  v24 = 260LL;
  v7 = *(_DWORD *)gpLeakTrackingAllocator;
  if ( !*(_DWORD *)gpLeakTrackingAllocator )
  {
    Pool2 = ExAllocatePool2(260LL, 64LL, 1853506642LL);
    if ( Pool2 )
      _InterlockedAdd64((volatile signed __int64 *)v6 + 14, 1uLL);
    goto LABEL_28;
  }
  if ( v7 != 1 )
  {
    if ( v7 == 2 )
    {
      v23 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 1853506642, &v23) )
      {
        v20[0] = &v24;
        v20[1] = &v22;
        Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                  (__int64)v6,
                  (__int64)v20,
                  &v19);
        goto LABEL_28;
      }
      Pool2 = ExAllocatePool2(v11, 80LL, v10);
      if ( Pool2 )
      {
        _InterlockedAdd64((volatile signed __int64 *)v6 + 16, 1uLL);
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
        {
          if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                 (__int64)v6,
                 (const void *)Pool2,
                 v23,
                 (struct NSInstrumentation::CBackTrace *)BackTrace) )
          {
            Pool2 += 16LL;
            goto LABEL_28;
          }
        }
        else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                    (__int64)v6,
                    Pool2,
                    v23,
                    (struct NSInstrumentation::CBackTrace *)BackTrace) )
        {
          goto LABEL_29;
        }
        _InterlockedAdd64((volatile signed __int64 *)v6 + 17, 1uLL);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
      }
    }
LABEL_25:
    v12 = -1073741801;
    goto LABEL_50;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x6E7A4452u) )
    goto LABEL_25;
  v9 = (_QWORD *)ExAllocatePool2(v24 & 0xFFFFFFFFFFFFFFFDuLL, 80LL, v22);
  Pool2 = (__int64)v9;
  if ( !v9
    || (_InterlockedAdd64((volatile signed __int64 *)v6 + 14, 1uLL),
        *v9 = 1853506642LL,
        Pool2 = (__int64)(v9 + 2),
        v9 == (_QWORD *)-16LL) )
  {
    NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
      *((NSInstrumentation::CPointerHashTable **)v6 + 1),
      0x6E7A4452uLL);
  }
LABEL_28:
  if ( !Pool2 )
    goto LABEL_25;
LABEL_29:
  v12 = RIMDeadzone::Initialize((RIMDeadzone *)Pool2, v4);
  if ( v12 < 0 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v13) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
    {
      LOBYTE(v13) = 0;
    }
    if ( (_BYTE)v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v14) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v13,
        v14,
        (_DWORD)gRimLog,
        3,
        1,
        33,
        (__int64)&WPP_d0136f6132203aac44a878359d3f87a2_Traceguids);
    }
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)Pool2);
  }
  else
  {
    v15 = 0;
    v16 = (_QWORD *)(a1 + 408);
    while ( *v16 )
    {
      ++v15;
      ++v16;
      if ( v15 >= 5 )
      {
        v22 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1147);
        goto LABEL_50;
      }
    }
    *(_QWORD *)(a1 + 8LL * v15 + 408) = Pool2;
    ++*(_DWORD *)(a1 + 448);
    *v3 = v15;
  }
LABEL_50:
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (v17 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    v17 = 0;
  }
  if ( v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v17,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)gRimLog,
      4u,
      1u,
      0x23u,
      (__int64)&WPP_d0136f6132203aac44a878359d3f87a2_Traceguids,
      v12);
  return (unsigned int)v12;
}
