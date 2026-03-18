/*
 * XREFs of NtDCompositionCreateSharedResourceHandle @ 0x140194530
 * Callers:
 *     <none>
 * Callees:
 *     CreateSharedResourceObject @ 0x14007390C (CreateSharedResourceObject.c)
 *     ?OpenSharedHandle@CSharedSystemResource@DirectComposition@@QEBAJKPEAPEAX@Z @ 0x14010C748 (-OpenSharedHandle@CSharedSystemResource@DirectComposition@@QEBAJKPEAPEAX@Z.c)
 */

__int64 __fastcall NtDCompositionCreateSharedResourceHandle(void *a1, _QWORD *a2)
{
  NTSTATUS SharedResourceObject; // ebx
  __int64 v4; // rdx
  PVOID v5; // rdi
  HANDLE Handle; // [rsp+40h] [rbp+18h] BYREF
  PVOID Object; // [rsp+48h] [rbp+20h] BYREF

  SharedResourceObject = 0;
  Object = 0LL;
  Handle = 0LL;
  if ( (_DWORD)a1 != 19 && (_DWORD)a1 != 130 && (_DWORD)a1 != 184 )
    SharedResourceObject = -1073741811;
  if ( SharedResourceObject >= 0 )
  {
    SharedResourceObject = CreateSharedResourceObject(a1, (struct DirectComposition::ResourceObject **)&Object);
    v5 = Object;
    if ( SharedResourceObject >= 0 )
    {
      SharedResourceObject = DirectComposition::CSharedSystemResource::OpenSharedHandle(
                               (DirectComposition::CSharedSystemResource *)((char *)Object + 24),
                               v4,
                               &Handle);
      ObfDereferenceObject(v5);
      if ( SharedResourceObject >= 0 )
      {
        if ( (unsigned __int64)a2 >= MmUserProbeAddress )
          a2 = (_QWORD *)MmUserProbeAddress;
        *a2 = Handle;
      }
    }
  }
  return (unsigned int)SharedResourceObject;
}
