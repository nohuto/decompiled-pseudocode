/*
 * XREFs of RIMIDEInjectHIDReportFromPointerInfo @ 0x1C01960D8
 * Callers:
 *     NtUserInjectPointerInput @ 0x1C0148CC0 (NtUserInjectPointerInput.c)
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
 *     RIMIDEFillContactUsageValues @ 0x1C0195418 (RIMIDEFillContactUsageValues.c)
 *     RIMIDEGetTimeStampDelta @ 0x1C01956D0 (RIMIDEGetTimeStampDelta.c)
 *     RIMIDEInjectDeviceInput @ 0x1C0195C58 (RIMIDEInjectDeviceInput.c)
 *     ?BuildValueDeviceUsages@@YAHKPEAPEAUtagINPUT_INJECTION_VALUE@@PEAK@Z @ 0x1C0198634 (-BuildValueDeviceUsages@@YAHKPEAPEAUtagINPUT_INJECTION_VALUE@@PEAK@Z.c)
 */

__int64 __fastcall RIMIDEInjectHIDReportFromPointerInfo(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rdi
  int v5; // esi
  char *v6; // r15
  int v7; // r8d
  int v8; // edx
  int v9; // r8d
  unsigned __int64 v10; // rdx
  unsigned int v11; // ecx
  NSInstrumentation::CLeakTrackingAllocator *v12; // r14
  struct tagINPUT_INJECTION_VALUE *v13; // rdx
  int v14; // eax
  unsigned __int64 v15; // rdi
  __int64 Pool2; // rdi
  _QWORD *v17; // rax
  unsigned int v18; // edx
  __int64 v19; // r10
  char v20; // r11
  char v21; // r15
  char v22; // dl
  unsigned int v23; // r9d
  unsigned int v24; // ecx
  __int64 v25; // rcx
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int64 v34; // rax
  int v35; // r8d
  unsigned int v36; // r10d
  unsigned int v37; // r11d
  unsigned int v38; // r9d
  __int16 v39; // r8
  unsigned int v40; // r14d
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // r8
  unsigned int v44; // r11d
  __int64 v45; // rcx
  unsigned int v46; // r9d
  __int128 v47; // xmm0
  __int128 v48; // xmm1
  __int128 v49; // xmm0
  __int128 v50; // xmm1
  __int128 v51; // xmm0
  __int128 v52; // xmm1
  int v53; // r8d
  __int64 v54; // rcx
  __int128 v55; // xmm0
  __int128 v56; // xmm1
  __int128 v57; // xmm0
  __int128 v58; // xmm1
  __int128 v59; // xmm0
  __int128 v60; // xmm1
  int v61; // edx
  int v62; // r8d
  unsigned int v63; // r9d
  __int64 v64; // rcx
  unsigned int v65; // eax
  char v66; // dl
  char v67; // dl
  __int64 v69; // [rsp+48h] [rbp-C0h]
  unsigned int v70[2]; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int64 v71; // [rsp+60h] [rbp-A8h]
  __int64 v72; // [rsp+68h] [rbp-A0h] BYREF
  struct tagINPUT_INJECTION_VALUE *v73; // [rsp+70h] [rbp-98h] BYREF
  unsigned __int64 v74[2]; // [rsp+78h] [rbp-90h] BYREF
  __int64 v75; // [rsp+88h] [rbp-80h] BYREF
  __int64 v76; // [rsp+90h] [rbp-78h] BYREF
  _OWORD v77[6]; // [rsp+98h] [rbp-70h] BYREF
  _OWORD v78[6]; // [rsp+F8h] [rbp-10h] BYREF
  PVOID BackTrace[20]; // [rsp+158h] [rbp+50h] BYREF
  _OWORD v80[9]; // [rsp+1F8h] [rbp+F0h] BYREF
  __int64 v81; // [rsp+288h] [rbp+180h]
  unsigned int v84; // [rsp+2F8h] [rbp+1F0h] BYREF
  unsigned int v85; // [rsp+300h] [rbp+1F8h]

  v84 = a3;
  v3 = a3;
  v73 = 0LL;
  v70[0] = 0;
  v5 = 0;
  v85 = 0;
  v6 = 0LL;
  if ( a3 )
  {
    if ( a3 <= 0x100 )
      goto LABEL_6;
    v7 = 1593;
  }
  else
  {
    v7 = 1592;
  }
  v70[1] = 0x20000;
  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, v7);
