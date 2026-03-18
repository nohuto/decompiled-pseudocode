/*
 * XREFs of RIMOnAsyncWorkItemNotification @ 0x1401972C4
 * Callers:
 *     NtRIMOnAsyncPnpWorkNotification @ 0x14013D6D0 (NtRIMOnAsyncPnpWorkNotification.c)
 *     ?OnAsyncWorkItemNotification@CBaseInput@@AEAAJXZ @ 0x140197260 (-OnAsyncWorkItemNotification@CBaseInput@@AEAAJXZ.c)
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x14002588C (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     RIMUnlockExclusive @ 0x140046360 (RIMUnlockExclusive.c)
 *     RawInputManagerObjectResolveHandle @ 0x140054EF0 (RawInputManagerObjectResolveHandle.c)
 *     RIMLockExclusive @ 0x14005B440 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14005DCC0 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14005DE1C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     RIMApiSetIsRemoteConnection @ 0x140063C6C (RIMApiSetIsRemoteConnection.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400A42D0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqDdS @ 0x1400AC300 (WPP_RECORDER_AND_TRACE_SF_qqDdS.c)
 *     rimDoRimDevChangeAsyncWorkItem @ 0x1400C6E18 (rimDoRimDevChangeAsyncWorkItem.c)
 *     rimDoUpdateInputGlobalsWorkItem @ 0x1400D97B0 (rimDoUpdateInputGlobalsWorkItem.c)
 *     RIMDeviceNotifyAsyncWorkItem @ 0x1401120C4 (RIMDeviceNotifyAsyncWorkItem.c)
 *     ApiSetPostPointerDeviceOutOfRangeMessage @ 0x1401255DC (ApiSetPostPointerDeviceOutOfRangeMessage.c)
 *     ApiSetPostPointerDeviceInRangeMessage @ 0x14012565C (ApiSetPostPointerDeviceInRangeMessage.c)
 *     ApiSetProcessHidRawInput @ 0x14013ACB0 (ApiSetProcessHidRawInput.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x14016ABF4 (DestroySharedUserCritDeferredUnlockList.c)
 *     RIMFreeAsyncWorkItem @ 0x140197D7C (RIMFreeAsyncWorkItem.c)
 *     ?DequeueAsyncWorkItem@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@PEBURIMAsyncWorkItem@@@Z @ 0x140197E68 (-DequeueAsyncWorkItem@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@PEBURIMAsyncWorkItem@.c)
 *     rimDoHandleAnyPnpRemovePendingDevicesWorkItem @ 0x14019D300 (rimDoHandleAnyPnpRemovePendingDevicesWorkItem.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401A8FE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x1401A9084 (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 *     rimDoSetInputModeWorkItem @ 0x1401E3D74 (rimDoSetInputModeWorkItem.c)
 *     RIMDeviceClassNotifyAsyncWorkItem @ 0x1401EC448 (RIMDeviceClassNotifyAsyncWorkItem.c)
 */

