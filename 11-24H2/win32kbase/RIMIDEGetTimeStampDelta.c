/*
 * XREFs of RIMIDEGetTimeStampDelta @ 0x1401E62C4
 * Callers:
 *     RIMIDEInjectHIDReportFromPointerInfo @ 0x1401E68D8 (RIMIDEInjectHIDReportFromPointerInfo.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x14009782C (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     WPP_RECORDER_AND_TRACE_SF_ii @ 0x1401AB810 (WPP_RECORDER_AND_TRACE_SF_ii.c)
 *     RIMIDEGetQpcBasedTouchStackTime @ 0x1401E6274 (RIMIDEGetQpcBasedTouchStackTime.c)
 *     RIMIDEValidateInjectionQpcCount @ 0x1401E6EE0 (RIMIDEValidateInjectionQpcCount.c)
 *     WPP_RECORDER_AND_TRACE_SF_didi @ 0x1401E77A8 (WPP_RECORDER_AND_TRACE_SF_didi.c)
 */

__int64 __fastcall RIMIDEGetTimeStampDelta(__int64 a1, __int64 a2, unsigned int *a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  int v5; // r13d
  int v6; // esi
  char v7; // bl
  bool v8; // di
  __int64 v9; // rax
  int v10; // r8d
  int v11; // edx
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // r10
  int v16; // r9d
  __int64 v17; // rdx
  unsigned int v18; // r12d
  bool v19; // bp
  __int64 UserSessionState; // rax
  int v21; // r8d
  int v22; // edx
  int v23; // eax
  CTouchProcessor *v24; // rcx
  char v25; // al
  __int64 v26; // rax
  unsigned int v27; // ebx
  int v28; // eax
  unsigned int v29; // ecx
  char v30; // r14
  bool v31; // r15
  int v32; // edx
  int v33; // r8d
  __int64 v34; // r9
  char v35; // bl
  char v36; // di
  __int64 v37; // rax
  unsigned __int64 v38; // rax
  __int64 v39; // rax
  __int16 v40; // [rsp+30h] [rbp-98h]
  int v41; // [rsp+60h] [rbp-68h]
  __int64 v42; // [rsp+68h] [rbp-60h]
  __int64 v43; // [rsp+70h] [rbp-58h]
  __int64 v44; // [rsp+78h] [rbp-50h]
  char v45; // [rsp+D0h] [rbp+8h]
  char v46; // [rsp+D8h] [rbp+10h]
  int v48; // [rsp+E8h] [rbp+20h]

  v3 = *(_QWORD *)(a2 + 80);
  v4 = a1 + 256;
  v5 = *(_DWORD *)(a2 + 64);
  v42 = v3;
  v6 = 1;
  if ( !a1 )
    v4 = 184LL;
  if ( (*(_DWORD *)v4 & 0x80u) != 0 )
  {
    v13 = *(_QWORD *)(a1 + 440);
    v14 = a1 + 528;
    if ( !a1 )
      v14 = 456LL;
    v15 = *(_QWORD *)(v13 + 48);
    v16 = *(_DWORD *)(v13 + 28);
    v41 = v16;
    v17 = *(_QWORD *)v14;
    v43 = *(_QWORD *)v14;
    v44 = v15;
    if ( !*(_DWORD *)(*(_QWORD *)v14 + 1016LL) )
    {
      *(_QWORD *)(v13 + 20) = 0LL;
      *(_DWORD *)(v13 + 28) = 0;
      *(_DWORD *)(v13 + 36) = 0;
      *(_QWORD *)(v13 + 40) = 0LL;
      *(_QWORD *)(v13 + 48) = 0LL;
      *(_DWORD *)(v13 + 56) = 0;
    }
    if ( v5 && v3 || *(_DWORD *)(v13 + 20) && v3 || *(_QWORD *)(v13 + 40) && v5 )
    {
      v18 = 0;
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
      {
        LOBYTE(v6) = 0;
      }
      v19 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
        LOBYTE(v21) = v19;
        LOBYTE(v22) = v6;
        WPP_RECORDER_AND_TRACE_SF_didi(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v22,
          v21,
          *(_QWORD *)(UserSessionState + 19392));
      }
      return v18;
    }
    v18 = 1;
    if ( v3 || *(_QWORD *)(v13 + 40) )
    {
      v48 = 0;
      if ( !(unsigned int)RIMIDEValidateInjectionQpcCount(
                            v3,
                            v15,
                            v17,
                            *(_DWORD *)(v17 + 1016) == 0,
                            *(_DWORD *)(v13 + 56)) )
      {
        v18 = 0;
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || (v35 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
        {
          v35 = 0;
        }
        v36 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v35 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v37 = W32GetUserSessionState(WPP_GLOBAL_Control);
          WPP_RECORDER_AND_TRACE_SF_ii(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v35,
            v36,
            *(_QWORD *)(v37 + 19392),
            2u,
            1u,
            0x3Fu,
            (__int64)&WPP_a924233173b9385c264afbc4034b0533_Traceguids,
            v42,
            v44);
        }
        return v18;
      }
      if ( v3 <= *(_QWORD *)(v13 + 40) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2823);
      v38 = 10000 * (v3 - *(_QWORD *)(v13 + 40)) / gliQpcFreq.QuadPart;
      v27 = v38;
      if ( !*(_DWORD *)(v43 + 1016) )
      {
        v39 = v42;
        v27 = 0;
        *(_QWORD *)(v13 + 40) = v42;
LABEL_86:
        *(_DWORD *)(v13 + 32) = v27;
        if ( v48 )
        {
          if ( !v41 || v5 )
            v6 = 0;
          *(_DWORD *)(v13 + 36) = v6;
          *(_DWORD *)(v13 + 28) = v5;
        }
        else
        {
          if ( !v44 || v39 )
            v6 = 0;
          *(_DWORD *)(v13 + 56) = v6;
          *(_QWORD *)(v13 + 48) = v39;
        }
        *a3 = v27;
        return v18;
      }
      if ( (_DWORD)v38 != *(_DWORD *)(v13 + 32) )
        goto LABEL_85;
      v18 = 0;
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v30 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
      {
        v30 = 0;
      }
      v31 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v30 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
LABEL_85:
        v39 = v42;
        goto LABEL_86;
      }
      v34 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control) + 19392);
      v40 = 65;
