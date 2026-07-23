/*
 * XREFs of ExCallCallBack @ 0x1408F47CC
 * Callers:
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
 * Callees:
 *     ExReferenceCallBackBlock @ 0x14022E890 (ExReferenceCallBackBlock.c)
 *     ExDereferenceCallBackBlock @ 0x14043DD80 (ExDereferenceCallBackBlock.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall ExCallCallBack(signed __int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _EX_RUNDOWN_REF *v6; // rdi
  unsigned int v7; // ebx

  v6 = ExReferenceCallBackBlock(a1, a2, a3, a4);
  if ( v6 )
  {
    v7 = guard_dispatch_icall_no_overrides(v6[2].Count, a2);
    ExDereferenceCallBackBlock(a1, v6);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v7;
}
