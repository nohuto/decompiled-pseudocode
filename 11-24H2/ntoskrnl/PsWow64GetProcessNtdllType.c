/*
 * XREFs of PsWow64GetProcessNtdllType @ 0x1408DFF44
 * Callers:
 *     PsThawMultiProcess @ 0x1404E6564 (PsThawMultiProcess.c)
 *     MiApplyImageHotPatchRequest @ 0x1407F1EEC (MiApplyImageHotPatchRequest.c)
 *     PspPrepareSystemDllInitBlock @ 0x1408DFC08 (PspPrepareSystemDllInitBlock.c)
 *     DbgkSendSystemDllMessages @ 0x1408F541C (DbgkSendSystemDllMessages.c)
 *     PsMapSystemDlls @ 0x14091B210 (PsMapSystemDlls.c)
 *     DbgkCreateThread @ 0x140921604 (DbgkCreateThread.c)
 *     PspWow64InitThread @ 0x1409E089C (PspWow64InitThread.c)
 *     PspAllocateProcess @ 0x1409FACD0 (PspAllocateProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsWow64GetProcessNtdllType(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 784);
  if ( result )
    return *(unsigned int *)(result + 8);
  return result;
}