LABEL_84:
      LOBYTE(v33) = v31;
      LOBYTE(v32) = v30;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v32,
        v33,
        v34,
        2,
        1,
        v40,
        (__int64)&WPP_a924233173b9385c264afbc4034b0533_Traceguids);
      goto LABEL_85;
    }
    v48 = 1;
    if ( *(_DWORD *)(v17 + 1016) )
    {
      v23 = 0;
    }
    else
    {
      v23 = 1;
      if ( !v5 )
      {
        v48 = 1;
LABEL_50:
        if ( !v18 )
          return v18;
        v27 = 10 * (v5 - *(_DWORD *)(v13 + 20));
        v28 = RIMIDEGetQpcBasedTouchStackTime();
        if ( !*(_DWORD *)(v43 + 1016) )
        {
          *(_DWORD *)(v13 + 20) = v5;
          v27 = 0;
          *(_DWORD *)(v13 + 24) = v28;
          goto LABEL_85;
        }
        if ( v27 )
          goto LABEL_85;
        v29 = *(_DWORD *)(v13 + 32);
        v27 = v28 - *(_DWORD *)(v13 + 24);
        if ( v27 > v29 )
          goto LABEL_85;
        if ( v29 - v27 < 5 )
        {
          v27 = v29 + 1;
          goto LABEL_85;
        }
        v18 = 0;
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || (v30 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
        {
          v30 = 0;
        }
        v31 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !v30 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_85;
        v34 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control) + 19392);
        v40 = 64;
        goto LABEL_84;
      }
    }
    if ( (v16 || v5)
      && !v23
      && (!v16 && v5 && !*(_DWORD *)(v13 + 36) || v5 == v16 || (unsigned int)(v5 - v16) > *(_DWORD *)(v17 + 800)) )
    {
      v18 = 0;
      v24 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v25 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
      {
        v25 = 0;
      }
      v45 = v25;
      v46 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v25 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v24) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        v26 = W32GetUserSessionState(v24);
        WPP_RECORDER_AND_TRACE_SF_Dd(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v45,
          v46,
          *(_QWORD *)(v26 + 19392),
          2u,
          1u,
          0x3Eu,
          (__int64)&WPP_a924233173b9385c264afbc4034b0533_Traceguids,
          v5,
          v41);
      }
    }
    goto LABEL_50;
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v7 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
  {
    v7 = 0;
  }
  v8 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v9 = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v10) = v8;
    LOBYTE(v11) = v7;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v11,
      v10,
      *(_QWORD *)(v9 + 19392),
      2,
      1,
      60,
      (__int64)&WPP_a924233173b9385c264afbc4034b0533_Traceguids);
  }
  return 0LL;
}
