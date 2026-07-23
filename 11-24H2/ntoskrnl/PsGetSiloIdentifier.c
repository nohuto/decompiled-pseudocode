/*
 * XREFs of PsGetSiloIdentifier @ 0x140A61590
 * Callers:
 *     ObCreateSiloRootDirectory @ 0x14082B404 (ObCreateSiloRootDirectory.c)
 *     ObGetSiloRootDirectoryPath @ 0x14082B744 (ObGetSiloRootDirectoryPath.c)
 *     NtQueryInformationProcess @ 0x140995530 (NtQueryInformationProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetSiloIdentifier(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( a1 )
    return *(unsigned int *)(a1 + 1468);
  return result;
}
