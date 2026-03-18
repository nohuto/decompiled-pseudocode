/*
 * XREFs of _anonymous_namespace_::FAllowForegroundActivate @ 0x1C002E044
 * Callers:
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C002D8F8 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00310B0 (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 * Callees:
 *     IsImmersiveBandOrShellManaged @ 0x1C002D454 (IsImmersiveBandOrShellManaged.c)
 *     IsForegroundLocked @ 0x1C00300A4 (IsForegroundLocked.c)
 *     _anonymous_namespace_::CheckImmersiveForegroundAccess @ 0x1C00300CC (_anonymous_namespace_--CheckImmersiveForegroundAccess.c)
 *     _anonymous_namespace_::RemoveForegroundActivate @ 0x1C003052C (_anonymous_namespace_--RemoveForegroundActivate.c)
 *     IAMThreadAccessGranted @ 0x1C0030E2C (IAMThreadAccessGranted.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0044724 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C0044D3C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C00EEC50 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C014083C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dq @ 0x1C01ADF38 (WPP_RECORDER_AND_TRACE_SF_Dq.c)
 */

char __fastcall anonymous_namespace_::FAllowForegroundActivate(__int64 a1)
{
  __int64 v2; // rbp
  int v3; // r8d
  int v4; // r9d
  PDEVICE_OBJECT v5; // rcx
  char v6; // bl
  int v7; // edx
  int v8; // edx
  __int64 v9; // rcx
  PDEVICE_OBJECT v10; // rcx
  char v11; // bl
  int v12; // edx
  PDEVICE_OBJECT v13; // rcx
  int v14; // r9d
  __int64 v16; // rdx
  int v17; // r8d
  PDEVICE_OBJECT v18; // rcx
  char v19; // bl
  int v20; // eax
  int v21; // edx
  __int64 v22; // rdx
  __int64 v23; // rcx
  int v24; // r8d
  int v25; // r9d
  char v26; // bl
  int v27; // edx
  __int16 v28; // [rsp+30h] [rbp-38h]
  __int16 v29; // [rsp+30h] [rbp-38h]
  __int16 v30; // [rsp+30h] [rbp-38h]

  v2 = *(_QWORD *)(gptiCurrent + 424LL);
  if ( !(unsigned __int8)anonymous_namespace_::RemoveForegroundActivate() )
  {
    v5 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
      || (v6 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      v6 = 0;
    }
    LOBYTE(v3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v6 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0;
    v7 = 28;
    goto LABEL_89;
  }
  if ( *(_QWORD *)(gptiCurrent + 456LL) != grpdeskRitInput
    || gpqForeground == *(_QWORD *)(gptiCurrent + 432LL)
    || (unsigned int)IsForegroundLocked() )
  {
    v5 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
      || (v6 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      v6 = 0;
    }
    LOBYTE(v3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v6 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0;
    v7 = 29;
LABEL_89:
    v30 = v7;
    LOBYTE(v7) = v6;
    WPP_RECORDER_AND_TRACE_SF_(
      v5->AttachedDevice,
      v7,
      v3,
      v4,
      4,
      2,
      v30,
      (__int64)&WPP_998a63ff47c63414c5882e9b8cb70cf1_Traceguids);
    return 0;
  }
  v9 = *(_QWORD *)(a1 + 40);
  if ( (*(_BYTE *)(v9 + 27) & 8) != 0 )
  {
    v10 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
      || (v11 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      v11 = 0;
    }
    LOBYTE(v3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v11 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0;
    v12 = 30;
    goto LABEL_28;
  }
  if ( *(_DWORD *)(v9 + 236) != 15 )
  {
    if ( *(int *)(v2 + 12) < 0 )
    {
      v13 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
        || (LOBYTE(v8) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v8) = 0;
      }
      LOBYTE(v3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v8 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 1;
      v14 = 32;
      goto LABEL_37;
    }
    if ( (unsigned int)IsImmersiveBroker(v2)
      && (unsigned int)IsImmersiveBandOrShellManaged(a1, v16)
      && (*(_DWORD *)(a1 + 320) & 0x800) == 0 )
    {
      if ( (unsigned int)IAMThreadAccessGranted(gptiCurrent) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1380LL);
      v18 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
        || (v19 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        v19 = 0;
      }
      LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v19 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0;
      v20 = *(_DWORD *)(v2 + 12);
      v21 = 33;
    }
    else
    {
      if ( !(unsigned int)IsImmersiveBroker(v2)
        || !gpqForeground
        || (v23 = *(_QWORD *)(gpqForeground + 128LL)) == 0
        || !(unsigned int)IsImmersiveBandOrShellManaged(v23, v22) )
      {
        if ( !(unsigned __int8)anonymous_namespace_::CheckImmersiveForegroundAccess(a1, 2LL) )
        {
          if ( (unsigned int)IAMThreadAccessGranted(gptiCurrent) )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1400LL);
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
            || (v26 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
          {
            v26 = 0;
          }
          if ( v26 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v27 = 35;
            LOBYTE(v27) = v26;
            LOBYTE(v24) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_Dq(WPP_GLOBAL_Control->AttachedDevice, v27, v24, v25);
          }
          return 0;
        }
        v13 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
          || (LOBYTE(v8) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          LOBYTE(v8) = 0;
        }
        LOBYTE(v3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !(_BYTE)v8 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return 1;
        v14 = 36;
LABEL_37:
        WPP_RECORDER_AND_TRACE_SF_(
          v13->AttachedDevice,
          v8,
          v3,
          v14,
          4,
          2,
          v14,
          (__int64)&WPP_998a63ff47c63414c5882e9b8cb70cf1_Traceguids);
        return 1;
      }
      if ( (unsigned int)IAMThreadAccessGranted(gptiCurrent) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1391LL);
      v18 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
        || (v19 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        v19 = 0;
      }
      LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v19 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0;
      v20 = *(_DWORD *)(v2 + 56);
      v21 = 34;
    }
    v29 = v21;
    LOBYTE(v21) = v19;
    WPP_RECORDER_AND_TRACE_SF_D(
      v18->AttachedDevice,
      v21,
      v17,
      (_DWORD)gFullLog,
      4,
      2,
      v29,
      (__int64)&WPP_998a63ff47c63414c5882e9b8cb70cf1_Traceguids,
      v20);
    return 0;
  }
  v10 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
    || (v11 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    v11 = 0;
  }
  LOBYTE(v3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( !v11 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return 0;
  v12 = 31;
LABEL_28:
  v28 = v12;
  LOBYTE(v12) = v11;
  WPP_RECORDER_AND_TRACE_SF_q(
    v10->AttachedDevice,
    v12,
    v3,
    v4,
    4,
    2,
    v28,
    (__int64)&WPP_998a63ff47c63414c5882e9b8cb70cf1_Traceguids,
    *(_QWORD *)a1);
  return 0;
}
