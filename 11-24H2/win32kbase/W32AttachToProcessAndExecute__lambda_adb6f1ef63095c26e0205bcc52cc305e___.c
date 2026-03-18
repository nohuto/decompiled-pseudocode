/*
 * XREFs of W32AttachToProcessAndExecute__lambda_adb6f1ef63095c26e0205bcc52cc305e___ @ 0x1401A9960
 * Callers:
 *     Win32JobObject::_anonymous_namespace_::SetRestrictedFlags @ 0x1401AA1F4 (Win32JobObject--_anonymous_namespace_--SetRestrictedFlags.c)
 * Callees:
 *     _lambda_adb6f1ef63095c26e0205bcc52cc305e_::operator() @ 0x1401A9A2C (_lambda_adb6f1ef63095c26e0205bcc52cc305e_--operator().c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

__int64 __fastcall W32AttachToProcessAndExecute__lambda_adb6f1ef63095c26e0205bcc52cc305e_(
        PRKPROCESS PROCESS,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  int v7; // ebx
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-48h] BYREF

  if ( (PRKPROCESS)PsGetCurrentProcess(PROCESS, a2, a3, a4) == PROCESS )
    return lambda_adb6f1ef63095c26e0205bcc52cc305e_::operator()(a2);
  v7 = PsAcquireProcessExitSynchronization(PROCESS);
  if ( v7 >= 0 )
  {
    memset(&ApcState, 0, sizeof(ApcState));
    KeStackAttachProcess(PROCESS, &ApcState);
    v7 = lambda_adb6f1ef63095c26e0205bcc52cc305e_::operator()(a2);
    KeUnstackDetachProcess(&ApcState);
    PsReleaseProcessExitSynchronization(PROCESS);
  }
  return (unsigned int)v7;
}
