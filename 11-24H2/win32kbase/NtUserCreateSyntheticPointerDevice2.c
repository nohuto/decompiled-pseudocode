/*
 * XREFs of NtUserCreateSyntheticPointerDevice2 @ 0x1401B9930
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     HMValidateSharedHandle @ 0x140042DB0 (HMValidateSharedHandle.c)
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x140053560 (RawInputManagerDeviceObjectResolveHandle.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14005DCC0 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14005DE1C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x14009782C (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400A42D0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     SetLastNtError @ 0x1400BBEB4 (SetLastNtError.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400C0560 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ?Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ @ 0x14014EDA0 (-Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x14016ABF4 (DestroySharedUserCritDeferredUnlockList.c)
 *     NtUserRemoveInjectionDevice @ 0x14019A120 (NtUserRemoveInjectionDevice.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RtlCopyFromUser @ 0x1401A22E8 (RtlCopyFromUser.c)
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline @ 0x1401A3C28 (Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401A8FE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x1401A9084 (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 *     RIMIDECheckInjectionCapability @ 0x1401E4DE0 (RIMIDECheckInjectionCapability.c)
 *     RIMIDE_InitializePointerDeviceInjection @ 0x1401E864C (RIMIDE_InitializePointerDeviceInjection.c)
 *     RIMSetExtendedPointerDeviceProperty @ 0x1401E8CA8 (RIMSetExtendedPointerDeviceProperty.c)
 */

__int64 __fastcall NtUserCreateSyntheticPointerDevice2(void *Src, _QWORD *a2)
{
  _QWORD *UserSessionState; // rbx
  int v4; // esi
  __int64 v5; // rax
  bool v6; // bl
  int v7; // edx
  int v8; // r8d
  __int64 v9; // r9
  ULONG v10; // ecx
  int v11; // r13d
  int v12; // r12d
  unsigned int v13; // r15d
  char v14; // bl
  __int64 v15; // r9
  unsigned __int8 v16; // r14
  bool v17; // bl
  __int64 v18; // rax
  int v19; // r8d
  int v20; // edx
  int v21; // eax
  char v22; // bl
  __int64 v23; // rax
  unsigned int v24; // ebx
  unsigned int v25; // r13d
  bool v26; // bl
  int v27; // edx
  int v28; // r8d
  __int64 v29; // r9
  bool v30; // bl
  int v31; // edx
  int v32; // r8d
  __int64 v33; // r9
  bool v34; // r15
  bool v35; // bl
  __int64 v36; // rax
  int v37; // r8d
  int v38; // edx
  int v39; // r15d
  PVOID v40; // rbx
  bool v41; // bl
  __int64 v42; // rax
  int v43; // r8d
  int v44; // edx
  _QWORD *v45; // rdx
  char v46; // bl
  __int64 v47; // r9
  __int64 CurrentThreadWin32Thread; // rbx
  __int64 v49; // rcx
  __int64 v50; // rax
  __int16 v52; // [rsp+30h] [rbp-F8h]
  __int16 v53; // [rsp+30h] [rbp-F8h]
  __int16 v54; // [rsp+30h] [rbp-F8h]
  char v55; // [rsp+40h] [rbp-E8h]
  char v56; // [rsp+40h] [rbp-E8h]
  __int128 v57; // [rsp+50h] [rbp-D8h] BYREF
  __int128 v58; // [rsp+60h] [rbp-C8h]
  __int64 v59; // [rsp+70h] [rbp-B8h]
  char *v60; // [rsp+78h] [rbp-B0h]
  __int64 v61; // [rsp+90h] [rbp-98h]
  _DWORD v62[2]; // [rsp+A0h] [rbp-88h] BYREF
  __int64 v63; // [rsp+A8h] [rbp-80h]
  int v64; // [rsp+B0h] [rbp-78h]
  __int128 v65; // [rsp+B8h] [rbp-70h]
  __int128 v66; // [rsp+C8h] [rbp-60h]
  __int64 v67; // [rsp+D8h] [rbp-50h]
  char v69; // [rsp+140h] [rbp+18h] BYREF
  PVOID Object; // [rsp+148h] [rbp+20h] BYREF

  UserSessionState = (_QWORD *)W32GetUserSessionState(Src);
  v4 = 1;
  v5 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
         UserSessionState,
         1,
         0,
         (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  UserSessionState[3] = v5;
  if ( v5 && UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v5) )
  {
    DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2468));
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2475);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2473);
  }
  v69 = 0;
  EnterLeaveCritMitRitHandOffHazard::Enter((Enter *)&v69);
  Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline();
  v60 = 0LL;
  v65 = 0LL;
  v66 = 0LL;
  v67 = 0LL;
  v61 = 0LL;
  if ( v69 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      LOBYTE(v4) = 0;
    }
    v6 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)v4 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_13;
    v9 = *(_QWORD *)(W32GetUserSessionState(&WPP_RECORDER_INITIALIZED) + 69400);
    v52 = 25;
