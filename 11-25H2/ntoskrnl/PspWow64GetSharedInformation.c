/*
 * XREFs of PspWow64GetSharedInformation @ 0x14083CBA0
 * Callers:
 *     PsThawMultiProcess @ 0x1404EBCE4 (PsThawMultiProcess.c)
 *     PspPrepareSystemDllInitBlock @ 0x14083C848 (PspPrepareSystemDllInitBlock.c)
 *     PspWow64InitThread @ 0x1409EB93C (PspWow64InitThread.c)
 *     PspInitializeSystemDlls @ 0x140C245C8 (PspInitializeSystemDlls.c)
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
