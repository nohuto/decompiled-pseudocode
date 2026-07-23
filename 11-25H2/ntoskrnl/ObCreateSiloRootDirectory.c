/*
 * XREFs of ObCreateSiloRootDirectory @ 0x14081AE94
 * Callers:
 *     NtSetInformationJobObject @ 0x140AC4C00 (NtSetInformationJobObject.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     PsAttachSiloToCurrentThread @ 0x14043C9E0 (PsAttachSiloToCurrentThread.c)
 *     PsDetachSiloFromCurrentThread @ 0x140443110 (PsDetachSiloFromCurrentThread.c)
 *     HalPutDmaAdapter @ 0x140482570 (HalPutDmaAdapter.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x140483BB0 (PdcCreateWatchdogAroundClientCall.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     ZwOpenDirectoryObject @ 0x14069BC40 (ZwOpenDirectoryObject.c)
 *     ZwCreateDirectoryObjectEx @ 0x14069C6E0 (ZwCreateDirectoryObjectEx.c)
 *     ObpInitializeRootNamespace @ 0x140737C88 (ObpInitializeRootNamespace.c)
 *     ObpGetSilosRootDirectory @ 0x14081B360 (ObpGetSilosRootDirectory.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     PsGetParentSilo @ 0x140862140 (PsGetParentSilo.c)
 *     RtlIntegerToUnicodeString @ 0x1408DFD70 (RtlIntegerToUnicodeString.c)
 *     PsInsertSiloContext @ 0x1409E2FC0 (PsInsertSiloContext.c)
 *     PsCreateSiloContext @ 0x1409E3340 (PsCreateSiloContext.c)
 *     PsInsertPermanentSiloContextEx @ 0x1409E3454 (PsInsertPermanentSiloContextEx.c)
 *     PsIsJobParentImmutable @ 0x140A0F0E8 (PsIsJobParentImmutable.c)
 *     PsGetSiloIdentifier @ 0x140A655F0 (PsGetSiloIdentifier.c)
 */

