/*
 * XREFs of RIMHidGetPreparsedData @ 0x1C0181BB0
 * Callers:
 *     RIMCreateHidDesc @ 0x1C007EF3C (RIMCreateHidDesc.c)
 * Callees:
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C004F0F4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00591BC (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     RIMGetDeviceObjectPointer @ 0x1C006E118 (RIMGetDeviceObjectPointer.c)
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
 */

__int64 __fastcall RIMHidGetPreparsedData(
        struct _UNICODE_STRING *a1,
        void **a2,
        PVOID *a3,
        PDEVICE_OBJECT *a4,
        _DWORD *OutputBuffer)
{
  char v5; // si
  int v8; // eax
  char v9; // dl
  int v10; // edx
  int v11; // r8d
  PIRP v12; // rax
  int v13; // r8d
  int v14; // edx
  int v15; // edx
  NTSTATUS Status; // r8d
  char v17; // dl
  unsigned __int64 v18; // rdi
  NSInstrumentation::CLeakTrackingAllocator *v19; // rsi
  char v20; // r15
  int v21; // eax
  __int64 UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64; // rdi
  _QWORD *Pool2; // rax
  unsigned int v24; // r10d
  __int64 v25; // r11
  PIRP v26; // rax
  int v27; // r8d
  int v28; // edx
  NTSTATUS v29; // r8d
  char v30; // dl
  PIO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-C0h]
  PIO_STATUS_BLOCK IoStatusBlocka; // [rsp+40h] [rbp-C0h]
  unsigned int v34; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v35[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v36; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v37; // [rsp+78h] [rbp-88h] BYREF
  struct _KEVENT Event; // [rsp+80h] [rbp-80h] BYREF
  struct _IO_STATUS_BLOCK v39; // [rsp+98h] [rbp-68h] BYREF
  PVOID BackTrace[26]; // [rsp+B0h] [rbp-50h] BYREF
  char v41; // [rsp+190h] [rbp+90h]

  v41 = (char)a1;
  v5 = (char)a1;
  v39 = 0LL;
  memset(&Event, 0, sizeof(Event));
  v8 = RIMGetDeviceObjectPointer(a1 + 13, (__int64)a2, (__int64)a3, a2, a3, a4);
  if ( v8 >= 0 )
  {
    if ( !*a3 )
    {
      v34 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 720);
    }
    if ( !*a4 )
    {
      v34 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 721);
    }
    ObfReferenceObject(*a4);
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v10) = 0;
    }
    if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_q(
        WPP_GLOBAL_Control->AttachedDevice,
        v10,
        v11,
        (_DWORD)gRimLog,
        4,
        1,
        31,
        (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids,
        v5);
    }
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v12 = IoBuildDeviceIoControlRequest(0xB01A8u, *a4, 0LL, 0, OutputBuffer, 0xCu, 0, &Event, &v39);
    v14 = (int)v12;
    if ( !v12 )
    {
      LOBYTE(v14) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
      if ( (_BYTE)v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v14,
          v13,
          (_DWORD)gRimLog,
          3,
          1,
          32,
          (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids);
      }
LABEL_98:
      ObfDereferenceObject(*a3);
      *a3 = 0LL;
      ZwClose(*a2);
      *a2 = 0LL;
      if ( !*a4 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 817);
      ObfDereferenceObject(*a4);
      *a4 = 0LL;
      return 0LL;
    }
    v12->Tail.Overlay.CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)*a3;
    Status = IofCallDriver(*a4, v12);
    if ( Status == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      Status = v39.Status;
    }
    if ( Status )
    {
      v17 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
         && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
      if ( v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(IoStatusBlock) = Status;
        WPP_RECORDER_AND_TRACE_SF_d(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v17,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          (__int64)gRimLog,
          3u,
          1u,
          0x21u,
          (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids,
          IoStatusBlock);
      }
      goto LABEL_98;
    }
    v18 = (unsigned int)*OutputBuffer;
    v19 = gpLeakTrackingAllocator;
    v20 = 0;
    v34 = 1886417746;
    v36 = 68LL;
    v37 = v18;
    v21 = *(_DWORD *)gpLeakTrackingAllocator;
    if ( *(_DWORD *)gpLeakTrackingAllocator )
    {
      if ( v21 != 1 )
      {
        if ( v21 != 2 )
          goto LABEL_91;
        v35[0] = 0LL;
        if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 1886417746, v35) )
        {
          v35[0] = (unsigned __int64)&v36;
          v35[1] = (unsigned __int64)&v34;
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                                                                                             (__int64)v19,
                                                                                             (__int64)v35,
                                                                                             &v37);
          goto LABEL_60;
        }
        if ( v18 < 0x1000 || (v18 & 0xFFF) != 0 )
        {
          v18 += 16LL;
          v20 = 1;
          v37 = v18;
        }
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(v25, v18, v24);
        if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
          goto LABEL_91;
        _InterlockedAdd64((volatile signed __int64 *)v19 + 16, 1uLL);
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( v20
          && (unsigned __int64)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 & 0xFFF)
           + 16 < 0x1000 )
        {
          if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                 (__int64)v19,
                 (const void *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                 v35[0],
                 (struct NSInstrumentation::CBackTrace *)BackTrace) )
          {
            UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 += 16LL;
            goto LABEL_60;
          }
        }
        else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                    (__int64)v19,
                    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                    v35[0],
                    (struct NSInstrumentation::CBackTrace *)BackTrace) )
        {
          goto LABEL_63;
        }
        _InterlockedAdd64((volatile signed __int64 *)v19 + 17, 1uLL);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
        goto LABEL_91;
      }
      if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x70707352u)
        || v18 + 16 < v18 )
      {
        goto LABEL_91;
      }
      Pool2 = (_QWORD *)ExAllocatePool2(v36 & 0xFFFFFFFFFFFFFFFDuLL, v18 + 16, v34);
      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)Pool2;
      if ( !Pool2
        || (_InterlockedAdd64((volatile signed __int64 *)v19 + 14, 1uLL),
            *Pool2 = 1886417746LL,
            UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)(Pool2 + 2),
            Pool2 == (_QWORD *)-16LL) )
      {
        NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
          *((NSInstrumentation::CPointerHashTable **)v19 + 1),
          0x70707352uLL);
      }
    }
    else
    {
      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                         68LL,
                                                                                         (unsigned int)v18,
                                                                                         1886417746LL);
      if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
        _InterlockedAdd64((volatile signed __int64 *)v19 + 14, 1uLL);
    }
