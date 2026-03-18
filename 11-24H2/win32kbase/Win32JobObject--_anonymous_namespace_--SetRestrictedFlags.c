/*
 * XREFs of Win32JobObject::_anonymous_namespace_::SetRestrictedFlags @ 0x1401AA1F4
 * Callers:
 *     Win32JobObject::_anonymous_namespace_::ConfigureProcessRestrictions @ 0x1401A9B8C (Win32JobObject--_anonymous_namespace_--ConfigureProcessRestrictions.c)
 * Callees:
 *     W32AttachToProcessAndExecute__lambda_adb6f1ef63095c26e0205bcc52cc305e___ @ 0x1401A9960 (W32AttachToProcessAndExecute__lambda_adb6f1ef63095c26e0205bcc52cc305e___.c)
 *     WPP_RECORDER_AND_TRACE_SF_Ds @ 0x1401AA608 (WPP_RECORDER_AND_TRACE_SF_Ds.c)
 */

_UNKNOWN **__fastcall Win32JobObject::_anonymous_namespace_::SetRestrictedFlags(
        __int64 a1,
        char a2,
        __int64 a3,
        __int64 a4)
{
  _UNKNOWN **result; // rax
  char v5; // si
  __int64 v7; // r8
  bool v9; // r14
  __int64 UserSessionState; // rax
  int v11; // r8d
  int v12; // edx
  struct _KPROCESS *v13; // rcx
  __int64 v14; // [rsp+50h] [rbp-18h] BYREF
  char v15; // [rsp+58h] [rbp-10h]
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h] BYREF

  result = &retaddr;
  v5 = 1;
  v7 = (*(_DWORD *)(a1 + 12) >> 25) & 1;
  if ( a2 != ((*(_DWORD *)(a1 + 12) & 0x2000000) != 0) )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
    {
      v5 = 0;
    }
    v9 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(a1);
      LOBYTE(v11) = v9;
      LOBYTE(v12) = v5;
      WPP_RECORDER_AND_TRACE_SF_Ds(*((_QWORD *)WPP_GLOBAL_Control + 3), v12, v11, *(_QWORD *)(UserSessionState + 69400));
    }
    v13 = *(struct _KPROCESS **)a1;
    v14 = a1;
    v15 = a2;
    return (_UNKNOWN **)W32AttachToProcessAndExecute__lambda_adb6f1ef63095c26e0205bcc52cc305e_(
                          v13,
                          (__int64)&v14,
                          v7,
                          a4);
  }
  return result;
}
