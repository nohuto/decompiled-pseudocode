/*
 * XREFs of NtUserGetWindowBand @ 0x1C0075090
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetWindowBand(__int64 a1, _DWORD *a2, __int64 a3)
{
  _DWORD *v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // ebx

  EnterSharedCrit(a1, a2, a3);
  v7 = ValidateHwnd(a1);
  v9 = 0;
  if ( v7 )
  {
    if ( a2 )
    {
      v5 = a2;
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        v5 = (_DWORD *)MmUserProbeAddress;
      *v5 = *v5;
      v6 = *(unsigned int *)(*(_QWORD *)(v7 + 40) + 236LL);
      *a2 = v6;
      v9 = 1;
    }
    else
    {
      UserSetLastError(87LL);
    }
  }
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return v9;
}
