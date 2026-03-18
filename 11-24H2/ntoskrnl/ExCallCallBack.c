/*
 * XREFs of ExCallCallBack @ 0x1409358AC
 * Callers:
 *     PspExitThread @ 0x1408A7D90 (PspExitThread.c)
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
 * Callees:
 *     ExReferenceCallBackBlock @ 0x140279300 (ExReferenceCallBackBlock.c)
 *     ExDereferenceCallBackBlock @ 0x1404459D0 (ExDereferenceCallBackBlock.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall ExCallCallBack(signed __int64 *a1, __int64 a2, __int64 a3)
{
  struct _EX_RUNDOWN_REF *v6; // rdi
  __int64 v7; // r9
  unsigned int v8; // ebx

  v6 = ExReferenceCallBackBlock(a1);
  if ( v6 )
  {
    v8 = guard_dispatch_icall_no_overrides(v6[2].Count, a2, a3, v7);
    ExDereferenceCallBackBlock(a1, v6);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v8;
}
