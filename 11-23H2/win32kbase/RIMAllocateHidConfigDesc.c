/*
 * XREFs of RIMAllocateHidConfigDesc @ 0x1C017ECB8
 * Callers:
 *     RIMCreateHidDesc @ 0x1C007EF3C (RIMCreateHidDesc.c)
 * Callees:
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C004F0F4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C00665BC (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     RIMGetDeviceParent @ 0x1C006CE24 (RIMGetDeviceParent.c)
 *     WPP_RECORDER_AND_TRACE_SF_S @ 0x1C007327C (WPP_RECORDER_AND_TRACE_SF_S.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C00744D4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_DD @ 0x1C007FC8C (WPP_RECORDER_AND_TRACE_SF_DD.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00919C0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C016DC58 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C016DD0C (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C016E25C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C016E628 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C016F5AC (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C016FA4C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 *     RIMDeliverConfigRequest @ 0x1C0180728 (RIMDeliverConfigRequest.c)
 *     RIMFindInputDeviceForConfig @ 0x1C0180D88 (RIMFindInputDeviceForConfig.c)
 *     RIMFreeHidDesc @ 0x1C0181074 (RIMFreeHidDesc.c)
 */

__int64 RIMAllocateHidConfigDesc(__int64 a1, __int64 a2, struct _DEVICE_OBJECT *a3, ...)
{
  __int64 v3; // r13
  unsigned __int16 *v4; // r12
  char v5; // dl
  NSInstrumentation::CLeakTrackingAllocator *v6; // rsi
  int v7; // eax
  int v8; // edx
  __int64 UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64; // rdi
  int v10; // r8d
  _QWORD *Pool2; // rax
  __int64 v12; // r11
  NSInstrumentation::CLeakTrackingAllocator *v13; // r14
  unsigned __int64 v14; // rsi
  int v15; // eax
  __int64 v16; // rsi
  _QWORD *v17; // rax
  char v18; // r10
  unsigned int v19; // r11d
  char v20; // r15
  __int64 v21; // rax
  __int128 v22; // xmm1
  __int64 v23; // rax
  int v24; // edx
  int v25; // r8d
  int v26; // edx
  int v27; // r8d
  PDEVICE_OBJECT v28; // rcx
  bool v29; // al
  __int16 v30; // r9
  int v31; // eax
  char v32; // dl
  char v34; // dl
  unsigned __int64 v35; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v36; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v37; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int64 v38; // [rsp+70h] [rbp-98h] BYREF
  __int64 v39; // [rsp+78h] [rbp-90h] BYREF
  __int64 v40; // [rsp+80h] [rbp-88h] BYREF
  __int64 v41; // [rsp+88h] [rbp-80h] BYREF
  unsigned __int64 v42; // [rsp+90h] [rbp-78h] BYREF
  __int64 *v43; // [rsp+98h] [rbp-70h] BYREF
  unsigned int *v44; // [rsp+A0h] [rbp-68h]
  PVOID BackTrace[20]; // [rsp+A8h] [rbp-60h] BYREF
  PVOID v46[26]; // [rsp+148h] [rbp+40h] BYREF
  struct _DEVICE_OBJECT *v48; // [rsp+238h] [rbp+130h]
  __int64 v49; // [rsp+240h] [rbp+138h] BYREF
  va_list va; // [rsp+240h] [rbp+138h]
  unsigned __int16 *v51; // [rsp+248h] [rbp+140h]
  __int64 v52; // [rsp+250h] [rbp+148h]
  va_list va1; // [rsp+258h] [rbp+150h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v49 = va_arg(va1, _QWORD);
  v51 = va_arg(va1, unsigned __int16 *);
  v52 = va_arg(va1, _QWORD);
  v48 = a3;
  v3 = a2;
  if ( !v49 )
  {
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
        a2,
        (_DWORD)a3,
        (_DWORD)gRimLog,
        3,
        1,
        45,
        (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids);
    }
    return 0LL;
  }
  v4 = v51;
  if ( !v51[4] )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (v5 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
    {
      v5 = 0;
    }
    if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_DD(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v5,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (__int64)gRimLog,
        3u,
        1u,
        0x2Eu,
        (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids,
        v51[1],
        *v51);
    return 0LL;
  }
  v6 = gpLeakTrackingAllocator;
  v39 = 120LL;
  v36 = 1147695954;
  v40 = 260LL;
  v7 = *(_DWORD *)gpLeakTrackingAllocator;
  if ( *(_DWORD *)gpLeakTrackingAllocator )
  {
    if ( v7 != 1 )
    {
      if ( v7 != 2 )
        goto LABEL_111;
      v35 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 1147695954, &v35) )
      {
        v43 = &v40;
        v44 = &v36;
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                                                                                           (__int64)v6,
                                                                                           (__int64)&v43,
                                                                                           &v39);
        goto LABEL_32;
      }
      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                         v12,
                                                                                         136LL,
                                                                                         1147695954LL);
      if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
        goto LABEL_111;
      _InterlockedIncrement64((volatile signed __int64 *)v6 + 16);
      NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
      if ( (unsigned __int64)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 & 0xFFF)
         + 16 >= 0x1000 )
      {
        if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
               (__int64)v6,
               UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
               v35,
               (struct NSInstrumentation::CBackTrace *)BackTrace) )
        {
          goto LABEL_35;
        }
      }
      else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                  (__int64)v6,
                  (const void *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                  v35,
                  (struct NSInstrumentation::CBackTrace *)BackTrace) )
      {
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 += 16LL;
        goto LABEL_32;
      }
      _InterlockedIncrement64((volatile signed __int64 *)v6 + 17);
      _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
      goto LABEL_111;
    }
    if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x44687352u) )
      goto LABEL_111;
    Pool2 = (_QWORD *)ExAllocatePool2(v40 & 0xFFFFFFFFFFFFFFFDuLL, 136LL, v36);
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)Pool2;
    if ( !Pool2
      || (_InterlockedIncrement64((volatile signed __int64 *)v6 + 14),
          *Pool2 = 1147695954LL,
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)(Pool2 + 2),
          Pool2 == (_QWORD *)-16LL) )
    {
      NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
        *((NSInstrumentation::CPointerHashTable **)v6 + 1),
        0x44687352uLL);
    }
  }
  else
  {
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                       260LL,
                                                                                       120LL,
                                                                                       1147695954LL);
    if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
      _InterlockedIncrement64((volatile signed __int64 *)v6 + 14);
  }
