/*
 * XREFs of NtUserGetTitleBarInfo @ 0x1C00E63C0
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z @ 0x1C00E659C (-xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserGetTitleBarInfo(__int64 a1, ULONG64 a2)
{
  int v4; // edi
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct tagWND *v7; // rbx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rax
  _BYTE *v14; // rdx
  __int64 v15; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int128 v21; // [rsp+40h] [rbp-68h] BYREF
  __int64 v22; // [rsp+50h] [rbp-58h]
  _OWORD v23[3]; // [rsp+68h] [rbp-40h] BYREF

  memset(v23, 0, 44);
  v21 = 0LL;
  v22 = 0LL;
  v4 = 1;
  EnterCrit(0LL, 1LL);
  v7 = (struct tagWND *)ValidateHwnd(a1);
  if ( v7 )
  {
    *(_QWORD *)&v21 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v21;
    *((_QWORD *)&v21 + 1) = v7;
    HMLockObject(v7);
    if ( PsGetCurrentProcessWow64Process(v11, v10, v12) )
      v13 = 0LL;
    else
      v13 = 3LL;
    if ( (v13 & a2) != 0 )
      ExRaiseDatatypeMisalignment();
    v14 = (_BYTE *)a2;
    if ( a2 >= MmUserProbeAddress )
      v14 = (_BYTE *)MmUserProbeAddress;
    *v14 = *v14;
    v14[43] = v14[43];
    LODWORD(v23[0]) = *(_DWORD *)a2;
    if ( LODWORD(v23[0]) == 44 )
    {
      memset((char *)&v23[1] + 4, 0, 24);
      xxxCommonGetTitleBarInfo(v7, (struct tagTITLEBARINFO *)v23);
    }
    else
    {
      UserSetLastError(87LL);
      v4 = 0;
    }
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v15);
    if ( (unsigned __int8)ShouldVirtualizeWindowRect(v7, CurrentThreadDpiAwarenessContext) )
      TransformRectBetweenCoordinateSpaces((char *)v23 + 4, (char *)v23 + 4, 0LL, v7);
    if ( v4 )
    {
      *(_OWORD *)a2 = v23[0];
      *(_OWORD *)(a2 + 16) = v23[1];
      *(_QWORD *)(a2 + 32) = *(_QWORD *)&v23[2];
      *(_DWORD *)(a2 + 40) = DWORD2(v23[2]);
    }
    ThreadUnlock1(v18, v17, v19);
  }
  else
  {
    v4 = 0;
  }
  UserSessionSwitchLeaveCrit(v6, v5, v8, v9);
  return v4;
}
