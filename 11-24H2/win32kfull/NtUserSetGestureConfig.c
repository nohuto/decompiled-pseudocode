/*
 * XREFs of NtUserSetGestureConfig @ 0x140246270
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z @ 0x140034C70 (--0-$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x14005F724 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x14005F740 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x1400616D0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 *     SetGestureConfigSettings @ 0x1401B2654 (SetGestureConfigSettings.c)
 *     memmove @ 0x140340480 (memmove.c)
 */

__int64 __fastcall NtUserSetGestureConfig(__int64 a1, __int64 a2, unsigned int a3, volatile void *a4, int a5)
{
  __int64 v5; // r14
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rcx
  struct tagWND *v10; // rsi
  int v11; // edi
  __int64 v12; // rax
  int v13; // ecx
  __int64 v14; // rdx
  __int64 v15; // rcx
  void *v16; // rbx
  __int64 v17; // r8
  __int64 CurrentProcessWow64Process; // rax
  __int64 v19; // rdx
  __int64 v20; // rdx
  _BYTE v22[16]; // [rsp+50h] [rbp-38h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+60h] [rbp-28h] BYREF

  v5 = a3;
  v7 = EnterCrit(0LL, 0LL);
  v8 = ValidateHwnd(a1);
  v10 = (struct tagWND *)v8;
  v11 = 0;
  if ( v8 )
  {
    Win32HMThreadLockAlways<tagHOOK>::Win32HMThreadLockAlways<tagHOOK>(BugCheckParameter3, v7, v8);
    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v22);
    if ( a4 && a5 == 12 && (unsigned int)(v5 - 1) <= 0xFF )
    {
      v12 = *((_QWORD *)v10 + 5);
      if ( *(char *)(v12 + 20) >= 0
        && *(char *)(v12 + 19) >= 0
        && *(_QWORD *)(v7 + 464) == *(_QWORD *)(*((_QWORD *)v10 + 2) + 464LL) )
      {
        v16 = (void *)Win32AllocPoolWithQuotaZInit((unsigned int)(12 * v5), 1667724117LL);
        if ( v16 )
        {
          CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v15, v14, v17);
          ProbeForRead(a4, 12 * v5, CurrentProcessWow64Process != 0 ? 1 : 4);
          memmove(v16, (const void *)a4, (unsigned int)(12 * v5));
          v11 = SetGestureConfigSettings(v10, v19, v5, (__int64)v16);
          Win32FreePool(v16);
LABEL_14:
          AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v22);
          Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v20);
          goto LABEL_15;
        }
        v13 = 8;
      }
      else
      {
        v13 = 1400;
      }
    }
    else
    {
      v13 = 87;
    }
    UserSetLastError(v13);
    goto LABEL_14;
  }
LABEL_15:
  UserSessionSwitchLeaveCrit(v9);
  return v11;
}
