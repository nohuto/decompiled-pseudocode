/*
 * XREFs of rimObsCheckForObservationPermissions @ 0x1401EF944
 * Callers:
 *     NtRIMAddInputObserver @ 0x1401D4670 (NtRIMAddInputObserver.c)
 *     NtRIMUpdateInputObserverRegistration @ 0x1401D5220 (NtRIMUpdateInputObserverRegistration.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14005DE1C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     RIMIsTestSigningOn @ 0x14019CD24 (RIMIsTestSigningOn.c)
 *     ?rimIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z @ 0x1401EE7E0 (-rimIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z.c)
 */

__int64 __fastcall rimObsCheckForObservationPermissions(char a1)
{
  int v1; // ebx
  int v2; // edi
  int v3; // esi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  struct _EPROCESS *CurrentProcess; // rax
  bool v9; // bl
  bool v10; // di
  int v11; // edx
  int v12; // r8d
  __int64 v13; // r9
  bool v14; // bl
  bool v15; // di
  __int64 UserSessionState; // rax
  int v17; // r8d
  int v18; // edx
  int v19; // esi
  bool v20; // bl
  bool v21; // di
  int v22; // edx
  int v23; // r8d
  __int64 v24; // r9
  int v25; // esi
  __int16 v27; // [rsp+30h] [rbp-38h]
  __int16 v28; // [rsp+30h] [rbp-38h]
  char v29; // [rsp+40h] [rbp-28h]
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-18h] BYREF
  char v31; // [rsp+70h] [rbp+8h] BYREF

  v1 = a1 & 2;
  v2 = a1 & 1;
  v3 = RIMIsTestSigningOn();
  CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v5, v4, v6, v7);
  if ( !(unsigned int)rimIsProcessLocalSystem(CurrentProcess) )
  {
    if ( !v3 )
    {
      v14 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
      v15 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
        LOBYTE(v17) = v15;
        LOBYTE(v18) = v14;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v18,
          v17,
          *(_QWORD *)(UserSessionState + 69400),
          3,
          1,
          75,
          (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
      }
      return 0LL;
    }
    v31 = 0;
    DestinationString = 0LL;
    if ( !v2
      || (RtlInitUnicodeString(&DestinationString, L"inputObservation"),
          v19 = RtlCapabilityCheck(0LL, &DestinationString, &v31),
          v19 >= 0)
      && v31 )
    {
      if ( !v1
        || (RtlInitUnicodeString(&DestinationString, L"inputSuppression"),
            v25 = RtlCapabilityCheck(0LL, &DestinationString, &v31),
            v25 >= 0)
        && v31 )
      {
        v9 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
        v10 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !v9 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return 1LL;
        v13 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control) + 69400);
        v27 = 78;
        goto LABEL_51;
      }
      v20 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
      v21 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v20 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v29 = v25;
      v24 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control) + 69400);
      v28 = 77;
    }
    else
    {
      v20 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
      v21 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v20 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v29 = v19;
      v24 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control) + 69400);
      v28 = 76;
    }
    LOBYTE(v23) = v21;
    LOBYTE(v22) = v20;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v22,
      v23,
      v24,
      3,
      1,
      v28,
      (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids,
      v29);
    return 0LL;
  }
  v9 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v10 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( !v9 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return 1LL;
  v13 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control) + 69400);
  v27 = 74;
LABEL_51:
  LOBYTE(v12) = v10;
  LOBYTE(v11) = v9;
  WPP_RECORDER_AND_TRACE_SF_(
    *((_QWORD *)WPP_GLOBAL_Control + 3),
    v11,
    v12,
    v13,
    4,
    1,
    v27,
    (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
  return 1LL;
}
