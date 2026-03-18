/*
 * XREFs of PsGetSiloIdentifier @ 0x140A655F0
 * Callers:
 *     ObCreateSiloRootDirectory @ 0x14081AE94 (ObCreateSiloRootDirectory.c)
 *     ObGetSiloRootDirectoryPath @ 0x14081B1D4 (ObGetSiloRootDirectoryPath.c)
 *     NtQueryInformationProcess @ 0x1409D2880 (NtQueryInformationProcess.c)
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
