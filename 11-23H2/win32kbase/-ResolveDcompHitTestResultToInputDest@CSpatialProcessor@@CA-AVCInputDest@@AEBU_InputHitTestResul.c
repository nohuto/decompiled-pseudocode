/*
 * XREFs of ?ResolveDcompHitTestResultToInputDest@CSpatialProcessor@@CA?AVCInputDest@@AEBU_InputHitTestResult@@K_K@Z @ 0x1C0058BF4
 * Callers:
 *     ?SpeedHitTest@CSpatialProcessor@@SA?AVCInputDest@@PEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@@Z @ 0x1C005808C (-SpeedHitTest@CSpatialProcessor@@SA-AVCInputDest@@PEAU_InputHitTestRequest@@PEAU_InputHitTestRes.c)
 * Callees:
 *     ?ResolveInputSinkToINPUTDEST@CSpatialProcessor@@KA_NPEAXKPEAUtagINPUTDEST@@@Z @ 0x1C0001C28 (-ResolveInputSinkToINPUTDEST@CSpatialProcessor@@KA_NPEAXKPEAUtagINPUTDEST@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0052DB0 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdd @ 0x1C0058FF8 (WPP_RECORDER_AND_TRACE_SF_qdd.c)
 *     HMValidateHandleNoSecure @ 0x1C00590FC (HMValidateHandleNoSecure.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00591BC (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1C00749F8 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     ApiSetEditionUpdateInputTransformFromHitTest @ 0x1C00C9C00 (ApiSetEditionUpdateInputTransformFromHitTest.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D69C0 (memset.c)
 */

