/*
 * XREFs of NtUserSetWindowMessageCapability @ 0x140217790
 * Callers:
 *     <none>
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x14005F724 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x14005F740 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     ?ValidateReceivingHwnd@@YAPEAUtagWND@@PEAUHWND__@@W4ValidateHwndCheck@@@Z @ 0x140291AF0 (-ValidateReceivingHwnd@@YAPEAUtagWND@@PEAUHWND__@@W4ValidateHwndCheck@@@Z.c)
 */

__int64 __fastcall NtUserSetWindowMessageCapability(HWND a1, unsigned int a2, void *a3, int a4)
{
  int v8; // ebx
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v12; // r8
  KPROCESSOR_MODE PreviousMode; // al
  __int64 v14; // rcx
  void *v16; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v17[48]; // [rsp+28h] [rbp-30h] BYREF

  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v17);
  v8 = 0;
  v10 = ValidateReceivingHwnd(a1, 0LL);
  if ( v10 )
  {
    v16 = 0LL;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v9);
    v12 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
      v12 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
    if ( *(_QWORD *)(*(_QWORD *)(v10 + 16) + 464LL) == v12 )
    {
      PreviousMode = ExGetPreviousMode();
      if ( (int)UserCaptureSid(a3, PreviousMode, &v16) >= 0 )
      {
        v8 = UserSetWindowMessageCapability(a1, a2, v16, a4);
        Win32FreePool(v16);
      }
    }
    else
    {
      UserSetLastError(5);
    }
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v17);
  UserSessionSwitchLeaveCrit(v14);
  return v8;
}
