/*
 * XREFs of NtUserGetGestureExtArgs @ 0x1402961E0
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     HMValidateHandleWithDescriptor @ 0x140077C08 (HMValidateHandleWithDescriptor.c)
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 *     _FreeGestureInfo @ 0x140266FF0 (_FreeGestureInfo.c)
 *     memmove @ 0x140340480 (memmove.c)
 */

__int64 __fastcall NtUserGetGestureExtArgs(__int64 a1, unsigned int a2, volatile void *a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  struct tagTHREADINFO *v8; // rdi
  int v9; // ecx
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 CurrentProcessWow64Process; // rax

  EnterCrit(0LL, 0LL);
  v8 = PtiCurrent(v6, v5);
  if ( !a3 )
  {
    v9 = 87;
LABEL_3:
    LODWORD(v10) = 0;
    UserSetLastError(v9);
    goto LABEL_11;
  }
  LOBYTE(v7) = 21;
  v12 = HMValidateHandleWithDescriptor(a1, v7);
  v10 = v12;
  if ( !v12 )
    goto LABEL_11;
  if ( *(struct tagTHREADINFO **)(v12 + 16) != v8 )
  {
    v9 = 5;
    goto LABEL_3;
  }
  if ( a2 < *(_DWORD *)(v12 + 80) )
  {
    v9 = 122;
    goto LABEL_3;
  }
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v11, v13, v14);
  ProbeForWrite(a3, *(unsigned int *)(v10 + 80), CurrentProcessWow64Process != 0 ? 1 : 4);
  memmove((void *)a3, (const void *)(v10 + 88), *(unsigned int *)(v10 + 80));
  LODWORD(v10) = 1;
  v11 = *((_QWORD *)v8 + 150);
  if ( v11 == a1 )
  {
    FreeGestureInfo(v11);
    *((_QWORD *)v8 + 150) = 0LL;
  }
LABEL_11:
  UserSessionSwitchLeaveCrit(v11);
  return (int)v10;
}
