/*
 * XREFs of RIMOnDisplayStateChange @ 0x14017B684
 * Callers:
 *     ?_zzzNotifyExternalComponents@CInputConfig@@AEAAXXZ @ 0x1401F4E58 (-_zzzNotifyExternalComponents@CInputConfig@@AEAAXXZ.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     RIMUnlockExclusive @ 0x140046360 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005B440 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMSetDeviceOutputConfig @ 0x1400C7244 (RIMSetDeviceOutputConfig.c)
 *     RIMGetQDCActivePathsData @ 0x1400C7BC8 (RIMGetQDCActivePathsData.c)
 *     RIMFreeQDCActivePathsData @ 0x1400C7E10 (RIMFreeQDCActivePathsData.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1401E23E4 (rimFindMonitorForDigitizerWithQDCData.c)
 */

void RIMOnDisplayStateChange()
{
  char *v0; // rsi
  unsigned int v1; // ebx
  char v2; // di
  bool v3; // bp
  __int64 UserSessionState; // rax
  int v5; // r8d
  int v6; // edx
  unsigned int *v7; // r12
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  _QWORD *v11; // rax
  _QWORD *i; // rcx
  _QWORD *v13; // rdx
  _QWORD *v14; // r8
  __int64 v15; // rax
  __int64 v16; // rax
  char *v17; // r14
  __int64 v18; // r15
  __int64 v19; // rbx
  __int64 v20; // rbp
  __int64 v21; // rdi
  __int64 j; // rbx
  char v23; // bl
  bool v24; // di
  __int64 v25; // rax
  int v26; // r8d
  int v27; // edx
  char v28; // bl
  bool v29; // di
  __int64 v30; // rax
  int v31; // r8d
  int v32; // edx
  __int128 v33; // [rsp+40h] [rbp-38h] BYREF

  v0 = 0LL;
  v1 = 0;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v2 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v2 = 0;
  }
  v3 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v5) = v3;
    LOBYTE(v6) = v2;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v6,
      v5,
      *(_QWORD *)(UserSessionState + 19392),
      4,
      1,
      75,
      (__int64)&WPP_f6a7500724f53a157ee15389c9df2fd3_Traceguids);
  }
  v33 = 0LL;
  v7 = RIMGetQDCActivePathsData((unsigned int *)&v33);
  v9 = W32GetUserSessionState(v8);
  RIMLockExclusive(v9 + 56);
  v11 = (_QWORD *)(W32GetUserSessionState(v10) + 120);
  i = (_QWORD *)*v11;
  if ( (_QWORD *)*v11 != v11 )
  {
    do
    {
      if ( !*((_BYTE *)i + 65) && !*((_BYTE *)i + 64) )
        ++v1;
      i = (_QWORD *)*i;
    }
    while ( i != v11 );
    if ( v1 )
    {
      v0 = (char *)Win32AllocPoolZInitImpl(256LL, 8LL * v1, 0x6D707352u);
      v1 = 0;
      if ( v0 )
      {
        v13 = (_QWORD *)(W32GetUserSessionState(i) + 120);
        for ( i = (_QWORD *)*v13; i != v13; i = (_QWORD *)*i )
        {
          v14 = i - 2;
          if ( !*((_BYTE *)i + 65) && !*((_BYTE *)v14 + 80) )
          {
            v15 = v1++;
            *(_QWORD *)&v0[8 * v15] = v14;
          }
        }
      }
    }
  }
  v16 = W32GetUserSessionState(i);
  RIMUnlockExclusive(v16 + 56);
  if ( v1 )
  {
    v17 = v0;
    v18 = v1;
    do
    {
      if ( !v0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2255LL);
      v19 = *(_QWORD *)v17;
      v20 = *(_QWORD *)v17 + 104LL;
      RIMLockExclusive(v20);
      if ( *(_BYTE *)(v19 + 81) )
      {
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || (v23 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
        {
          v23 = 0;
        }
        v24 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v23 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v25 = W32GetUserSessionState(WPP_GLOBAL_Control);
          LOBYTE(v26) = v24;
          LOBYTE(v27) = v23;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v27,
            v26,
            *(_QWORD *)(v25 + 19392),
            3,
            1,
            76,
            (__int64)&WPP_f6a7500724f53a157ee15389c9df2fd3_Traceguids);
        }
      }
      else
      {
        v21 = v19 + 760;
        RIMLockExclusive(v19 + 760);
        for ( j = *(_QWORD *)(v19 + 424); j; j = *(_QWORD *)(j + 40) )
        {
          if ( *(_DWORD *)(j + 48) == 2 )
          {
            if ( *(_DWORD *)(j + 1336) )
              rimFindMonitorForDigitizerWithQDCData(j, v7, 0LL);
            if ( (*(_DWORD *)(j + 184) & 0x80u) != 0 || *(_DWORD *)(j + 1336) )
              RIMSetDeviceOutputConfig(
                (struct RIMDEV *)j,
                *(struct tagHID_POINTER_DEVICE_INFO **)(j + 456),
                1u,
                (__int64)v7);
          }
        }
        RIMUnlockExclusive(v21);
      }
      RIMUnlockExclusive(v20);
      v17 += 8;
      --v18;
    }
    while ( v18 );
  }
  if ( v0 )
    GreDeleteFastMutex(v0);
  RIMFreeQDCActivePathsData((__int64)v7);
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v28 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v28 = 0;
  }
  v29 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v28 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v30 = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v31) = v29;
    LOBYTE(v32) = v28;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v32,
      v31,
      *(_QWORD *)(v30 + 19392),
      4,
      1,
      77,
      (__int64)&WPP_f6a7500724f53a157ee15389c9df2fd3_Traceguids);
  }
}