CInputDest *__fastcall CSpatialProcessor::ResolveDcompHitTestResultToInputDest(
        CInputDest *a1,
        _QWORD *a2,
        unsigned int a3,
        __int64 a4)
{
  void *v4; // r12
  int v5; // r14d
  __int64 v9; // rdx
  __int64 v10; // r8
  char v11; // bl
  __int64 v12; // rax
  int v13; // edx
  __int64 v14; // rdx
  int v15; // r9d
  int v16; // r10d
  void *v17; // rdx
  bool v19; // al
  __int64 v20; // rdx
  __int64 v21; // rax
  char v22; // [rsp+40h] [rbp-C0h]
  _QWORD v23[15]; // [rsp+68h] [rbp-98h] BYREF
  _OWORD v24[7]; // [rsp+E0h] [rbp-20h] BYREF

  v4 = (void *)a2[1];
  v5 = 0;
  v23[0] = a4;
  if ( a3 == 6 || !a3 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 134LL);
  memset(v24, 0, sizeof(v24));
  if ( v4 )
  {
    v19 = CSpatialProcessor::ResolveInputSinkToINPUTDEST(v4, a3, (struct tagINPUTDEST *)v24);
    v11 = 1;
    if ( v19 )
    {
      if ( (v24[0] & 4) == 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 178LL);
      if ( qword_1C02964D8 && (unsigned int)qword_1C02964D8(*(_QWORD *)&v24[5], v20, v10, 0LL) )
      {
        if ( HIDWORD(v24[5]) != 2 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 189LL);
        LOBYTE(v20) = 1;
        v21 = HMValidateHandleNoSecure(*a2, v20);
        v5 = v21;
        if ( v21 && *(char *)(*(_QWORD *)(v21 + 40) + 19LL) >= 0 )
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
            || (LOBYTE(v20) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
          {
            LOBYTE(v20) = 0;
          }
          if ( (_BYTE)v20 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_q(
              WPP_GLOBAL_Control->AttachedDevice,
              v20,
              v10,
              WPP_MAIN_CB.Queue.ListEntry.Flink,
              4,
              2,
              16,
              (__int64)&WPP_8407c04bf99d3dadbf70c01c79b8bf56_Traceguids,
              v24[5]);
          }
        }
        else
        {
          memset(&v23[1], 0, 0x70uLL);
          v24[0] = *(_OWORD *)&v23[1];
          v24[2] = *(_OWORD *)&v23[5];
          v24[1] = *(_OWORD *)&v23[3];
          v24[4] = *(_OWORD *)&v23[9];
          v24[3] = *(_OWORD *)&v23[7];
          v24[6] = *(_OWORD *)&v23[13];
          v24[5] = *(_OWORD *)&v23[11];
          LOBYTE(v20) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
                     && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
          if ( (_BYTE)v20 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_q(
              WPP_GLOBAL_Control->AttachedDevice,
              v20,
              v10,
              WPP_MAIN_CB.Queue.ListEntry.Flink,
              3,
              2,
              15,
              (__int64)&WPP_8407c04bf99d3dadbf70c01c79b8bf56_Traceguids,
              v5);
          }
        }
      }
      if ( !LODWORD(v24[0]) )
      {
LABEL_78:
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
          || (LOBYTE(v20) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
        {
          LOBYTE(v20) = 0;
        }
        if ( (_BYTE)v20 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_q(
            WPP_GLOBAL_Control->AttachedDevice,
            v20,
            v10,
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            2,
            2,
            18,
            (__int64)&WPP_8407c04bf99d3dadbf70c01c79b8bf56_Traceguids,
            (char)v4);
        }
LABEL_43:
        if ( !LODWORD(v24[0]) )
          goto LABEL_19;
        goto LABEL_13;
      }
      if ( (v24[0] & 4) == 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 212LL);
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
        || (LOBYTE(v20) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v20) = 0;
      }
      if ( (_BYTE)v20 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_qq(
          WPP_GLOBAL_Control->AttachedDevice,
          v20,
          v10,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          4,
          2,
          17,
          (__int64)&WPP_8407c04bf99d3dadbf70c01c79b8bf56_Traceguids,
          (char)v4,
          v24[5]);
      }
      ApiSetEditionUpdateInputTransformFromHitTest(
        (unsigned int)v24,
        v5,
        (_DWORD)v4,
        -(v24[1] & 1),
        (__int64)(a2 + 2),
        (__int64)v23);
    }
    if ( LODWORD(v24[0]) )
    {
LABEL_13:
      v14 = a2[11];
      v15 = *((_DWORD *)a2 + 24);
      v16 = *((_DWORD *)a2 + 25);
      *(_QWORD *)&v24[6] = v14;
      DWORD2(v24[6]) = v15;
      DWORD1(v24[0]) = v16;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
      {
        v11 = 0;
      }
      if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v22 = v14;
        v17 = &WPP_8407c04bf99d3dadbf70c01c79b8bf56_Traceguids;
        LOBYTE(v17) = v11;
        LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_qdd(
          WPP_GLOBAL_Control->AttachedDevice,
          (_DWORD)v17,
          v10,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          4,
          2,
          19,
          (__int64)&WPP_8407c04bf99d3dadbf70c01c79b8bf56_Traceguids,
          v22,
          v15,
          v16);
      }
      goto LABEL_19;
    }
    goto LABEL_78;
  }
  if ( !*a2 )
  {
    v11 = 1;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
      || (LOBYTE(v9) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v9) = 0;
    }
    if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v9,
        v10,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        2,
        14,
        (__int64)&WPP_8407c04bf99d3dadbf70c01c79b8bf56_Traceguids);
    }
    goto LABEL_43;
  }
  v11 = 1;
  LOBYTE(v9) = 1;
  v12 = HMValidateHandleNoSecure(*a2, v9);
  if ( v12 )
  {
    LODWORD(v24[0]) |= 4u;
    DWORD2(v24[5]) |= 1u;
    HIDWORD(v24[5]) = 2;
    *(_QWORD *)&v24[5] = v12;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
      || (LOBYTE(v13) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v13) = 0;
    }
    if ( (_BYTE)v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_q(
        WPP_GLOBAL_Control->AttachedDevice,
        v13,
        v10,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        2,
        12,
        (__int64)&WPP_8407c04bf99d3dadbf70c01c79b8bf56_Traceguids,
        *a2);
    }
  }
  if ( LODWORD(v24[0]) )
    goto LABEL_13;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
    || (LOBYTE(v13) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
  {
    LOBYTE(v13) = 0;
  }
  if ( (_BYTE)v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_q(
      WPP_GLOBAL_Control->AttachedDevice,
      v13,
      v10,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      2,
      2,
      13,
      (__int64)&WPP_8407c04bf99d3dadbf70c01c79b8bf56_Traceguids,
      *a2);
    goto LABEL_43;
  }
LABEL_19:
  CInputDest::CInputDest(a1, (const struct tagINPUTDEST *)v24);
  return a1;
}
