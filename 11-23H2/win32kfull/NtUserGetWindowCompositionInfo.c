/*
 * XREFs of NtUserGetWindowCompositionInfo @ 0x1C0090CE0
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetWindowCompositionInfo@@YAHPEBUtagWND@@PEAUWINDOWCOMPOSITIONINFO@@@Z @ 0x1C00EC894 (-_GetWindowCompositionInfo@@YAHPEBUtagWND@@PEAUWINDOWCOMPOSITIONINFO@@@Z.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0140D40 (memset_0.c)
 */

__int64 __fastcall NtUserGetWindowCompositionInfo(__int64 a1, ULONG64 a2, __int64 a3)
{
  __int64 v5; // rbx
  __int64 v6; // rax
  _BYTE *v7; // rdx
  NTSTATUS v8; // edi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  const struct tagWND *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  bool v17; // sf
  ULONG v19; // eax
  _OWORD v20[4]; // [rsp+70h] [rbp-68h] BYREF

  v5 = 0LL;
  if ( PsGetCurrentProcessWow64Process(a1, a2, a3) )
    v6 = 0LL;
  else
    v6 = 3LL;
  if ( (v6 & a2) != 0 )
    ExRaiseDatatypeMisalignment();
  v7 = (_BYTE *)a2;
  if ( a2 >= MmUserProbeAddress )
    v7 = (_BYTE *)MmUserProbeAddress;
  *v7 = *v7;
  v7[63] = v7[63];
  v8 = 0;
  memset_0(v20, 0, sizeof(v20));
  EnterSharedCrit(v10, v9, v11);
  v12 = (const struct tagWND *)ValidateHwnd(a1);
  if ( v12 && (unsigned int)_GetWindowCompositionInfo(v12, (struct WINDOWCOMPOSITIONINFO *)v20) )
  {
    *(_OWORD *)a2 = v20[0];
    *(_OWORD *)(a2 + 16) = v20[1];
    *(_OWORD *)(a2 + 32) = v20[2];
    *(_OWORD *)(a2 + 48) = v20[3];
  }
  else
  {
    v8 = -1073741816;
  }
  UserSessionSwitchLeaveCrit(v14, v13, v15, v16);
  v17 = v8 < 0;
  if ( v8 < 0 )
  {
    v19 = RtlNtStatusToDosError(v8);
    UserSetLastError(v19);
    v17 = v8 < 0;
  }
  LOBYTE(v5) = !v17;
  return v5;
}
