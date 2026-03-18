/*
 * XREFs of ?BuildValueDeviceUsages@@YAHKPEAPEAUtagINPUT_INJECTION_VALUE@@PEAK@Z @ 0x1401E7F80
 * Callers:
 *     ?RIMIDEInjectPartialFrameFromPointerInfo@@YAJPEAURawInputManagerDeviceObject@@PEAUtagPOINTER_TYPE_INFO@@III@Z @ 0x1401E3FA8 (-RIMIDEInjectPartialFrameFromPointerInfo@@YAJPEAURawInputManagerDeviceObject@@PEAUtagPOINTER_TYP.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14005DE1C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x14009782C (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall BuildValueDeviceUsages(int a1, struct tagINPUT_INJECTION_VALUE **a2, unsigned int *a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rbp
  unsigned int v7; // edi
  int v8; // esi
  unsigned int v9; // r15d
  char *v10; // r12
  char *v11; // r13
  struct tagINPUT_INJECTION_VALUE *v12; // rax
  struct tagINPUT_INJECTION_VALUE *v13; // r8
  struct tagINPUT_INJECTION_VALUE *v14; // rcx
  __int16 *v15; // rdx
  unsigned int v16; // r14d
  __int16 v17; // ax
  unsigned int v18; // edx
  _WORD *v19; // r8
  __int64 v20; // rcx
  char v21; // di
  char v22; // bp
  __int64 UserSessionState; // rax
  char v24; // di
  bool v25; // si
  __int64 v26; // rax
  int v27; // r8d
  int v28; // edx
  char v30; // bp
  bool v31; // r14
  __int64 v32; // rax
  int v33; // r8d
  int v34; // edx

  v3 = 0;
  if ( ((a1 - 2) & 0xFFFFFFFC) != 0 || a1 == 4 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 547);
  if ( *a2 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 548);
  v6 = 5LL;
  switch ( a1 )
  {
    case 3:
      v7 = 12;
      v8 = 11;
      v9 = 6;
      v10 = (char *)&unk_14026EE62;
      v11 = (char *)&unk_14026EE64;
LABEL_13:
      v12 = (struct tagINPUT_INJECTION_VALUE *)Win32AllocPoolZInitImpl(256LL, 12LL * v7, 0x6A6E6952u);
      *a2 = v12;
      v13 = v12;
      if ( v12 )
      {
        v14 = v12;
        v15 = (__int16 *)&unk_14026EDC4;
        v16 = 5;
        do
        {
          *(_WORD *)v14 = *(v15 - 1);
          v17 = *v15;
          v15 += 16;
          *((_WORD *)v14 + 1) = v17;
          v14 = (struct tagINPUT_INJECTION_VALUE *)((char *)v14 + 12);
          --v6;
        }
        while ( v6 );
        v18 = 0;
        v19 = (_WORD *)((char *)v13 + 60);
        do
        {
          if ( v18 >= v9 )
            break;
          ++v16;
          v20 = 32LL * v18++;
          *v19 = *(_WORD *)&v10[v20];
          v19[1] = *(_WORD *)&v11[v20];
          v19 += 6;
        }
        while ( v16 < v7 );
        if ( v16 == v8 )
        {
          v3 = 1;
          *a3 = v7;
        }
        else
        {
          if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
            || (v21 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
          {
            v21 = 0;
          }
          v22 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v21 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
            WPP_RECORDER_AND_TRACE_SF_Dd(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v21,
              v22,
              *(_QWORD *)(UserSessionState + 19392),
              2u,
              1u,
              0xCu,
              (__int64)&WPP_c36c985c814233f64051156d4f542e35_Traceguids,
              v16,
              v8);
          }
        }
      }
      else
      {
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || (v24 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
        {
          v24 = 0;
        }
        v25 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v24 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v26 = W32GetUserSessionState(WPP_GLOBAL_Control);
          LOBYTE(v27) = v25;
          LOBYTE(v28) = v24;
          WPP_RECORDER_AND_TRACE_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v28,
            v27,
            *(_QWORD *)(v26 + 19392),
            2,
            1,
            13,
            (__int64)&WPP_c36c985c814233f64051156d4f542e35_Traceguids,
            23);
        }
      }
      return v3;
    case 2:
      v7 = 12;
      v10 = (char *)&unk_14026EB82;
      v11 = (char *)&unk_14026EB84;
LABEL_12:
      v8 = 10;
      v9 = 5;
      goto LABEL_13;
    case 5:
      v7 = 15;
      v10 = (char *)&unk_14026EC62;
      v11 = (char *)&unk_14026EC64;
      goto LABEL_12;
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v30 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
  {
    v30 = 0;
  }
  v31 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v30 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v32 = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v33) = v31;
    LOBYTE(v34) = v30;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v34,
      v33,
      *(_QWORD *)(v32 + 19392),
      2,
      1,
      11,
      (__int64)&WPP_c36c985c814233f64051156d4f542e35_Traceguids,
      a1);
  }
  return 0LL;
}
