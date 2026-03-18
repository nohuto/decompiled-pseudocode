/*
 * XREFs of rimObsDeliverInputToObserver @ 0x1C01ADAD4
 * Callers:
 *     rimObsDeliverToExclusiveObservers @ 0x1C00053E4 (rimObsDeliverToExclusiveObservers.c)
 *     rimObsDeliverToNonExclusiveObservers @ 0x1C0005B48 (rimObsDeliverToNonExclusiveObservers.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C000A528 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C004F0F4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     _tlgKeywordOn @ 0x1C0053E90 (_tlgKeywordOn.c)
 *     RIMLockExclusive @ 0x1C0055140 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00591BC (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C00744D4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1C00749F8 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00919C0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x1C015009C (--$Write@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C016DC58 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C016DD0C (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C016E25C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C016E628 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C016F5AC (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C016FA4C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 *     rimObsCheckForExistingDeviceHandle @ 0x1C01AD58C (rimObsCheckForExistingDeviceHandle.c)
 *     rimObsCopyMessage @ 0x1C01AD940 (rimObsCopyMessage.c)
 *     rimObsPushInputMessage @ 0x1C01AEC74 (rimObsPushInputMessage.c)
 */

__int64 __fastcall rimObsDeliverInputToObserver(__int64 a1, __int64 a2)
{
  char v4; // dl
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // esi
  __int64 *v8; // rdx
  int v9; // r8d
  int v10; // edx
  NSInstrumentation::CLeakTrackingAllocator *v11; // rdi
  int v12; // edx
  __int64 UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64; // rbx
  _QWORD *Pool2; // rax
  unsigned int v15; // r10d
  __int64 v16; // r11
  __int64 v17; // rdi
  int v18; // ecx
  int v19; // edx
  __int64 v20; // rax
  void **v21; // rbx
  int v22; // edx
  int v23; // r8d
  char v24; // dl
  unsigned int v25; // r9d
  int v26; // edx
  void *v27; // rcx
  char v28; // dl
  char v29; // dl
  __int64 v31; // [rsp+40h] [rbp-C0h]
  __int64 v32; // [rsp+48h] [rbp-B8h]
  _QWORD v33[2]; // [rsp+50h] [rbp-B0h] BYREF
  int v34[2]; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE v35; // [rsp+68h] [rbp-98h]
  int v36; // [rsp+70h] [rbp-90h]
  int v37; // [rsp+74h] [rbp-8Ch]
  __int64 v38; // [rsp+78h] [rbp-88h]
  int v39; // [rsp+80h] [rbp-80h]
  int v40; // [rsp+84h] [rbp-7Ch]
  __int64 v41; // [rsp+88h] [rbp-78h]
  __int64 v42; // [rsp+90h] [rbp-70h] BYREF
  __int64 v43; // [rsp+98h] [rbp-68h] BYREF
  __int64 v44; // [rsp+A0h] [rbp-60h] BYREF
  int v45; // [rsp+A8h] [rbp-58h]
  int v46; // [rsp+ACh] [rbp-54h]
  __int128 v47; // [rsp+B0h] [rbp-50h]
  __int128 v48; // [rsp+C0h] [rbp-40h]
  PVOID BackTrace[28]; // [rsp+D0h] [rbp-30h] BYREF
  unsigned int v50; // [rsp+1C0h] [rbp+C0h] BYREF
  HANDLE Handle; // [rsp+1C8h] [rbp+C8h] BYREF
  unsigned __int64 v52; // [rsp+1D0h] [rbp+D0h] BYREF
  __int64 v53; // [rsp+1D8h] [rbp+D8h] BYREF

  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (v4 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    v4 = 0;
  }
  if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_qq(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v4,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
      4u,
      1u,
      0x14u,
      (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids,
      a1,
      a2);
  if ( (unsigned int)dword_1C0289810 > 4 && tlgKeywordOn((__int64)&dword_1C0289810, 256LL) )
  {
    v42 = a2;
    v33[0] = a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      (__int64)&dword_1C0289810,
      byte_1C025AC4C,
      v5,
      v6,
      (__int64)v33,
      (__int64)&v42);
  }
  v7 = 0;
  RIMLockExclusive(a2 + 176);
  Handle = rimObsCheckForExistingDeviceHandle(a2, *(PVOID *)(a1 + 32));
  if ( Handle == (HANDLE)-1LL )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v8) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v8) = 0;
    }
    if ( (_BYTE)v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)v8,
        v9,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        1,
        21,
        (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
    }
    v7 = ObOpenObjectByPointer(*(PVOID *)(a1 + 32), 0, 0LL, 3u, ExRawInputManagerObjectType, 0, &Handle);
    if ( v7 < 0 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
      {
        LOBYTE(v10) = 0;
      }
      if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v10,
          v9,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          3,
          1,
          24,
          (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
      }
      goto LABEL_135;
    }
    v11 = gpLeakTrackingAllocator;
    v50 = 1701334866;
    v53 = 260LL;
    v43 = 24LL;
    v12 = *(_DWORD *)gpLeakTrackingAllocator;
    if ( *(_DWORD *)gpLeakTrackingAllocator )
    {
      if ( v12 != 1 )
      {
        if ( v12 != 2 )
          goto LABEL_60;
        v52 = 0LL;
        if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 1701334866, &v52) )
        {
          v33[0] = &v53;
          v33[1] = &v50;
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                                                                                             (__int64)v11,
                                                                                             (__int64)v33,
                                                                                             &v43);
          goto LABEL_35;
        }
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(v16, 40LL, v15);
        if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
          goto LABEL_60;
        _InterlockedIncrement64((volatile signed __int64 *)v11 + 16);
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( (unsigned __int64)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 & 0xFFF)
           + 16 >= 0x1000 )
        {
          if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                 (__int64)v11,
                 UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                 v52,
                 (struct NSInstrumentation::CBackTrace *)BackTrace) )
          {
LABEL_38:
            *(_QWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 16) = Handle;
            if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
              || (LOBYTE(v12) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
            {
              LOBYTE(v12) = 0;
            }
            if ( (_BYTE)v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              WPP_RECORDER_AND_TRACE_SF_q(
                WPP_GLOBAL_Control->AttachedDevice,
                v12,
                v9,
                WPP_MAIN_CB.Queue.ListEntry.Flink,
                4,
                1,
                23,
                (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids,
                (char)Handle);
            }
            v8 = *(__int64 **)(a2 + 136);
            if ( *v8 != a2 + 128 )
              __fastfail(3u);
            *(_QWORD *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = a2 + 128;
            *(_QWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 8) = v8;
            *v8 = UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
            *(_QWORD *)(a2 + 136) = UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
            goto LABEL_48;
          }
        }
        else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                    (__int64)v11,
                    (const void *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                    v52,
                    (struct NSInstrumentation::CBackTrace *)BackTrace) )
        {
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 += 16LL;
          goto LABEL_35;
        }
        _InterlockedIncrement64((volatile signed __int64 *)v11 + 17);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
        goto LABEL_60;
      }
      if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x65684F52u) )
        goto LABEL_60;
      Pool2 = (_QWORD *)ExAllocatePool2(v53 & 0xFFFFFFFFFFFFFFFDuLL, 40LL, v50);
      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)Pool2;
      if ( !Pool2
        || (_InterlockedIncrement64((volatile signed __int64 *)v11 + 14),
            *Pool2 = 1701334866LL,
            UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)(Pool2 + 2),
            Pool2 == (_QWORD *)-16LL) )
      {
        NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
          *((NSInstrumentation::CPointerHashTable **)v11 + 1),
          0x65684F52uLL);
      }
    }
    else
    {
      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                         260LL,
                                                                                         24LL,
                                                                                         1701334866LL);
      if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
        _InterlockedIncrement64((volatile signed __int64 *)v11 + 14);
    }
