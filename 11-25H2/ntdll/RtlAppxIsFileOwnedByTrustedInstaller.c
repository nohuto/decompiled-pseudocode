/*
 * XREFs of RtlAppxIsFileOwnedByTrustedInstaller @ 0x180133630
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlEqualSid @ 0x180084E60 (RtlEqualSid.c)
 *     RtlCreateServiceSid @ 0x1800CD150 (RtlCreateServiceSid.c)
 *     RtlGetOwnerSecurityDescriptor @ 0x1800EDE40 (RtlGetOwnerSecurityDescriptor.c)
 *     NtQuerySecurityObject @ 0x180165F10 (NtQuerySecurityObject.c)
 */

NTSTATUS __cdecl RtlAppxIsFileOwnedByTrustedInstaller(HANDLE FileHandle, PBOOLEAN IsFileOwnedByTrustedInstaller)
{
  int OwnerSecurityDescriptor; // ebx
  PVOID Heap; // rsi
  PVOID v7; // rax
  void *v8; // rdi
  PSID Owner; // [rsp+30h] [rbp-20h] BYREF
  _UNICODE_STRING ServiceName; // [rsp+38h] [rbp-18h] BYREF
  BOOLEAN OwnerDefaulted; // [rsp+88h] [rbp+38h] BYREF
  ULONG Length; // [rsp+90h] [rbp+40h] BYREF
  ULONG ServiceSidLength; // [rsp+98h] [rbp+48h] BYREF

  Owner = 0LL;
  Length = 0;
  ServiceSidLength = 0;
  *(_QWORD *)&ServiceName.Length = 2228256LL;
  ServiceName.Buffer = L"TrustedInstaller";
  if ( !IsFileOwnedByTrustedInstaller )
    return -1073741811;
  OwnerSecurityDescriptor = NtQuerySecurityObject(FileHandle, 1u, 0LL, 0, &Length);
  if ( OwnerSecurityDescriptor == -1073741789 )
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, Length);
    if ( Heap )
    {
      OwnerSecurityDescriptor = NtQuerySecurityObject(FileHandle, 1u, Heap, Length, &Length);
      if ( OwnerSecurityDescriptor >= 0 )
      {
        OwnerSecurityDescriptor = RtlGetOwnerSecurityDescriptor(Heap, &Owner, &OwnerDefaulted);
        if ( OwnerSecurityDescriptor >= 0 )
        {
          if ( Owner )
          {
            OwnerSecurityDescriptor = RtlCreateServiceSid(&ServiceName, 0LL, &ServiceSidLength);
            if ( OwnerSecurityDescriptor == -1073741789 )
            {
              v7 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, ServiceSidLength);
              v8 = v7;
              if ( v7 )
              {
                OwnerSecurityDescriptor = RtlCreateServiceSid(&ServiceName, v7, &ServiceSidLength);
                if ( OwnerSecurityDescriptor >= 0 )
                  *IsFileOwnedByTrustedInstaller = RtlEqualSid(Owner, v8);
                RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v8);
              }
            }
          }
        }
      }
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
    }
  }
  return OwnerSecurityDescriptor;
}