LABEL_12:
    LOBYTE(v8) = v6;
    LOBYTE(v7) = v4;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v7,
      v8,
      v9,
      2,
      2,
      v52,
      (__int64)&WPP_8ecb864819e83a63300ef0c5d3b8b347_Traceguids);
LABEL_13:
    v10 = 5;
LABEL_14:
    v4 = 0;
    goto LABEL_15;
  }
  if ( !(unsigned int)RIMIDECheckInjectionCapability() )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      LOBYTE(v4) = 0;
    }
    v6 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)v4 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_13;
    v9 = *(_QWORD *)(W32GetUserSessionState(&WPP_RECORDER_INITIALIZED) + 69400);
    v52 = 26;
    goto LABEL_12;
  }
  v57 = 0LL;
  v58 = 0LL;
  v59 = 0LL;
  RtlCopyFromUser(&v57, Src, 0x28uLL);
  v65 = v57;
  v66 = v58;
  v67 = v59;
  v11 = v59;
  v12 = DWORD2(v58);
  if ( (v59 & 1) != 0 )
  {
    LODWORD(Object) = 2;
    if ( !DWORD2(v58) || !HIDWORD(v58) )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
      {
        LOBYTE(v4) = 0;
      }
      v14 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v15 = *(_QWORD *)(W32GetUserSessionState(&WPP_RECORDER_INITIALIZED) + 69400);
        WPP_RECORDER_AND_TRACE_SF_Dd(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v4,
          v14,
          v15,
          2u,
          2u,
          0x1Cu,
          (__int64)&WPP_8ecb864819e83a63300ef0c5d3b8b347_Traceguids,
          v12,
          HIDWORD(v58));
      }
      goto LABEL_35;
    }
    v13 = v57;
  }
  else
  {
    LODWORD(Object) = 1;
    if ( *((_QWORD *)&v58 + 1) )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
      {
        LOBYTE(v4) = 0;
      }
      v46 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v47 = *(_QWORD *)(W32GetUserSessionState(&WPP_RECORDER_INITIALIZED) + 69400);
        WPP_RECORDER_AND_TRACE_SF_Dd(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v4,
          v46,
          v47,
          2u,
          2u,
          0x1Du,
          (__int64)&WPP_8ecb864819e83a63300ef0c5d3b8b347_Traceguids,
          v12,
          HIDWORD(v58));
      }
      goto LABEL_35;
    }
    v13 = v57;
    if ( (_DWORD)v57 == 5 )
    {
      v16 = BYTE8(v58) + 2;
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || ((unsigned __int8)*((_DWORD *)WPP_GLOBAL_Control + 11) & v16) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < v16 )
      {
        LOBYTE(v4) = 0;
      }
      v17 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v18 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED);
        LOBYTE(v19) = v17;
        LOBYTE(v20) = v4;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v20,
          v19,
          *(_QWORD *)(v18 + 69400),
          2,
          2,
          30,
          (__int64)&WPP_8ecb864819e83a63300ef0c5d3b8b347_Traceguids);
      }
      goto LABEL_35;
    }
  }
  v21 = 1;
  if ( v13 == 5 )
    v21 = 3;
  if ( (~v21 & (unsigned int)v59) != 0 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      LOBYTE(v4) = 0;
    }
    v22 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v23 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED);
      WPP_RECORDER_AND_TRACE_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v4,
        v22,
        *(_QWORD *)(v23 + 69400),
        2u,
        2u,
        0x1Fu,
        (__int64)&WPP_8ecb864819e83a63300ef0c5d3b8b347_Traceguids,
        v11);
    }
    goto LABEL_35;
  }
  if ( v13 != 2 )
  {
    if ( v13 == 3 )
    {
      v24 = DWORD1(v57);
      if ( DWORD1(v57) != 1 )
      {
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
        {
          LOBYTE(v4) = 0;
        }
        v34 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !(_BYTE)v4 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_35;
        v29 = *(_QWORD *)(W32GetUserSessionState(&WPP_RECORDER_INITIALIZED) + 69400);
        v55 = v24;
        v53 = 35;
        goto LABEL_84;
      }
      v25 = DWORD2(v57);
      if ( (unsigned int)(DWORD2(v57) - 1) <= 2 )
      {
        if ( (_QWORD)v58 )
        {
          v61 = HMValidateSharedHandle(v58);
          if ( !v61 )
          {
            if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
              || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
              || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
            {
              LOBYTE(v4) = 0;
            }
            v30 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( !(_BYTE)v4 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_76;
            v33 = *(_QWORD *)(W32GetUserSessionState(&WPP_RECORDER_INITIALIZED) + 69400);
            v56 = v58;
            v54 = 37;
            goto LABEL_75;
          }
        }
LABEL_130:
        v39 = RIMIDE_InitializePointerDeviceInjection(v13, v24, v61, v25, 0);
        if ( v39 == -2147483631 )
        {
          LODWORD(Object) = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3731);
        }
        if ( v39 >= 0 )
        {
          if ( (v59 & 2) != 0 )
          {
            Object = 0LL;
            v63 = 0LL;
            v64 = 0;
            v62[0] = 7;
            v62[1] = 1;
            v39 = RawInputManagerDeviceObjectResolveHandle(v60, 3u, 1, &Object);
            if ( v39 >= 0 )
            {
              v40 = Object;
              v39 = RIMSetExtendedPointerDeviceProperty(*((_QWORD *)Object + 66), v62);
              ObfDereferenceObject(v40);
            }
          }
          if ( v39 >= 0 )
          {
            v45 = a2;
            if ( (unsigned __int64)a2 >= MmUserProbeAddress )
              v45 = (_QWORD *)MmUserProbeAddress;
            *v45 = *v45;
            *a2 = v60;
LABEL_169:
            if ( v4 )
              goto LABEL_172;
            goto LABEL_170;
          }
        }
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
        {
          LOBYTE(v4) = 0;
        }
        v41 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( (_BYTE)v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v42 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED);
          LOBYTE(v43) = v41;
          LOBYTE(v44) = v4;
          WPP_RECORDER_AND_TRACE_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v44,
            v43,
            *(_QWORD *)(v42 + 69400),
            2,
            2,
            42,
            (__int64)&WPP_8ecb864819e83a63300ef0c5d3b8b347_Traceguids,
            v39);
        }
        v4 = 0;
        v10 = RtlNtStatusToDosError(v39);
LABEL_15:
        UserSetLastError(v10);
        goto LABEL_169;
      }
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
      {
        LOBYTE(v4) = 0;
      }
      v26 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v4 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_35;
      v29 = *(_QWORD *)(W32GetUserSessionState(&WPP_RECORDER_INITIALIZED) + 69400);
      v55 = v25;
      v53 = 36;
    }
    else if ( v13 == 5 )
    {
      v24 = DWORD1(v57);
      if ( (unsigned int)(DWORD1(v57) - 1) > 4 )
      {
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
        {
          LOBYTE(v4) = 0;
        }
        v34 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !(_BYTE)v4 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_35;
        v29 = *(_QWORD *)(W32GetUserSessionState(&WPP_RECORDER_INITIALIZED) + 69400);
        v55 = v24;
        v53 = 38;
LABEL_84:
        LOBYTE(v28) = v34;
        goto LABEL_85;
      }
      v25 = DWORD2(v57);
      if ( DWORD2(v57) == 3 )
      {
        if ( (_QWORD)v58 )
        {
          if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
            || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
          {
            LOBYTE(v4) = 0;
          }
          v35 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( (_BYTE)v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v36 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED);
            LOBYTE(v37) = v35;
            LOBYTE(v38) = v4;
            WPP_RECORDER_AND_TRACE_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v38,
              v37,
              *(_QWORD *)(v36 + 69400),
              2,
              2,
              40,
              (__int64)&WPP_8ecb864819e83a63300ef0c5d3b8b347_Traceguids,
              v58);
          }
          goto LABEL_35;
        }
        goto LABEL_130;
      }
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
      {
        LOBYTE(v4) = 0;
      }
      v26 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v4 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_35;
      v29 = *(_QWORD *)(W32GetUserSessionState(&WPP_RECORDER_INITIALIZED) + 69400);
      v55 = v25;
      v53 = 39;
    }
    else
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
      {
        LOBYTE(v4) = 0;
      }
      v26 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v4 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_35;
      v29 = *(_QWORD *)(W32GetUserSessionState(&WPP_RECORDER_INITIALIZED) + 69400);
      v55 = v13;
      v53 = 41;
    }
