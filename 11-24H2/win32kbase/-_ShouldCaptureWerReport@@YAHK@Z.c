/*
 * XREFs of ?_ShouldCaptureWerReport@@YAHK@Z @ 0x1401B7468
 * Callers:
 *     NtUserWin32kSysCallFilterStub @ 0x140143AE0 (NtUserWin32kSysCallFilterStub.c)
 * Callees:
 *     ?_GetStackTraceSum@@YAKXZ @ 0x1401B7318 (-_GetStackTraceSum@@YAKXZ.c)
 *     ?_IsSyscallThrottled@@YAHK@Z @ 0x1401B7428 (-_IsSyscallThrottled@@YAHK@Z.c)
 */

__int64 __fastcall _ShouldCaptureWerReport(__int64 a1)
{
  unsigned int v1; // edi
  unsigned int v2; // esi
  int StackTraceSum; // eax
  __int64 v4; // rcx
  int v5; // ebx
  int IsSyscallThrottled; // eax

  v1 = 0;
  v2 = a1;
  if ( (_DWORD)gdwServiceFilterAuditCaptureWER )
  {
    if ( (_DWORD)gdwServiceFilterAuditThrottleMode )
    {
      if ( (_DWORD)gdwServiceFilterAuditThrottleMode == 1 )
        LOBYTE(v1) = (unsigned int)_IsSyscallThrottled(a1) == 0;
    }
    else
    {
      StackTraceSum = _GetStackTraceSum();
      v5 = (unsigned __int8)_interlockedbittestandset(
                              (volatile signed __int32 *)(*(_QWORD *)(W32GetUserSessionState(v4) + 71160)
                                                        + 4
                                                        * (((unsigned __int64)(unsigned __int16)(StackTraceSum ^ HIWORD(StackTraceSum)) >> 5)
                                                         % ((unsigned __int64)gstServiceFilterAuditStackCacheSize >> 2))),
                              ((unsigned __int8)StackTraceSum ^ BYTE2(StackTraceSum)) & 0x1F);
      IsSyscallThrottled = _IsSyscallThrottled(v2);
      if ( !v5 || !IsSyscallThrottled )
        return 1;
    }
  }
  return v1;
}
