/*
 * XREFs of ?ForegroundInputOwnerMatch@@YAHPEBUtagTHREADINFO@@H@Z @ 0x1401D4B30
 * Callers:
 *     ?InForegroundQueue@@YAHPEBUtagTHREADINFO@@H@Z @ 0x1400945E8 (-InForegroundQueue@@YAHPEBUtagTHREADINFO@@H@Z.c)
 *     NtUserOpenClipboard @ 0x140104A10 (NtUserOpenClipboard.c)
 *     NtUserSetClipboardData @ 0x1402459F0 (NtUserSetClipboardData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ForegroundInputOwnerMatch(const struct tagTHREADINFO *a1, __int64 a2)
{
  int v2; // r14d
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int v6; // ebx
  __int64 v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // rdi
  int v12; // edi

  v2 = a2;
  v6 = 0;
  if ( *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(a1, a2) + 18944) + 104LL) )
    v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v5, v4) + 18944) + 104LL) + 464LL);
  else
    v7 = 0LL;
  v9 = *(_QWORD *)(W32GetUserSessionState(v5, v4) + 18944);
  if ( *(_QWORD *)(v9 + 96) )
  {
    v9 = *(_QWORD *)(W32GetUserSessionState(v9, v8) + 18944);
    v10 = *(_QWORD *)(*(_QWORD *)(v9 + 96) + 464LL);
  }
  else
  {
    v10 = 0LL;
  }
  v11 = *((_QWORD *)a1 + 58);
  if ( v7 == v11 || v10 == v11 )
    return 1LL;
  v12 = *(_DWORD *)(v11 + 876);
  if ( v2 && v12 )
  {
    if ( *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v9, v8) + 18944) + 476LL) != v12
      && (!v7 || *(_DWORD *)(v7 + 876) != v12) )
    {
      if ( v10 )
      {
        LOBYTE(v6) = *(_DWORD *)(v10 + 876) == v12;
        return v6;
      }
      return 0LL;
    }
    return 1LL;
  }
  return 0LL;
}
