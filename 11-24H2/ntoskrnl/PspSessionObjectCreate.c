/*
 * XREFs of PspSessionObjectCreate @ 0x14077BC7C
 * Callers:
 *     PsSessionCreate @ 0x1406F53F8 (PsSessionCreate.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     KeInitializeEvent @ 0x140402260 (KeInitializeEvent.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     RtlLengthSid @ 0x14044B2D0 (RtlLengthSid.c)
 *     KeInsertSchedulingGroup @ 0x14045CB04 (KeInsertSchedulingGroup.c)
 *     RtlStringCchPrintfW @ 0x140472F38 (RtlStringCchPrintfW.c)
 *     KeGetSchedulingGroupSize @ 0x1404A79C0 (KeGetSchedulingGroupSize.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ObInsertObjectEx @ 0x140853900 (ObInsertObjectEx.c)
 *     RtlCreateAcl @ 0x140858810 (RtlCreateAcl.c)
 *     ObCreateObjectEx @ 0x1408A4B90 (ObCreateObjectEx.c)
 *     RtlpAddKnownAce @ 0x140911480 (RtlpAddKnownAce.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1409DFF30 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x1409E16D0 (RtlCreateSecurityDescriptor.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

NTSTATUS PspSessionObjectCreate()
{
  NTSTATUS result; // eax
  ULONG v1; // ebx
  ULONG v2; // edi
  ACL *Pool2; // rax
  ACL *v4; // rbx
  NTSTATUS Acl; // edi
  ACL *v6; // rcx
  unsigned __int64 CycleTime; // rdi
  int Object; // esi
  unsigned int SchedulingGroupSize; // eax
  struct _KSCHEDULING_GROUP *v10; // rax
  NTSTATUS v11; // ebx
  __int64 v12; // [rsp+68h] [rbp-A0h] BYREF
  _DWORD v13[2]; // [rsp+70h] [rbp-98h] BYREF
  __int64 v14; // [rsp+78h] [rbp-90h]
  UNICODE_STRING *p_DestinationString; // [rsp+80h] [rbp-88h]
  int v16; // [rsp+88h] [rbp-80h]
  int v17; // [rsp+8Ch] [rbp-7Ch]
  _OWORD *v18; // [rsp+90h] [rbp-78h]
  __int64 v19; // [rsp+98h] [rbp-70h]
  UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-68h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v22; // [rsp+D0h] [rbp-38h]
  wchar_t pszDest[128]; // [rsp+D8h] [rbp-30h] BYREF

  v12 = 0LL;
  v13[1] = 0;
  v17 = 0;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v22 = 0LL;
  DestinationString = 0LL;
  result = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  if ( result < 0 )
    return result;
  v1 = RtlLengthSid(SeAliasAdminsSid);
  v2 = v1 + RtlLengthSid(SeLocalSystemSid) + 32;
  Pool2 = (ACL *)ExAllocatePool2(0x100uLL, v2, 0x6C636144u);
  v4 = Pool2;
  if ( !Pool2 )
    return -1073741670;
  Acl = RtlCreateAcl(Pool2, v2, 2u);
  v6 = v4;
  if ( Acl < 0 || (Acl = RtlpAddKnownAce((int)v4, 2, 0, 983043, SeAliasAdminsSid, 0), v6 = v4, Acl < 0) )
  {
LABEL_5:
    ExFreePoolWithTag(v6, 0);
    return Acl;
  }
  Acl = RtlpAddKnownAce((int)v4, 2, 0, 983043, SeLocalSystemSid, 0);
  if ( Acl < 0 || (Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v4, 0), Acl < 0) )
  {
    v6 = v4;
    goto LABEL_5;
  }
  CycleTime = KeGetCurrentThread()->ApcState.Process[1].CycleTime;
  Object = RtlStringCchPrintfW(pszDest, 0x80uLL, L"\\KernelObjects\\Session%d", *(unsigned int *)(CycleTime + 8));
  if ( Object < 0 )
  {
    ExFreePoolWithTag(v4, 0);
    return Object;
  }
  RtlInitUnicodeString(&DestinationString, pszDest);
  p_DestinationString = &DestinationString;
  v13[0] = 48;
  v18 = SecurityDescriptor;
  v14 = 0LL;
  v16 = 512;
  v19 = 0LL;
  Object = ObCreateObjectEx(0, (_DWORD)MmSessionObjectType, (unsigned int)v13, 0);
  ExFreePoolWithTag(v4, 0);
  if ( Object < 0 )
    return Object;
  MEMORY[0x18] = CycleTime;
  KeInitializeEvent(0LL, NotificationEvent, 0);
  MEMORY[0x20] = 0LL;
  if ( PsCpuFairShareEnabled && *(_DWORD *)(CycleTime + 8) )
  {
    SchedulingGroupSize = KeGetSchedulingGroupSize();
    v10 = (struct _KSCHEDULING_GROUP *)ExAllocatePool2(0x48uLL, SchedulingGroupSize, 0x70724753u);
    MEMORY[0x20] = v10;
    if ( !v10 )
    {
      ObfDereferenceObjectWithTag(0LL, 0x73536D4Du);
      return -1073741670;
    }
    KeInsertSchedulingGroup(v10, (_KSCHEDULING_GROUP_POLICY)5LL, 0LL);
  }
  result = ObInsertObjectEx(0LL, 0, 0LL, (__int64)&v12);
  v11 = result;
  if ( result >= 0 )
  {
    *(_DWORD *)(CycleTime + 4) |= 4u;
    _InterlockedIncrement((volatile signed __int32 *)(CycleTime + 12));
    *(_QWORD *)(CycleTime + 40) = v12;
    *(_QWORD *)(CycleTime + 32) = 0LL;
    *(_DWORD *)(CycleTime + 128) = 2;
    *(_DWORD *)(CycleTime + 132) = 1;
    KeInitializeEvent((PRKEVENT)(CycleTime + 136), SynchronizationEvent, 1u);
    return v11;
  }
  return result;
}
