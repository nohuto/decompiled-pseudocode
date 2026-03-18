/*
 * XREFs of NtUserShellHandwritingDelegateInput @ 0x14029FBB0
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     ?AreMultipleThreadsAttached@tagQ@@QEBA_NXZ @ 0x1401565AC (-AreMultipleThreadsAttached@tagQ@@QEBA_NXZ.c)
 */

__int64 __fastcall NtUserShellHandwritingDelegateInput(unsigned int a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdi
  struct tagTHREADINFO *v10; // rax
  int v11; // ecx
  __int64 v12; // rcx
  __int64 v13; // r8

  EnterCrit(0LL, 0LL);
  v6 = 0LL;
  if ( !a1 )
    goto LABEL_16;
  v9 = PtiFromThreadId(a1);
  if ( !v9 )
    goto LABEL_16;
  v10 = PtiCurrent(v8, v7);
  if ( !v10 || v10 == (struct tagTHREADINFO *)v9 )
    goto LABEL_16;
  if ( *((_QWORD *)v10 + 187) == v9 && *(_QWORD *)(v9 + 1480) == a2 && *(_QWORD *)(v9 + 1472) == a3 )
  {
    v11 = 1242;
LABEL_17:
    UserSetLastError(v11);
    goto LABEL_18;
  }
  if ( *((_QWORD *)v10 + 58) != *(_QWORD *)(v9 + 464)
    || tagQ::AreMultipleThreadsAttached(*(tagQ **)(v9 + 472))
    || *(_QWORD *)(v13 + 496) != *(_QWORD *)(v9 + 496) )
  {
LABEL_16:
    v11 = 87;
    goto LABEL_17;
  }
  if ( *(_QWORD *)(v13 + 1480) || (*(_DWORD *)(v9 + 1360) & 0x2000LL) != 0 )
  {
    v11 = 5;
    goto LABEL_17;
  }
  *(_QWORD *)(v13 + 1496) = v9;
  *(_DWORD *)(v13 + 1488) = 4096;
  *(_QWORD *)(v9 + 1360) |= 0x2000000000uLL;
  _InterlockedOr((volatile signed __int32 *)(v9 + 528), 0x40u);
  *(_QWORD *)(v9 + 1480) = a2;
  v6 = 1LL;
  *(_QWORD *)(v9 + 1472) = a3;
LABEL_18:
  UserSessionSwitchLeaveCrit(v12);
  return v6;
}
