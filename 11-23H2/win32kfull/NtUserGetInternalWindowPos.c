/*
 * XREFs of NtUserGetInternalWindowPos @ 0x1C01D1900
 * Callers:
 *     <none>
 * Callees:
 *     _GetWindowPlacement @ 0x1C0006908 (_GetWindowPlacement.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserGetInternalWindowPos(__int64 a1, _OWORD *a2, _QWORD *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  struct tagWND *v9; // r9
  unsigned int v10; // ebx
  _BYTE *v11; // rdx
  _BYTE *v12; // rdx
  _OWORD v14[3]; // [rsp+38h] [rbp-50h] BYREF

  memset(v14, 0, 44);
  EnterSharedCrit(a1, a2, a3);
  v9 = (struct tagWND *)ValidateHwnd(a1);
  if ( v9 )
  {
    if ( a2 )
    {
      v11 = a2;
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        v11 = (_BYTE *)MmUserProbeAddress;
      *v11 = *v11;
      v11[15] = v11[15];
    }
    if ( a3 )
    {
      v12 = a3;
      if ( (unsigned __int64)a3 >= MmUserProbeAddress )
        v12 = (_BYTE *)MmUserProbeAddress;
      *v12 = *v12;
      v12[7] = v12[7];
    }
    LODWORD(v14[0]) = 44;
    GetWindowPlacement(v9, (__int64)v14, 0);
    v10 = DWORD2(v14[0]);
    if ( a2 )
      *a2 = *(_OWORD *)((char *)&v14[1] + 12);
    if ( a3 )
      *a3 = *(_QWORD *)((char *)v14 + 12);
  }
  else
  {
    v10 = 0;
  }
  UserSessionSwitchLeaveCrit(v7, v6, v8, v9);
  return v10;
}