LABEL_65:
    LOBYTE(v28) = v26;
LABEL_85:
    LOBYTE(v27) = v4;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v27,
      v28,
      v29,
      2,
      2,
      v53,
      (__int64)&WPP_8ecb864819e83a63300ef0c5d3b8b347_Traceguids,
      v55);
LABEL_35:
    v10 = 87;
    goto LABEL_14;
  }
  v24 = DWORD1(v57);
  if ( (unsigned int)(DWORD1(v57) - 1) > 0xFF )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      LOBYTE(v4) = 0;
    }
    v34 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)v4 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_35;
    v29 = *(_QWORD *)(W32GetUserSessionState(&WPP_RECORDER_INITIALIZED) + 69400);
    v55 = v24;
    v53 = 32;
    goto LABEL_84;
  }
  v25 = DWORD2(v57);
  if ( (unsigned int)(DWORD2(v57) - 1) > 2 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      LOBYTE(v4) = 0;
    }
    v26 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)v4 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_35;
    v29 = *(_QWORD *)(W32GetUserSessionState(&WPP_RECORDER_INITIALIZED) + 69400);
    v55 = v25;
    v53 = 33;
    goto LABEL_65;
  }
  if ( !(_QWORD)v58 )
    goto LABEL_130;
  v61 = HMValidateSharedHandle(v58);
  if ( v61 )
    goto LABEL_130;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
  {
    LOBYTE(v4) = 0;
  }
  v30 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( !(_BYTE)v4 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    goto LABEL_76;
  v33 = *(_QWORD *)(W32GetUserSessionState(&WPP_RECORDER_INITIALIZED) + 69400);
  v56 = v58;
  v54 = 34;
LABEL_75:
  LOBYTE(v32) = v30;
  LOBYTE(v31) = v4;
  WPP_RECORDER_AND_TRACE_SF_q(
    *((_QWORD *)WPP_GLOBAL_Control + 3),
    v31,
    v32,
    v33,
    2,
    2,
    v54,
    (__int64)&WPP_8ecb864819e83a63300ef0c5d3b8b347_Traceguids,
    v56);
LABEL_76:
  v4 = 0;
LABEL_170:
  if ( v60 )
    NtUserRemoveInjectionDevice(v60);
LABEL_172:
  if ( !(unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
  {
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread();
    v50 = W32GetUserSessionState(v49);
    ExReleaseFastResource(*(_QWORD *)(v50 + 16), CurrentThreadWin32Thread + 176);
    KeLeaveCriticalRegion();
  }
  UserSessionSwitchLeaveCritWithNonPaged();
  return v4;
}
