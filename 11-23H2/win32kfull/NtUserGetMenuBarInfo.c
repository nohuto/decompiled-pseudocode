/*
 * XREFs of NtUserGetMenuBarInfo @ 0x1C01D1B10
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     xxxGetMenuBarInfo @ 0x1C02304BC (xxxGetMenuBarInfo.c)
 */

__int64 __fastcall NtUserGetMenuBarInfo(__int64 a1, __int64 a2, __int64 a3, ULONG64 a4)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  ULONG_PTR v8; // rsi
  __int64 v9; // r8
  __int64 v10; // r9
  int MenuBarInfo; // ebx
  _BYTE *v12; // rdx
  __int64 v13; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int128 v19; // [rsp+38h] [rbp-90h] BYREF
  __int64 v20; // [rsp+48h] [rbp-80h]
  __int128 v21; // [rsp+60h] [rbp-68h] BYREF
  __int128 v22; // [rsp+70h] [rbp-58h]
  __int128 v23; // [rsp+80h] [rbp-48h]

  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  EnterCrit(0LL, 0LL);
  v8 = ValidateHwnd(a1);
  if ( v8 )
  {
    *(_QWORD *)&v19 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v19;
    *((_QWORD *)&v19 + 1) = v8;
    HMLockObject(v8);
    if ( (a4 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v12 = (_BYTE *)a4;
    if ( a4 >= MmUserProbeAddress )
      v12 = (_BYTE *)MmUserProbeAddress;
    *v12 = *v12;
    v12[47] = v12[47];
    LODWORD(v21) = *(_DWORD *)a4;
    MenuBarInfo = xxxGetMenuBarInfo(v8);
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v13);
    if ( (unsigned __int8)ShouldVirtualizeWindowRect(v8, CurrentThreadDpiAwarenessContext) )
      TransformRectBetweenCoordinateSpaces((char *)&v21 + 4, (char *)&v21 + 4, 0LL, v8);
    if ( MenuBarInfo )
    {
      DWORD1(v22) = 0;
      *((_QWORD *)&v23 + 1) = BYTE8(v23) & 3;
      *(_OWORD *)a4 = v21;
      *(_OWORD *)(a4 + 16) = v22;
      *(_OWORD *)(a4 + 32) = v23;
    }
    ThreadUnlock1(v16, v15, v17);
  }
  else
  {
    MenuBarInfo = 0;
  }
  UserSessionSwitchLeaveCrit(v7, v6, v9, v10);
  return MenuBarInfo;
}
