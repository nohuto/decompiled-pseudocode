/*
 * XREFs of NtDeletePrivateNamespace @ 0x1406F7940
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x14084AF40 (ObReferenceObjectByHandle.c)
 *     ObpVerifyCreatorAccessCheck @ 0x140A09994 (ObpVerifyCreatorAccessCheck.c)
 *     ObpRemoveNamespaceFromTable @ 0x140A1468C (ObpRemoveNamespaceFromTable.c)
 */

NTSTATUS __fastcall NtDeletePrivateNamespace(void *a1)
{
  NTSTATUS result; // eax
  PVOID v2; // rbx
  int v3; // edi
  PVOID Object; // [rsp+48h] [rbp+10h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v5; // [rsp+50h] [rbp+18h] BYREF

  v5 = 0LL;
  Object = 0LL;
  result = ObReferenceObjectByHandle(
             a1,
             0x10000u,
             ObpDirectoryObjectType,
             KeGetCurrentThread()->PreviousMode,
             &Object,
             &v5);
  if ( result >= 0 )
  {
    v2 = Object;
    if ( *((_QWORD *)Object + 40) )
    {
      v3 = ObpVerifyCreatorAccessCheck((char *)Object + 392);
      if ( v3 >= 0 )
        v3 = ObpRemoveNamespaceFromTable(v2);
    }
    else
    {
      v3 = -1073741816;
    }
    ObfDereferenceObject(v2);
    return v3;
  }
  return result;
}
