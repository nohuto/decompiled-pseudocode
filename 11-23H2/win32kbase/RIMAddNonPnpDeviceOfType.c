/*
 * XREFs of RIMAddNonPnpDeviceOfType @ 0x1C0175C40
 * Callers:
 *     <none>
 * Callees:
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C004F0F4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMLockExclusive @ 0x1C0055140 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C00744D4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     DeviceTypeToRimInputType @ 0x1C00750D0 (DeviceTypeToRimInputType.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C00751C0 (RawInputManagerObjectResolveHandle.c)
 *     rimOnPnpArrived @ 0x1C0076A78 (rimOnPnpArrived.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00919C0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     RIMCreateDev @ 0x1C00C874C (RIMCreateDev.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C016DC58 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C016DD0C (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C016E25C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C016E628 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C016F5AC (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C016FA4C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 *     RIMFreeDev @ 0x1C0170F30 (RIMFreeDev.c)
 */

__int64 __fastcall RIMAddNonPnpDeviceOfType(char *a1, const UNICODE_STRING *a2, unsigned int a3, int a4, _QWORD *a5)
{
  unsigned int v6; // r12d
  const UNICODE_STRING *v7; // r14
  int v9; // edi
  _DWORD *v10; // rsi
  int v11; // edx
  int v12; // ecx
  WCHAR *Buffer; // rax
  unsigned __int64 v14; // rdi
  ULONG64 v15; // rdx
  NSInstrumentation::CLeakTrackingAllocator *v16; // rsi
  int v17; // edx
  __int64 Pool2; // rdi
  _QWORD *v19; // rax
  unsigned int v20; // edx
  __int64 v21; // r10
  char v22; // r14
  _QWORD *v23; // rdx
  PDEVICE_OBJECT v24; // rcx
  _UNKNOWN **v25; // r8
  __int16 v26; // ax
  char v27; // dl
  int v29; // [rsp+50h] [rbp-158h]
  int v30; // [rsp+54h] [rbp-154h]
  unsigned int v31; // [rsp+60h] [rbp-148h] BYREF
  __int64 v32; // [rsp+68h] [rbp-140h] BYREF
  PVOID Object; // [rsp+70h] [rbp-138h] BYREF
  __int64 v34; // [rsp+78h] [rbp-130h] BYREF
  unsigned __int64 v35; // [rsp+80h] [rbp-128h] BYREF
  const UNICODE_STRING *p_DestinationString; // [rsp+88h] [rbp-120h]
  struct _UNICODE_STRING DestinationString; // [rsp+90h] [rbp-118h] BYREF
  unsigned __int64 v38; // [rsp+A0h] [rbp-108h] BYREF
  _QWORD *v39; // [rsp+A8h] [rbp-100h]
  UNICODE_STRING SourceString; // [rsp+B0h] [rbp-F8h] BYREF
  _QWORD v41[4]; // [rsp+C0h] [rbp-E8h] BYREF
  PVOID BackTrace[20]; // [rsp+E0h] [rbp-C8h] BYREF

  v6 = a3;
  v7 = a2;
  Object = 0LL;
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
      a3,
      (_DWORD)gRimLog,
      4,
      1,
      31,
      (__int64)&WPP_f9e9c6706b933e49bdb016a372583459_Traceguids);
  }
  v9 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  v29 = v9;
  if ( v9 >= 0 )
  {
    v10 = Object;
    RIMLockExclusive((__int64)Object + 104);
    if ( *((_BYTE *)v10 + 81) || *((_BYTE *)v10 + 82) )
    {
      v9 = -1073741637;
      v24 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
      {
        LOBYTE(v11) = 0;
      }
      v25 = &WPP_RECORDER_INITIALIZED;
      LOBYTE(v25) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v11 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_69;
      v26 = 33;
    }
    else
    {
      if ( ((unsigned int)DeviceTypeToRimInputType(v6) & v10[21]) != 0 )
      {
        SourceString = 0LL;
        p_DestinationString = 0LL;
        DestinationString = 0LL;
        if ( !a4 )
        {
          p_DestinationString = v7;
LABEL_57:
          if ( v9 >= 0 )
          {
            v32 = 0LL;
            v9 = RIMCreateDev(v10, v6, p_DestinationString, 1, 0, 0LL, (struct _UNICODE_STRING **)&v32);
            if ( v9 >= 0 )
            {
              *(_DWORD *)(v32 + 184) |= 1u;
              v9 = rimOnPnpArrived((__int64)v10, v32, -1LL);
              if ( v9 >= 0 )
              {
                if ( a4 )
                {
                  v23 = a5;
                  if ( (unsigned __int64)a5 >= MmUserProbeAddress )
                    v23 = (_QWORD *)MmUserProbeAddress;
                  *v23 = *(_QWORD *)(v32 + 16);
                }
                else
                {
                  *a5 = *(_QWORD *)(v32 + 16);
                }
              }
              if ( v9 < 0 )
                RIMFreeDev((__int64)v10, v32);
            }
          }
          if ( DestinationString.Buffer )
            NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)DestinationString.Buffer);
          goto LABEL_69;
        }
        if ( (unsigned __int64)v7 >= MmUserProbeAddress )
          v7 = (const UNICODE_STRING *)MmUserProbeAddress;
        v12 = *(_DWORD *)&v7->Length;
        v30 = *(_DWORD *)&v7->Length;
        *(_DWORD *)&SourceString.Length = *(_DWORD *)&v7->Length;
        Buffer = v7->Buffer;
        SourceString.Buffer = Buffer;
        if ( ((unsigned __int8)Buffer & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v14 = (unsigned __int16)v12;
        v15 = (ULONG64)Buffer + (unsigned __int16)v12 + 2;
        if ( v15 <= (unsigned __int64)Buffer || v15 >= MmUserProbeAddress )
          ExRaiseAccessViolation();
        if ( (unsigned __int16)v12 > HIWORD(v30) )
        {
          if ( (v12 & 1) == 0 )
            goto LABEL_55;
        }
        else if ( (v12 & 1) == 0 )
        {
          DestinationString.MaximumLength = v12;
          DestinationString.Length = v12;
          v31 = 1886221394;
          v34 = 260LL;
          v16 = gpLeakTrackingAllocator;
          v41[2] = &v34;
          v41[3] = &v31;
          v38 = (unsigned __int16)v12;
          v17 = *(_DWORD *)gpLeakTrackingAllocator;
          if ( !*(_DWORD *)gpLeakTrackingAllocator )
          {
            Pool2 = ExAllocatePool2(260LL, (unsigned __int16)v12, 1886221394LL);
            if ( Pool2 )
              _InterlockedIncrement64((volatile signed __int64 *)v16 + 14);
            goto LABEL_49;
          }
          if ( v17 == 1 )
          {
            if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x706D7452u)
              && v14 + 16 >= v14 )
            {
              v19 = (_QWORD *)ExAllocatePool2(v34 & 0xFFFFFFFFFFFFFFFDuLL, v14 + 16, v31);
              Pool2 = (__int64)v19;
              if ( v19 )
                _InterlockedIncrement64((volatile signed __int64 *)v16 + 14);
              v39 = v19;
              if ( !v19 || (*v19 = 1886221394LL, Pool2 = (__int64)(v19 + 2), v39 = v19 + 2, v19 == (_QWORD *)-16LL) )
                NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
                  *((NSInstrumentation::CPointerHashTable **)v16 + 1),
                  0x706D7452uLL);
              goto LABEL_49;
            }
            goto LABEL_48;
          }
          if ( v17 == 2 )
          {
            v35 = 0LL;
            if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 1886221394, &v35) )
            {
              v41[0] = &v34;
              v41[1] = &v31;
              Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                        (__int64)v16,
                        (__int64)v41,
                        &v38);
