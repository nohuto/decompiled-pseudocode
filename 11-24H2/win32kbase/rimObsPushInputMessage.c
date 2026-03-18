/*
 * XREFs of rimObsPushInputMessage @ 0x1401F08B0
 * Callers:
 *     rimObsDeliverInputToObserver @ 0x1401EFE74 (rimObsDeliverInputToObserver.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14005DCC0 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14005DE1C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     rimObsCopyMessage @ 0x1401EFCE0 (rimObsCopyMessage.c)
 */

__int64 __fastcall rimObsPushInputMessage(__int64 a1, __int64 a2)
{
  __int64 v4; // r14
  char v5; // di
  bool v6; // bp
  __int64 UserSessionState; // rax
  int v8; // r8d
  int v9; // edx
  int v10; // edi
  unsigned int v11; // esi
  char v12; // bl
  bool v13; // bp
  __int64 v14; // rax
  int v15; // edx
  int v16; // r8d
  __int64 v17; // rdi
  char v18; // bl
  bool v19; // bp
  __int64 v20; // rax
  int v21; // r8d
  int v22; // edx
  int v24; // eax
  unsigned int v25; // ebp
  __int64 v26; // rax
  __int64 v27; // rcx
  char v28; // bl
  bool v29; // si
  __int64 v30; // rax
  int v31; // r8d
  int v32; // edx
  __int64 *v33; // rax
  int v34; // ebp
  bool v35; // di
  char v36; // [rsp+20h] [rbp-58h]
  __int16 v37; // [rsp+30h] [rbp-48h]
  char v38; // [rsp+40h] [rbp-38h]

  if ( *(_DWORD *)a2 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 215);
  v4 = a1 + 144;
  if ( *(_DWORD *)(a1 + 160) == -1 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 220);
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v5 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v5 = 0;
  }
  v6 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v8) = v6;
    LOBYTE(v9) = v5;
    WPP_RECORDER_AND_TRACE_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v9,
      v8,
      *(_QWORD *)(UserSessionState + 69400),
      4,
      1,
      10,
      (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids,
      a1);
  }
  if ( *(_DWORD *)(a1 + 160) >= *(_DWORD *)(a1 + 168) )
  {
    v10 = *(_DWORD *)(a1 + 164);
    if ( v10 != -1 )
      *(_DWORD *)(a1 + 164) = ++v10;
    v11 = -1073741756;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v12 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
    {
      v12 = 0;
    }
    v13 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v14 = W32GetUserSessionState(WPP_GLOBAL_Control);
      v38 = v10;
      LOBYTE(v16) = v13;
      v37 = 11;
      v36 = 3;
LABEL_53:
      LOBYTE(v15) = v12;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v15,
        v16,
        *(_QWORD *)(v14 + 69400),
        v36,
        1,
        v37,
        (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids,
        v38);
      return v11;
    }
    return v11;
  }
  v17 = 0LL;
  if ( *(_QWORD *)(a2 + 24) > 0xFFFFFFBFuLL )
  {
    v11 = -1073741675;
    goto LABEL_24;
  }
  v24 = *(_DWORD *)(a2 + 24);
  v25 = v24 + 48;
  v26 = Win32AllocPoolZInitImpl(256LL, (unsigned int)(v24 + 64), 0x716D4F52u);
  v17 = v26;
  if ( !v26 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (v27 = *((unsigned int *)WPP_GLOBAL_Control + 11), (v27 & 1) == 0)
      || (v28 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v28 = 0;
    }
    v29 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v28 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v30 = W32GetUserSessionState(v27);
      LOBYTE(v31) = v29;
      LOBYTE(v32) = v28;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v32,
        v31,
        *(_QWORD *)(v30 + 69400),
        2,
        1,
        12,
        (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
    }
    v11 = -1073741670;
    goto LABEL_24;
  }
  v11 = rimObsCopyMessage((int *)a2, 0, (void **)(v26 + 16), v25);
  if ( (v11 & 0x80000000) != 0 )
  {
LABEL_24:
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v18 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
    {
      v18 = 0;
    }
    v19 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v18 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v20 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v21) = v19;
      LOBYTE(v22) = v18;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v22,
        v21,
        *(_QWORD *)(v20 + 69400),
        3,
        1,
        14,
        (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
    }
    if ( v17 )
      GreDeleteFastMutex((char *)v17);
    return v11;
  }
  v33 = *(__int64 **)(a1 + 152);
  if ( *v33 != v4 )
    __fastfail(3u);
  *(_QWORD *)v17 = v4;
  *(_QWORD *)(v17 + 8) = v33;
  *v33 = v17;
  *(_QWORD *)(a1 + 152) = v17;
  v34 = *(_DWORD *)(a1 + 160) + 1;
  *(_DWORD *)(a1 + 160) = v34;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v12 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v12 = 0;
  }
  v35 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v14 = W32GetUserSessionState(WPP_GLOBAL_Control);
    v38 = v34;
    LOBYTE(v16) = v35;
    v37 = 13;
    v36 = 4;
    goto LABEL_53;
  }
  return v11;
}
