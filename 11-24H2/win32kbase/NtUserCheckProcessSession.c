/*
 * XREFs of NtUserCheckProcessSession @ 0x14016B6A0
 * Callers:
 *     <none>
 * Callees:
 *     EnterSharedCrit @ 0x140010CB0 (EnterSharedCrit.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     UserIsCurrentProcessDwm @ 0x140024300 (UserIsCurrentProcessDwm.c)
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1400CFC50 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     _DwmCheckProcessSession @ 0x14013A870 (_DwmCheckProcessSession.c)
 *     ??1CLockProcessByPid@@QEAA@XZ @ 0x14015C9F4 (--1CLockProcessByPid@@QEAA@XZ.c)
 *     ??0CLockProcessByPid@@QEAA@PEAXKKW4LockProcessOptions@@_K@Z @ 0x1401A2894 (--0CLockProcessByPid@@QEAA@PEAXKKW4LockProcessOptions@@_K@Z.c)
 *     Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline @ 0x1401A726C (Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall NtUserCheckProcessSession(int a1)
{
  __int64 v1; // rdi
  __int64 v2; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  ULONG v8; // ecx
  NTSTATUS v9; // eax
  _BYTE v10[8]; // [rsp+30h] [rbp-58h] BYREF
  int v11; // [rsp+38h] [rbp-50h]

  v1 = a1;
  v2 = 0LL;
  if ( !(unsigned int)Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline() )
  {
    EnterSharedCrit(0, 1u);
    if ( (unsigned int)IsCurrentProcessDwm(v5, v4, v6, v7) )
    {
      v9 = DwmCheckProcessSession(v1);
      if ( v9 >= 0 )
      {
        v2 = 1LL;
        goto LABEL_11;
      }
      v8 = RtlNtStatusToDosError(v9);
    }
    else
    {
      v8 = 5;
    }
    UserSetLastError(v8);
LABEL_11:
    UserSessionSwitchLeaveCritWithNonPaged();
    return v2;
  }
  if ( !UserIsCurrentProcessDwm() )
  {
    UserSetLastError(5);
    return 0LL;
  }
  CLockProcessByPid::CLockProcessByPid(v10, v1, 0LL);
  LOBYTE(v2) = v11 >= 0;
  CLockProcessByPid::~CLockProcessByPid((CLockProcessByPid *)v10);
  return v2;
}
