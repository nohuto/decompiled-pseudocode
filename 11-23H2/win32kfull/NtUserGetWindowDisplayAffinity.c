/*
 * XREFs of NtUserGetWindowDisplayAffinity @ 0x1C00167C0
 * Callers:
 *     <none>
 * Callees:
 *     GetDisplayAffinity @ 0x1C0016864 (GetDisplayAffinity.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     _IsTopLevelWindow @ 0x1C0122A20 (_IsTopLevelWindow.c)
 */

__int64 __fastcall NtUserGetWindowDisplayAffinity(__int64 a1, _DWORD *a2)
{
  int v4; // edi
  _DWORD *v5; // rdx
  ULONG64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  int v11; // [rsp+60h] [rbp+18h] BYREF

  v4 = 0;
  v11 = 0;
  EnterSharedCrit();
  v6 = ValidateHwnd(a1);
  if ( v6 )
  {
    if ( (unsigned int)IsTopLevelWindow(v6) )
    {
      GetDisplayAffinity(v9, &v11);
      v4 = 1;
      v6 = MmUserProbeAddress;
      v5 = a2;
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        v5 = (_DWORD *)MmUserProbeAddress;
      *v5 = *v5;
      *a2 = v11;
    }
    else
    {
      UserSetLastError(87LL);
    }
  }
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return v4;
}
