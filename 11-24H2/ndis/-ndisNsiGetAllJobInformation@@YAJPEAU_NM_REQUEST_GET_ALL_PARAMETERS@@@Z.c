/*
 * XREFs of ?ndisNsiGetAllJobInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x140029370
 * Callers:
 *     <none>
 * Callees:
 *     NdisGetJobObjectCompartmentId @ 0x140029680 (NdisGetJobObjectCompartmentId.c)
 */

NTSTATUS __fastcall ndisNsiGetAllJobInformation(struct _NM_REQUEST_GET_ALL_PARAMETERS *a1)
{
  int v1; // eax
  _DWORD *v2; // rbx
  void *v3; // rcx
  NTSTATUS result; // eax
  PVOID v5; // rdi
  PVOID Object; // [rsp+40h] [rbp+8h] BYREF

  v1 = *((_DWORD *)a1 + 8);
  if ( !v1 )
  {
    v2 = (_DWORD *)*((_QWORD *)a1 + 5);
    if ( v2 )
    {
      v3 = (void *)**((_QWORD **)a1 + 2);
      Object = 0LL;
      result = ObReferenceObjectByHandle(v3, 4u, (POBJECT_TYPE)PsJobType, 1, &Object, 0LL);
      v5 = Object;
      if ( result < 0 )
        return result;
      *v2 = NdisGetJobObjectCompartmentId(Object);
      ObfDereferenceObject(v5);
    }
    return 0;
  }
  if ( (unsigned int)(v1 - 1) > 1 )
    return -1073741811;
  else
    return -1073741822;
}
