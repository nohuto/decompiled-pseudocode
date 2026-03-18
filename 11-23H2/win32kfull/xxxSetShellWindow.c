/*
 * XREFs of xxxSetShellWindow @ 0x1C007264C
 * Callers:
 *     NtUserSetShellWindowEx @ 0x1C0072470 (NtUserSetShellWindowEx.c)
 * Callees:
 *     DwmAsyncShellWindowChange @ 0x1C0022230 (DwmAsyncShellWindowChange.c)
 *     xxxSetWindowPos @ 0x1C0045448 (xxxSetWindowPos.c)
 *     xxxGenerateIAMKey @ 0x1C007285C (xxxGenerateIAMKey.c)
 *     CleanupIAMAccess @ 0x1C00728B0 (CleanupIAMAccess.c)
 *     PushW32ThreadLock @ 0x1C00AD510 (PushW32ThreadLock.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00AD580 (PopAndFreeW32ThreadLock.c)
 *     SetOrClrWF @ 0x1C00B5D8C (SetOrClrWF.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 */

__int64 __fastcall xxxSetShellWindow(struct tagWND *a1, struct tagWND *a2)
{
  __int64 v2; // r8
  __int64 *v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rax
  void *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 **v14; // rcx
  __int64 v15; // rbx
  void *v16; // rax
  _QWORD *v18; // [rsp+40h] [rbp-38h] BYREF
  struct tagWND *v19; // [rsp+48h] [rbp-30h]
  __int128 v20; // [rsp+50h] [rbp-28h] BYREF
  __int64 v21; // [rsp+60h] [rbp-18h]

  v2 = *((_QWORD *)a1 + 2);
  v5 = *(__int64 **)(v2 + 464);
  v20 = 0LL;
  v21 = 0LL;
  if ( v5[21] )
  {
    v6 = 5LL;
LABEL_18:
    UserSetLastError(v6);
    return 0LL;
  }
  v7 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v7 + 31) & 0xC0) == 0x40 || *((_QWORD *)a1 + 15) || (*(_BYTE *)(v7 + 24) & 8) != 0 )
  {
    v6 = 87LL;
    goto LABEL_18;
  }
  v8 = *(_QWORD *)(v2 + 424);
  if ( v8 && (!v5[22] || (*(_DWORD *)(v8 + 824) & 0x30) == 0x20) )
  {
    v5[22] = v8;
    if ( grpdeskRitInput )
    {
      if ( v5 == *(__int64 **)(grpdeskRitInput + 8LL) )
        SynchronizeContext();
    }
  }
  v9 = *v5;
  v10 = *((_QWORD *)a1 + 6);
  v18 = v5 + 21;
  v19 = a1;
  *(_QWORD *)(v9 + 24) = v10;
  HMAssignmentLock(&v18, 0LL);
  v19 = a2;
  v18 = v5 + 23;
  HMAssignmentLock(&v18, 0LL);
  PushW32ThreadLock(*(_QWORD *)(gptiCurrent + 456LL), &v20, UserDereferenceObject);
  v11 = *(void **)(gptiCurrent + 456LL);
  if ( v11 )
    ObfReferenceObject(v11);
  CleanupIAMAccess(*(struct tagDESKTOP **)(gptiCurrent + 456LL));
  xxxGenerateIAMKey(*(_QWORD *)(gptiCurrent + 456LL));
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    v13 = *(_QWORD *)a1;
    v14 = *(__int64 ***)(*((_QWORD *)a1 + 3) + 8LL);
    v15 = **v14;
    v16 = (void *)ReferenceDwmApiPort(v14, v12);
    DwmAsyncShellWindowChange(v16, v13, v15);
  }
  SetOrClrWF(1LL, a1, 1056LL, 1LL);
  xxxSetWindowPos(a1, 1LL, 0LL, 0LL, 0, 0, 19);
  PopAndFreeW32ThreadLock(&v20);
  return 1LL;
}
