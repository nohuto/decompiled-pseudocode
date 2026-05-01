/*
 * XREFs of AslFree @ 0x180139254
 * Callers:
 *     AslEnvBuildBasic @ 0x180136F3C (AslEnvBuildBasic.c)
 *     AslRegistryGetStringExpand @ 0x180138500 (AslRegistryGetStringExpand.c)
 *     ?PiiFilterpAddEnvironment@@YAJPEAU_PII_FILTER@@@Z @ 0x18013875C (-PiiFilterpAddEnvironment@@YAJPEAU_PII_FILTER@@@Z.c)
 *     AslRegistryGetString @ 0x180138F90 (AslRegistryGetString.c)
 *     PiiFilterDelete @ 0x1802CD4EC (PiiFilterDelete.c)
 *     PiiFilterEmbeddedPathsExecute @ 0x180675E34 (PiiFilterEmbeddedPathsExecute.c)
 *     PiiFilterExecute @ 0x180676284 (PiiFilterExecute.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall AslFree(void *a1, void *a2)
{
  BOOLEAN result; // al

  if ( a2 )
    return RtlFreeHeap(a1, 0, a2);
  return result;
}
