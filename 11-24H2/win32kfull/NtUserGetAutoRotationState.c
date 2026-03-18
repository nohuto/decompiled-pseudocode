/*
 * XREFs of NtUserGetAutoRotationState @ 0x1401D7B20
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     QueryAutoRotationState @ 0x140264860 (QueryAutoRotationState.c)
 */

__int64 __fastcall NtUserGetAutoRotationState(_DWORD *a1)
{
  int v1; // ebx
  int AutoRotationState; // r9d
  _DWORD *v3; // r8

  UserSessionSwitchEnterCrit();
  v1 = 0;
  if ( a1 )
  {
    AutoRotationState = QueryAutoRotationState();
    v3 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v3 = (_DWORD *)MmUserProbeAddress;
    *v3 = *v3;
    *a1 = AutoRotationState;
    v1 = 1;
  }
  else
  {
    UserSetLastError(87);
  }
  LeaveCrit();
  return v1;
}
