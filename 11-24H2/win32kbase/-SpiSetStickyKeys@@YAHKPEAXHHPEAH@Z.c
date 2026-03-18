/*
 * XREFs of ?SpiSetStickyKeys@@YAHKPEAXHHPEAH@Z @ 0x1400A22EC
 * Callers:
 *     xxxSystemParametersInfo @ 0x140173780 (xxxSystemParametersInfo.c)
 * Callees:
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1400A07C0 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?SetAccessEnabledFlag@@YAXXZ @ 0x1400A24D0 (-SetAccessEnabledFlag@@YAXXZ.c)
 *     ApiSetEditionCallAccessibilityHook @ 0x1400A2624 (ApiSetEditionCallAccessibilityHook.c)
 *     ApiSetEditionPostShellHookMessages @ 0x1400A2694 (ApiSetEditionPostShellHookMessages.c)
 *     ?xxxTurnOffStickyKeys@@YAXXZ @ 0x14019F990 (-xxxTurnOffStickyKeys@@YAXXZ.c)
 *     ?WriteRegStringValue@@YAHIPEBG0@Z @ 0x1401BE3AC (-WriteRegStringValue@@YAHIPEBG0@Z.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     memset @ 0x14023F500 (memset.c)
 *     memmove @ 0x14023FA40 (memmove.c)
 */

__int64 __fastcall SpiSetStickyKeys(int a1, _WORD *a2, int a3, int a4, int *a5)
{
  __int64 v9; // rcx
  __int64 UserSessionState; // rsi
  __int64 v11; // rcx
  int v12; // r14d
  __int64 v13; // rcx
  int v14; // ecx
  unsigned int v15; // r9d
  size_t v16; // r8
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v20; // [rsp+20h] [rbp-98h] BYREF
  unsigned __int16 v21[40]; // [rsp+30h] [rbp-88h] BYREF

  memset(v21, 0, sizeof(v21));
  UserSessionState = W32GetUserSessionState(v9);
  v12 = *(_DWORD *)(W32GetUserSessionState(v11) + 20628) & 1;
  if ( (a1 & 0xFFFFFFF7) != 0 )
    return 0LL;
  if ( !a2 )
    return 0LL;
  if ( *(_DWORD *)a2 != 8 )
    return 0LL;
  a2[3] = 0;
  v13 = *((unsigned int *)a2 + 1);
  if ( (*((_DWORD *)a2 + 1) & 0x1FF) != (_DWORD)v13 )
    return 0LL;
  v14 = *(_DWORD *)(W32GetUserSessionState(v13) + 20628);
  v15 = *((_DWORD *)a2 + 1) | 2;
  if ( (v14 & 2) == 0 )
    v15 = *((_DWORD *)a2 + 1) & 0xFFFFFFFD;
  *((_DWORD *)a2 + 1) = v15;
  if ( a3 )
  {
    RtlStringCchPrintfW(v21, 40LL, L"%d");
    a4 = WriteRegStringValue(0xEu, L"Flags", v21);
    *a5 = a4;
  }
  if ( !a4 )
    return 0LL;
  v16 = *(unsigned int *)a2;
  v20 = *(_QWORD *)(UserSessionState + 20624);
  memmove((void *)(UserSessionState + 20624), a2, v16);
  *(_DWORD *)(UserSessionState + 20624) = 8;
  if ( (*(_DWORD *)(W32GetUserSessionState(v17) + 20628) & 1) == 0 )
  {
    if ( v12 )
      xxxTurnOffStickyKeys();
  }
  SetAccessEnabledFlag();
  ApiSetEditionCallAccessibilityHook(1LL);
  ((void (__fastcall *)(__int64, __int64, __int64 *, __int64))ApiSetEditionPostShellHookMessages)(
    v18,
    1LL,
    &v20,
    UserSessionState + 20624);
  return 1LL;
}
