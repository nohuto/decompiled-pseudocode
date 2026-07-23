/*
 * XREFs of KeSetKernelStackSwapEnable @ 0x1404415E0
 * Callers:
 *     NtSetInformationFile @ 0x1403B2080 (NtSetInformationFile.c)
 *     KiEpfStart @ 0x1405C0B44 (KiEpfStart.c)
 *     ObWaitForMultipleObjects @ 0x140847240 (ObWaitForMultipleObjects.c)
 *     NtQueryInformationFile @ 0x140957E20 (NtQueryInformationFile.c)
 *     ExSwapinWorkerThreads @ 0x140A48C04 (ExSwapinWorkerThreads.c)
 *     ExpSetSwappingKernelApc @ 0x140B6BC30 (ExpSetSwappingKernelApc.c)
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
