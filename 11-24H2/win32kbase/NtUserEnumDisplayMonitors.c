/*
 * XREFs of NtUserEnumDisplayMonitors @ 0x1400417E0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     EtwTraceEnumDisplayMonitors @ 0x1400418C0 (EtwTraceEnumDisplayMonitors.c)
 *     xxxEnumDisplayMonitors @ 0x140042F90 (xxxEnumDisplayMonitors.c)
 *     SetLastNtError @ 0x1400BBEB4 (SetLastNtError.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x140198C14 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserEnumDisplayMonitors(HDC a1, __int128 *a2)
{
  __int128 *v2; // rbx
  HDC v3; // rdi
  __int64 v4; // rbx
  _BYTE v6[16]; // [rsp+48h] [rbp-50h] BYREF
  __int128 v7; // [rsp+58h] [rbp-40h]

  v2 = a2;
  v3 = a1;
  v7 = 0LL;
  LOBYTE(a2) = a2 != 0LL;
  LOBYTE(a1) = a1 != 0LL;
  EtwTraceEnumDisplayMonitors(a1, a2);
  EnterLeaveCritShared::EnterLeaveCritShared(v6, 1LL);
  if ( *(_DWORD *)(W32GetUserGdiSessionState() + 32) )
  {
    if ( v2 )
    {
      if ( (unsigned __int64)v2 >= MmUserProbeAddress )
        v2 = (__int128 *)MmUserProbeAddress;
      v7 = *v2;
    }
    v4 = (int)xxxEnumDisplayMonitors(v3, 0);
    UserSessionSwitchLeaveCritWithNonPaged();
    return v4;
  }
  else
  {
    UserSessionSwitchLeaveCritWithNonPaged();
    return 0LL;
  }
}
