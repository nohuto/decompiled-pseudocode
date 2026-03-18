/*
 * XREFs of NtUserSetJobUILimits @ 0x14029DD50
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     Feature_SysSetJobUILimits__private_IsEnabledDeviceUsageNoInline @ 0x1402926CC (Feature_SysSetJobUILimits__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall NtUserSetJobUILimits(HANDLE Handle, unsigned int a2)
{
  __int64 v4; // rcx
  ULONG v5; // ecx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v8; // rbx
  int v9; // eax
  NTSTATUS v10; // eax
  ULONG v11; // eax
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF

  if ( !(unsigned int)Feature_SysSetJobUILimits__private_IsEnabledDeviceUsageNoInline() )
  {
    v5 = 50;
LABEL_3:
    UserSetLastError(v5);
    return 0LL;
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v4);
  if ( CurrentProcessWin32Process )
    CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
  if ( !(unsigned int)IsImmersiveBroker(CurrentProcessWin32Process) && !(unsigned __int8)HasTcbPrivilege() )
  {
    v5 = 5;
    goto LABEL_3;
  }
  Object = 0LL;
  v8 = 1LL;
  v9 = ObReferenceObjectByHandleWithTag(Handle, 2u, (POBJECT_TYPE)PsJobType, 1, 0x47727355u, &Object, 0LL);
  if ( v9 < 0 )
  {
    v5 = RtlNtStatusToDosError(v9);
    goto LABEL_3;
  }
  v10 = KfSetJobUILimits(Object, a2);
  if ( v10 < 0 )
  {
    v8 = 0LL;
    v11 = RtlNtStatusToDosError(v10);
    UserSetLastError(v11);
  }
  ObfDereferenceObjectWithTag(Object, 0x47727355u);
  return v8;
}