LABEL_35:
    if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
    {
LABEL_60:
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v12) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(v12) = 0;
      }
      if ( (_BYTE)v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v12,
          v9,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          2,
          1,
          22,
          (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
      }
      v7 = -1073741670;
      ObCloseHandle(Handle, *(_BYTE *)(a2 + 72));
      goto LABEL_135;
    }
    goto LABEL_38;
  }
LABEL_48:
  LODWORD(v17) = 48;
  v34[1] = 0;
  v37 = 0;
  v40 = 0;
  if ( *(_DWORD *)(a2 + 104) < 0x30u )
  {
    v50 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 515);
  }
  if ( *(int *)(a1 + 256) < 0 )
  {
    v7 = *(_DWORD *)(a1 + 256);
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (v28 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
    {
      v28 = 0;
    }
    if ( v28 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v31) = *(_DWORD *)(a1 + 256);
      WPP_RECORDER_AND_TRACE_SF_d(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v28,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
        3u,
        1u,
        0x1Au,
        (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids,
        v31);
    }
  }
  else
  {
    if ( *(_QWORD *)(a1 + 264) <= 0xFFFFFFCFuLL )
    {
      v17 = *(_QWORD *)(a1 + 264) + 48LL;
    }
    else
    {
      v7 = -1073741675;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v8) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
      {
        LOBYTE(v8) = 0;
      }
      if ( (_BYTE)v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          (_DWORD)v8,
          v9,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          3,
          1,
          25,
          (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
      }
    }
    if ( v7 >= 0 )
    {
      v18 = *(_DWORD *)(a1 + 256);
      v19 = *(unsigned __int8 *)(a1 + 48);
      v38 = *(_QWORD *)(a1 + 264);
      v35 = Handle;
      v34[0] = 0;
      v36 = v18;
      v39 = v19;
      v41 = 0LL;
      if ( v18 < 0 )
        goto LABEL_86;
      if ( v19 )
      {
        if ( --v19 )
        {
          if ( v19 == 1 )
          {
            v41 = *(_QWORD *)(*(_QWORD *)(a1 + 456) + 24LL);
          }
          else
          {
            v50 = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 563);
          }
LABEL_86:
          if ( *(_DWORD *)(a2 + 88) == 1 )
          {
            if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
              || (LOBYTE(v19) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
            {
              LOBYTE(v19) = 0;
            }
            if ( (_BYTE)v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              WPP_RECORDER_AND_TRACE_SF_(
                WPP_GLOBAL_Control->AttachedDevice,
                v19,
                v9,
                WPP_MAIN_CB.Queue.ListEntry.Flink,
                4,
                1,
                27,
                (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
            }
            v21 = *(void ***)(a2 + 96);
            v7 = rimObsCopyMessage(v34, *(_DWORD *)(a2 + 72), v21, *(_DWORD *)(a2 + 104));
            if ( v7 == -1073741789 )
            {
              if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
                || (v24 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
              {
                v24 = 0;
              }
              if ( v24 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LODWORD(v32) = v17;
                LODWORD(v31) = *(_DWORD *)(a2 + 104);
                WPP_RECORDER_AND_TRACE_SF_dd(
                  (__int64)WPP_GLOBAL_Control->AttachedDevice,
                  v24,
                  WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
                  (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
                  3u,
                  1u,
                  0x1Cu,
                  (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids,
                  v31,
                  v32);
              }
              v25 = *(_DWORD *)(a2 + 104);
              v26 = *(_DWORD *)(a2 + 72);
              v44 = 1LL;
              v45 = 0;
              v46 = v17;
              v47 = 0LL;
              v48 = 0LL;
              rimObsCopyMessage((int *)&v44, v26, v21, v25);
              v7 = rimObsPushInputMessage(a2, v34);
            }
            else
            {
              if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
                || (LOBYTE(v22) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
              {
                LOBYTE(v22) = 0;
              }
              if ( (_BYTE)v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v23) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                WPP_RECORDER_AND_TRACE_SF_(
                  WPP_GLOBAL_Control->AttachedDevice,
                  v22,
                  v23,
                  WPP_MAIN_CB.Queue.ListEntry.Flink,
                  4,
                  1,
                  29,
                  (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
              }
            }
            if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
              || (LOBYTE(v22) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
            {
              LOBYTE(v22) = 0;
            }
            if ( (_BYTE)v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v23) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              WPP_RECORDER_AND_TRACE_SF_(
                WPP_GLOBAL_Control->AttachedDevice,
                v22,
                v23,
                WPP_MAIN_CB.Queue.ListEntry.Flink,
                4,
                1,
                30,
                (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
            }
            v27 = *(void **)(a2 + 80);
            *(_DWORD *)(a2 + 88) = 0;
            ZwSetEvent(v27, 0LL);
          }
          else
          {
            if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
              || (LOBYTE(v19) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
            {
              LOBYTE(v19) = 0;
            }
            if ( (_BYTE)v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              WPP_RECORDER_AND_TRACE_SF_(
                WPP_GLOBAL_Control->AttachedDevice,
                v19,
                v9,
                WPP_MAIN_CB.Queue.ListEntry.Flink,
                4,
                1,
                31,
                (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
            }
            v7 = rimObsPushInputMessage(a2, v34);
            if ( v7 == -1073741756 )
              v7 = 0;
          }
          goto LABEL_135;
        }
        v20 = a1 + 496;
      }
      else
      {
        v20 = a1 + 468;
      }
      v41 = v20;
      goto LABEL_86;
    }
  }
LABEL_135:
  *(_QWORD *)(a2 + 184) = 0LL;
  ExReleasePushLockExclusiveEx(a2 + 176, 0LL);
  KeLeaveCriticalRegion();
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (v29 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    v29 = 0;
  }
  if ( v29 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v31) = v7;
    WPP_RECORDER_AND_TRACE_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v29,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
      4u,
      1u,
      0x20u,
      (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids,
      v31);
  }
  return (unsigned int)v7;
}
