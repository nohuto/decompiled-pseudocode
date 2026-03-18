/*
 * XREFs of ?ModifyTokenPrivileges@@YAJXZ @ 0x1400034E8
 * Callers:
 *     wWinMain @ 0x140002790 (wWinMain.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1400030AC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x140004EE0 (__security_check_cookie.c)
 */

__int64 ModifyTokenPrivileges(void)
{
  signed int v0; // ebx
  HANDLE CurrentProcess; // rax
  signed int v2; // eax
  signed int LastError; // eax
  void *TokenHandle; // [rsp+38h] [rbp-48h] BYREF
  _TOKEN_PRIVILEGES NewState; // [rsp+40h] [rbp-40h] BYREF
  _OWORD v7[2]; // [rsp+50h] [rbp-30h] BYREF
  int v8; // [rsp+70h] [rbp-10h]

  v0 = 0;
  v8 = 0;
  TokenHandle = 0LL;
  NewState = 0LL;
  memset(v7, 0, sizeof(v7));
  SetLastError(0);
  CurrentProcess = GetCurrentProcess();
  if ( OpenProcessToken(CurrentProcess, 0x20u, &TokenHandle) )
  {
    NewState.Privileges[0].Luid = (LUID)30LL;
    *(_QWORD *)&v7[0] = 23LL;
    *(_QWORD *)((char *)v7 + 12) = 33LL;
    NewState.Privileges[0].Attributes = 2;
    DWORD2(v7[0]) = 2;
    DWORD1(v7[1]) = 2;
    v8 = 2;
    *((_QWORD *)&v7[1] + 1) = 14LL;
    NewState.PrivilegeCount = 4;
    SetLastError(0);
    if ( !AdjustTokenPrivileges(TokenHandle, 0, &NewState, 0x34u, 0LL, 0LL) )
    {
      LastError = GetLastError();
      v0 = LastError;
      if ( LastError > 0 )
        v0 = (unsigned __int16)LastError | 0x80070000;
      if ( v0 >= 0 )
        v0 = -2003304445;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v0, 0x4Du, 0LL);
    }
  }
  else
  {
    v2 = GetLastError();
    v0 = v2;
    if ( v2 > 0 )
      v0 = (unsigned __int16)v2 | 0x80070000;
    if ( v0 >= 0 )
      v0 = -2003304445;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v0, 0x3Cu, 0LL);
  }
  if ( TokenHandle )
    CloseHandle(TokenHandle);
  return (unsigned int)v0;
}
