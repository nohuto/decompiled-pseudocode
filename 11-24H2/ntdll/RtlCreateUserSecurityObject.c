/*
 * XREFs of RtlCreateUserSecurityObject @ 0x180131A80
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     RtlpNewSecurityObject @ 0x1800C0E40 (RtlpNewSecurityObject.c)
 *     RtlCreateAndSetSD @ 0x1800C5E10 (RtlCreateAndSetSD.c)
 */

NTSTATUS __cdecl RtlCreateUserSecurityObject(
        PRTL_ACE_DATA AceData,
        ULONG AceCount,
        PSID OwnerSid,
        PSID GroupSid,
        BOOLEAN IsDirectoryObject,
        PGENERIC_MAPPING GenericMapping,
        PSECURITY_DESCRIPTOR *NewSecurityDescriptor)
{
  void *ProcessHeap; // rdi
  NTSTATUS result; // eax
  NTSTATUS v9; // ebx
  PVOID BaseAddress; // [rsp+50h] [rbp-18h] BYREF

  BaseAddress = 0LL;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  result = RtlCreateAndSetSD(AceData, AceCount, OwnerSid, GroupSid, &BaseAddress);
  if ( result >= 0 )
  {
    v9 = RtlpNewSecurityObject(
           0LL,
           BaseAddress,
           NewSecurityDescriptor,
           0LL,
           0,
           IsDirectoryObject,
           0,
           (HANDLE)0xFFFFFFFFFFFFFFFCLL,
           GenericMapping);
    RtlFreeHeap(ProcessHeap, 0, BaseAddress);
    return v9;
  }
  return result;
}
