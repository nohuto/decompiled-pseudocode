/*
 * XREFs of PsGetParentSilo @ 0x140862140
 * Callers:
 *     PspConvertSiloToServerSilo @ 0x140762D94 (PspConvertSiloToServerSilo.c)
 *     ObCreateSiloRootDirectory @ 0x14081AE94 (ObCreateSiloRootDirectory.c)
 *     ObGetSiloRootDirectoryPath @ 0x14081B1D4 (ObGetSiloRootDirectoryPath.c)
 *     IopParseDevice @ 0x14085F1F0 (IopParseDevice.c)
 *     VRegEnabledInJob @ 0x14094A6C0 (VRegEnabledInJob.c)
 *     NtQueryInformationJobObject @ 0x1409ECC70 (NtQueryInformationJobObject.c)
 * Callees:
 *     PspGetJobSilo @ 0x14041A350 (PspGetJobSilo.c)
 */

__int64 __fastcall PsGetParentSilo(__int64 a1)
{
  if ( a1 )
    return PspGetJobSilo(*(_QWORD *)(a1 + 1304));
  else
    return 0LL;
}
