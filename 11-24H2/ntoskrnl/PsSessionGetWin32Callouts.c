/*
 * XREFs of PsSessionGetWin32Callouts @ 0x14046B2A0
 * Callers:
 *     PspExitThread @ 0x1408A7D90 (PspExitThread.c)
 *     KeUserModeCallback @ 0x1408BF150 (KeUserModeCallback.c)
 *     PfpQueryGpuUtilization @ 0x140934A2C (PfpQueryGpuUtilization.c)
 *     ExpWin32CloseProcedure @ 0x140934B50 (ExpWin32CloseProcedure.c)
 *     ExpWin32OkayToCloseProcedure @ 0x140934C50 (ExpWin32OkayToCloseProcedure.c)
 *     ExpWin32DeleteProcedure @ 0x140934D90 (ExpWin32DeleteProcedure.c)
 *     ExpWin32OpenProcedure @ 0x140934E80 (ExpWin32OpenProcedure.c)
 *     ExpWin32ParseProcedure @ 0x140934FB0 (ExpWin32ParseProcedure.c)
 *     NtDeleteAtom @ 0x140935070 (NtDeleteAtom.c)
 *     PsConvertToGuiThread @ 0x140935290 (PsConvertToGuiThread.c)
 *     NtAddAtomEx @ 0x140935520 (NtAddAtomEx.c)
 *     NtQueryInformationAtom @ 0x1409356D0 (NtQueryInformationAtom.c)
 *     PspExitLastThread @ 0x1409374F0 (PspExitLastThread.c)
 *     NtFindAtom @ 0x140992B70 (NtFindAtom.c)
 *     PsInvokeWin32Callout @ 0x1409BADD0 (PsInvokeWin32Callout.c)
 * Callees:
 *     <none>
 */

union _RTL_RUN_ONCE *PsSessionGetWin32Callouts()
{
  __int64 v0; // rdx
  union _RTL_RUN_ONCE *result; // rax

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
