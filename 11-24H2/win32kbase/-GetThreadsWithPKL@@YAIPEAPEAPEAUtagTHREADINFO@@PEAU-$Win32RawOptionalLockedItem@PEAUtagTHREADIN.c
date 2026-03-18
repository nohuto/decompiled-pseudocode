/*
 * XREFs of ?GetThreadsWithPKL@@YAIPEAPEAPEAUtagTHREADINFO@@PEAU?$Win32RawOptionalLockedItem@PEAUtagTHREADINFO@@$1?Win32FreePool@@YAXPEAX@Z@@PEAUtagKL@@@Z @ 0x1400F4850
 * Callers:
 *     ?xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z @ 0x1400F44E8 (-xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     UserReAllocPool @ 0x14001B940 (UserReAllocPool.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall GetThreadsWithPKL(char **a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // rdi
  unsigned int v5; // r13d
  __int64 v6; // rcx
  char *v7; // rbx
  __int64 CurrentProcess; // rcx
  __int64 i; // r15
  __int64 j; // rbp
  _QWORD *v11; // rax
  _QWORD *k; // r12
  _QWORD *v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 UserGdiSessionState; // rax
  __int64 ProcessWin32Process; // rax
  __int64 v19; // rcx
  __int64 v20; // rsi
  __int64 m; // rsi
  struct tagTHREADINFO *v22; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  struct tagTHREADINFO *BugCheckParameter4; // rax

  v4 = 0LL;
  v5 = 128;
  v7 = (char *)Win32AllocPoolZInitImpl(256LL, 0x400uLL, 0x69747355u);
  if ( !v7 )
    return 0LL;
  for ( i = *(_QWORD *)(W32GetUserSessionState(v6) + 63560); i; i = *(_QWORD *)(i + 8) )
  {
    for ( j = *(_QWORD *)(i + 16); j; j = *(_QWORD *)(j + 32) )
    {
      v11 = (_QWORD *)(j + 176);
      for ( k = *(_QWORD **)(j + 176); k != v11; k = (_QWORD *)*k )
      {
        v13 = k - 97;
        if ( k != (_QWORD *)776 )
        {
          if ( !a3 || a3 == v13[60] )
          {
            CurrentProcess = *(_QWORD *)(W32GetUserGdiSessionState(CurrentProcess) + 40);
            if ( *(_QWORD *)v13[58] == CurrentProcess
              || (CurrentProcess = PsGetCurrentProcess(CurrentProcess, v14, v15, v16),
                  *(_QWORD *)v13[58] == CurrentProcess) )
            {
              if ( (_DWORD)v4 == v5 )
              {
                v5 += 128;
                v25 = UserReAllocPool(v7, 8LL * (unsigned int)v4, 8LL * v5, 0x69747355u);
                if ( !v25 )
                  goto LABEL_34;
                v7 = (char *)v25;
              }
              *(_QWORD *)&v7[8 * v4] = v13;
              v4 = (unsigned int)(v4 + 1);
            }
          }
          v11 = (_QWORD *)(j + 176);
        }
      }
    }
  }
  UserGdiSessionState = W32GetUserGdiSessionState(CurrentProcess);
  ProcessWin32Process = PsGetProcessWin32Process(*(_QWORD *)(UserGdiSessionState + 40));
  v20 = ProcessWin32Process;
  if ( ProcessWin32Process )
  {
    v19 = -(__int64)(*(_QWORD *)ProcessWin32Process != 0LL);
    v20 = v19 & ProcessWin32Process;
  }
  for ( m = *(_QWORD *)(v20 + 328); m; m = *(_QWORD *)(m + 704) )
  {
    if ( !a3 || a3 == *(_QWORD *)(m + 480) )
    {
      if ( (_DWORD)v4 == v5 )
      {
        v5 += 128;
        v24 = UserReAllocPool(v7, 8LL * (unsigned int)v4, 8LL * v5, 0x69747355u);
        if ( !v24 )
        {
LABEL_34:
          GreDeleteFastMutex(v7);
          return 0LL;
        }
        v7 = (char *)v24;
      }
      *(_QWORD *)&v7[8 * v4] = m;
      v4 = (unsigned int)(v4 + 1);
    }
  }
  if ( (_DWORD)v4 && a1 )
  {
    *a1 = v7;
    if ( a2[2] != -1LL )
    {
      BugCheckParameter4 = PtiCurrent(v19);
      KeBugCheckEx(0x164u, 0x12uLL, (ULONG_PTR)a2, (ULONG_PTR)v7, (ULONG_PTR)BugCheckParameter4);
    }
    v22 = PtiCurrent(v19);
    *a2 = *((_QWORD *)v22 + 48);
    *((_QWORD *)v22 + 48) = a2;
    a2[2] = GreDeleteFastMutex;
    a2[1] = v7;
  }
  else
  {
    GreDeleteFastMutex(v7);
  }
  return (unsigned int)v4;
}
