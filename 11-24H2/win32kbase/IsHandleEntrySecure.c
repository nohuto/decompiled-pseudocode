/*
 * XREFs of IsHandleEntrySecure @ 0x140162894
 * Callers:
 *     ValidateHandleSecure @ 0x140099530 (ValidateHandleSecure.c)
 *     ValidateHwndEx @ 0x1400B7530 (ValidateHwndEx.c)
 *     ?ValidateHandleSecure_New@@YAHPEAXK@Z @ 0x1401A911C (-ValidateHandleSecure_New@@YAHPEAXK@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline @ 0x1401A9280 (Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline.c)
 *     Win32JobObject::_anonymous_namespace_::FindW32Job @ 0x1401A9D28 (Win32JobObject--_anonymous_namespace_--FindW32Job.c)
 */

__int64 __fastcall IsHandleEntrySecure(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  __int64 v5; // rbp
  __int64 v6; // rbx
  __int64 v7; // rcx
  _QWORD *CurrentProcessWin32Process; // rax
  unsigned int v9; // edi
  _QWORD *v10; // r14
  __int64 v11; // rcx
  _QWORD *v12; // rbx
  __int64 v13; // rbx
  unsigned int JobProvidingUILimit; // ebp
  __int64 ProcessJob; // rbx
  bool v16; // zf
  __int64 v17; // rcx
  _QWORD *v18; // rax
  unsigned int v19; // edx
  __int64 W32Job; // rax
  _QWORD *v22; // rcx
  unsigned int v23; // r8d
  unsigned int v24; // edx

  UserSessionState = W32GetUserSessionState(a1);
  v5 = *(_QWORD *)(UserSessionState + 19888);
  v6 = 5LL * (unsigned int)((a2 - *(_QWORD *)(UserSessionState + 19944)) >> 5);
  CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v7);
  v9 = 0;
  v10 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process && *CurrentProcessWin32Process )
  {
    v11 = *((unsigned __int16 *)&unk_1402437BC + 12 * *(unsigned __int8 *)(a2 + 24));
    if ( (v11 & 2) != 0 )
    {
      v12 = *(_QWORD **)(v5 + 8 * v6 + 8);
    }
    else
    {
      if ( (v11 & 1) == 0 )
        return 0LL;
      v13 = *(_QWORD *)(v5 + 8 * v6 + 8);
      if ( !v13 )
        return 0LL;
      v12 = *(_QWORD **)(v13 + 464);
    }
    if ( !v12 )
      return 0LL;
    if ( v12 == CurrentProcessWin32Process || *v12 == *(_QWORD *)(W32GetUserGdiSessionState(v11) + 40) )
      return 1LL;
    JobProvidingUILimit = 0;
    if ( (unsigned int)Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline() )
    {
      JobProvidingUILimit = KfGetJobProvidingUILimit(*v10, 1LL);
      v16 = JobProvidingUILimit == (unsigned int)KfGetJobProvidingUILimit(*v12, 1LL);
    }
    else
    {
      ProcessJob = PsGetProcessJob(*v12);
      v16 = PsGetProcessJob(*v10) == ProcessJob;
    }
    if ( v16 )
      return 1LL;
    if ( !(unsigned int)Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline() )
    {
      v17 = v10[95];
      if ( v17 )
      {
        v18 = *(_QWORD **)(v17 + 64);
        if ( v18 )
        {
          v19 = *(_DWORD *)(v17 + 56);
          if ( v19 )
          {
            while ( *v18 != a1 )
            {
              ++v9;
              ++v18;
              if ( v9 >= v19 )
                return 0LL;
            }
            return 1LL;
          }
        }
      }
      return 0LL;
    }
    if ( JobProvidingUILimit )
    {
      W32Job = Win32JobObject::_anonymous_namespace_::FindW32Job(JobProvidingUILimit);
      if ( !W32Job )
        return v9;
      v22 = *(_QWORD **)(W32Job + 64);
      if ( !v22 )
        return v9;
      v23 = *(_DWORD *)(W32Job + 56);
      v24 = 0;
      if ( !v23 )
        return v9;
      while ( *v22 != a1 )
      {
        ++v24;
        ++v22;
        if ( v24 >= v23 )
          return v9;
      }
    }
    return 1;
  }
  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 231LL);
  return 1LL;
}