LABEL_6:
  if ( !(unsigned int)BuildValueDeviceUsages(*(_DWORD *)a2, &v73, v70) )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v8) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v8) = 0;
    }
    if ( (_BYTE)v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v8,
        v9,
        (_DWORD)gRimLog,
        2,
        1,
        45,
        (__int64)&WPP_9f96ae63cfc83aaf8fc02e72e74825ab_Traceguids);
    }
    goto LABEL_149;
  }
  v10 = v3 * v70[0];
  v71 = v10;
  if ( v10 > 0xFFFFFFFF )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (v67 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      v67 = 0;
    }
    if ( v67 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_d(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v67,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (__int64)gRimLog,
        2u,
        1u,
        0x24u,
        (__int64)&WPP_9f96ae63cfc83aaf8fc02e72e74825ab_Traceguids,
        v3);
LABEL_149:
    v5 = -1073741811;
    goto LABEL_150;
  }
  if ( *(_DWORD *)a2 == 2 )
  {
    v11 = v70[0] - 2;
LABEL_12:
    v70[1] = v11;
    goto LABEL_14;
  }
  if ( *(_DWORD *)a2 == 3 )
  {
    v11 = v70[0] - 1;
    goto LABEL_12;
  }
  v70[1] = v70[0];
LABEL_14:
  v12 = gpLeakTrackingAllocator;
  LODWORD(v72) = 1785620818;
  v75 = 260LL;
  v13 = (struct tagINPUT_INJECTION_VALUE *)(3LL * (unsigned int)v10);
  v14 = *(_DWORD *)gpLeakTrackingAllocator;
  v15 = 4LL * (_QWORD)v13;
  v76 = 4LL * (_QWORD)v13;
  switch ( v14 )
  {
    case 0:
      Pool2 = ExAllocatePool2(260LL, 4LL * (_QWORD)v13, 1785620818LL);
      if ( Pool2 )
        _InterlockedAdd64((volatile signed __int64 *)v12 + 14, 1uLL);
      goto LABEL_34;
    case 1:
      if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x6A6E6952u)
        && v15 + 16 >= v15 )
      {
        v17 = (_QWORD *)ExAllocatePool2(v75 & 0xFFFFFFFFFFFFFFFDuLL, v15 + 16, (unsigned int)v72);
        Pool2 = (__int64)v17;
        if ( !v17
          || (_InterlockedAdd64((volatile signed __int64 *)v12 + 14, 1uLL),
              *v17 = 1785620818LL,
              Pool2 = (__int64)(v17 + 2),
              v17 == (_QWORD *)-16LL) )
        {
          NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
            *((NSInstrumentation::CPointerHashTable **)v12 + 1),
            0x6A6E6952uLL);
        }
LABEL_34:
        v6 = (char *)Pool2;
        if ( Pool2 )
          goto LABEL_47;
        goto LABEL_40;
      }
      break;
    case 2:
      v74[0] = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 1785620818, v74) )
      {
        v74[0] = (unsigned __int64)&v75;
        v74[1] = (unsigned __int64)&v72;
        Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                  (__int64)v12,
                  (__int64)v74,
                  &v76);
        goto LABEL_34;
      }
      v21 = v20;
      if ( v15 < 0x1000 || (v15 & 0xFFF) != 0 )
      {
        v15 += 16LL;
        v21 = 1;
        v76 = v15;
      }
      Pool2 = ExAllocatePool2(v19, v15, v18);
      if ( Pool2 )
      {
        _InterlockedAdd64((volatile signed __int64 *)v12 + 16, 1uLL);
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( v21 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
        {
          if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                 (__int64)v12,
                 (const void *)Pool2,
                 v74[0],
                 (struct NSInstrumentation::CBackTrace *)BackTrace) )
          {
            Pool2 += 16LL;
            goto LABEL_34;
          }
        }
        else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                    (__int64)v12,
                    Pool2,
                    v74[0],
                    (struct NSInstrumentation::CBackTrace *)BackTrace) )
        {
          v6 = (char *)Pool2;
          goto LABEL_47;
        }
        _InterlockedAdd64((volatile signed __int64 *)v12 + 17, 1uLL);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
      }
      break;
  }
  v6 = 0LL;
  Pool2 = 0LL;
