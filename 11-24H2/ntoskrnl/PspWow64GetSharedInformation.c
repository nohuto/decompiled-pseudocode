/*
 * XREFs of PspWow64GetSharedInformation @ 0x140908844
 * Callers:
 *     PsThawMultiProcess @ 0x1404EEE60 (PsThawMultiProcess.c)
 *     PspPrepareSystemDllInitBlock @ 0x1409084EC (PspPrepareSystemDllInitBlock.c)
 *     PspWow64InitThread @ 0x1409E600C (PspWow64InitThread.c)
 *     PspInitializeSystemDlls @ 0x140C35894 (PspInitializeSystemDlls.c)
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
