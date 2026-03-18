/*
 * XREFs of ?SpiSetToggleKeys@@YAHKPEAXHHPEAH@Z @ 0x14015C3B4
 * Callers:
 *     xxxSystemParametersInfo @ 0x140173780 (xxxSystemParametersInfo.c)
 * Callees:
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1400A07C0 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?SetAccessEnabledFlag@@YAXXZ @ 0x1400A24D0 (-SetAccessEnabledFlag@@YAXXZ.c)
 *     ApiSetEditionCallAccessibilityHook @ 0x1400A2624 (ApiSetEditionCallAccessibilityHook.c)
 *     ApiSetEditionPostShellHookMessages @ 0x1400A2694 (ApiSetEditionPostShellHookMessages.c)
 *     ?WriteRegStringValue@@YAHIPEBG0@Z @ 0x1401BE3AC (-WriteRegStringValue@@YAHIPEBG0@Z.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     memset @ 0x14023F500 (memset.c)
 *     memmove @ 0x14023FA40 (memmove.c)
 */

__int64 __fastcall SpiSetToggleKeys(int a1, unsigned int *a2, int a3, int a4, int *a5)
{
  __int64 v9; // rcx
  __int64 UserSessionState; // rsi
  __int64 v11; // rcx
  int v12; // ecx
  unsigned int v13; // r9d
  size_t v14; // r8
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v19; // [rsp+20h] [rbp-88h] BYREF
  unsigned __int16 v20[40]; // [rsp+30h] [rbp-78h] BYREF

  memset(v20, 0, sizeof(v20));
  UserSessionState = W32GetUserSessionState(v9);
  if ( (a1 & 0xFFFFFFF7) != 0 )
    return 0LL;
  if ( !a2 )
    return 0LL;
  if ( *a2 != 8 )
    return 0LL;
  v11 = a2[1];
  if ( (a2[1] & 0x3F) != (_DWORD)v11 )
    return 0LL;
  v12 = *(_DWORD *)(W32GetUserSessionState(v11) + 20972);
  v13 = a2[1] | 2;
  if ( (v12 & 2) == 0 )
    v13 = a2[1] & 0xFFFFFFFD;
  a2[1] = v13;
  if ( a3 )
  {
    RtlStringCchPrintfW(v20, 40LL, L"%d");
    a4 = WriteRegStringValue(0x11u, L"Flags", v20);
    *a5 = a4;
  }
  if ( !a4 )
    return 0LL;
  v14 = *a2;
  v19 = *(_QWORD *)(UserSessionState + 20968);
  memmove((void *)(UserSessionState + 20968), a2, v14);
  *(_DWORD *)(UserSessionState + 20968) = 8;
  SetAccessEnabledFlag(v15);
  ApiSetEditionCallAccessibilityHook(4LL, v16);
  ApiSetEditionPostShellHookMessages(v17, 4LL, (__int64)&v19, UserSessionState + 20968);
  return 1LL;
}