LABEL_32:
  if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
  {
LABEL_111:
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (v34 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
    {
      v34 = 0;
    }
    if ( v34 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_S(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v34,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (__int64)gRimLog,
        3u,
        1u,
        0x2Fu,
        (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids,
        *(const wchar_t **)(v3 + 216));
    return 0LL;
  }
LABEL_35:
  v13 = gpLeakTrackingAllocator;
  v14 = v4[4];
  LODWORD(v37) = 1886417746;
  v41 = 68LL;
  v15 = *(_DWORD *)gpLeakTrackingAllocator;
  v42 = v14;
  if ( !v15 )
  {
    v16 = ExAllocatePool2(68LL, (unsigned int)v14, 1886417746LL);
    if ( v16 )
      _InterlockedIncrement64((volatile signed __int64 *)v13 + 14);
    goto LABEL_58;
  }
  if ( v15 != 1 )
  {
    if ( v15 == 2 )
    {
      v38 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 1886417746, &v38) )
      {
        v43 = &v41;
        v44 = (unsigned int *)&v37;
        v16 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                (__int64)v13,
                (__int64)&v43,
                &v42);
        goto LABEL_58;
      }
      v20 = v18;
      if ( v14 < 0x1000 || (v14 & 0xFFF) != 0 )
      {
        v14 += 16LL;
        v20 = 1;
        v42 = v14;
      }
      v16 = ExAllocatePool2(68LL, v14, v19);
      if ( v16 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)v13 + 16);
        NSInstrumentation::CBackTrace::CBackTrace(v46);
        if ( v20 && (unsigned __int64)(v16 & 0xFFF) + 16 < 0x1000 )
        {
          if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                 (__int64)v13,
                 (const void *)v16,
                 v38,
                 (struct NSInstrumentation::CBackTrace *)v46) )
          {
            v16 += 16LL;
            goto LABEL_58;
          }
        }
        else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                    (__int64)v13,
                    v16,
                    v38,
                    (struct NSInstrumentation::CBackTrace *)v46) )
        {
          goto LABEL_58;
        }
        _InterlockedIncrement64((volatile signed __int64 *)v13 + 17);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)v16);
      }
    }
    goto LABEL_57;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x70707352u)
    || v14 + 16 < v14 )
  {
LABEL_57:
    v16 = 0LL;
    goto LABEL_58;
  }
  v17 = (_QWORD *)ExAllocatePool2(v41 & 0xFFFFFFFFFFFFFFFDuLL, v14 + 16, (unsigned int)v37);
  v16 = (__int64)v17;
  if ( !v17
    || (_InterlockedIncrement64((volatile signed __int64 *)v13 + 14),
        *v17 = 1886417746LL,
        v16 = (__int64)(v17 + 2),
        v17 == (_QWORD *)-16LL) )
  {
    NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
      *((NSInstrumentation::CPointerHashTable **)v13 + 1),
      0x70707352uLL);
  }
