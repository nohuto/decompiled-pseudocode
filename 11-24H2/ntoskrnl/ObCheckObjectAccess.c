/*
 * XREFs of ObCheckObjectAccess @ 0x14087E5F0
 * Callers:
 *     PspReferenceCpuPartitionByHandle @ 0x140777110 (PspReferenceCpuPartitionByHandle.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140321360 (ExAcquireResourceSharedLite.c)
 *     SeAccessCheck @ 0x1403B6900 (SeAccessCheck.c)
 *     CmSiFreeMemory @ 0x140464550 (CmSiFreeMemory.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x14084CBA0 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     CmpSecurityMethod @ 0x14084F0D0 (CmpSecurityMethod.c)
 *     IopGetSetSecurityObject @ 0x14087DA20 (IopGetSetSecurityObject.c)
 *     ObDereferenceSecurityDescriptor @ 0x14087E040 (ObDereferenceSecurityDescriptor.c)
 *     ObpReferenceSecurityDescriptorSlow @ 0x14087EDAC (ObpReferenceSecurityDescriptorSlow.c)
 *     SepConcatenatePrivileges @ 0x1409C23F0 (SepConcatenatePrivileges.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

char __fastcall ObCheckObjectAccess(
        ULONG_PTR *BugCheckParameter2,
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
  signed __int64 v13; // rdx
  unsigned __int64 Pool2; // rbx
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
  __int64 (__fastcall *v30)(__int64, int, DWORD *, __int16 *, PULONG, int, int, __int64, char); // rax
  int SetSecurityObject; // eax
  unsigned int v32; // r12d
  int v33; // ecx
  int v34; // eax
  PVOID *v35; // r14
  _DWORD *v36; // rdx
  void *v37; // r12
  __int64 v38; // rdx
  PPRIVILEGE_SET *Privileges; // [rsp+28h] [rbp-90h]
  int GenericMapping; // [rsp+30h] [rbp-88h]
  __int64 AccessMode; // [rsp+38h] [rbp-80h]
  ULONG Length; // [rsp+50h] [rbp-68h] BYREF
  DWORD v43; // [rsp+54h] [rbp-64h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+58h] [rbp-60h] BYREF
  PPRIVILEGE_SET v45; // [rsp+60h] [rbp-58h] BYREF
  PPRIVILEGE_SET v46; // [rsp+68h] [rbp-50h]
  PVOID *AuxData; // [rsp+70h] [rbp-48h]
  void *v48; // [rsp+78h] [rbp-40h]
  char v49; // [rsp+C0h] [rbp+8h]

  v7 = *((unsigned __int8 *)BugCheckParameter2 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)BugCheckParameter2 - 48) >> 8);
  GrantedAccess = 0;
  v45 = 0LL;
  Length = 0;
  v43 = 0;
  v9 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v7];
  if ( *(__int64 (__fastcall **)(__int64, int, DWORD *, unsigned __int64, ULONG *, __int64 *, int, __int64))(v9 + 152) != SeDefaultObjectMethod )
  {
    v43 = 447;
    Length = ObpDefaultSecurityDescriptorLength;
    Pool2 = ExAllocatePool2(0x100uLL, (unsigned int)ObpDefaultSecurityDescriptorLength, 0x7153624Fu);
    if ( Pool2 )
    {
      v30 = *(__int64 (__fastcall **)(__int64, int, DWORD *, __int16 *, PULONG, int, int, __int64, char))(v9 + 152);
      v17 = (GENERIC_MAPPING *)(v9 + 76);
      AccessMode = v9 + 76;
      GenericMapping = *(_DWORD *)(v9 + 100);
      Privileges = (PPRIVILEGE_SET *)(BugCheckParameter2 - 1);
      if ( (char *)v30 == (char *)CmpSecurityMethod )
      {
        SetSecurityObject = CmpSecurityMethod(
                              BugCheckParameter2,
                              1,
                              &v43,
                              (void *)Pool2,
                              &Length,
                              (__int64)Privileges,
                              GenericMapping,
                              AccessMode);
      }
      else if ( v30 == IopGetSetSecurityObject )
      {
        SetSecurityObject = IopGetSetSecurityObject(
                              (__int64)BugCheckParameter2,
                              1,
                              &v43,
                              (__int16 *)Pool2,
                              &Length,
                              (int)Privileges,
                              GenericMapping,
                              AccessMode,
                              a4);
      }
      else
      {
        SetSecurityObject = guard_dispatch_icall_no_overrides(BugCheckParameter2, 1LL);
      }
      v16 = SetSecurityObject;
      if ( SetSecurityObject != -1073741789 )
        goto LABEL_35;
      ExFreePoolWithTag((PVOID)Pool2, 0);
      ObpDefaultSecurityDescriptorLength = Length;
      Pool2 = ExAllocatePool2(0x100uLL, Length, 0x7153624Fu);
      if ( Pool2 )
      {
        v16 = guard_dispatch_icall_no_overrides(BugCheckParameter2, 1LL);
LABEL_35:
        if ( v16 < 0 )
        {
          ExFreePoolWithTag((PVOID)Pool2, 0);
          *AccessStatus = v16;
          return 0;
        }
        v15 = 1;
        v49 = 1;
        goto LABEL_10;
      }
    }
    *AccessStatus = -1073741670;
    return 0;
  }
  _m_prefetchw(BugCheckParameter2 - 1);
  v10 = *(BugCheckParameter2 - 1);
  if ( (v10 & 0xF) != 0 )
  {
    do
    {
      v11 = _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2 - 1, v10 - 1, v10);
      if ( v10 == v11 )
        break;
      v10 = v11;
    }
    while ( (v11 & 0xF) != 0 );
  }
  v12 = v10;
  v13 = v10 & 0xF;
  Pool2 = v12 & 0xFFFFFFFFFFFFFFF0uLL;
  if ( (unsigned int)v13 <= 1 && Pool2 )
    Pool2 = ObpReferenceSecurityDescriptorSlow(BugCheckParameter2 - 6, v13, Pool2);
  v15 = 0;
  v49 = 0;
  if ( !Pool2 && ((*(_BYTE *)(v9 + 66) & 8) != 0 || (*((_BYTE *)BugCheckParameter2 - 22) & 2) != 0) )
    KeBugCheckEx(0x189u, (ULONG_PTR)(BugCheckParameter2 - 6), v9, 1uLL, 0LL);
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
            &v45,
            v17,
            a4,
            &GrantedAccess,
            AccessStatus);
    v46 = v45;
    if ( v45 )
    {
      PrivilegeCount = v45->PrivilegeCount;
      AuxData = (PVOID *)AccessState->AuxData;
      v22 = *AuxData;
      v23 = *(_DWORD *)*AuxData;
      if ( PrivilegeCount + v23 > 3 )
      {
        v32 = 8;
        if ( PrivilegeCount )
          v33 = 12 * PrivilegeCount + 8;
        else
          v33 = 8;
        if ( v22 )
        {
          if ( v23 )
            v34 = 12 * v23 + 8;
          else
            v34 = 8;
        }
        else
        {
          v34 = 0;
        }
        v48 = (void *)ExAllocatePool2(0x100uLL, (unsigned int)(v33 + v34), 0x72506553u);
        if ( v48 )
        {
          v35 = AuxData;
          v36 = *AuxData;
          if ( *AuxData )
          {
            if ( *v36 )
              v32 = 12 * *v36 + 8;
          }
          else
          {
            v32 = 0;
          }
          memmove(v48, v36, v32);
          v37 = v48;
          SepConcatenatePrivileges(v48, v38, v46);
          if ( AccessState->PrivilegesAllocated )
            ExFreePoolWithTag(*v35, 0);
          *v35 = v37;
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
        memmove((char *)v22 + v24, v45->Privilege, 12 * PrivilegeCount);
        *v22 += v46->PrivilegeCount;
      }
      CmSiFreeMemory(v45);
      v15 = v49;
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
        BugCheckParameter2,
        0LL,
        (PSECURITY_DESCRIPTOR)Pool2,
        AccessState,
        0,
        v20,
        a4,
        0LL,
        &AccessState->GenerateOnClose);
    ExReleaseResourceLite(*((PERESOURCE *)AccessState->SubjectSecurityContext.PrimaryToken + 6));
    KeLeaveCriticalRegionThread();
    ClientToken = (PERESOURCE *)AccessState->SubjectSecurityContext.ClientToken;
    if ( ClientToken )
    {
      ExReleaseResourceLite(ClientToken[6]);
      KeLeaveCriticalRegionThread();
    }
    if ( v15 )
    {
      ExFreePoolWithTag((PVOID)Pool2, 0);
    }
    else
    {
      _m_prefetchw(BugCheckParameter2 - 1);
      v27 = *(BugCheckParameter2 - 1);
      while ( (Pool2 ^ v27) < 0xF )
      {
        v28 = v27;
        v27 = _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2 - 1, v27 + 1, v27);
        if ( v28 == v27 )
          return v20;
      }
      ObDereferenceSecurityDescriptor(Pool2, 1u);
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
