/*
 * XREFs of PsSessionGetWin32Callouts @ 0x140463D20
 * Callers:
 *     KeUserModeCallback @ 0x1408BCB10 (KeUserModeCallback.c)
 *     PspExitLastThread @ 0x1408F27B8 (PspExitLastThread.c)
 *     ExpWin32CloseProcedure @ 0x1408F3DD0 (ExpWin32CloseProcedure.c)
 *     ExpWin32OkayToCloseProcedure @ 0x1408F3ED0 (ExpWin32OkayToCloseProcedure.c)
 *     ExpWin32DeleteProcedure @ 0x1408F4010 (ExpWin32DeleteProcedure.c)
 *     ExpWin32OpenProcedure @ 0x1408F4100 (ExpWin32OpenProcedure.c)
 *     ExpWin32ParseProcedure @ 0x1408F4230 (ExpWin32ParseProcedure.c)
 *     NtDeleteAtom @ 0x1408F43C0 (NtDeleteAtom.c)
 *     NtAddAtomEx @ 0x1408F4440 (NtAddAtomEx.c)
 *     NtQueryInformationAtom @ 0x1408F45F0 (NtQueryInformationAtom.c)
 *     PfpQueryGpuUtilization @ 0x1408F4FC8 (PfpQueryGpuUtilization.c)
 *     PspExitThread @ 0x1408FDFF0 (PspExitThread.c)
 *     NtFindAtom @ 0x14097DBB0 (NtFindAtom.c)
 *     PsInvokeWin32Callout @ 0x1409A1420 (PsInvokeWin32Callout.c)
 * Callees:
 *     <none>
 */

_RTL_RUN_ONCE *PsSessionGetWin32Callouts()
{
  __int64 v0; // rdx
  _RTL_RUN_ONCE *result; // rax

  if ( (KeGetCurrentThread()->ApcState.Process[1].DirectoryTableBase & 0x1000000000000LL) == 0 )
    return &PsWin32CallBack;
  v0 = *(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].CycleTime + 120);
  if ( !v0 )
    return &PsWin32NullCallBack;
  result = &PsWin32CallBack;
  if ( v0 == 1 )
    return &PsWin32NullCallBack;
  return result;
}
