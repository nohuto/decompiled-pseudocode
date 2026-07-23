/*
 * XREFs of PsSessionGetWin32Callouts @ 0x14047422C
 * Callers:
 *     PspExitThread @ 0x1408F49D0 (PspExitThread.c)
 *     PfpQueryGpuUtilization @ 0x14091D1F8 (PfpQueryGpuUtilization.c)
 *     ExpWin32CloseProcedure @ 0x14091D7F0 (ExpWin32CloseProcedure.c)
 *     ExpWin32OkayToCloseProcedure @ 0x14091D8F0 (ExpWin32OkayToCloseProcedure.c)
 *     ExpWin32DeleteProcedure @ 0x14091DA30 (ExpWin32DeleteProcedure.c)
 *     ExpWin32OpenProcedure @ 0x14091DB20 (ExpWin32OpenProcedure.c)
 *     ExpWin32ParseProcedure @ 0x14091DC50 (ExpWin32ParseProcedure.c)
 *     NtDeleteAtom @ 0x14091DDE0 (NtDeleteAtom.c)
 *     PsConvertToGuiThread @ 0x14091E000 (PsConvertToGuiThread.c)
 *     NtAddAtomEx @ 0x14091E290 (NtAddAtomEx.c)
 *     NtQueryInformationAtom @ 0x14091E440 (NtQueryInformationAtom.c)
 *     PspExitLastThread @ 0x14091ECC8 (PspExitLastThread.c)
 *     KeUserModeCallback @ 0x140938670 (KeUserModeCallback.c)
 *     NtFindAtom @ 0x1409527D0 (NtFindAtom.c)
 *     PsInvokeWin32Callout @ 0x140961150 (PsInvokeWin32Callout.c)
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
