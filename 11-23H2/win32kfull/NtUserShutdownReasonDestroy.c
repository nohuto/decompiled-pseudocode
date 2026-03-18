/*
 * XREFs of NtUserShutdownReasonDestroy @ 0x1C009B7E0
 * Callers:
 *     <none>
 * Callees:
 *     InternalRemoveProp @ 0x1C0026C40 (InternalRemoveProp.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 */

__int64 __fastcall NtUserShutdownReasonDestroy(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 CurrentProcessWin32Process; // rax
  void *v10; // rax

  EnterCrit(0LL, 0LL);
  v2 = ValidateHwnd(a1);
  v7 = 0LL;
  v8 = v2;
  if ( v2 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v4);
    v5 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
    {
      v4 = -*(_QWORD *)CurrentProcessWin32Process;
      v3 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      v5 = v3 & CurrentProcessWin32Process;
    }
    if ( *(_QWORD *)(*(_QWORD *)(v8 + 16) + 424LL) == v5 )
    {
      v10 = (void *)InternalRemoveProp(v8, (unsigned __int16)gatomShutdownBlockingReason, 1u);
      if ( v10 )
      {
        Win32FreePool(v10);
        v7 = 1LL;
      }
      else
      {
        UserSetLastError(87LL);
      }
    }
    else
    {
      v7 = 5LL;
    }
  }
  UserSessionSwitchLeaveCrit(v4, v3, v5, v6);
  return v7;
}
