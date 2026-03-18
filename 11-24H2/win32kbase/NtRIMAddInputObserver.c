/*
 * XREFs of NtRIMAddInputObserver @ 0x1401D4670
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14005DE1C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400C0560 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     rimObsAddInputObserver @ 0x1401EEEE4 (rimObsAddInputObserver.c)
 *     rimObsCheckForObservationPermissions @ 0x1401EF944 (rimObsCheckForObservationPermissions.c)
 */

__int64 __fastcall NtRIMAddInputObserver(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        unsigned int a7,
        __int64 a8)
{
  int v11; // r15d
  bool v12; // bl
  bool v13; // di
  __int64 UserSessionState; // rax
  int v15; // r8d
  int v16; // edx
  char v17; // bl
  char v18; // di
  __int64 v19; // rax
  unsigned int v20; // ebx
  CTouchProcessor **v21; // rcx
  bool v22; // di
  bool v23; // si
  __int64 v24; // rax
  int v25; // r8d
  int v26; // edx

  v11 = a1;
  v12 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v13 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(a1);
    LOBYTE(v15) = v13;
    LOBYTE(v16) = v12;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v16,
      v15,
      *(_QWORD *)(UserSessionState + 69400),
      4,
      1,
      154,
      (__int64)&WPP_f6a7500724f53a157ee15389c9df2fd3_Traceguids);
  }
  if ( a7 )
  {
    if ( (unsigned int)rimObsCheckForObservationPermissions(a7) )
      v20 = rimObsAddInputObserver(v11, a2, a3, 1, a4, a5, a6, a7, a8);
    else
      v20 = -1073741790;
  }
  else
  {
    v17 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
    v18 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v19 = W32GetUserSessionState(WPP_GLOBAL_Control);
      WPP_RECORDER_AND_TRACE_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v17,
        v18,
        *(_QWORD *)(v19 + 69400),
        3u,
        1u,
        0x9Bu,
        (__int64)&WPP_f6a7500724f53a157ee15389c9df2fd3_Traceguids,
        0);
    }
    v20 = -1073741811;
  }
  v21 = &WPP_GLOBAL_Control;
  v22 = 0;
  if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control )
  {
    v21 = (CTouchProcessor **)*((unsigned int *)WPP_GLOBAL_Control + 11);
    if ( ((unsigned __int8)v21 & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
      v22 = 1;
  }
  v23 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v24 = W32GetUserSessionState(v21);
    LOBYTE(v25) = v23;
    LOBYTE(v26) = v22;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v26,
      v25,
      *(_QWORD *)(v24 + 69400),
      4,
      1,
      156,
      (__int64)&WPP_f6a7500724f53a157ee15389c9df2fd3_Traceguids,
      v20);
  }
  return v20;
}
