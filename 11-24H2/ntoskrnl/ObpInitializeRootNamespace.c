/*
 * XREFs of ObpInitializeRootNamespace @ 0x140741BD8
 * Callers:
 *     ObCreateSiloRootDirectory @ 0x14082B404 (ObCreateSiloRootDirectory.c)
 *     ObInitSystem @ 0x140C63408 (ObInitSystem.c)
 * Callees:
 *     PsIsHostSilo @ 0x1404329D0 (PsIsHostSilo.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwOpenDirectoryObject @ 0x1406A7EB0 (ZwOpenDirectoryObject.c)
 *     ZwCreateDirectoryObject @ 0x1406A8930 (ZwCreateDirectoryObject.c)
 *     ZwCreateDirectoryObjectEx @ 0x1406A8950 (ZwCreateDirectoryObjectEx.c)
 *     ZwCreateSymbolicLinkObject @ 0x1406A8CB0 (ZwCreateSymbolicLinkObject.c)
 *     ZwSetInformationSymbolicLink @ 0x1406AA930 (ZwSetInformationSymbolicLink.c)
 *     ObCleanupSecurityDescriptor @ 0x140740D84 (ObCleanupSecurityDescriptor.c)
 *     ObCreateKernelObjectsSD @ 0x140740DF8 (ObCreateKernelObjectsSD.c)
 *     ObpCreateDosDevicesDirectory @ 0x14074168C (ObpCreateDosDevicesDirectory.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall ObpInitializeRootNamespace(__int64 a1, void *a2, void *a3, __int64 a4)
{
  bool IsHostSilo; // di
  int KernelObjectsSD; // ebx
  bool v10; // sf
  HANDLE Handle; // [rsp+38h] [rbp-39h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-31h] BYREF
  int SymbolicLinkInformation; // [rsp+70h] [rbp-1h] BYREF
  HANDLE DirectoryHandle; // [rsp+78h] [rbp+7h] BYREF
  PVOID Object; // [rsp+80h] [rbp+Fh] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+88h] [rbp+17h] BYREF
  __int64 v18; // [rsp+A8h] [rbp+37h]

  SymbolicLinkInformation = 0;
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
      KernelObjectsSD = ZwCreateDirectoryObjectEx(&Handle, 0xF000Fu, &ObjectAttributes, DirectoryHandle, 0);
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
          KernelObjectsSD = ZwCreateSymbolicLinkObject(
                              &Handle,
                              0xF0001u,
                              &ObjectAttributes,
                              (PUNICODE_STRING)&ObpObjectTypesPathString);
          if ( KernelObjectsSD < 0 )
            goto LABEL_12;
          KernelObjectsSD = ZwSetInformationSymbolicLink(
                              Handle,
                              SymbolicLinkGlobalInformation,
                              &SymbolicLinkInformation,
                              4u);
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