LABEL_40:
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (v22 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
  {
    v22 = 0;
  }
  v5 = -1073741801;
  if ( v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v22,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)gRimLog,
      2u,
      1u,
      0x25u,
      (__int64)&WPP_9f96ae63cfc83aaf8fc02e72e74825ab_Traceguids,
      -1073741801);
LABEL_47:
  if ( v70[0] > 0xC )
  {
    v70[0] = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1631);
  }
  if ( v5 < 0 )
    goto LABEL_150;
  v23 = v84;
  v24 = 0;
  v70[0] = 0;
  if ( v84 )
  {
    while ( 1 )
    {
      if ( v5 < 0 )
        goto LABEL_150;
      v25 = 152LL * v24;
      v26 = *(_OWORD *)(v25 + a2 + 16);
      v80[0] = *(_OWORD *)(v25 + a2);
      v27 = *(_OWORD *)(v25 + a2 + 32);
      v80[1] = v26;
      v28 = *(_OWORD *)(v25 + a2 + 48);
      v80[2] = v27;
      v29 = *(_OWORD *)(v25 + a2 + 64);
      v80[3] = v28;
      v30 = *(_OWORD *)(v25 + a2 + 80);
      v80[4] = v29;
      v31 = *(_OWORD *)(v25 + a2 + 96);
      v80[5] = v30;
      v32 = *(_OWORD *)(v25 + a2 + 112);
      v80[6] = v31;
      v33 = *(_OWORD *)(v25 + a2 + 128);
      v34 = *(_QWORD *)(v25 + a2 + 144);
      v80[7] = v32;
      v80[8] = v33;
      v81 = v34;
      if ( (unsigned int)RIMIDEFillContactUsageValues(v73, v70[1], (int *)v80) )
      {
        v37 = v70[1];
        v38 = 0;
        if ( v70[1] )
        {
          v13 = v73;
          v39 = v70[0];
          v36 = v85;
          v40 = v71;
          do
          {
            if ( v36 >= v40 )
              break;
            ++v38;
            v41 = v36++;
            v42 = 3 * v41;
            *(_QWORD *)(Pool2 + 4 * v42) = *(_QWORD *)v13;
            *(_DWORD *)(Pool2 + 4 * v42 + 8) = *((_DWORD *)v13 + 2);
            *(_WORD *)(Pool2 + 4 * v42 + 8) = v39 + 1;
            *((_DWORD *)v13 + 1) = 0;
            v13 = (struct tagINPUT_INJECTION_VALUE *)((char *)v13 + 12);
          }
          while ( v38 < v37 );
          v85 = v36;
          goto LABEL_62;
        }
      }
      else
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
          || (LOBYTE(v13) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
        {
          LOBYTE(v13) = 0;
        }
        if ( (_BYTE)v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v35) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            (_DWORD)v13,
            v35,
            (_DWORD)gRimLog,
            2,
            1,
            38,
            (__int64)&WPP_9f96ae63cfc83aaf8fc02e72e74825ab_Traceguids);
        }
        v5 = -1073741811;
      }
      v36 = v85;
LABEL_62:
      v23 = v84;
      v24 = v70[0] + 1;
      v70[0] = v24;
      if ( v24 >= v84 )
      {
        v85 = v36;
        if ( v5 < 0 )
          goto LABEL_150;
        goto LABEL_71;
      }
    }
  }
  v36 = v85;
LABEL_71:
  v43 = a2;
  if ( *(_DWORD *)a2 != 2 )
    goto LABEL_103;
  v44 = v71;
  LODWORD(v13) = v36 + 1;
  if ( v36 + 1 > (unsigned int)v71 )
  {
    LOBYTE(v13) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    if ( (_BYTE)v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v43) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)v13,
        v43,
        (_DWORD)gRimLog,
        2,
        1,
        39,
        (__int64)&WPP_9f96ae63cfc83aaf8fc02e72e74825ab_Traceguids);
    }
    v43 = a2;
    v5 = -1073741811;