__int64 __fastcall RIMOnAsyncWorkItemNotification(char *a1)
{
  unsigned int v2; // esi
  _QWORD *v3; // r14
  char *v4; // rbx
  _QWORD *v5; // rcx
  _QWORD *v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rbp
  char v9; // bl
  char v10; // di
  __int64 UserSessionState; // rax
  CTouchProcessor *v12; // rcx
  char v13; // r15
  __int64 v14; // r13
  const wchar_t *v15; // r12
  int v16; // ebx
  int v17; // edi
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rcx
  char v21; // bl
  bool v22; // di
  __int64 v23; // rax
  int v24; // r8d
  int v25; // edx
  _QWORD *v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  char v32; // di
  bool v33; // si
  __int64 v34; // rax
  int v35; // r8d
  int v36; // edx
  char v37; // di
  bool v38; // si
  __int64 v39; // rax
  int v40; // r8d
  int v41; // edx
  char v42; // bl
  bool v43; // di
  __int64 v44; // rax
  int v45; // r8d
  int v46; // edx
  int v48; // [rsp+20h] [rbp-88h]
  int v49; // [rsp+28h] [rbp-80h]
  int v50; // [rsp+30h] [rbp-78h]
  int v51; // [rsp+38h] [rbp-70h]
  PVOID Object; // [rsp+B8h] [rbp+10h] BYREF
  int v53; // [rsp+C0h] [rbp+18h]

  Object = 0LL;
  v53 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  v2 = v53;
  if ( v53 < 0 )
  {
    DbgkWerCaptureLiveKernelDump(L"win32kbase.sys", 400LL, a1, Object, 0LL, 0LL, 0LL, 0LL, 0);
  }
  else
  {
    v3 = Object;
    v4 = (char *)Object + 352;
    RIMLockExclusive((__int64)Object + 352);
    v5 = v3 + 47;
    v6 = (_QWORD *)v3[47];
    if ( (_QWORD *)v6[1] != v3 + 47 || (v7 = *v6, *(_QWORD **)(*v6 + 8LL) != v6) )
      __fastfail(3u);
    *v5 = v7;
    v8 = (__int64)v6;
    *(_QWORD *)(v7 + 8) = v5;
    RIMUnlockExclusive((__int64)v4);
    InputTraceLogging::RIM::DequeueAsyncWorkItem(
      (const struct RawInputManagerObject *)v3,
      (const struct RIMAsyncWorkItem *)v8);
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v9 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v9 = 0;
    }
    v10 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
      WPP_RECORDER_AND_TRACE_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v9,
        v10,
        *(_QWORD *)(UserSessionState + 19392),
        4u,
        1u,
        0xA2u,
        (__int64)&WPP_f6a7500724f53a157ee15389c9df2fd3_Traceguids);
    }
    v12 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v13 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v13 = 0;
    }
    LOBYTE(Object) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v14 = *(_QWORD *)(v8 + 56);
      if ( v14 )
        v15 = *(const wchar_t **)(v14 + 272);
      else
        v15 = *(const wchar_t **)(v8 + 48);
      v16 = *(_DWORD *)(v8 + 16);
      v17 = *(_DWORD *)(v8 + 32);
      v18 = *(_QWORD *)(v8 + 24);
      v19 = W32GetUserSessionState(WPP_GLOBAL_Control);
      WPP_RECORDER_AND_TRACE_SF_qqDdS(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v13,
        (char)Object,
        *(_QWORD *)(v19 + 19392),
        v48,
        v49,
        v50,
        v51,
        v18,
        v14,
        v17,
        v16,
        v15);
    }
    if ( (unsigned int)RIMApiSetIsRemoteConnection((__int64)v12) )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v21 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v21 = 0;
      }
      v22 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v21 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v23 = W32GetUserSessionState(WPP_GLOBAL_Control);
        LOBYTE(v24) = v22;
        LOBYTE(v25) = v21;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v25,
          v24,
          *(_QWORD *)(v23 + 19392),
          3,
          1,
          164,
          (__int64)&WPP_f6a7500724f53a157ee15389c9df2fd3_Traceguids);
      }
      v2 = 0;
    }
    else
    {
      if ( *(_DWORD *)(v8 + 16) <= 1u )
      {
        RIMLockExclusive((__int64)(v3 + 13));
        if ( *((_BYTE *)v3 + 80) || *((_BYTE *)v3 + 81) )
        {
          if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
            || (v37 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
          {
            v37 = 0;
          }
          v38 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v37 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v39 = W32GetUserSessionState(WPP_GLOBAL_Control);
            LOBYTE(v40) = v38;
            LOBYTE(v41) = v37;
            WPP_RECORDER_AND_TRACE_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v41,
              v40,
              *(_QWORD *)(v39 + 19392),
              3,
              1,
              165,
              (__int64)&WPP_f6a7500724f53a157ee15389c9df2fd3_Traceguids,
              (char)v3);
          }
        }
        else if ( *(_DWORD *)(v8 + 16) )
        {
          RIMDeviceNotifyAsyncWorkItem(v8);
        }
        else
        {
          RIMDeviceClassNotifyAsyncWorkItem(v8);
        }
        RIMUnlockExclusive((__int64)(v3 + 13));
      }
      else
      {
        v26 = (_QWORD *)W32GetUserSessionState(v20);
        v27 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
                v26,
                1LL,
                0LL,
                _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
        v26[3] = v27;
        if ( v27 && (unsigned __int8)UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v27) )
        {
          DestroySharedUserCritDeferredUnlockList((__int64)(v26 + 2468));
          DestroyDeferredUnlockObjectAssignmentList(v26 + 2475);
          DestroyDeferredUnlockObjectAssignmentList(v26 + 2473);
        }
        RIMLockExclusive((__int64)(v3 + 13));
        if ( *((_BYTE *)v3 + 80) || *((_BYTE *)v3 + 81) )
        {
          if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
            || (v32 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
          {
            v32 = 0;
          }
          v33 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v32 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v34 = W32GetUserSessionState(WPP_GLOBAL_Control);
            LOBYTE(v35) = v33;
            LOBYTE(v36) = v32;
            WPP_RECORDER_AND_TRACE_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v36,
              v35,
              *(_QWORD *)(v34 + 19392),
              3,
              1,
              166,
              (__int64)&WPP_f6a7500724f53a157ee15389c9df2fd3_Traceguids,
              (char)v3);
          }
        }
        else
        {
          switch ( *(_DWORD *)(v8 + 16) )
          {
            case 2:
              if ( !*(_DWORD *)(v8 + 112) )
                rimDoRimDevChangeAsyncWorkItem(v8);
              break;
            case 3:
              v31 = (*(_QWORD *)(v8 + 56) + 72LL) & -(__int64)(*(_QWORD *)(v8 + 56) != 0LL);
              if ( (*(_DWORD *)(v31 + 0x50) & 4) == 0 )
                ApiSetProcessHidRawInput(v31, *(_QWORD *)(v8 + 104), *(_DWORD *)(v8 + 100));
              break;
            case 4:
              v28 = *(_QWORD *)(v8 + 56);
              v29 = v28 + 528;
              if ( !v28 )
                v29 = 456LL;
              v30 = *(_QWORD *)v29;
              if ( *(_DWORD *)(v8 + 96) )
                ApiSetPostPointerDeviceInRangeMessage(v30);
              else
                ApiSetPostPointerDeviceOutOfRangeMessage(v30);
              break;
            case 5:
              rimDoUpdateInputGlobalsWorkItem(v8);
              break;
            case 6:
              rimDoHandleAnyPnpRemovePendingDevicesWorkItem(v8);
              break;
            case 7:
              rimDoSetInputModeWorkItem(v8);
              break;
          }
        }
        RIMUnlockExclusive((__int64)(v3 + 13));
        UserSessionSwitchLeaveCritWithNonPaged();
      }
      v2 = v53;
    }
    RIMFreeAsyncWorkItem((PVOID)v8);
    ObfDereferenceObject(v3);
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v42 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v42 = 0;
  }
  v43 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v42 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v44 = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v45) = v43;
    LOBYTE(v46) = v42;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v46,
      v45,
      *(_QWORD *)(v44 + 19392),
      4,
      1,
      167,
      (__int64)&WPP_f6a7500724f53a157ee15389c9df2fd3_Traceguids,
      v2);
  }
  return v2;
}
