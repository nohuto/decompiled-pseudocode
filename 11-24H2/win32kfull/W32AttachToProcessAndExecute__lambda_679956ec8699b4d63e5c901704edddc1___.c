/*
 * XREFs of W32AttachToProcessAndExecute__lambda_679956ec8699b4d63e5c901704edddc1___ @ 0x1402907D8
 * Callers:
 *     NtUserGetScrollBarInfo @ 0x1401AC9D0 (NtUserGetScrollBarInfo.c)
 * Callees:
 *     GetWndScrollBarInfoCrossProcess @ 0x1402149C4 (GetWndScrollBarInfoCrossProcess.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall W32AttachToProcessAndExecute__lambda_679956ec8699b4d63e5c901704edddc1_(
        PRKPROCESS PROCESS,
        __int64 a2)
{
  int WndScrollBarInfoCrossProcess; // edi
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-48h] BYREF

  if ( (PRKPROCESS)PsGetCurrentProcess(PROCESS) == PROCESS )
    return (unsigned __int8)GetWndScrollBarInfoCrossProcess(*(_QWORD *)a2, *(_DWORD *)(a2 + 8), *(int **)(a2 + 16));
  WndScrollBarInfoCrossProcess = PsAcquireProcessExitSynchronization(PROCESS);
  if ( WndScrollBarInfoCrossProcess >= 0 )
  {
    memset(&ApcState, 0, sizeof(ApcState));
    KeStackAttachProcess(PROCESS, &ApcState);
    WndScrollBarInfoCrossProcess = (unsigned __int8)GetWndScrollBarInfoCrossProcess(
                                                      *(_QWORD *)a2,
                                                      *(_DWORD *)(a2 + 8),
                                                      *(int **)(a2 + 16));
    KeUnstackDetachProcess(&ApcState);
    PsReleaseProcessExitSynchronization(PROCESS);
  }
  return (unsigned int)WndScrollBarInfoCrossProcess;
}
