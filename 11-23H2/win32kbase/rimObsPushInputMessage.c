/*
 * XREFs of rimObsPushInputMessage @ 0x1C01AEC74
 * Callers:
 *     rimObsDeliverInputToObserver @ 0x1C01ADAD4 (rimObsDeliverInputToObserver.c)
 * Callees:
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C004F0F4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00591BC (WPP_RECORDER_AND_TRACE_SF_q.c)
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
 *     rimObsCopyMessage @ 0x1C01AD940 (rimObsCopyMessage.c)
 */

__int64 __fastcall rimObsPushInputMessage(__int64 a1, _DWORD *a2)
{
  char v2; // r14
  _DWORD *v3; // r15
  __int64 v5; // r12
  int v6; // ecx
  unsigned int v7; // r14d
  char v8; // dl
  char *v9; // rdi
  int v10; // eax
  NSInstrumentation::CLeakTrackingAllocator *v11; // rdi
  unsigned __int64 v12; // rbx
  unsigned int v13; // r13d
  int v14; // eax
  __int64 Pool2; // rbx
  _QWORD *v16; // rax
  unsigned int v17; // r10d
  __int64 v18; // r11
  __int64 *v19; // rax
  int v20; // r9d
  char v21; // dl
  __int64 v23; // [rsp+40h] [rbp-C0h]
  _QWORD v24[2]; // [rsp+50h] [rbp-B0h] BYREF
  PVOID BackTrace[28]; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v26; // [rsp+150h] [rbp+50h] BYREF
  unsigned __int64 v27; // [rsp+158h] [rbp+58h] BYREF
  __int64 v28; // [rsp+160h] [rbp+60h] BYREF
  unsigned __int64 v29; // [rsp+168h] [rbp+68h] BYREF

  v2 = 0;
  v3 = a2;
  if ( *a2 )
  {
    v26 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 215);
  }
  v5 = a1 + 144;
  if ( *(_DWORD *)(a1 + 160) == -1 )
  {
    v26 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 220);
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_q(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      1,
      10,
      (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids,
      a1);
  if ( *(_DWORD *)(a1 + 160) >= *(_DWORD *)(a1 + 168) )
  {
    v6 = *(_DWORD *)(a1 + 164);
    if ( v6 != -1 )
      *(_DWORD *)(a1 + 164) = ++v6;
    v7 = -1073741756;
    v8 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v23) = v6;
      WPP_RECORDER_AND_TRACE_SF_d(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v8,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
        3u,
        1u,
        0xBu,
        (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids,
        v23);
    }
    return v7;
  }
  v9 = 0LL;
  if ( *((_QWORD *)v3 + 3) > 0xFFFFFFBFuLL )
  {
    v7 = -1073741675;
    goto LABEL_70;
  }
  v10 = v3[6];
  v11 = gpLeakTrackingAllocator;
  v26 = 1902989138;
  v28 = 260LL;
  v12 = (unsigned int)(v10 + 64);
  v13 = v10 + 48;
  v29 = v12;
  v14 = *(_DWORD *)gpLeakTrackingAllocator;
  if ( !*(_DWORD *)gpLeakTrackingAllocator )
  {
    Pool2 = ExAllocatePool2(260LL, (unsigned int)v12, 1902989138LL);
    if ( Pool2 )
      _InterlockedIncrement64((volatile signed __int64 *)v11 + 14);
    goto LABEL_45;
  }
  if ( v14 != 1 )
  {
    if ( v14 == 2 )
    {
      v27 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 1902989138, &v27) )
      {
        v24[0] = &v28;
        v24[1] = &v26;
        Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                  (__int64)v11,
                  (__int64)v24,
                  &v29);
        goto LABEL_45;
      }
      if ( v12 < 0x1000 || (v12 & 0xFFF) != 0 )
      {
        v12 += 16LL;
        v2 = 1;
        v29 = v12;
      }
      Pool2 = ExAllocatePool2(v18, v12, v17);
      if ( Pool2 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)v11 + 16);
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( v2 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
        {
          if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                 (__int64)v11,
                 (const void *)Pool2,
                 v27,
                 (struct NSInstrumentation::CBackTrace *)BackTrace) )
          {
            Pool2 += 16LL;
            goto LABEL_45;
          }
        }
        else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                    (__int64)v11,
                    Pool2,
                    v27,
                    (struct NSInstrumentation::CBackTrace *)BackTrace) )
        {
          v9 = (char *)Pool2;
          goto LABEL_49;
        }
        _InterlockedIncrement64((volatile signed __int64 *)v11 + 17);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
      }
    }
LABEL_61:
    v9 = 0LL;
    goto LABEL_62;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x716D4F52u)
    || v12 + 16 < v12 )
  {
    goto LABEL_61;
  }
  v16 = (_QWORD *)ExAllocatePool2(v28 & 0xFFFFFFFFFFFFFFFDuLL, v12 + 16, v26);
  Pool2 = (__int64)v16;
  if ( !v16
    || (_InterlockedIncrement64((volatile signed __int64 *)v11 + 14),
        *v16 = 1902989138LL,
        Pool2 = (__int64)(v16 + 2),
        v16 == (_QWORD *)-16LL) )
  {
    NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
      *((NSInstrumentation::CPointerHashTable **)v11 + 1),
      0x716D4F52uLL);
  }
LABEL_45:
  v9 = (char *)Pool2;
  if ( !Pool2 )
  {
LABEL_62:
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(a2) = 0;
    }
    if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)a2,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        1,
        12,
        (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
    v7 = -1073741670;
    goto LABEL_70;
  }
LABEL_49:
  v7 = rimObsCopyMessage(v3, 0, (void **)(Pool2 + 16), v13);
  if ( (v7 & 0x80000000) != 0 )
  {
LABEL_70:
    LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)a2,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        3,
        1,
        14,
        (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
    if ( v9 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v9);
    return v7;
  }
  v19 = *(__int64 **)(a1 + 152);
  if ( *v19 != v5 )
    __fastfail(3u);
  *(_QWORD *)Pool2 = v5;
  *(_QWORD *)(Pool2 + 8) = v19;
  *v19 = Pool2;
  *(_QWORD *)(a1 + 152) = Pool2;
  v20 = *(_DWORD *)(a1 + 160) + 1;
  *(_DWORD *)(a1 + 160) = v20;
  v21 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
     && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v21 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v23) = v20;
    WPP_RECORDER_AND_TRACE_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v21,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
      4u,
      1u,
      0xDu,
      (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids,
      v23);
  }
  return v7;
}
