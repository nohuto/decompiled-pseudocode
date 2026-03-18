/*
 * XREFs of ?xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z @ 0x1400F44E8
 * Callers:
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x14011AEC8 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 * Callees:
 *     PopAndFreeW32ThreadLock @ 0x1400991CC (PopAndFreeW32ThreadLock.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxChangeForegroundKeyboardTable @ 0x1400F3F20 (xxxChangeForegroundKeyboardTable.c)
 *     HMAssignmentLock @ 0x1400F47B0 (HMAssignmentLock.c)
 *     ?GetThreadsWithPKL@@YAIPEAPEAPEAUtagTHREADINFO@@PEAU?$Win32RawOptionalLockedItem@PEAUtagTHREADINFO@@$1?Win32FreePool@@YAXPEAX@Z@@PEAUtagKL@@@Z @ 0x1400F4850 (-GetThreadsWithPKL@@YAIPEAPEAPEAUtagTHREADINFO@@PEAU-$Win32RawOptionalLockedItem@PEAUtagTHREADIN.c)
 *     ApiSetEditionImmActivateAndUnloadThreadsLayout @ 0x1400F4ACC (ApiSetEditionImmActivateAndUnloadThreadsLayout.c)
 */

void __fastcall xxxSetPKLinThreads(struct tagKL *a1, struct tagKL *a2)
{
  unsigned int ThreadsWithPKL; // eax
  __int64 v5; // rcx
  int v6; // r8d
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rax
  _QWORD *v11; // r14
  __int64 v12; // rax
  struct tagTHREADINFO *BugCheckParameter4; // rax
  _QWORD v14[4]; // [rsp+30h] [rbp-40h] BYREF
  ULONG_PTR BugCheckParameter2[2]; // [rsp+50h] [rbp-20h] BYREF
  __int64 v16; // [rsp+60h] [rbp-10h]
  _QWORD *v17; // [rsp+90h] [rbp+20h] BYREF

  v17 = 0LL;
  v14[2] = 0LL;
  *(_OWORD *)BugCheckParameter2 = 0LL;
  v16 = -1LL;
  ThreadsWithPKL = GetThreadsWithPKL(&v17, BugCheckParameter2, a2);
  v7 = ThreadsWithPKL;
  if ( ThreadsWithPKL )
    PtiCurrent(v5);
  if ( a1
    && *(_QWORD *)(W32GetUserSessionState(v5) + 18960)
    && *(struct tagKL **)(*(_QWORD *)(W32GetUserSessionState(v8) + 18960) + 480LL) == a2 )
  {
    xxxChangeForegroundKeyboardTable(a2, a1, 1u);
  }
  if ( (_DWORD)v7 )
  {
    if ( a2 )
    {
      ApiSetEditionImmActivateAndUnloadThreadsLayout((_DWORD)v17, v7, v6, (_DWORD)a1, *((_DWORD *)a2 + 10));
    }
    else
    {
      v11 = v17;
      do
      {
        v12 = *v11 + 480LL;
        v14[1] = a1;
        v14[0] = v12;
        HMAssignmentLock(v14, 0LL);
        ++v11;
        --v7;
      }
      while ( v7 );
    }
    if ( v16 == -1 )
    {
      BugCheckParameter4 = PtiCurrent(v9);
      KeBugCheckEx(0x164u, 0x12uLL, (ULONG_PTR)BugCheckParameter2, 0LL, (ULONG_PTR)BugCheckParameter4);
    }
    PopAndFreeW32ThreadLock((__int64)BugCheckParameter2);
    v10 = -1LL;
    v16 = -1LL;
  }
  else
  {
    v10 = v16;
  }
  if ( a2 && *((struct tagKL **)a2 + 2) != a1 )
  {
    *(_QWORD *)(*((_QWORD *)a1 + 3) + 16LL) = *((_QWORD *)a1 + 2);
    *(_QWORD *)(*((_QWORD *)a1 + 2) + 24LL) = *((_QWORD *)a1 + 3);
    *((_QWORD *)a1 + 2) = *((_QWORD *)a2 + 2);
    *((_QWORD *)a1 + 3) = a2;
    *(_QWORD *)(*((_QWORD *)a2 + 2) + 24LL) = a1;
    v10 = v16;
    *((_QWORD *)a2 + 2) = a1;
  }
  if ( v10 != -1 )
    PopAndFreeW32ThreadLock((__int64)BugCheckParameter2);
}
