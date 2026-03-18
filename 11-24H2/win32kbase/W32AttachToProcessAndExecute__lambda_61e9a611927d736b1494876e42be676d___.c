/*
 * XREFs of W32AttachToProcessAndExecute__lambda_61e9a611927d736b1494876e42be676d___ @ 0x1401E8DD4
 * Callers:
 *     W32AttachToSessionAndExecute__lambda_61e9a611927d736b1494876e42be676d___ @ 0x1401E8F3C (W32AttachToSessionAndExecute__lambda_61e9a611927d736b1494876e42be676d___.c)
 * Callees:
 *     RIMDeviceClassNotifyUsingAsyncInputWork @ 0x1401ECBE0 (RIMDeviceClassNotifyUsingAsyncInputWork.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

__int64 __fastcall W32AttachToProcessAndExecute__lambda_61e9a611927d736b1494876e42be676d_(
        PRKPROCESS PROCESS,
        _QWORD *a2)
{
  int v4; // ebx
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-48h] BYREF

  v4 = PsAcquireProcessExitSynchronization(PROCESS);
  if ( v4 >= 0 )
  {
    memset(&ApcState, 0, sizeof(ApcState));
    KeStackAttachProcess(PROCESS, &ApcState);
    v4 = RIMDeviceClassNotifyUsingAsyncInputWork(*a2, a2[1]);
    KeUnstackDetachProcess(&ApcState);
    PsReleaseProcessExitSynchronization(PROCESS);
  }
  return (unsigned int)v4;
}
