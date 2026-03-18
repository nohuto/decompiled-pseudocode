/*
 * XREFs of Win32JobObject::_anonymous_namespace_::DeleteW32Job @ 0x1401A9C08
 * Callers:
 *     ?Win32kNtUserCleanupInternal@@YAXXZ @ 0x140165460 (-Win32kNtUserCleanupInternal@@YAXXZ.c)
 *     ?Terminated@Win32JobObject@@YAXK@Z @ 0x1401AA430 (-Terminated@Win32JobObject@@YAXK@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14005DCC0 (WPP_RECORDER_AND_TRACE_SF_q.c)
 */

void __fastcall Win32JobObject::_anonymous_namespace_::DeleteW32Job(char *Buffer)
{
  bool v2; // di
  bool v3; // si
  __int64 UserSessionState; // rax
  int v5; // r8d
  int v6; // edx
  char *v7; // rcx
  struct _RTL_ATOM_TABLE *v8; // rcx
  char **v9; // rcx
  char *v10; // rdx

  v2 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v3 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v5) = v3;
    LOBYTE(v6) = v2;
    WPP_RECORDER_AND_TRACE_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v6,
      v5,
      *(_QWORD *)(UserSessionState + 69400),
      4,
      14,
      11,
      (__int64)&WPP_567733cb5f8835e6e7156d912fa354a1_Traceguids,
      (char)Buffer);
  }
  v7 = (char *)*((_QWORD *)Buffer + 8);
  if ( v7 )
    GreDeleteFastMutex(v7);
  v8 = (struct _RTL_ATOM_TABLE *)*((_QWORD *)Buffer + 3);
  if ( v8 )
    RtlDestroyAtomTable(v8);
  v9 = (char **)(W32GetUserSessionState(v8) + 69352);
  v10 = *v9;
  if ( *v9 )
  {
    while ( v10 != Buffer )
    {
      v9 = (char **)v10;
      v10 = *(char **)v10;
      if ( !v10 )
        goto LABEL_18;
    }
    *v9 = *(char **)Buffer;
  }
LABEL_18:
  GreDeleteFastMutex(Buffer);
}