LABEL_103:
    v46 = v85;
    goto LABEL_104;
  }
  v85 = v36 + 1;
  v45 = 3LL * v36;
  *(_DWORD *)(Pool2 + 4 * v45 + 4) = v23;
  *(_DWORD *)(Pool2 + 4 * v45) = 5505037;
  v46 = v36 + 1;
  *(_WORD *)(Pool2 + 4 * v45 + 8) = 0;
  if ( v36 + 2 > v44 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v13) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v13) = 0;
    }
    if ( (_BYTE)v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v43) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)v13,
        v43,
        (_DWORD)gRimLog,
        2,
        1,
        41,
        (__int64)&WPP_9f96ae63cfc83aaf8fc02e72e74825ab_Traceguids);
      v46 = v85;
    }
    v85 = v46;
    goto LABEL_84;
  }
  v47 = *(_OWORD *)(a2 + 8);
  v48 = *(_OWORD *)(a2 + 24);
  v84 = 0;
  v77[0] = v47;
  v49 = *(_OWORD *)(a2 + 40);
  v77[1] = v48;
  v50 = *(_OWORD *)(a2 + 56);
  v77[2] = v49;
  v51 = *(_OWORD *)(a2 + 72);
  v77[3] = v50;
  v52 = *(_OWORD *)(a2 + 88);
  v77[4] = v51;
  v77[5] = v52;
  if ( !(unsigned int)RIMIDEGetTimeStampDelta(a1, (__int64)v77, &v84) )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v13) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v13) = 0;
    }
    if ( (_BYTE)v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v53) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)v13,
        v53,
        (_DWORD)gRimLog,
        2,
        1,
        40,
        (__int64)&WPP_9f96ae63cfc83aaf8fc02e72e74825ab_Traceguids);
    }
    v46 = v85;
LABEL_84:
    v5 = -1073741811;
    goto LABEL_85;
  }
  v46 = v85;
  v54 = 3LL * v85;
  *(_DWORD *)(Pool2 + 4 * v54 + 4) = v84;
  LODWORD(v71) = v46 + 1;
  *(_DWORD *)(Pool2 + 4 * v54) = 5636109;
  *(_WORD *)(Pool2 + 4 * v54 + 8) = 0;
LABEL_85:
  v43 = a2;
LABEL_104:
  if ( *(_DWORD *)v43 != 3 )
    goto LABEL_116;
  if ( v46 + 1 <= (unsigned int)v71 )
  {
    v55 = *(_OWORD *)(v43 + 8);
    v56 = *(_OWORD *)(v43 + 24);
    v84 = 0;
    v78[0] = v55;
    v57 = *(_OWORD *)(v43 + 40);
    v78[1] = v56;
    v58 = *(_OWORD *)(v43 + 56);
    v78[2] = v57;
    v59 = *(_OWORD *)(v43 + 72);
    v78[3] = v58;
    v60 = *(_OWORD *)(v43 + 88);
    v78[4] = v59;
    v78[5] = v60;
    if ( (unsigned int)RIMIDEGetTimeStampDelta(a1, (__int64)v78, &v84) )
    {
      v63 = v85;
      v64 = 3LL * v85;
      *(_DWORD *)(Pool2 + 4 * v64 + 4) = v84;
      v65 = v63 + 1;
      *(_DWORD *)(Pool2 + 4 * v64) = 5636109;
      *(_WORD *)(Pool2 + 4 * v64 + 8) = 0;
LABEL_117:
      if ( v5 >= 0 )
      {
        v5 = RIMIDEInjectDeviceInput(a1, Pool2, v65);
        if ( v5 < 0 )
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
            || (v66 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
          {
            v66 = 0;
          }
          if ( v66 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v69) = v5;
            WPP_RECORDER_AND_TRACE_SF_d(
              (__int64)WPP_GLOBAL_Control->AttachedDevice,
              v66,
              WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
              (__int64)gRimLog,
              2u,
              1u,
              0x2Cu,
              (__int64)&WPP_9f96ae63cfc83aaf8fc02e72e74825ab_Traceguids,
              v69);
          }
        }
      }
      goto LABEL_150;
    }
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v61) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v61) = 0;
    }
    if ( (_BYTE)v61 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v62) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v61,
        v62,
        (_DWORD)gRimLog,
        2,
        1,
        42,
        (__int64)&WPP_9f96ae63cfc83aaf8fc02e72e74825ab_Traceguids);
    }
    v5 = -1073741811;
LABEL_116:
    v65 = v71;
    goto LABEL_117;
  }
  LOBYTE(v13) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
             && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
             && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
  if ( (_BYTE)v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v43) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)v13,
      v43,
      (_DWORD)gRimLog,
      2,
      1,
      43,
      (__int64)&WPP_9f96ae63cfc83aaf8fc02e72e74825ab_Traceguids);
  }
  v5 = -1073741811;
LABEL_150:
  if ( v73 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)v73);
  if ( v6 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v6);
  return (unsigned int)v5;
}
