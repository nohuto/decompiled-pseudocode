/*
 * XREFs of ObCheckObjectAccess @ 0x14086E090
 * Callers:
 *     PspReferenceCpuPartitionByHandle @ 0x140767520 (PspReferenceCpuPartitionByHandle.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x140295130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     SeAccessCheck @ 0x1403624F0 (SeAccessCheck.c)
 *     CmSiFreeMemory @ 0x14046F140 (CmSiFreeMemory.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x140854730 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     CmpSecurityMethod @ 0x140856B80 (CmpSecurityMethod.c)
 *     SepConcatenatePrivileges @ 0x140862710 (SepConcatenatePrivileges.c)
 *     ObpReferenceSecurityDescriptorSlow @ 0x140862984 (ObpReferenceSecurityDescriptorSlow.c)
 *     ObDereferenceSecurityDescriptor @ 0x14086EF20 (ObDereferenceSecurityDescriptor.c)
 *     IopGetSetSecurityObject @ 0x14086F330 (IopGetSetSecurityObject.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

char __fastcall ObCheckObjectAccess(
        ULONG_PTR *Object,
        PACCESS_STATE AccessState,
        __int64 a3,
        char a4,
        PNTSTATUS AccessStatus)
{
  unsigned __int64 v7; // r8
  ULONG_PTR v9; // r13
  signed __int64 v10; // rdx
  signed __int64 v11; // rax
  signed __int64 v12; // rbx
  unsigned int v13; // edx
  __int64 Pool2; // rbx
  char v15; // r12
  int v16; // edi
  GENERIC_MAPPING *v17; // r14
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v19; // rax
  BOOLEAN v20; // r15
  ULONG PrivilegeCount; // r8d
  _DWORD *v22; // r14
  int v23; // edx
  unsigned int v24; // r12d
  ACCESS_MASK v25; // eax
  PERESOURCE *ClientToken; // rcx
  signed __int64 v27; // rax
  signed __int64 v28; // rtt
  __int64 (__usercall *v30)@<rax>(ULONG_PTR@<rcx>, PULONG, int, int, __int64, char); // rax
  int SetSecurityObject; // eax
  unsigned int v32; // r12d
  PVOID *v33; // r14
  _DWORD *v34; // rdx
  _DWORD *v35; // r12
  __int64 v36; // rdx
  PPRIVILEGE_SET *Privileges; // [rsp+28h] [rbp-90h]
  int GenericMapping; // [rsp+30h] [rbp-88h]
  __int64 AccessMode; // [rsp+38h] [rbp-80h]
  ULONG Length; // [rsp+50h] [rbp-68h] BYREF
  DWORD v41; // [rsp+54h] [rbp-64h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+58h] [rbp-60h] BYREF
  PPRIVILEGE_SET v43; // [rsp+60h] [rbp-58h] BYREF
  unsigned int *p_PrivilegeCount; // [rsp+68h] [rbp-50h]
  PVOID *AuxData; // [rsp+70h] [rbp-48h]
  _DWORD *v46; // [rsp+78h] [rbp-40h]
  char v47; // [rsp+C0h] [rbp+8h]

  v7 = *((unsigned __int8 *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8);
  GrantedAccess = 0;
  v43 = 0LL;
  Length = 0;
  v41 = 0;
  v9 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v7];
  if ( *(_UNKNOWN **)(v9 + 152) != &SeDefaultObjectMethod )
  {
    v41 = 447;
    Length = ObpDefaultSecurityDescriptorLength;
    Pool2 = ExAllocatePool2(0x100uLL);
    if ( Pool2 )
    {
      v30 = *(__int64 (__usercall **)@<rax>(ULONG_PTR@<rcx>, PULONG, int, int, __int64, char))(v9 + 152);
      v17 = (GENERIC_MAPPING *)(v9 + 76);
      AccessMode = v9 + 76;
      GenericMapping = *(_DWORD *)(v9 + 100);
      Privileges = (PPRIVILEGE_SET *)(Object - 1);
      if ( (char *)v30 == (char *)CmpSecurityMethod )
      {
        SetSecurityObject = CmpSecurityMethod(
                              Object,
                              1,
                              &v41,
                              (void *)Pool2,
                              &Length,
                              (__int64)Privileges,
                              GenericMapping,
                              AccessMode);
      }
      else if ( v30 == IopGetSetSecurityObject )
      {
        SetSecurityObject = IopGetSetSecurityObject(
                              (ULONG_PTR)Object,
                              &Length,
                              (int)Privileges,
                              GenericMapping,
                              AccessMode,
                              a4);
      }
      else
      {
        SetSecurityObject = guard_dispatch_icall_no_overrides(Object);
      }
      v16 = SetSecurityObject;
      if ( SetSecurityObject != -1073741789 )
        goto LABEL_35;
      ExFreePoolWithTag((PVOID)Pool2, 0);
      ObpDefaultSecurityDescriptorLength = Length;
      Pool2 = ExAllocatePool2(0x100uLL);
      if ( Pool2 )
      {
        v16 = guard_dispatch_icall_no_overrides(Object);
LABEL_35:
        if ( v16 < 0 )
        {
          ExFreePoolWithTag((PVOID)Pool2, 0);
          *AccessStatus = v16;
          return 0;
        }
        v15 = 1;
        v47 = 1;
        goto LABEL_10;
      }
    }
    *AccessStatus = -1073741670;
    return 0;
  }
  _m_prefetchw(Object - 1);
  v10 = *(Object - 1);
  if ( (v10 & 0xF) != 0 )
  {
    do
    {
      v11 = _InterlockedCompareExchange64((volatile signed __int64 *)Object - 1, v10 - 1, v10);
      if ( v10 == v11 )
        break;
      v10 = v11;
    }
    while ( (v11 & 0xF) != 0 );
  }
  v12 = v10;
  v13 = v10 & 0xF;
  Pool2 = v12 & 0xFFFFFFFFFFFFFFF0uLL;
  if ( v13 <= 1 && Pool2 )
    Pool2 = ObpReferenceSecurityDescriptorSlow((__int64)(Object - 6), v13, Pool2);
  v15 = 0;
  v47 = 0;
  if ( !Pool2 && ((*(_BYTE *)(v9 + 66) & 8) != 0 || (*((_BYTE *)Object - 22) & 2) != 0) )
    KeBugCheckEx(0x189u, (ULONG_PTR)(Object - 6), v9, 1uLL, 0LL);
  v16 = 0;
  v17 = (GENERIC_MAPPING *)(v9 + 76);
LABEL_10:
  if ( Pool2 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(*((PERESOURCE *)AccessState->SubjectSecurityContext.PrimaryToken + 6), 1u);
    if ( AccessState->SubjectSecurityContext.ClientToken )
    {
      v19 = KeGetCurrentThread();
      --v19->KernelApcDisable;
      ExAcquireResourceSharedLite(*((PERESOURCE *)AccessState->SubjectSecurityContext.ClientToken + 6), 1u);
    }
    v20 = SeAccessCheck(
            (PSECURITY_DESCRIPTOR)Pool2,
            &AccessState->SubjectSecurityContext,
            1u,
            AccessState->RemainingDesiredAccess,
            AccessState->PreviouslyGrantedAccess,
            &v43,
            v17,
            a4,
            &GrantedAccess,
            AccessStatus);
    p_PrivilegeCount = &v43->PrivilegeCount;
    if ( v43 )
    {
      PrivilegeCount = v43->PrivilegeCount;
      AuxData = (PVOID *)AccessState->AuxData;
      v22 = *AuxData;
      v23 = *(_DWORD *)*AuxData;
      if ( PrivilegeCount + v23 > 3 )
      {
        v32 = 8;
        v46 = (_DWORD *)ExAllocatePool2(0x100uLL);
        if ( v46 )
        {
          v33 = AuxData;
          v34 = *AuxData;
          if ( *AuxData )
          {
            if ( *v34 )
              v32 = 12 * *v34 + 8;
          }
          else
          {
            v32 = 0;
          }
          memmove(v46, v34, v32);
          v35 = v46;
          SepConcatenatePrivileges(v46, v36, p_PrivilegeCount);
          if ( AccessState->PrivilegesAllocated )
            ExFreePoolWithTag(*v33, 0);
          *v33 = v35;
          AccessState->PrivilegesAllocated = 1;
        }
      }
      else
      {
        if ( v22 )
        {
          if ( v23 )
            v24 = 12 * v23 + 8;
          else
            v24 = 8;
        }
        else
        {
          v24 = 0;
        }
        memmove((char *)v22 + v24, v43->Privilege, 12 * PrivilegeCount);
        *v22 += *p_PrivilegeCount;
      }
      CmSiFreeMemory(v43);
      v15 = v47;
    }
    if ( v20 )
    {
      v25 = GrantedAccess;
      AccessState->PreviouslyGrantedAccess |= GrantedAccess;
      AccessState->RemainingDesiredAccess &= ~(v25 | 0x2000000);
    }
    if ( a4 )
      SeOpenObjectAuditAlarmWithTransaction(
        (PUNICODE_STRING)(v9 + 16),
        Object,
        0LL,
        (PSECURITY_DESCRIPTOR)Pool2,
        AccessState,
        0,
        v20,
        a4,
        0LL,
        &AccessState->GenerateOnClose);
    ExReleaseResourceLite(*((PERESOURCE *)AccessState->SubjectSecurityContext.PrimaryToken + 6));
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    ClientToken = (PERESOURCE *)AccessState->SubjectSecurityContext.ClientToken;
    if ( ClientToken )
    {
      ExReleaseResourceLite(ClientToken[6]);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    }
    if ( v15 )
    {
      ExFreePoolWithTag((PVOID)Pool2, 0);
    }
    else
    {
      _m_prefetchw(Object - 1);
      v27 = *(Object - 1);
      while ( (Pool2 ^ (unsigned __int64)v27) < 0xF )
      {
        v28 = v27;
        v27 = _InterlockedCompareExchange64((volatile signed __int64 *)Object - 1, v27 + 1, v27);
        if ( v28 == v27 )
          return v20;
      }
      ObDereferenceSecurityDescriptor(Pool2, 1LL);
    }
    return v20;
  }
  else
  {
    AccessState->PreviouslyGrantedAccess |= AccessState->RemainingDesiredAccess;
    AccessState->RemainingDesiredAccess = 0;
    *AccessStatus = v16;
    return 1;
  }
}
