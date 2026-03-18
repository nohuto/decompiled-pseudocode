/*
 * XREFs of NtUserDelegateInput @ 0x140156260
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     ?AreMultipleThreadsAttached@tagQ@@QEBA_NXZ @ 0x1401565AC (-AreMultipleThreadsAttached@tagQ@@QEBA_NXZ.c)
 *     ?ValidateReceivingHwnd@@YAPEAUtagWND@@PEAUHWND__@@W4ValidateHwndCheck@@@Z @ 0x140291AF0 (-ValidateReceivingHwnd@@YAPEAUtagWND@@PEAUHWND__@@W4ValidateHwndCheck@@@Z.c)
 */

__int64 __fastcall NtUserDelegateInput(unsigned int a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rsi
  __int64 v14; // rcx
  struct tagTHREADINFO *v15; // rdi
  __int64 v16; // rax
  __int64 CurrentProcessWin32Process; // rax
  struct tagTHREADINFO *v18; // r8
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // r8
  int v23; // ecx

  EnterCrit(0LL, 0LL);
  v9 = ValidateReceivingHwnd(a4, 1LL);
  v12 = 0LL;
  v13 = v9;
  if ( v9 )
  {
    if ( !a5 || (a5 & 0xFFFFEFF9) != 0 )
      goto LABEL_19;
    if ( a1 )
    {
      v15 = (struct tagTHREADINFO *)PtiFromThreadId(a1);
      if ( !v15 )
        goto LABEL_19;
    }
    else
    {
      v15 = PtiCurrent(v11, v10);
    }
    v16 = *(_QWORD *)(v13 + 40);
    if ( *(char *)(v16 + 19) >= 0 && *(char *)(v16 + 20) >= 0 )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v14);
      if ( CurrentProcessWin32Process )
        CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      v18 = *(struct tagTHREADINFO **)(v13 + 16);
      v19 = *((_QWORD *)v18 + 58);
      if ( v19 == CurrentProcessWin32Process )
      {
        v20 = *(_DWORD *)(v13 + 260);
        if ( v20 )
        {
          if ( !a3
            && *(struct tagTHREADINFO **)(v13 + 264) == v15
            && *((_QWORD *)v15 + 183) == a2
            && !*((_QWORD *)v15 + 184)
            && v20 == a5 )
          {
            v23 = 1242;
            goto LABEL_20;
          }
        }
        else if ( v18 != v15
               && v19 == *((_QWORD *)v15 + 58)
               && !tagQ::AreMultipleThreadsAttached(*((tagQ **)v15 + 59))
               && *(_QWORD *)(v21 + 496) == *((_QWORD *)v15 + 62)
               && !*(_QWORD *)(v21 + 1464) )
        {
          *(_QWORD *)(v13 + 264) = v15;
          *(_DWORD *)(v13 + 260) = a5;
          *((_QWORD *)v15 + 170) |= 0x2000uLL;
          _InterlockedOr((volatile signed __int32 *)v15 + 132, 0x40u);
          ++*((_DWORD *)v15 + 376);
          v12 = 1LL;
          *((_QWORD *)v15 + 183) = a2;
          *((_QWORD *)v15 + 184) = a3;
          ++*(_DWORD *)(v21 + 1504);
          goto LABEL_18;
        }
      }
      v23 = 5;
LABEL_20:
      UserSetLastError(v23);
      goto LABEL_18;
    }
LABEL_19:
    v23 = 87;
    goto LABEL_20;
  }
LABEL_18:
  UserSessionSwitchLeaveCrit(v11);
  return v12;
}
