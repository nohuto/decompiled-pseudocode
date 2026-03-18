/*
 * XREFs of NtUserGetMouseMovePointsEx @ 0x1C01D2040
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EB194 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     _GetMouseMovePointsEx @ 0x1C01AC10C (_GetMouseMovePointsEx.c)
 */

__int64 __fastcall NtUserGetMouseMovePointsEx(__int64 a1, ULONG64 a2, volatile void *a3, unsigned int a4, int a5)
{
  __int64 v5; // rsi
  ULONG64 v7; // rdi
  int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  struct tagTHREADINFO *v13; // rax
  __int64 v14; // r8
  int v15; // ecx
  ULONG64 v16; // rcx
  __int64 CurrentProcessWow64Process; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned int MouseMovePoints; // ebx
  __int64 v21; // r8
  __int64 v22; // r9
  __int128 v24; // [rsp+38h] [rbp-40h] BYREF
  __int64 v25; // [rsp+48h] [rbp-30h]
  __int128 v26; // [rsp+50h] [rbp-28h]
  __int64 v27; // [rsp+60h] [rbp-18h]

  v5 = a4;
  v7 = a2;
  v8 = a1;
  v24 = 0LL;
  v25 = 0LL;
  EnterSharedCrit(a1, a2, a3);
  v13 = PtiCurrentShared(v10, v9, v11, v12);
  if ( v8 != 24 || (unsigned int)v5 > 0x40 )
  {
    v15 = 87;
    goto LABEL_10;
  }
  if ( *((_QWORD *)v13 + 57) != grpdeskRitInput )
  {
    v15 = 5;
LABEL_10:
    UserSetLastError(v15);
    MouseMovePoints = -1;
    goto LABEL_11;
  }
  v16 = v7 + 24;
  if ( v7 + 24 < v7 || v16 > MmUserProbeAddress )
    v7 = MmUserProbeAddress;
  v26 = *(_OWORD *)v7;
  v27 = *(_QWORD *)(v7 + 16);
  v24 = v26;
  v25 = v27;
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v16, grpdeskRitInput, v14);
  ProbeForWrite(a3, 24 * v5, CurrentProcessWow64Process != 0 ? 1 : 4);
  MouseMovePoints = GetMouseMovePointsEx((__int16 *)&v24, (__int64)a3, v5, a5);
LABEL_11:
  UserSessionSwitchLeaveCrit(v19, v18, v21, v22);
  return MouseMovePoints;
}
