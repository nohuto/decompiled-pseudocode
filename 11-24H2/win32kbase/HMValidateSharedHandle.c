/*
 * XREFs of HMValidateSharedHandle @ 0x140042DB0
 * Callers:
 *     NtUserGetUniformSpaceMapping @ 0x14000B3C0 (NtUserGetUniformSpaceMapping.c)
 *     DrvGetCurrentDpiInfo @ 0x140010BFC (DrvGetCurrentDpiInfo.c)
 *     NtUserGetDpiForMonitor @ 0x140010FF0 (NtUserGetDpiForMonitor.c)
 *     xxxCreateThreadInfo @ 0x14015DFD8 (xxxCreateThreadInfo.c)
 *     NtUserCreateSyntheticPointerDevice2 @ 0x1401B9930 (NtUserCreateSyntheticPointerDevice2.c)
 *     NtUserInitializeInputDeviceInjection @ 0x1401BB2D0 (NtUserInitializeInputDeviceInjection.c)
 * Callees:
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 */

__int64 __fastcall HMValidateSharedHandle(__int64 a1)
{
  __int16 v1; // edi^2
  int v2; // esi
  __int64 v3; // rcx
  __int64 UserSessionState; // rbx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 *v9; // rsi
  __int16 v10; // di
  __int64 result; // rax

  v1 = WORD1(a1);
  v2 = (unsigned __int16)a1;
  if ( (unsigned __int64)(unsigned __int16)a1 >= *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(a1) + 19928) + 8LL)
    || (UserSessionState = W32GetUserSessionState(v3),
        v6 = (unsigned int)(*(_DWORD *)(W32GetUserSessionState(v5) + 19952) * v2),
        v7 = v6 + *(_QWORD *)(UserSessionState + 19944),
        v8 = W32GetUserSessionState(v6),
        v9 = (__int64 *)(*(_QWORD *)(v8 + 19888) + 40LL * (unsigned int)((v7 - *(_QWORD *)(v8 + 19944)) >> 5)),
        v10 = v1 & 0x7FFF,
        (v1 & 0x7FFF) != *(_WORD *)(v7 + 26))
    && v10 != 0x7FFF
    && (v10 || !PsGetCurrentProcessWow64Process())
    || (*(_BYTE *)(v7 + 25) & 1) != 0
    || *(_BYTE *)(v7 + 24) != 12
    || (result = *v9) == 0 )
  {
    UserSetLastError(1461LL);
    return 0LL;
  }
  return result;
}
