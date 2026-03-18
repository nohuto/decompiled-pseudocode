/*
 * XREFs of SetInputDelegationModeImpl @ 0x14018980C
 * Callers:
 *     NtMITSetInputDelegationMode @ 0x14016B1B0 (NtMITSetInputDelegationMode.c)
 * Callees:
 *     IsAnyDelegationEnabled @ 0x1400C2360 (IsAnyDelegationEnabled.c)
 *     DisableDelegation @ 0x140189550 (DisableDelegation.c)
 *     ApiSetEditionInternalSetCursorPos @ 0x140192280 (ApiSetEditionInternalSetCursorPos.c)
 *     ?OverrideClip@CCursorClip@@QEAAX_N@Z @ 0x14020B190 (-OverrideClip@CCursorClip@@QEAAX_N@Z.c)
 *     ?SetInputDelegationMode@Win32k@InputTraceLogging@@SAXIIIW4INPUTDELEGATION_MODE_FLAGS@@@Z @ 0x14021227C (-SetInputDelegationMode@Win32k@InputTraceLogging@@SAXIIIW4INPUTDELEGATION_MODE_FLAGS@@@Z.c)
 *     Feature_Bugfix_57240160__private_IsEnabledDeviceUsageNoInline @ 0x140212644 (Feature_Bugfix_57240160__private_IsEnabledDeviceUsageNoInline.c)
 *     ApiSetEditionKeyboardInputDelegationChanged @ 0x140221EC4 (ApiSetEditionKeyboardInputDelegationChanged.c)
 */

__int64 __fastcall SetInputDelegationModeImpl(int a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  int v10; // edi
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // eax
  __int64 UserSessionState; // rax
  __int64 v22; // rcx
  __int64 v23; // rbx
  __int64 v24; // rcx
  __int64 v25; // rcx
  _DWORD *v26; // rcx
  __int64 v27; // rax

  InputTraceLogging::Win32k::SetInputDelegationMode();
  if ( a4 )
  {
    v19 = *(_QWORD *)(W32GetUserSessionState(v7) + 19656);
    v20 = *(_DWORD *)(v19 + 8);
    if ( (a4 & 2) != 0 )
    {
      if ( (v20 & 2) == 0 )
      {
        UserSessionState = W32GetUserSessionState(v19);
        CCursorClip::OverrideClip(*(CCursorClip **)(UserSessionState + 36296), 1);
        v23 = *(_QWORD *)(W32GetUserSessionState(v22) + 19240);
        v19 = *(_QWORD *)(W32GetUserSessionState(v24) + 19656);
        *(_QWORD *)(v19 + 12) = v23;
      }
    }
    else if ( (v20 & 2) != 0 )
    {
      a4 |= 2u;
    }
    v25 = *(_QWORD *)(W32GetUserSessionState(v19) + 19656);
    *(_DWORD *)(v25 + 8) = a4;
    v26 = *(_DWORD **)(W32GetUserSessionState(v25) + 19656);
    *v26 = a1;
    if ( (a4 & 1) != 0 )
    {
      v27 = W32GetUserSessionState(v26);
      v18 = 1LL;
      *(_DWORD *)(*(_QWORD *)(v27 + 19656) + 4LL) = a3;
LABEL_17:
      ApiSetEditionKeyboardInputDelegationChanged(a3, v18);
    }
  }
  else if ( IsAnyDelegationEnabled() )
  {
    v9 = *(_QWORD *)(W32GetUserSessionState(v8) + 19656);
    v10 = *(_DWORD *)(v9 + 8);
    v11 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v9) + 19656) + 12LL);
    v13 = *(_QWORD *)(W32GetUserSessionState(v12) + 19656);
    a3 = *(_DWORD *)(v13 + 4);
    DisableDelegation(v13);
    if ( !(unsigned int)Feature_Bugfix_57240160__private_IsEnabledDeviceUsageNoInline(v14) && (v10 & 2) != 0 )
      ApiSetEditionInternalSetCursorPos((unsigned int)v11, HIDWORD(v11), 1LL);
    if ( (v10 & 1) != 0 )
    {
      if ( *(_QWORD *)(W32GetUserSessionState(v15) + 18944) )
      {
        v17 = W32GetUserSessionState(v16);
        *(_DWORD *)(*(_QWORD *)(v17 + 18944) + 436LL) |= 1u;
      }
      v18 = 0LL;
      goto LABEL_17;
    }
  }
  return 1LL;
}
