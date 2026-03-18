/*
 * XREFs of NtUserFlashWindowEx @ 0x1C01CEF70
 * Callers:
 *     <none>
 * Callees:
 *     xxxFlashWindow @ 0x1C0005C64 (xxxFlashWindow.c)
 *     ?ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C004590C (-ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 */

__int64 __fastcall NtUserFlashWindowEx(__int128 *a1)
{
  int v2; // edi
  int v3; // eax
  unsigned __int64 *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int128 v13; // [rsp+40h] [rbp-58h]
  __int128 v14; // [rsp+50h] [rbp-48h] BYREF
  __int64 v15; // [rsp+60h] [rbp-38h]
  __int128 v16; // [rsp+70h] [rbp-28h]
  __int128 v17; // [rsp+80h] [rbp-18h]
  struct tagWND *v18; // [rsp+A8h] [rbp+10h] BYREF

  v16 = 0LL;
  v17 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v2 = 0;
  v18 = 0LL;
  EnterCrit(0LL, 0LL);
  if ( a1 + 2 < a1 || (unsigned __int64)(a1 + 2) > MmUserProbeAddress )
    a1 = (__int128 *)MmUserProbeAddress;
  v13 = a1[1];
  v16 = *a1;
  v17 = v13;
  LOBYTE(v3) = ValidateHWNDND(*((HWND *)&v16 + 1), &v18);
  if ( v3 && (_DWORD)v16 == 32 && (v13 & 0xFFFFFFF0) == 0 )
  {
    *(_QWORD *)&v14 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v14;
    v4 = (unsigned __int64 *)v18;
    *((_QWORD *)&v14 + 1) = v18;
    HMLockObject(v18);
    v2 = xxxFlashWindow(v4, (unsigned __int16)v13 | (WORD2(v13) << 16), SDWORD2(v13));
    ThreadUnlock1(v6, v5, v7);
  }
  else
  {
    UserSetLastError(87);
  }
  UserSessionSwitchLeaveCrit(v9, v8, v10, v11);
  return v2;
}
