/*
 * XREFs of PsGetParentSilo @ 0x140A50EA0
 * Callers:
 *     PspConvertSiloToServerSilo @ 0x140772974 (PspConvertSiloToServerSilo.c)
 *     ObCreateSiloRootDirectory @ 0x14082B404 (ObCreateSiloRootDirectory.c)
 *     ObGetSiloRootDirectoryPath @ 0x14082B744 (ObGetSiloRootDirectoryPath.c)
 *     IopParseDevice @ 0x1408A7F20 (IopParseDevice.c)
 *     VRegEnabledInJob @ 0x14092B820 (VRegEnabledInJob.c)
 *     NtQueryInformationJobObject @ 0x140ACACA0 (NtQueryInformationJobObject.c)
 * Callees:
 *     PspGetJobSilo @ 0x1404071B0 (PspGetJobSilo.c)
 */

__int64 __fastcall PsGetParentSilo(__int64 a1)
{
  if ( a1 )
    return PspGetJobSilo(*(_QWORD *)(a1 + 1304));
  else
    return 0LL;
}
