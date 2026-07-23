/*
 * XREFs of RtlDefaultNpAcl @ 0x180065B00
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlpAddKnownAce @ 0x18005F780 (RtlpAddKnownAce.c)
 *     RtlCreateAcl @ 0x180065F00 (RtlCreateAcl.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlGetAppContainerSidType @ 0x1800847C0 (RtlGetAppContainerSidType.c)
 *     RtlGetAppContainerParent @ 0x180084AF0 (RtlGetAppContainerParent.c)
 *     NtQueryInformationToken @ 0x180163640 (NtQueryInformationToken.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

NTSTATUS __cdecl RtlDefaultNpAcl(PACL *Acl)
{
  PVOID v2; // rdi
  void *ProcessHeap; // rcx
  PVOID Heap; // r15
  int AppContainerParent; // ebx
  int v6; // edx
  ULONG v7; // ebx
  ACL *v8; // rax
  unsigned __int8 *v9; // r14
  ACL *v10; // rcx
  ACL *v11; // rcx
  ACL *v12; // rcx
  ACL *v13; // rcx
  ULONG ReturnLength; // [rsp+40h] [rbp-30h] BYREF
  int TokenInformation; // [rsp+44h] [rbp-2Ch] BYREF
  _APPCONTAINER_SID_TYPE AppContainerSidType; // [rsp+48h] [rbp-28h] BYREF
  PVOID BaseAddress; // [rsp+50h] [rbp-20h] BYREF
  __int16 Sid; // [rsp+58h] [rbp-18h] BYREF
  int v20; // [rsp+5Ah] [rbp-16h]
  __int16 v21; // [rsp+5Eh] [rbp-12h]
  int v22; // [rsp+60h] [rbp-10h]
  int v23; // [rsp+64h] [rbp-Ch]

  ReturnLength = 0;
  TokenInformation = 0;
  *Acl = 0LL;
  v2 = 0LL;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  BaseAddress = 0LL;
  AppContainerSidType = NotAppContainerSidType;
  Heap = RtlAllocateHeap(ProcessHeap, 0, 0x4CuLL);
  if ( Heap )
  {
    AppContainerParent = NtQueryInformationToken((HANDLE)0xFFFFFFFFFFFFFFFALL, 4u, Heap, 0x4Cu, &ReturnLength);
    if ( AppContainerParent < 0 )
      goto LABEL_19;
    if ( NtQueryInformationToken((HANDLE)0xFFFFFFFFFFFFFFFALL, 0x1Du, &TokenInformation, 4u, &ReturnLength) >= 0
      && TokenInformation )
    {
      v2 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x4CuLL);
      if ( !v2 )
      {
        AppContainerParent = -1073741801;
        goto LABEL_19;
      }
      AppContainerParent = NtQueryInformationToken((HANDLE)0xFFFFFFFFFFFFFFFALL, 0x1Fu, v2, 0x4Cu, &ReturnLength);
      if ( AppContainerParent < 0 )
        goto LABEL_16;
      AppContainerParent = RtlGetAppContainerSidType(*(PSID *)v2, &AppContainerSidType);
      if ( AppContainerParent < 0 )
        goto LABEL_16;
      if ( AppContainerSidType == ChildAppContainerSidType )
      {
        AppContainerParent = RtlGetAppContainerParent(*(PSID *)v2, &BaseAddress);
        if ( AppContainerParent < 0 )
          goto LABEL_16;
      }
    }
    v6 = 52;
    if ( v2 )
      v6 = 4 * *(unsigned __int8 *)(*(_QWORD *)v2 + 1LL) + 68;
    if ( BaseAddress )
      v6 += 4 * *((unsigned __int8 *)BaseAddress + 1) + 16;
    v7 = v6 + 4 * (*(unsigned __int8 *)(*(_QWORD *)Heap + 1LL) + 14);
    v8 = (ACL *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
    v9 = (unsigned __int8 *)BaseAddress;
    *Acl = v8;
    if ( v8 )
    {
      RtlCreateAcl(v8, v7, 2u);
      v10 = *Acl;
      Sid = 257;
      v20 = 0;
      v21 = 1280;
      v22 = 18;
      RtlpAddKnownAce(v10, 2u, 0, 0x10000000, (unsigned __int8 *)&Sid, 0);
      v11 = *Acl;
      Sid = 513;
      v20 = 0;
      v21 = 1280;
      v22 = 32;
      v23 = 544;
      RtlpAddKnownAce(v11, 2u, 0, 0x10000000, (unsigned __int8 *)&Sid, 0);
      if ( v2 )
        RtlpAddKnownAce(*Acl, 2u, 0, 0x10000000, *(unsigned __int8 **)v2, 0);
      if ( v9 )
        RtlpAddKnownAce(*Acl, 2u, 0, 0x10000000, v9, 0);
      RtlpAddKnownAce(*Acl, 2u, 0, 0x10000000, *(unsigned __int8 **)Heap, 0);
      v12 = *Acl;
      v20 = 0;
      v22 = 0;
      v21 = 256;
      Sid = 257;
      RtlpAddKnownAce(v12, 2u, 0, 0x80000000, (unsigned __int8 *)&Sid, 0);
      v13 = *Acl;
      Sid = 257;
      v20 = 0;
      v21 = 1280;
      v22 = 7;
      RtlpAddKnownAce(v13, 2u, 0, 0x80000000, (unsigned __int8 *)&Sid, 0);
      AppContainerParent = 0;
    }
    else
    {
      AppContainerParent = -1073741801;
    }
    if ( v2 )
    {
LABEL_16:
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v2);
      v9 = (unsigned __int8 *)BaseAddress;
    }
    if ( v9 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
LABEL_19:
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
    if ( AppContainerParent >= 0 )
      return AppContainerParent;
    goto LABEL_30;
  }
  AppContainerParent = -1073741801;
LABEL_30:
  if ( *Acl )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, *Acl);
    *Acl = 0LL;
  }
  return AppContainerParent;
}
