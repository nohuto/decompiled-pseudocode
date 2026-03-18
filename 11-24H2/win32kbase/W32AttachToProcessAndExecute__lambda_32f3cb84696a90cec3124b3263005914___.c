/*
 * XREFs of W32AttachToProcessAndExecute__lambda_32f3cb84696a90cec3124b3263005914___ @ 0x1401B397C
 * Callers:
 *     W32AttachToSessionAndExecute__lambda_32f3cb84696a90cec3124b3263005914___ @ 0x1401B3B64 (W32AttachToSessionAndExecute__lambda_32f3cb84696a90cec3124b3263005914___.c)
 * Callees:
 *     _lambda_32f3cb84696a90cec3124b3263005914_::operator() @ 0x1401B3CB4 (_lambda_32f3cb84696a90cec3124b3263005914_--operator().c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

__int64 __fastcall W32AttachToProcessAndExecute__lambda_32f3cb84696a90cec3124b3263005914_(
        PRKPROCESS PROCESS,
        __int64 a2)
{
  int v4; // ebx
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-48h] BYREF

  v4 = PsAcquireProcessExitSynchronization(PROCESS);
  if ( v4 >= 0 )
  {
    memset(&ApcState, 0, sizeof(ApcState));
    KeStackAttachProcess(PROCESS, &ApcState);
    v4 = lambda_32f3cb84696a90cec3124b3263005914_::operator()(a2);
    KeUnstackDetachProcess(&ApcState);
    PsReleaseProcessExitSynchronization(PROCESS);
  }
  return (unsigned int)v4;
}
