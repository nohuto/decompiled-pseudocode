/*
 * XREFs of ?GetPrimaryTouchEnabledMonitorIfAny@VirtualTouchpadUriHandler@@CAJPEAPEAUHMONITOR__@@@Z @ 0x180459148
 * Callers:
 *     ?Execute@VirtualTouchpadUriHandler@@UEAAJXZ @ 0x180458AB0 (-Execute@VirtualTouchpadUriHandler@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x180033234 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802916C8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 */

__int64 __fastcall VirtualTouchpadUriHandler::GetPrimaryTouchEnabledMonitorIfAny(HMONITOR *a1)
{
  unsigned int Error; // ebx
  SIZE_T v3; // rdi
  char *v4; // rax
  char *v5; // rbx
  char *v6; // rsi
  char *i; // rdi
  const char *v8; // r9
  unsigned int LastError; // edi
  unsigned int j; // ecx
  __int64 v11; // rax
  __int64 v13; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v15; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  Error = 0;
  v15 = 0;
  if ( !(unsigned int)GetPointerDevices(&v15, 0LL)
    && (Error = ResultFromKnownLastError(), (int)(Error + 0x80000000) >= 0)
    && Error != -2147024774
    || !v15 )
  {
    if ( (Error & 0x80000000) == 0 )
      return Error;
    v13 = 67LL;
LABEL_20:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (int)"pcshell\\twinui\\virtualtouchpadurihandler\\lib\\virtualtouchpadurihandler.cpp",
      (const char *)Error);
    return Error;
  }
  v3 = 1080LL * v15;
  v4 = (char *)LocalAlloc(0, v3);
  v5 = v4;
  if ( !v4 )
  {
    Error = -2147024882;
    v13 = 70LL;
    goto LABEL_20;
  }
  v6 = &v4[v3];
  for ( i = v4; i != v6; i += 1080 )
    memset_0(i, 0, 0x438uLL);
  if ( (unsigned int)GetPointerDevices(&v15, v5) )
  {
    for ( j = 0; j < v15; ++j )
    {
      v11 = 1080LL * j;
      if ( *(_DWORD *)&v5[v11 + 16] == 3 )
      {
        LastError = 0;
        *a1 = *(HMONITOR *)&v5[v11 + 24];
        goto LABEL_15;
      }
    }
    LocalFree(v5);
    return 0LL;
  }
  else
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x48,
                  (unsigned int)"pcshell\\twinui\\virtualtouchpadurihandler\\lib\\virtualtouchpadurihandler.cpp",
                  v8);
LABEL_15:
    LocalFree(v5);
    return LastError;
  }
}
