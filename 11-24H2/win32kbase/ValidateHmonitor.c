/*
 * XREFs of ValidateHmonitor @ 0x140041D20
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 */

__int64 __fastcall ValidateHmonitor(__int64 a1)
{
  __int16 v1; // edi^2
  int v2; // esi
  __int64 v3; // rcx
  __int64 UserSessionState; // rbx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // r14
  __int16 v10; // di
  __int64 v11; // rsi
  __int64 result; // rax

  v1 = WORD1(a1);
  v2 = (unsigned __int16)a1;
  if ( (unsigned __int64)(unsigned __int16)a1 >= *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(a1) + 19928) + 8LL) )
    goto LABEL_9;
  UserSessionState = W32GetUserSessionState(v3);
  v6 = (unsigned int)(*(_DWORD *)(W32GetUserSessionState(v5) + 19952) * v2);
  v7 = v6 + *(_QWORD *)(UserSessionState + 19944);
  v8 = W32GetUserSessionState(v6);
  v9 = *(_QWORD *)(v8 + 19888);
  v10 = v1 & 0x7FFF;
  v11 = 5LL * (unsigned int)((v7 - *(_QWORD *)(v8 + 19944)) >> 5);
  if ( (v1 & 0x7FFF) != *(_WORD *)(v7 + 26) && v10 != 0x7FFF && (v10 || !PsGetCurrentProcessWow64Process()) )
    goto LABEL_9;
  if ( (*(_BYTE *)(v7 + 25) & 1) != 0 || *(_BYTE *)(v7 + 24) != 12 || (result = *(_QWORD *)(v9 + 8 * v11)) == 0 )
  {
LABEL_9:
    UserSetLastError(1461LL);
    return 0LL;
  }
  return result;
}
