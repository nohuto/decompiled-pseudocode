/*
 * XREFs of W32AttachToProcessAndExecute__lambda_735e0558695e6dec8da91e7614b43783___ @ 0x1402908B8
 * Callers:
 *     NtUserSBGetParms @ 0x140245070 (NtUserSBGetParms.c)
 * Callees:
 *     GetWndSBParmsCrossProcess @ 0x140219F38 (GetWndSBParmsCrossProcess.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall W32AttachToProcessAndExecute__lambda_735e0558695e6dec8da91e7614b43783_(
        PRKPROCESS PROCESS,
        __int64 a2)
{
  int WndSBParmsCrossProcess; // edi
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-48h] BYREF

  if ( (PRKPROCESS)PsGetCurrentProcess(PROCESS) == PROCESS )
    return GetWndSBParmsCrossProcess(*(__int64 **)a2, *(_DWORD *)(a2 + 8), *(unsigned int **)(a2 + 16));
  WndSBParmsCrossProcess = PsAcquireProcessExitSynchronization(PROCESS);
  if ( WndSBParmsCrossProcess >= 0 )
  {
    memset(&ApcState, 0, sizeof(ApcState));
    KeStackAttachProcess(PROCESS, &ApcState);
    WndSBParmsCrossProcess = GetWndSBParmsCrossProcess(
                               *(__int64 **)a2,
                               *(_DWORD *)(a2 + 8),
                               *(unsigned int **)(a2 + 16));
    KeUnstackDetachProcess(&ApcState);
    PsReleaseProcessExitSynchronization(PROCESS);
  }
  return (unsigned int)WndSBParmsCrossProcess;
}
