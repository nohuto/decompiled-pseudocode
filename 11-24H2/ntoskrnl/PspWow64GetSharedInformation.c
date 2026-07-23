/*
 * XREFs of PspWow64GetSharedInformation @ 0x1408DFF60
 * Callers:
 *     PsThawMultiProcess @ 0x1404E6564 (PsThawMultiProcess.c)
 *     PspPrepareSystemDllInitBlock @ 0x1408DFC08 (PspPrepareSystemDllInitBlock.c)
 *     PspWow64InitThread @ 0x1409E089C (PspWow64InitThread.c)
 *     PspInitializeSystemDlls @ 0x140C379D4 (PspInitializeSystemDlls.c)
 * Callees:
 *     <none>
 */

void *__fastcall PspWow64GetSharedInformation(int a1)
{
  if ( a1 == 1 )
    return &PsWowX86SharedInformation;
  else
    return 0LL;
}
