/*
 * XREFs of KeSetKernelStackSwapEnable @ 0x140448E90
 * Callers:
 *     NtSetInformationFile @ 0x1403C34C0 (NtSetInformationFile.c)
 *     KiEpfStart @ 0x1405C3574 (KiEpfStart.c)
 *     ObWaitForMultipleObjects @ 0x14084AF80 (ObWaitForMultipleObjects.c)
 *     NtQueryInformationFile @ 0x14096F610 (NtQueryInformationFile.c)
 *     ExSwapinWorkerThreads @ 0x140A51B34 (ExSwapinWorkerThreads.c)
 *     ExpSetSwappingKernelApc @ 0x140B6A520 (ExpSetSwappingKernelApc.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall KeSetKernelStackSwapEnable(BOOLEAN Enable)
{
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v2; // dl

  CurrentThread = KeGetCurrentThread();
  v2 = (*((_DWORD *)&CurrentThread->0 + 1) & 0x40) != 0;
  if ( Enable != v2 )
  {
    if ( Enable )
      _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 6u);
    else
      _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread->116 + 1, 6u);
  }
  return v2;
}
