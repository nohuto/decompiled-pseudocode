/*
 * XREFs of PsWow64GetProcessNtdllType @ 0x140908828
 * Callers:
 *     PsThawMultiProcess @ 0x1404EEE60 (PsThawMultiProcess.c)
 *     MiApplyImageHotPatchRequest @ 0x1407F191C (MiApplyImageHotPatchRequest.c)
 *     PsMapSystemDlls @ 0x1408F8E70 (PsMapSystemDlls.c)
 *     DbgkCreateThread @ 0x1408FED24 (DbgkCreateThread.c)
 *     PspPrepareSystemDllInitBlock @ 0x1409084EC (PspPrepareSystemDllInitBlock.c)
 *     DbgkSendSystemDllMessages @ 0x140939F18 (DbgkSendSystemDllMessages.c)
 *     PspWow64InitThread @ 0x1409E600C (PspWow64InitThread.c)
 *     PspAllocateProcess @ 0x140A1C4C0 (PspAllocateProcess.c)
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
