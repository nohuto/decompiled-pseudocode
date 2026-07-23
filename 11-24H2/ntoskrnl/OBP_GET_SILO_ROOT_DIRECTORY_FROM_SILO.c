/*
 * XREFs of OBP_GET_SILO_ROOT_DIRECTORY_FROM_SILO @ 0x1403FCA80
 * Callers:
 *     ObpCreateSymbolicLinkName @ 0x1407421D0 (ObpCreateSymbolicLinkName.c)
 *     ObpLookupObjectName @ 0x1408A58B0 (ObpLookupObjectName.c)
 *     ObQueryNameStringMode @ 0x1409524C0 (ObQueryNameStringMode.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall OBP_GET_SILO_ROOT_DIRECTORY_FROM_SILO(__int64 a1)
{
  __int64 v1; // rdx
  unsigned int v2; // eax
  __int64 v3; // r8
  PVOID result; // rax

  if ( a1 )
    v1 = *(_QWORD *)(a1 + 1536);
  else
    v1 = qword_140FCFE30;
  v2 = PsObjectDirectorySiloContextSlot;
  if ( (unsigned int)PsObjectDirectorySiloContextSlot >= 0x20 )
  {
    v2 = PsObjectDirectorySiloContextSlot - 32;
    if ( (unsigned int)(PsObjectDirectorySiloContextSlot - 32) >= 0x100 )
      return ObpRootDirectoryObject;
    v1 = *(_QWORD *)(v1 + 512);
    if ( !v1 )
      return ObpRootDirectoryObject;
  }
  v3 = *(_QWORD *)(v1 + 16LL * v2 + 8);
  result = (PVOID)(v3 & 0xFFFFFFFFFFFFFFFEuLL);
  if ( (v3 & 0xFFFFFFFFFFFFFFFEuLL) == 0 || (v3 & 1) == 0 )
    return ObpRootDirectoryObject;
  return result;
}
