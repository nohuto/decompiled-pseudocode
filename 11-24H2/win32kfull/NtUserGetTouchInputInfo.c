/*
 * XREFs of NtUserGetTouchInputInfo @ 0x1401F9DF0
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     HMValidateHandleWithDescriptor @ 0x140077C08 (HMValidateHandleWithDescriptor.c)
 *     _FreeTouchInputInfo @ 0x140085CA0 (_FreeTouchInputInfo.c)
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 *     memmove @ 0x140340480 (memmove.c)
 */

__int64 __fastcall NtUserGetTouchInputInfo(__int64 a1, unsigned int a2, volatile void *a3, int a4)
{
  __int64 v5; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  struct tagTHREADINFO *v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdi
  unsigned int v16; // eax
  SIZE_T v17; // rbx
  __int64 CurrentProcessWow64Process; // rax
  int v19; // ebx
  int v21; // ecx

  v5 = a2;
  EnterCrit(0LL, 0LL);
  v10 = PtiCurrent(v8, v7);
  if ( !a3 || a4 != 48 )
  {
    v21 = 87;
LABEL_11:
    v19 = 0;
    UserSetLastError(v21);
    goto LABEL_9;
  }
  LOBYTE(v9) = 20;
  v11 = HMValidateHandleWithDescriptor(a1, v9);
  v15 = v11;
  if ( !v11 )
  {
    v19 = 0;
    goto LABEL_9;
  }
  if ( *(struct tagTHREADINFO **)(v11 + 16) != v10 )
  {
    v21 = 5;
    goto LABEL_11;
  }
  v16 = *(_DWORD *)(v11 + 24);
  if ( v16 < (unsigned int)v5 )
    v5 = v16;
  v17 = 48 * v5;
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v13, v12, v14);
  ProbeForWrite(a3, v17, CurrentProcessWow64Process != 0 ? 1 : 4);
  memmove((void *)a3, (const void *)(v15 + 32), v17);
  v19 = 1;
  v13 = *((_QWORD *)v10 + 149);
  if ( v13 == a1 )
  {
    FreeTouchInputInfo(v13);
    *((_QWORD *)v10 + 149) = 0LL;
  }
LABEL_9:
  UserSessionSwitchLeaveCrit(v13);
  return v19;
}