LABEL_60:
    if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
    {
LABEL_91:
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v15) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
      {
        LOBYTE(v15) = 0;
      }
      if ( (_BYTE)v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(Status) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v15,
          Status,
          (_DWORD)gRimLog,
          3,
          1,
          34,
          (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids);
      }
      goto LABEL_98;
    }
LABEL_63:
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v15) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v15) = 0;
    }
    if ( (_BYTE)v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(Status) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_q(
        WPP_GLOBAL_Control->AttachedDevice,
        v15,
        Status,
        (_DWORD)gRimLog,
        4,
        1,
        35,
        (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids,
        v41);
    }
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v26 = IoBuildDeviceIoControlRequest(
            0xB0193u,
            *a4,
            0LL,
            0,
            (PVOID)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
            *OutputBuffer,
            0,
            &Event,
            &v39);
    v28 = (int)v26;
    if ( v26 )
    {
      v26->Tail.Overlay.CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)*a3;
      v29 = IofCallDriver(*a4, v26);
      if ( v29 == 259 )
      {
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        v29 = v39.Status;
      }
      if ( !v29 )
        return UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (v30 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
      {
        v30 = 0;
      }
      if ( v30 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(IoStatusBlocka) = v29;
        WPP_RECORDER_AND_TRACE_SF_d(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v30,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          (__int64)gRimLog,
          3u,
          1u,
          0x25u,
          (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids,
          IoStatusBlocka);
      }
    }
    else
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v28) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
      {
        LOBYTE(v28) = 0;
      }
      if ( (_BYTE)v28 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v27) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v28,
          v27,
          (_DWORD)gRimLog,
          3,
          1,
          36,
          (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids);
      }
    }
    NSInstrumentation::CLeakTrackingAllocator::Free(
      gpLeakTrackingAllocator,
      (char *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
    goto LABEL_98;
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (v9 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
  {
    v9 = 0;
  }
  if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v9,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)gRimLog,
      3u,
      1u,
      0x1Eu,
      (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids,
      v8);
  return 0LL;
}
