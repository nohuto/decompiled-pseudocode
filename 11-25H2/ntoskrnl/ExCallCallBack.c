/*
 * XREFs of ExCallCallBack @ 0x14091E61C
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
 * Callees:
 *     ExReferenceCallBackBlock @ 0x140326780 (ExReferenceCallBackBlock.c)
 *     ExDereferenceCallBackBlock @ 0x1404482A0 (ExDereferenceCallBackBlock.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall ExCallCallBack(signed __int64 *a1)
{
  struct _EX_RUNDOWN_REF *v2; // rdi
  unsigned int v3; // ebx

  v2 = ExReferenceCallBackBlock(a1);
  if ( v2 )
  {
    v3 = guard_dispatch_icall_no_overrides(v2[2].Count);
    ExDereferenceCallBackBlock(a1, v2);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v3;
}
