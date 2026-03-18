/*
 * XREFs of xxxDW_DestroyOwnedWindows @ 0x14015ED20
 * Callers:
 *     xxxDestroyWindow @ 0x14015EF90 (xxxDestroyWindow.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140061734 (--$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140076C10 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     DwmAsyncOwnerChange @ 0x14009188C (DwmAsyncOwnerChange.c)
 *     xxxDestroyWindow @ 0x14015EF90 (xxxDestroyWindow.c)
 */

__int64 __fastcall xxxDW_DestroyOwnedWindows(__int64 a1, __int64 a2)
{
  __int64 *v3; // r14
  __int64 result; // rax
  __int64 v5; // rsi
  struct tagTHREADINFO *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 *i; // rbx
  struct tagTHREADINFO *v10; // rax
  __int64 v11; // rbx
  void *v12; // rax
  ULONG_PTR BugCheckParameter3[5]; // [rsp+20h] [rbp-28h] BYREF

  v3 = *(__int64 **)(*(_QWORD *)(a1 + 16) + 824LL);
  result = *(_QWORD *)(a1 + 24);
  if ( result )
  {
    result = *(_QWORD *)(result + 8);
    v5 = *(_QWORD *)(result + 24);
    if ( v5 )
    {
      v6 = PtiCurrent(a1, a2);
      Win32HM_LockIntoThread<0>((__int64)v6, v5, BugCheckParameter3);
LABEL_4:
      for ( i = *(__int64 **)(v5 + 112); i; i = (__int64 *)i[11] )
      {
        if ( i[15] == a1 )
        {
          if ( (**(_DWORD **)(W32GetUserSessionState(v8, v7) + 19928) & 4) == 0
            || (_InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(a1 + 16) + 528LL), 0, 0) & 1) != 0
            || i != v3 )
          {
            if ( (*(_WORD *)(i[5] + 42) & 0x2FFF) == 0x2AA || !(unsigned int)xxxDestroyWindow((struct tagWND *)i) )
            {
              *(_QWORD *)(i[5] + 64) = 0LL;
              HMAssignmentUnlock(i + 15);
              if ( (unsigned int)IsWindowDesktopComposed(i) )
              {
                v11 = *i;
                v12 = (void *)ReferenceDwmApiPort(v8, v7);
                DwmAsyncOwnerChange(v12, v11, 0LL);
              }
            }
            goto LABEL_4;
          }
          *(_QWORD *)(i[5] + 64) = 0LL;
          HMAssignmentUnlock(i + 15);
        }
      }
      v10 = PtiCurrent(v8, v7);
      return Win32HM_UnlockFromThread<0>((ULONG_PTR)v10, BugCheckParameter3);
    }
  }
  return result;
}
