/*
 * XREFs of ObpInitializeRootNamespace @ 0x140743CA8
 * Callers:
 *     ObCreateSiloRootDirectory @ 0x14082ABD4 (ObCreateSiloRootDirectory.c)
 *     ObInitSystem @ 0x140C612B4 (ObInitSystem.c)
 * Callees:
 *     PsIsHostSilo @ 0x14043E2E0 (PsIsHostSilo.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     ZwOpenDirectoryObject @ 0x1406A6F10 (ZwOpenDirectoryObject.c)
 *     ZwCreateDirectoryObject @ 0x1406A7990 (ZwCreateDirectoryObject.c)
 *     ZwCreateDirectoryObjectEx @ 0x1406A79B0 (ZwCreateDirectoryObjectEx.c)
 *     ZwCreateSymbolicLinkObject @ 0x1406A7D10 (ZwCreateSymbolicLinkObject.c)
 *     ZwSetInformationSymbolicLink @ 0x1406A9990 (ZwSetInformationSymbolicLink.c)
 *     ObCleanupSecurityDescriptor @ 0x140742E54 (ObCleanupSecurityDescriptor.c)
 *     ObCreateKernelObjectsSD @ 0x140742EC8 (ObCreateKernelObjectsSD.c)
 *     ObpCreateDosDevicesDirectory @ 0x14074375C (ObpCreateDosDevicesDirectory.c)
 *     ObReferenceObjectByHandle @ 0x14084AF40 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall ObpInitializeRootNamespace(__int64 a1, void *a2, __int64 a3, __int64 a4)
{
  bool IsHostSilo; // di
  int KernelObjectsSD; // ebx
  bool v10; // sf
  HANDLE Handle; // [rsp+38h] [rbp-39h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-31h] BYREF
  int v14; // [rsp+70h] [rbp-1h]
  HANDLE DirectoryHandle; // [rsp+78h] [rbp+7h] BYREF
  PVOID Object; // [rsp+80h] [rbp+Fh] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+88h] [rbp+17h] BYREF
  __int64 v18; // [rsp+A8h] [rbp+37h]

  v14 = 0;
  Handle = 0LL;
  DirectoryHandle = 0LL;
  memset(&ObjectAttributes, 0, 44);
  IsHostSilo = PsIsHostSilo(a1);
  v18 = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  KernelObjectsSD = ObCreateKernelObjectsSD(SecurityDescriptor);
  if ( KernelObjectsSD >= 0 )
  {
    if ( IsHostSilo
      || (ObjectAttributes.RootDirectory = 0LL,
          ObjectAttributes.ObjectName = (PUNICODE_STRING)&ObpKernelObjectsPathString,
          ObjectAttributes.Length = 48,
          ObjectAttributes.Attributes = 592,
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL,
          KernelObjectsSD = ZwOpenDirectoryObject(&DirectoryHandle, 0xF000Fu, &ObjectAttributes),
          KernelObjectsSD >= 0) )
    {
      ObjectAttributes.SecurityQualityOfService = 0LL;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&ObpKernelObjectsNameString;
      ObjectAttributes.Length = 48;
      ObjectAttributes.SecurityDescriptor = SecurityDescriptor;
      ObjectAttributes.RootDirectory = a2;
      ObjectAttributes.Attributes = 592;
      KernelObjectsSD = ZwCreateDirectoryObjectEx((__int64)&Handle, 983055LL);
      if ( KernelObjectsSD >= 0 )
      {
        ZwClose(Handle);
        Handle = 0LL;
        ObjectAttributes.ObjectName = (PUNICODE_STRING)&ObpObjectTypesNameString;
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = a2;
        ObjectAttributes.Attributes = 592;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        if ( IsHostSilo )
        {
          KernelObjectsSD = ZwCreateDirectoryObject(&Handle, 0xF000Fu, &ObjectAttributes);
          if ( KernelObjectsSD < 0 )
            goto LABEL_12;
          Object = 0LL;
          KernelObjectsSD = ObReferenceObjectByHandle(Handle, 0, ObpDirectoryObjectType, 0, &Object, 0LL);
          ObpTypeDirectoryObject = Object;
          v10 = KernelObjectsSD < 0;
        }
        else
        {
          KernelObjectsSD = ZwCreateSymbolicLinkObject((__int64)&Handle, 983041LL);
          if ( KernelObjectsSD < 0 )
            goto LABEL_12;
          KernelObjectsSD = ZwSetInformationSymbolicLink((__int64)Handle, 1LL);
          v10 = KernelObjectsSD < 0;
        }
        if ( !v10 )
          KernelObjectsSD = ObpCreateDosDevicesDirectory(a1, a2, a3, a4);
      }
    }
  }
LABEL_12:
  if ( Handle )
    ZwClose(Handle);
  if ( DirectoryHandle )
    ZwClose(DirectoryHandle);
  ObCleanupSecurityDescriptor(SecurityDescriptor);
  return (unsigned int)KernelObjectsSD;
}
