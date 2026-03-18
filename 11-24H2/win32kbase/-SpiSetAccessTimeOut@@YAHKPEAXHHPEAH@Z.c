/*
 * XREFs of ?SpiSetAccessTimeOut@@YAHKPEAXHHPEAH@Z @ 0x14019AC10
 * Callers:
 *     xxxSystemParametersInfo @ 0x140173780 (xxxSystemParametersInfo.c)
 * Callees:
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1400A07C0 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?SetAccessEnabledFlag@@YAXXZ @ 0x1400A24D0 (-SetAccessEnabledFlag@@YAXXZ.c)
 *     ?AccessTimeOutReset@@YAXXZ @ 0x1400A2700 (-AccessTimeOutReset@@YAXXZ.c)
 *     ?WriteRegStringValue@@YAHIPEBG0@Z @ 0x1401BE3AC (-WriteRegStringValue@@YAHIPEBG0@Z.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     memset @ 0x14023F500 (memset.c)
 *     memmove @ 0x14023FA40 (memmove.c)
 */

__int64 __fastcall SpiSetAccessTimeOut(int a1, unsigned int *a2, int a3, int a4, int *a5)
{
  __int64 v8; // rcx
  unsigned int *UserSessionState; // rdi
  int v10; // eax
  bool v11; // zf
  __int64 v13; // rcx
  __int64 v14; // rcx
  unsigned __int16 v15[40]; // [rsp+20h] [rbp-78h] BYREF

  if ( a1 && a1 != 12 )
    return 0LL;
  if ( !a2 )
    return 0LL;
  if ( *a2 != 12 )
    return 0LL;
  v8 = a2[1];
  if ( (a2[1] & 3) != (_DWORD)v8 || a2[2] > 0x36EE80 )
    return 0LL;
  UserSessionState = (unsigned int *)W32GetUserSessionState(v8);
  if ( a3 )
  {
    memset(v15, 0, sizeof(v15));
    RtlStringCchPrintfW(v15, 40LL, L"%d", a2[1]);
    *a5 = WriteRegStringValue(0x12u, L"Flags", v15);
    RtlStringCchPrintfW(v15, 40LL, L"%d", a2[2]);
    v10 = WriteRegStringValue(0x12u, L"TimeToWait", v15);
    v11 = (v10 & *a5) == 0;
    *a5 &= v10;
    a4 = *a5;
    if ( v11 )
    {
      RtlStringCchPrintfW(v15, 40LL, L"%d", UserSessionState[5237]);
      WriteRegStringValue(0x12u, L"Flags", v15);
      RtlStringCchPrintfW(v15, 40LL, L"%d", UserSessionState[5238]);
      WriteRegStringValue(0x12u, L"TimeToWait", v15);
      return 0LL;
    }
  }
  if ( !a4 )
    return 0LL;
  memmove(UserSessionState + 5236, a2, *a2);
  UserSessionState[5236] = 12;
  SetAccessEnabledFlag(v13);
  AccessTimeOutReset(v14);
  return 1LL;
}
