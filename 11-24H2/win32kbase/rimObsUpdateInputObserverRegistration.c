/*
 * XREFs of rimObsUpdateInputObserverRegistration @ 0x1401F1268
 * Callers:
 *     NtRIMUpdateInputObserverRegistration @ 0x1401D5220 (NtRIMUpdateInputObserverRegistration.c)
 *     RIMUpdateInputObserverRegistration @ 0x1401D8E90 (RIMUpdateInputObserverRegistration.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x140046360 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005B440 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14005DCC0 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14005DE1C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_qD @ 0x140141E88 (WPP_RECORDER_AND_TRACE_SF_qD.c)
 *     RawInputManagerInputObserverObjectResolveHandle @ 0x14019D840 (RawInputManagerInputObserverObjectResolveHandle.c)
 *     rimObsCheckForRegistrationConflicts @ 0x1401EE888 (rimObsCheckForRegistrationConflicts.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddq @ 0x1401EEC54 (WPP_RECORDER_AND_TRACE_SF_dddq.c)
 */

__int64 __fastcall rimObsUpdateInputObserverRegistration(
        char *Handle,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        KPROCESSOR_MODE PreviousMode)
{
  unsigned int v7; // r12d
  char v9; // bl
  char v10; // di
  char v11; // si
  __int64 UserSessionState; // rax
  __int64 v13; // rcx
  int v14; // esi
  __int64 v15; // rax
  _DWORD *v16; // rdi
  unsigned int v17; // eax
  unsigned int v18; // r13d
  unsigned int v19; // r9d
  bool v20; // si
  bool v21; // bp
  __int64 v22; // rax
  int v23; // r8d
  int v24; // edx
  bool v25; // bp
  bool v26; // r14
  __int64 v27; // rax
  int v28; // r8d
  int v29; // edx
  char v30; // bp
  __int64 v31; // rax
  int v32; // r15d
  __int64 v33; // rcx
  __int64 v34; // rax
  bool v35; // di
  bool v36; // bp
  __int64 v37; // rax
  int v38; // r8d
  int v39; // edx
  int v41; // [rsp+20h] [rbp-78h]
  int v42; // [rsp+28h] [rbp-70h]
  int v43; // [rsp+30h] [rbp-68h]
  int v44; // [rsp+38h] [rbp-60h]
  PVOID Object; // [rsp+60h] [rbp-38h] BYREF

  v7 = a2;
  v9 = 1;
  v10 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v11 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(Handle);
    WPP_RECORDER_AND_TRACE_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v10,
      v11,
      *(_QWORD *)(UserSessionState + 69400),
      v41,
      1u,
      0x27u,
      (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
  }
  Object = 0LL;
  v14 = RawInputManagerInputObserverObjectResolveHandle(Handle, a2, PreviousMode, &Object);
  if ( v14 >= 0 )
  {
    v15 = W32GetUserSessionState(v13);
    RIMLockExclusive(v15 + 72);
    v16 = Object;
    RIMLockExclusive((__int64)Object + 176);
    v17 = v16[28];
    v18 = v16[27];
    v19 = v16[29];
    LODWORD(Object) = v17;
    if ( a4 >= 0x30 )
    {
      v16[27] = 3;
      v16[28] = 0;
      if ( rimObsCheckForRegistrationConflicts(v7, v18, v17, v19) )
      {
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
        {
          v9 = 0;
        }
        v30 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !v9 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v32 = (int)Object;
        }
        else
        {
          v31 = W32GetUserSessionState(WPP_GLOBAL_Control);
          v32 = (int)Object;
          WPP_RECORDER_AND_TRACE_SF_dddq(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v9,
            v30,
            *(_QWORD *)(v31 + 69400),
            v41,
            v42,
            v43,
            v44);
        }
        v16[27] = v18;
        v16[28] = v32;
        v16[30] = v7;
        if ( a3 )
        {
          *((_QWORD *)v16 + 12) = a3;
          v16[26] = a4;
        }
        goto LABEL_41;
      }
      v14 = -1073741823;
    }
    else
    {
      v20 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
      v21 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v20 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v22 = W32GetUserSessionState(WPP_GLOBAL_Control);
        LOBYTE(v23) = v21;
        LOBYTE(v24) = v20;
        WPP_RECORDER_AND_TRACE_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v24,
          v23,
          *(_QWORD *)(v22 + 69400),
          3,
          1,
          40,
          (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids,
          a4);
      }
      v14 = -1073741789;
    }
    v25 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
    v26 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v25 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v27 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v28) = v26;
      LOBYTE(v29) = v25;
      WPP_RECORDER_AND_TRACE_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v29,
        v28,
        *(_QWORD *)(v27 + 69400),
        3,
        1,
        42,
        (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids,
        (char)Handle);
    }
    ObCloseHandle(Handle, PreviousMode);
LABEL_41:
    RIMUnlockExclusive((__int64)(v16 + 44));
    ObfDereferenceObject(v16);
    v34 = W32GetUserSessionState(v33);
    RIMUnlockExclusive(v34 + 72);
    return (unsigned int)v14;
  }
  v35 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
  v36 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v35 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v37 = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v38) = v36;
    LOBYTE(v39) = v35;
    WPP_RECORDER_AND_TRACE_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v39,
      v38,
      *(_QWORD *)(v37 + 69400),
      3,
      1,
      43,
      (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids,
      (char)Handle);
  }
  return (unsigned int)v14;
}
