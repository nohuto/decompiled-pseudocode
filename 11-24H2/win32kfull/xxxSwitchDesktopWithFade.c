/*
 * XREFs of xxxSwitchDesktopWithFade @ 0x1401F6760
 * Callers:
 *     NtUserSwitchDesktop @ 0x140247830 (NtUserSwitchDesktop.c)
 * Callees:
 *     PopAndFreeW32ThreadLock @ 0x14003E6B0 (PopAndFreeW32ThreadLock.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x140065000 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     xxxSwitchDesktop @ 0x1401F69E4 (xxxSwitchDesktop.c)
 *     PrepareGammaRampData @ 0x1401FEBF0 (PrepareGammaRampData.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x14026E498 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     FadeDesktop @ 0x140286060 (FadeDesktop.c)
 */

__int64 __fastcall xxxSwitchDesktopWithFade(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, int a5)
{
  ULONG_PTR v5; // rdi
  unsigned int v6; // r12d
  int v9; // r13d
  BOOL v10; // esi
  HANDLE v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // ebx
  int v17; // esi
  unsigned int v18; // r14d
  __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned int v21; // ebx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  struct tagTHREADINFO *BugCheckParameter4; // rax
  struct tagTHREADINFO *v28; // rax
  int v29; // [rsp+30h] [rbp-40h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+38h] [rbp-38h] BYREF
  ULONG_PTR BugCheckParameter2[2]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v32; // [rsp+50h] [rbp-20h]
  __int64 v33; // [rsp+68h] [rbp-8h]
  unsigned int v35; // [rsp+C0h] [rbp+50h] BYREF

  v5 = 0LL;
  v6 = 0;
  v29 = 0;
  v35 = 0;
  BugCheckParameter3 = 0LL;
  v9 = 0;
  v10 = 1;
  v11 = *(HANDLE *)(W32GetUserSessionState(a1, a2) + 63584);
  if ( PsGetCurrentProcessId() != v11 )
    return 3221225506LL;
  if ( a2 == *(_QWORD *)(W32GetUserSessionState(v13, v12) + 19200) )
    return 0LL;
  v16 = a5;
  if ( a2 )
  {
    if ( *(_QWORD *)(W32GetUserSessionState(v15, v14) + 19200) )
    {
      v15 = **(_QWORD **)(a2 + 8);
      if ( (*(_DWORD *)(v15 + 64) & 1) != 0 )
      {
        v15 = **(_QWORD **)(*(_QWORD *)(W32GetUserSessionState(v15, v14) + 19200) + 8LL);
        if ( (*(_DWORD *)(v15 + 64) & 1) != 0 )
          v10 = v16 == 0;
      }
    }
  }
  v33 = 0LL;
  *(_OWORD *)BugCheckParameter2 = 0LL;
  v32 = -1LL;
  if ( !v10 )
    goto LABEL_9;
  if ( !*(_DWORD *)(W32GetUserSessionState(v15, v14) + 43016) )
  {
    v9 = 1;
    *(_DWORD *)(W32GetUserSessionState(v24, v23) + 43016) = 1;
    if ( (int)PrepareGammaRampData(&v35, &BugCheckParameter3, &v29) < 0 )
    {
      v5 = BugCheckParameter3;
    }
    else
    {
      if ( v32 != -1 )
      {
        BugCheckParameter4 = PtiCurrent(v26, v25);
        KeBugCheckEx(0x164u, 0x12uLL, (ULONG_PTR)BugCheckParameter2, BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
      }
      v28 = PtiCurrent(v26, v25);
      v5 = BugCheckParameter3;
      BugCheckParameter2[0] = *((_QWORD *)v28 + 48);
      *((_QWORD *)v28 + 48) = BugCheckParameter2;
      v32 = (__int64)RestoreGammaRamp;
      BugCheckParameter2[1] = v5;
    }
    v6 = v35;
  }
  if ( v29 )
  {
    v18 = a4 >> 1;
    LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v35, 1);
    FadeDesktop(v6, v5, v18, 0LL);
    LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v35);
    v17 = 1;
  }
  else
  {
LABEL_9:
    v17 = 0;
    v18 = a4 >> 1;
  }
  v21 = xxxSwitchDesktop(a1, a2, 0LL);
  if ( v17 )
  {
    LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v35, 1);
    FadeDesktop(v6, v5, v18, 1LL);
    LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v35);
  }
  if ( v9 )
    *(_DWORD *)(W32GetUserSessionState(v20, v19) + 43016) = 0;
  if ( v32 != -1 )
    PopAndFreeW32ThreadLock((__int64)BugCheckParameter2, v19);
  return v21;
}