__int64 __fastcall ObCreateSiloRootDirectory(__int64 a1, int a2)
{
  struct _DMA_ADAPTER *v2; // rdi
  PVOID v3; // r15
  char v4; // r14
  __int64 v6; // rbx
  struct _LIST_ENTRY *ParentSilo; // rax
  struct _LIST_ENTRY *v9; // r12
  ULONG SiloIdentifier; // eax
  int SilosRootDirectory; // ebx
  NTSTATUS v12; // eax
  struct _DMA_ADAPTER *v13; // r8
  HANDLE Handle; // [rsp+30h] [rbp-59h] BYREF
  struct _DMA_ADAPTER *v15; // [rsp+38h] [rbp-51h] BYREF
  HANDLE v16; // [rsp+40h] [rbp-49h] BYREF
  HANDLE v17; // [rsp+48h] [rbp-41h] BYREF
  HANDLE DirectoryHandle; // [rsp+50h] [rbp-39h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-31h] BYREF
  PVOID Object; // [rsp+88h] [rbp-1h] BYREF
  UNICODE_STRING String; // [rsp+90h] [rbp+7h] BYREF
  char v22; // [rsp+A0h] [rbp+17h] BYREF

  v2 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v3 = 0LL;
  Handle = 0LL;
  v4 = a2;
  DirectoryHandle = 0LL;
  v15 = 0LL;
  memset(&ObjectAttributes, 0, 44);
  if ( (a2 & 0xFFFFFFF8) != 0 || (a2 & 6) == 4 || !(unsigned __int8)PsIsJobParentImmutable() )
    return 3221225485LL;
  v6 = ((__int64 (*)(void))PsGetParentSilo)();
  if ( v6 != PdcCreateWatchdogAroundClientCall() )
    return 3221227289LL;
  ParentSilo = (struct _LIST_ENTRY *)PsGetParentSilo(a1);
  v9 = PsAttachSiloToCurrentThread(ParentSilo);
  *(_QWORD *)&String.Length = 1441792LL;
  String.Buffer = (wchar_t *)&v22;
  SiloIdentifier = PsGetSiloIdentifier(a1);
  SilosRootDirectory = RtlIntegerToUnicodeString(SiloIdentifier, 0xAu, &String);
  if ( SilosRootDirectory >= 0 )
  {
    SilosRootDirectory = ObpGetSilosRootDirectory(&v17);
    if ( SilosRootDirectory >= 0 )
    {
      if ( (v4 & 1) == 0
        || (ObjectAttributes.RootDirectory = 0LL,
            ObjectAttributes.ObjectName = (PUNICODE_STRING)&ObpRootDirectoryName,
            ObjectAttributes.Length = 48,
            ObjectAttributes.Attributes = 512,
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL,
            SilosRootDirectory = ZwOpenDirectoryObject(&DirectoryHandle, 3u, &ObjectAttributes),
            SilosRootDirectory >= 0) )
      {
        ObjectAttributes.SecurityQualityOfService = 0LL;
        ObjectAttributes.RootDirectory = v17;
        ObjectAttributes.ObjectName = &String;
        ObjectAttributes.SecurityDescriptor = (PVOID)SePublicDefaultUnrestrictedSd;
        ObjectAttributes.Length = 48;
        ObjectAttributes.Attributes = 592;
        SilosRootDirectory = ZwCreateDirectoryObjectEx(&Handle, 0xF000Fu, &ObjectAttributes, DirectoryHandle, 0);
        if ( SilosRootDirectory >= 0 )
        {
          Object = 0LL;
          v12 = ObReferenceObjectByHandle(Handle, 0xF000Fu, ObpDirectoryObjectType, 0, &Object, 0LL);
          v3 = Object;
          SilosRootDirectory = v12;
          if ( v12 >= 0 )
          {
            SilosRootDirectory = PsCreateSiloContext(
                                   a1,
                                   16,
                                   1,
                                   (unsigned int)ObpDirectoryTeardownCallback,
                                   (__int64)&v15);
            if ( SilosRootDirectory < 0 )
            {
              v2 = v15;
            }
            else
            {
              ObfReferenceObjectWithTag(v3, 0x7254624Fu);
              v2 = v15;
              v13 = v15;
              *(_QWORD *)&v15->Version = v3;
              SilosRootDirectory = PsInsertSiloContext(a1, (unsigned int)PsObjectDirectoryTeardownSlot, v13);
              if ( SilosRootDirectory >= 0 )
              {
                SilosRootDirectory = PsInsertPermanentSiloContextEx(
                                       a1,
                                       (unsigned int)PsObjectDirectorySiloContextSlot,
                                       v3,
                                       1LL);
                if ( SilosRootDirectory >= 0 && (v4 & 2) != 0 )
                {
                  if ( (v4 & 4) == 0
                    || (ObjectAttributes.RootDirectory = 0LL,
                        ObjectAttributes.ObjectName = (PUNICODE_STRING)&ObpGlobalDosDevicesShortName,
                        ObjectAttributes.Length = 48,
                        ObjectAttributes.Attributes = 512,
                        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL,
                        SilosRootDirectory = ZwOpenDirectoryObject(&v16, 3u, &ObjectAttributes),
                        SilosRootDirectory >= 0) )
                  {
                    SilosRootDirectory = ObpInitializeRootNamespace(a1, Handle, v16, (__int64)&v2->DmaOperations);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ( v16 )
    ZwClose(v16);
  if ( v17 )
    ZwClose(v17);
  if ( Handle )
    ZwClose(Handle);
  if ( v3 )
    ObfDereferenceObject(v3);
  if ( DirectoryHandle )
    ZwClose(DirectoryHandle);
  if ( v2 )
    HalPutDmaAdapter(v2);
  PsDetachSiloFromCurrentThread(v9);
  return (unsigned int)SilosRootDirectory;
}
