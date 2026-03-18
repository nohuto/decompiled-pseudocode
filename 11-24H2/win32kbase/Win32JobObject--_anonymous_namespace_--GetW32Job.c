/*
 * XREFs of Win32JobObject::_anonymous_namespace_::GetW32Job @ 0x1401A9E50
 * Callers:
 *     ?GetJobProcessAtomTable@Win32JobObject@@YA_NPEAPEAX@Z @ 0x1401A9D60 (-GetJobProcessAtomTable@Win32JobObject@@YA_NPEAPEAX@Z.c)
 *     ?GrantAccessHandle@Win32JobObject@@YA_NKPEAX_N@Z @ 0x1401A9F80 (-GrantAccessHandle@Win32JobObject@@YA_NKPEAX_N@Z.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x1401366D8 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     Win32JobObject::_anonymous_namespace_::FindW32Job @ 0x1401A9D28 (Win32JobObject--_anonymous_namespace_--FindW32Job.c)
 */

__int64 *__fastcall Win32JobObject::_anonymous_namespace_::GetW32Job(__int64 a1)
{
  int v1; // esi
  __int64 *W32Job; // rbx
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  char v6; // di
  char v7; // bp
  __int64 UserSessionState; // rax

  v1 = a1;
  W32Job = Win32JobObject::_anonymous_namespace_::FindW32Job(a1);
  if ( !W32Job )
  {
    v3 = Win32AllocPoolZInitImpl(256LL, 0x48uLL, 0x626A7355u);
    W32Job = (__int64 *)v3;
    if ( v3 )
    {
      *(_DWORD *)(v3 + 16) = v1;
      v5 = *(_QWORD *)(W32GetUserSessionState(v4) + 69352);
      *W32Job = v5;
      *(_QWORD *)(W32GetUserSessionState(v5) + 69352) = W32Job;
      v6 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
      v7 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
        WPP_RECORDER_AND_TRACE_SF_qd(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v6,
          v7,
          *(_QWORD *)(UserSessionState + 69400),
          4u,
          0xEu,
          0xAu,
          (__int64)&WPP_567733cb5f8835e6e7156d912fa354a1_Traceguids,
          W32Job,
          v1);
      }
    }
  }
  return W32Job;
}