LABEL_49:
              DestinationString.Buffer = (PWSTR)Pool2;
              if ( Pool2 )
              {
                RtlCopyUnicodeString(&DestinationString, &SourceString);
                p_DestinationString = &DestinationString;
                v9 = v29;
              }
              else
              {
                v9 = -1073741801;
              }
              v10 = Object;
              goto LABEL_57;
            }
            v22 = 0;
            if ( v14 < 0x1000 || (v14 & 0xFFF) != 0 )
            {
              v22 = 1;
              v14 += 16LL;
              v38 = v14;
            }
            Pool2 = ExAllocatePool2(v21, v14, v20);
            if ( Pool2 )
            {
              _InterlockedIncrement64((volatile signed __int64 *)v16 + 16);
              NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
              if ( v22 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
              {
                if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                       (__int64)v16,
                       (const void *)Pool2,
                       v35,
                       (struct NSInstrumentation::CBackTrace *)BackTrace) )
                {
                  Pool2 += 16LL;
                  goto LABEL_49;
                }
              }
              else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                          (__int64)v16,
                          Pool2,
                          v35,
                          (struct NSInstrumentation::CBackTrace *)BackTrace) )
              {
                goto LABEL_49;
              }
              _InterlockedIncrement64((volatile signed __int64 *)v16 + 17);
              _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
            }
          }
LABEL_48:
          Pool2 = 0LL;
          goto LABEL_49;
        }
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 922);
LABEL_55:
        ExRaiseAccessViolation();
      }
      v9 = -1073741637;
      v24 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
      {
        LOBYTE(v11) = 0;
      }
      v25 = &WPP_RECORDER_INITIALIZED;
      LOBYTE(v25) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v11 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_69;
      v26 = 32;
    }
    WPP_RECORDER_AND_TRACE_SF_(
      v24->AttachedDevice,
      v11,
      (_DWORD)v25,
      (_DWORD)gRimLog,
      3,
      1,
      v26,
      (__int64)&WPP_f9e9c6706b933e49bdb016a372583459_Traceguids);
LABEL_69:
    *((_QWORD *)v10 + 14) = 0LL;
    ExReleasePushLockExclusiveEx(v10 + 26, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v10);
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (v27 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    v27 = 0;
  }
  if ( v27 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v27,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)gRimLog,
      4u,
      1u,
      0x22u,
      (__int64)&WPP_f9e9c6706b933e49bdb016a372583459_Traceguids,
      v9);
  return (unsigned int)v9;
}