LABEL_58:
  *(_QWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 32) = v16;
  if ( !v16 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v8) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
    {
      LOBYTE(v8) = 0;
    }
    if ( (_BYTE)v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        v8,
        v10,
        (_DWORD)gRimLog,
        3,
        1,
        48,
        (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids,
        v4[4]);
    }
    goto LABEL_109;
  }
  v21 = v49;
  *(_OWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 40) = *(_OWORD *)v4;
  LODWORD(v49) = 0;
  *(_OWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 56) = *((_OWORD *)v4 + 1);
  LODWORD(v35) = 0;
  *(_OWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 72) = *((_OWORD *)v4 + 2);
  v39 = 0LL;
  v22 = *((_OWORD *)v4 + 3);
  *(_QWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 16) = v21;
  v23 = v52;
  *(_OWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 88) = v22;
  *(_QWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 104) = *(_QWORD *)v23;
  *(_DWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 112) = *(_DWORD *)(v23 + 8);
  if ( !(unsigned int)RIMGetDeviceParent(v48, v3, v10) )
  {
    LOBYTE(v24) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    if ( (_BYTE)v24 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v25) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v24,
        v25,
        (_DWORD)gRimLog,
        3,
        1,
        49,
        (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids);
    }
  }
  if ( !(unsigned int)RIMFindInputDeviceForConfig(
                        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                        a1,
                        v3,
                        (unsigned int)va,
                        (__int64)&v35,
                        (__int64)&v39)
    || !(_DWORD)v49 )
  {
LABEL_99:
    *(_BYTE *)(v3 + 48) = 3;
    return UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
  }
  v27 = *(_DWORD *)(a1 + 84);
  if ( (_DWORD)v35 )
  {
    if ( (v27 & 0x10) != 0 )
    {
      *(_DWORD *)(v3 + 184) |= 0x800u;
LABEL_90:
      v31 = RIMDeliverConfigRequest((struct RIMDEV *)v3);
      if ( v31 < 0 )
      {
        v32 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
           && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
           && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
        if ( v32 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_AND_TRACE_SF_d(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v32,
            WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
            (__int64)gRimLog,
            3u,
            1u,
            0x34u,
            (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids,
            v31);
      }
      goto LABEL_99;
    }
    v28 = WPP_GLOBAL_Control;
    LOBYTE(v26) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    v29 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v26 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v30 = 50;
LABEL_108:
      LOBYTE(v27) = v29;
      WPP_RECORDER_AND_TRACE_SF_D(
        v28->AttachedDevice,
        v26,
        v27,
        (_DWORD)gRimLog,
        3,
        1,
        v30,
        (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids,
        *(_DWORD *)(a1 + 84));
    }
  }
  else
  {
    if ( (v27 & 8) != 0 )
    {
      *(_DWORD *)(v3 + 184) |= 0x1000u;
      goto LABEL_90;
    }
    v28 = WPP_GLOBAL_Control;
    LOBYTE(v26) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    v29 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v26 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v30 = 51;
      goto LABEL_108;
    }
  }
LABEL_109:
  RIMFreeHidDesc((void *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
  return 0LL;
}
