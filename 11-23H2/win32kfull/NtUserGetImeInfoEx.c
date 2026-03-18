/*
 * XREFs of NtUserGetImeInfoEx @ 0x1C007ACC0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetImeInfoEx@@YAHPEAUtagWINDOWSTATION@@PEAUtagIMEINFOEX@@W4_IMEINFOEXCLASS@@@Z @ 0x1C007AED8 (-GetImeInfoEx@@YAHPEAUtagWINDOWSTATION@@PEAUtagIMEINFOEX@@W4_IMEINFOEXCLASS@@@Z.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0140D40 (memset_0.c)
 */

__int64 __fastcall NtUserGetImeInfoEx(_OWORD *a1, unsigned int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  _BYTE *v7; // rdx
  _OWORD *v8; // rax
  _OWORD *v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v13; // rdx
  __int64 v14; // rdx
  int ImeInfo; // edi
  __int64 v16; // r8
  __int64 v17; // r9
  _OWORD *v18; // rcx
  _BYTE v20[352]; // [rsp+40h] [rbp-188h] BYREF

  memset_0(v20, 0, sizeof(v20));
  EnterSharedCrit(v5, v4, v6);
  if ( (*gpsi & 4) != 0 )
  {
    v7 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v7 = (_BYTE *)MmUserProbeAddress;
    *v7 = *v7;
    v7[351] = v7[351];
    v8 = a1;
    v9 = v20;
    v10 = 2LL;
    v11 = 2LL;
    do
    {
      *v9 = *v8;
      v9[1] = v8[1];
      v9[2] = v8[2];
      v9[3] = v8[3];
      v9[4] = v8[4];
      v9[5] = v8[5];
      v9[6] = v8[6];
      v9 += 8;
      *(v9 - 1) = v8[7];
      v8 += 8;
      --v11;
    }
    while ( v11 );
    *v9 = *v8;
    v9[1] = v8[1];
    v9[2] = v8[2];
    v9[3] = v8[3];
    v9[4] = v8[4];
    v9[5] = v8[5];
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v9);
    v13 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
      v13 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
    ImeInfo = GetImeInfoEx(*(_QWORD *)(v13 + 664), v20, a2);
    v18 = v20;
    do
    {
      *a1 = *v18;
      a1[1] = v18[1];
      a1[2] = v18[2];
      a1[3] = v18[3];
      a1[4] = v18[4];
      a1[5] = v18[5];
      a1[6] = v18[6];
      a1 += 8;
      *(a1 - 1) = v18[7];
      v18 += 8;
      --v10;
    }
    while ( v10 );
    *a1 = *v18;
    a1[1] = v18[1];
    a1[2] = v18[2];
    a1[3] = v18[3];
    a1[4] = v18[4];
    a1[5] = v18[5];
  }
  else
  {
    UserSetLastError(120LL);
    ImeInfo = 0;
  }
  UserSessionSwitchLeaveCrit(v18, v14, v16, v17);
  return ImeInfo;
}
