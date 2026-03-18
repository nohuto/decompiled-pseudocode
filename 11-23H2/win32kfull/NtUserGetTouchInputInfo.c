/*
 * XREFs of NtUserGetTouchInputInfo @ 0x1C01D36B0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C0049CA8 (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     memmove @ 0x1C0140A40 (memmove.c)
 *     _FreeTouchInputInfo @ 0x1C01AFD80 (_FreeTouchInputInfo.c)
 */

__int64 __fastcall NtUserGetTouchInputInfo(__int64 a1, unsigned int a2, volatile void *a3, int a4)
{
  __int64 v6; // rbx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdi
  int v14; // ebx
  int v15; // ecx
  unsigned int v16; // eax
  __int64 CurrentProcessWow64Process; // rax
  SIZE_T v18; // rbx

  v6 = a2;
  EnterCrit(0LL, 0LL);
  if ( !a3 || a4 != 48 )
  {
    v15 = 87;
    goto LABEL_12;
  }
  v8 = HMValidateHandle(a1, 0x14u);
  v13 = v8;
  if ( !v8 )
  {
    v14 = 0;
    goto LABEL_13;
  }
  if ( *(_QWORD *)(v8 + 16) != gptiCurrent )
  {
    v15 = 5;
LABEL_12:
    v14 = 0;
    UserSetLastError(v15);
    goto LABEL_13;
  }
  v16 = *(_DWORD *)(v8 + 24);
  if ( v16 < (unsigned int)v6 )
    v6 = v16;
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v10, v9, v11);
  v18 = 48 * v6;
  ProbeForWrite(a3, v18, CurrentProcessWow64Process != 0 ? 1 : 4);
  memmove((void *)a3, (const void *)(v13 + 32), v18);
  v14 = 1;
  v10 = *(_QWORD *)(gptiCurrent + 1112LL);
  if ( v10 == a1 )
  {
    FreeTouchInputInfo(v10);
    *(_QWORD *)(gptiCurrent + 1112LL) = 0LL;
  }
LABEL_13:
  UserSessionSwitchLeaveCrit(v10, v9, v11, v12);
  return v14;
}
