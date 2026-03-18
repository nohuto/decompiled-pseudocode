/*
 * XREFs of NtUserGetWindowPlacement @ 0x140243090
 * Callers:
 *     <none>
 * Callees:
 *     _GetWindowPlacement @ 0x140025CD8 (_GetWindowPlacement.c)
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140340280 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall NtUserGetWindowPlacement(__int64 a1, _DWORD *a2)
{
  __int64 v4; // rcx
  struct tagWND *v5; // r8
  unsigned int WindowPlacement; // ebx
  _BYTE *v7; // rdx
  _OWORD Src[2]; // [rsp+48h] [rbp-40h] BYREF
  __int64 v10; // [rsp+68h] [rbp-20h]
  int v11; // [rsp+70h] [rbp-18h]

  memset(Src, 0, sizeof(Src));
  v10 = 0LL;
  v11 = 0;
  EnterCrit(0LL, 1LL);
  v5 = (struct tagWND *)ValidateHwnd(a1);
  if ( v5 )
  {
    v7 = a2;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      v7 = (_BYTE *)MmUserProbeAddress;
    *v7 = *v7;
    v7[43] = v7[43];
    LODWORD(Src[0]) = *a2;
    WindowPlacement = GetWindowPlacement(v5, (__int64)Src);
    if ( WindowPlacement )
      RtlCopyVolatileMemory(a2, Src, 0x2CuLL);
  }
  else
  {
    WindowPlacement = 0;
  }
  UserSessionSwitchLeaveCrit(v4);
  return WindowPlacement;
}
