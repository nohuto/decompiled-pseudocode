/*
 * XREFs of ?ValidatePropWindow@@YAPEAUtagWND@@PEAUHWND__@@W4ValidatePropWindowKind@@@Z @ 0x1402BF08C
 * Callers:
 *     NtUserGetProp @ 0x140242BA0 (NtUserGetProp.c)
 *     NtUserGetProp2 @ 0x140242C80 (NtUserGetProp2.c)
 *     NtUserRemoveProp @ 0x140244FE0 (NtUserRemoveProp.c)
 *     NtUserSetProp @ 0x140246760 (NtUserSetProp.c)
 *     NtUserSetProp2 @ 0x140246810 (NtUserSetProp2.c)
 * Callees:
 *     _GetDesktopWindow @ 0x140046470 (_GetDesktopWindow.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline @ 0x140274ECC (Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall ValidatePropWindow(__int64 a1, char a2)
{
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 DesktopWindow; // rax
  __int64 v6; // rcx
  UIPrivilegeIsolation *v7; // rcx
  __int64 v8; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // r8

  v3 = ValidateHwndEx(a1, 1LL, a2 & 1);
  v4 = v3;
  if ( !v3 )
    return v4;
  if ( (a2 & 2) == 0 )
    return v4;
  DesktopWindow = GetDesktopWindow(v3);
  if ( v6 == DesktopWindow )
    return v4;
  if ( (unsigned int)Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline() )
    return v4;
  if ( UIPrivilegeIsolation::Enforced(v7) )
  {
    v8 = *(_QWORD *)(v4 + 16);
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v8 + 528), 0, 0) & 0xC) == 0 )
      return v4;
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v8);
  v10 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v10 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
  v11 = *(_QWORD *)(*(_QWORD *)(v4 + 16) + 464LL);
  if ( *(_DWORD *)(v10 + 772) == *(_DWORD *)(v11 + 772) )
  {
    v12 = PsGetCurrentProcessWin32Process(v11);
    v13 = v12;
    if ( v12 )
      v13 = -(__int64)(*(_QWORD *)v12 != 0LL) & v12;
    if ( *(_DWORD *)(v13 + 776) == *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 16) + 464LL) + 776LL) )
      return v4;
  }
  UserSetLastError(5);
  return 0LL;
}
