/*
 * XREFs of PsGetParentSilo @ 0x140A59700
 * Callers:
 *     PspConvertSiloToServerSilo @ 0x140772754 (PspConvertSiloToServerSilo.c)
 *     ObCreateSiloRootDirectory @ 0x14082ABD4 (ObCreateSiloRootDirectory.c)
 *     ObGetSiloRootDirectoryPath @ 0x14082AF14 (ObGetSiloRootDirectoryPath.c)
 *     IopParseDevice @ 0x14089F880 (IopParseDevice.c)
 *     VRegEnabledInJob @ 0x1409296E0 (VRegEnabledInJob.c)
 *     NtQueryInformationJobObject @ 0x140ACCBF0 (NtQueryInformationJobObject.c)
 * Callees:
 *     PspGetJobSilo @ 0x14040EFB0 (PspGetJobSilo.c)
 */

__int64 __fastcall PsGetParentSilo(__int64 a1)
{
  if ( a1 )
    return PspGetJobSilo(*(_QWORD *)(a1 + 1304));
  else
    return 0LL;
}
