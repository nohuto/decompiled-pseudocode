/*
 * XREFs of ?Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ @ 0x14014EDA0
 * Callers:
 *     NtUserInjectGenericHidInput @ 0x14011CB70 (NtUserInjectGenericHidInput.c)
 *     NtUserInjectDeviceInput @ 0x140139390 (NtUserInjectDeviceInput.c)
 *     NtUserInitializeGenericHidInjection @ 0x14016DC10 (NtUserInitializeGenericHidInjection.c)
 *     NtUserInjectKeyboardInput @ 0x14016E210 (NtUserInjectKeyboardInput.c)
 *     NtUserInjectMouseInput @ 0x14016EBE0 (NtUserInjectMouseInput.c)
 *     NtUserRemoveInjectionDevice @ 0x14019A120 (NtUserRemoveInjectionDevice.c)
 *     NtUserCreateSyntheticPointerDevice2 @ 0x1401B9930 (NtUserCreateSyntheticPointerDevice2.c)
 *     NtUserInitializeInputDeviceInjection @ 0x1401BB2D0 (NtUserInitializeInputDeviceInjection.c)
 *     NtUserInjectPointerInput @ 0x1401BB770 (NtUserInjectPointerInput.c)
 *     NtUserSetFeatureReportResponse @ 0x1401BCE90 (NtUserSetFeatureReportResponse.c)
 * Callees:
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1400C9A64 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1400C9AEC (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline @ 0x1401A3C28 (Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall EnterLeaveCritMitRitHandOffHazard::Enter(Enter *this)
{
  __int64 v2; // rcx
  __int64 CurrentThreadWin32Thread; // rbx
  __int64 v4; // rcx
  __int64 UserSessionState; // rax
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rax
  NTSTATUS v12; // ebp
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // r8
  char v17; // [rsp+48h] [rbp+10h] BYREF

  if ( !(unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( !(unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
    {
      KeEnterCriticalRegion();
      CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread();
      UserSessionState = W32GetUserSessionState(v4);
      LOBYTE(v6) = 1;
      ExAcquireFastResourceExclusive(*(_QWORD *)(UserSessionState + 16), CurrentThreadWin32Thread + 176, v6);
    }
    v8 = W32GetUserSessionState(v2);
    while ( *(_DWORD *)(W32GetUserSessionState(v7) + 18784) )
    {
      ++*(_DWORD *)(v8 + 18872);
      if ( !(unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
      {
        v9 = PsGetCurrentThreadWin32Thread();
        v11 = W32GetUserSessionState(v10);
        ExReleaseFastResource(*(_QWORD *)(v11 + 16), v9 + 176);
        KeLeaveCriticalRegion();
      }
      LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v17);
      v12 = KeWaitForSingleObject(*(PVOID *)(v8 + 18864), UserRequest, 1, 0, 0LL);
      LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v17);
      if ( !(unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
      {
        KeEnterCriticalRegion();
        v13 = PsGetCurrentThreadWin32Thread();
        v15 = W32GetUserSessionState(v14);
        LOBYTE(v16) = 1;
        ExAcquireFastResourceExclusive(*(_QWORD *)(v15 + 16), v13 + 176, v16);
      }
      if ( v12 == 192 )
      {
        --*(_DWORD *)(v8 + 18872);
        *(_BYTE *)this = 1;
        return;
      }
    }
  }
}
