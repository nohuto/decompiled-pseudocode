/*
 * XREFs of InsertOwnerObjList @ 0x14003E434
 * Callers:
 *     CreateNameSpaceObject @ 0x140009050 (CreateNameSpaceObject.c)
 *     InitializeNativeNamespace @ 0x1400547F0 (InitializeNativeNamespace.c)
 *     AMLIAddNamespaceOverride @ 0x14006C0C4 (AMLIAddNamespaceOverride.c)
 *     MigrateDefunctObjectsToNewOwner @ 0x14006CBC0 (MigrateDefunctObjectsToNewOwner.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall InsertOwnerObjList(struct _EX_RUNDOWN_REF *a1, struct _EX_RUNDOWN_REF *a2)
{
  BOOLEAN result; // al

  a2[6].Count = (unsigned __int64)a1;
  if ( a1 )
  {
    a2[7].Count = a1[3].Count;
    a1[3].Count = (unsigned __int64)a2;
    return ExAcquireRundownProtection(a1 + 4);
  }
  return result;
}
