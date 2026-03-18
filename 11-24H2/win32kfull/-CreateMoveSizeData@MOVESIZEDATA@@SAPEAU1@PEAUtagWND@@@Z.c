/*
 * XREFs of ?CreateMoveSizeData@MOVESIZEDATA@@SAPEAU1@PEAUtagWND@@@Z @ 0x140255F20
 * Callers:
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x14024AF80 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 *     ?xxxMoveSizeWithoutCapture@MoveSizeApi@@YAXPEAUtagWND@@UtagPOINT@@1W4_MOVESIZE_OPERATION@@@Z @ 0x1402A905C (-xxxMoveSizeWithoutCapture@MoveSizeApi@@YAXPEAUtagWND@@UtagPOINT@@1W4_MOVESIZE_OPERATION@@@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

struct MOVESIZEDATA *__fastcall MOVESIZEDATA::CreateMoveSizeData(struct tagWND *a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  _QWORD v11[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( (_InterlockedCompareExchange((volatile signed __int32 *)PtiCurrent((__int64)a1, a2) + 132, 0, 0) & 1) != 0 )
    return 0LL;
  v6 = Win32AllocPoolWithQuotaZInit(416LL, 1936552789LL);
  if ( v6 )
  {
    v11[1] = a1;
    v11[0] = v6 + 16;
    *((_QWORD *)PtiCurrent(v5, v4) + 89) = v6;
    HMAssignmentLock(v11, 0LL);
    *(_DWORD *)(v6 + 200) |= 0x8000u;
    v9 = W32GetUserSessionState(v8, v7) + 63432;
    v10 = *(_QWORD *)v9;
    if ( *(_QWORD *)(*(_QWORD *)v9 + 8LL) != v9 )
      __fastfail(3u);
    *(_QWORD *)v6 = v10;
    *(_QWORD *)(v6 + 8) = v9;
    *(_QWORD *)(v10 + 8) = v6;
    *(_QWORD *)v9 = v6;
  }
  return (struct MOVESIZEDATA *)v6;
}
