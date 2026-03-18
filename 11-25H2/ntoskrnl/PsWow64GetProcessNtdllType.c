/*
 * XREFs of PsWow64GetProcessNtdllType @ 0x14083CB84
 * Callers:
 *     PsThawMultiProcess @ 0x1404EBCE4 (PsThawMultiProcess.c)
 *     MiApplyImageHotPatchRequest @ 0x1407E1A7C (MiApplyImageHotPatchRequest.c)
 *     PspPrepareSystemDllInitBlock @ 0x14083C848 (PspPrepareSystemDllInitBlock.c)
 *     PsMapSystemDlls @ 0x1409053A8 (PsMapSystemDlls.c)
 *     DbgkCreateThread @ 0x14090B274 (DbgkCreateThread.c)
 *     DbgkSendSystemDllMessages @ 0x1409B9DBC (DbgkSendSystemDllMessages.c)
 *     PspAllocateProcess @ 0x1409BE78C (PspAllocateProcess.c)
 *     PspWow64InitThread @ 0x1409EB93C (PspWow64InitThread.c)
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
