/*
 * XREFs of ObpGrantAccess @ 0x14084D650
 * Callers:
 *     ObDuplicateObject @ 0x14083C270 (ObDuplicateObject.c)
 *     ObpInsertOrLocateNamedObject @ 0x1409DF020 (ObpInsertOrLocateNamedObject.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140321360 (ExAcquireResourceSharedLite.c)
 *     SeComputeCreatorDeniedRights @ 0x1403B5DC0 (SeComputeCreatorDeniedRights.c)
 *     SeAccessCheck @ 0x1403B6900 (SeAccessCheck.c)
 *     SepPrivilegeCheck @ 0x1403FE430 (SepPrivilegeCheck.c)
 *     CmSiFreeMemory @ 0x140464550 (CmSiFreeMemory.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x14084CBA0 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     CmpSecurityMethod @ 0x14084F0D0 (CmpSecurityMethod.c)
 *     SePrivilegedServiceAuditAlarm @ 0x14084FDF0 (SePrivilegedServiceAuditAlarm.c)
 *     IopGetSetSecurityObject @ 0x14087DA20 (IopGetSetSecurityObject.c)
 *     ObDereferenceSecurityDescriptor @ 0x14087E040 (ObDereferenceSecurityDescriptor.c)
 *     ObpReferenceSecurityDescriptorSlow @ 0x14087EDAC (ObpReferenceSecurityDescriptorSlow.c)
 *     SeAppendPrivileges @ 0x1409C22A0 (SeAppendPrivileges.c)
 *     SepConcatenatePrivileges @ 0x1409C23F0 (SepConcatenatePrivileges.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ObpGrantAccess(int a1, _QWORD *a2, __int64 a3, char a4, __int16 a5, _DWORD *a6)
{
  char v7; // si
  __int16 v9; // ax
  unsigned __int64 v10; // rcx
  ULONG_PTR v11; // r13
  signed __int64 v12; // rdx
  signed __int64 v13; // rax
  signed __int64 v14; // rdi
  signed __int64 v15; // rdx
  unsigned __int64 Pool2; // rdi
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v18; // rax
  BOOLEAN v19; // r13
  ULONG PrivilegeCount; // r8d
  _DWORD *v21; // r15
  int v22; // r9d
  ACCESS_MASK v23; // ecx
  __int64 v24; // rcx
  signed __int64 v25; // rax
  signed __int64 v26; // rtt
  _DWORD *v28; // rdi
  signed int v29; // eax
  int v30; // ecx
  signed __int64 v31; // rdx
  signed __int64 v32; // rax
  signed __int64 v33; // rsi
  signed __int64 v34; // rdx
  unsigned __int64 v35; // rsi
  signed __int64 v36; // rax
  signed __int64 v37; // rtt
  __int64 (__usercall *v38)@<rax>(ULONG_PTR@<rcx>, PULONG, int, int, __int64, char); // rax
  int SetSecurityObject; // eax
  int v40; // r15d
  __int64 v41; // rcx
  int v42; // eax
  int v43; // ecx
  PVOID *v44; // r15
  _DWORD *v45; // rdx
  unsigned int v46; // eax
  __int64 v47; // rdx
  PPRIVILEGE_SET *Privileges; // [rsp+28h] [rbp-71h]
  int GenericMapping; // [rsp+30h] [rbp-69h]
  __int64 AccessMode; // [rsp+38h] [rbp-61h]
  char v51; // [rsp+50h] [rbp-49h]
  ULONG Length; // [rsp+54h] [rbp-45h] BYREF
  int v53; // [rsp+58h] [rbp-41h] BYREF
  void *v54; // [rsp+60h] [rbp-39h]
  ACCESS_MASK GrantedAccess; // [rsp+68h] [rbp-31h] BYREF
  NTSTATUS AccessStatus; // [rsp+6Ch] [rbp-2Dh] BYREF
  PPRIVILEGE_SET v57; // [rsp+70h] [rbp-29h]
  PPRIVILEGE_SET v58; // [rsp+78h] [rbp-21h] BYREF
  PVOID *v59; // [rsp+80h] [rbp-19h]
  UNICODE_STRING *v60; // [rsp+88h] [rbp-11h]
  struct _PRIVILEGE_SET v61; // [rsp+90h] [rbp-9h] BYREF

  v7 = 1;
  AccessStatus = 0;
  if ( (a5 & 0x400) == 0 )
    v7 = a4;
  v9 = (_WORD)a2 - 48;
  if ( (unsigned int)(a1 - 1) > 1 )
  {
    v28 = (_DWORD *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *((unsigned __int8 *)a2 - 24) ^ (unsigned __int64)HIBYTE(v9)];
    v29 = *(_DWORD *)(a3 + 16);
    if ( (v29 & 0x2000000) != 0 )
    {
      v29 = v29 & 0xEDFFFFFF | 0x10000000;
      *(_DWORD *)(a3 + 16) = v29;
    }
    if ( (v29 & 0xF0000000) != 0 )
    {
      if ( v29 < 0 )
        v29 |= v28[19];
      if ( (v29 & 0x40000000) != 0 )
        v29 |= v28[20];
      if ( (v29 & 0x20000000) != 0 )
        v29 |= v28[21];
      if ( (v29 & 0x10000000) != 0 )
        v29 |= v28[22];
      v29 &= 0xFFFFFFFu;
      *(_DWORD *)(a3 + 16) = v29;
    }
    if ( (v29 & 0x1000000) == 0 )
    {
LABEL_46:
      v30 = *(_DWORD *)(a3 + 20) | *(_DWORD *)(a3 + 16);
      *(_DWORD *)(a3 + 20) = v30;
      *(_DWORD *)(a3 + 16) = 0;
      *(_DWORD *)(a3 + 20) = v30 & (v28[23] | 0x1000000);
      _m_prefetchw(a2 - 1);
      v31 = *(a2 - 1);
      if ( (v31 & 0xF) != 0 )
      {
        do
        {
          v32 = _InterlockedCompareExchange64(a2 - 1, v31 - 1, v31);
          if ( v31 == v32 )
            break;
          v31 = v32;
        }
        while ( (v32 & 0xF) != 0 );
      }
      v33 = v31;
      v34 = v31 & 0xF;
      v35 = v33 & 0xFFFFFFFFFFFFFFF0uLL;
      if ( (unsigned int)v34 <= 1 && v35 )
        v35 = ObpReferenceSecurityDescriptorSlow(a2 - 6, v34, v35);
      *(_DWORD *)(a3 + 20) &= ~(unsigned int)SeComputeCreatorDeniedRights(
                                               (struct _SECURITY_SUBJECT_CONTEXT *)(a3 + 32),
                                               a3,
                                               *(_DWORD *)(a3 + 20),
                                               (unsigned int *)v35);
      if ( v35 )
      {
        _m_prefetchw(a2 - 1);
        v36 = *(a2 - 1);
        while ( (v35 ^ v36) < 0xF )
        {
          v37 = v36;
          v36 = _InterlockedCompareExchange64(a2 - 1, v36 + 1, v36);
          if ( v37 == v36 )
            goto LABEL_32;
        }
        ObDereferenceSecurityDescriptor(v35, 1LL);
      }
      goto LABEL_32;
    }
    v61.Privilege[0].Luid = SeSecurityPrivilege;
    v61.PrivilegeCount = 1;
    v61.Control = 1;
    v61.Privilege[0].Attributes = 0;
    if ( v7 )
    {
      v41 = *(_QWORD *)(a3 + 32);
      if ( v41 )
      {
        if ( *(int *)(a3 + 40) < 2 )
          goto LABEL_79;
      }
      else
      {
        v41 = *(_QWORD *)(a3 + 48);
      }
      if ( !SepPrivilegeCheck(v41, (__int64)v61.Privilege, 1u, 1, v7) )
      {
LABEL_79:
        SePrivilegedServiceAuditAlarm(0LL, a3 + 32, &v61, 0LL);
        return 3221225569LL;
      }
    }
    *(_DWORD *)(a3 + 16) &= ~0x1000000u;
    *(_DWORD *)(a3 + 20) |= 0x1000000u;
    SeAppendPrivileges((PACCESS_STATE)a3, &v61);
    goto LABEL_46;
  }
  v10 = *((unsigned __int8 *)a2 - 24) ^ (unsigned __int64)HIBYTE(v9);
  GrantedAccess = 0;
  v58 = 0LL;
  Length = 0;
  v53 = 0;
  v11 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v10];
  v60 = (UNICODE_STRING *)v11;
  if ( *(_UNKNOWN **)(v11 + 152) == &SeDefaultObjectMethod )
  {
    _m_prefetchw(a2 - 1);
    v12 = *(a2 - 1);
    if ( (v12 & 0xF) != 0 )
    {
      do
      {
        v13 = _InterlockedCompareExchange64(a2 - 1, v12 - 1, v12);
        if ( v12 == v13 )
          break;
        v12 = v13;
      }
      while ( (v13 & 0xF) != 0 );
    }
    v14 = v12;
    v15 = v12 & 0xF;
    Pool2 = v14 & 0xFFFFFFFFFFFFFFF0uLL;
    if ( (unsigned int)v15 <= 1 && Pool2 )
      Pool2 = ObpReferenceSecurityDescriptorSlow(a2 - 6, v15, Pool2);
    v51 = 0;
    if ( !Pool2 )
    {
      if ( (*(_BYTE *)(v11 + 66) & 8) != 0 || (*((_BYTE *)a2 - 22) & 2) != 0 )
        KeBugCheckEx(0x189u, (ULONG_PTR)(a2 - 6), v11, 1uLL, 0LL);
      *(_DWORD *)(a3 + 20) |= *(_DWORD *)(a3 + 16);
      *(_DWORD *)(a3 + 16) = 0;
LABEL_32:
      *a6 = *(_DWORD *)(a3 + 20);
      return 0LL;
    }
    goto LABEL_12;
  }
  v53 = 447;
  Length = ObpDefaultSecurityDescriptorLength;
  Pool2 = ExAllocatePool2(0x100uLL, (unsigned int)ObpDefaultSecurityDescriptorLength, 0x7153624Fu);
  if ( Pool2 )
  {
    v38 = *(__int64 (__usercall **)@<rax>(ULONG_PTR@<rcx>, PULONG, int, int, __int64, char))(v11 + 152);
    AccessMode = v11 + 76;
    GenericMapping = *(_DWORD *)(v11 + 100);
    Privileges = (PPRIVILEGE_SET *)(a2 - 1);
    v57 = (PPRIVILEGE_SET)(a2 - 1);
    v51 = 1;
    if ( (char *)v38 == (char *)CmpSecurityMethod )
    {
      SetSecurityObject = CmpSecurityMethod(
                            (_DWORD)a2,
                            1,
                            (unsigned int)&v53,
                            Pool2,
                            (__int64)&Length,
                            (__int64)Privileges,
                            GenericMapping,
                            AccessMode);
    }
    else if ( v38 == IopGetSetSecurityObject )
    {
      SetSecurityObject = IopGetSetSecurityObject(
                            (ULONG_PTR)a2,
                            &Length,
                            (int)Privileges,
                            GenericMapping,
                            AccessMode,
                            v7);
    }
    else
    {
      SetSecurityObject = guard_dispatch_icall_no_overrides(a2, 1LL);
    }
    v40 = SetSecurityObject;
    if ( SetSecurityObject != -1073741789 )
    {
LABEL_61:
      if ( v40 < 0 )
      {
        ExFreePoolWithTag((PVOID)Pool2, 0);
        return (unsigned int)v40;
      }
LABEL_12:
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceSharedLite(*(PERESOURCE *)(*(_QWORD *)(a3 + 48) + 48LL), 1u);
      if ( *(_QWORD *)(a3 + 32) )
      {
        v18 = KeGetCurrentThread();
        --v18->KernelApcDisable;
        ExAcquireResourceSharedLite(*(PERESOURCE *)(*(_QWORD *)(a3 + 32) + 48LL), 1u);
      }
      v19 = SeAccessCheck(
              (PSECURITY_DESCRIPTOR)Pool2,
              (PSECURITY_SUBJECT_CONTEXT)(a3 + 32),
              1u,
              *(_DWORD *)(a3 + 16),
              *(_DWORD *)(a3 + 20),
              &v58,
              (PGENERIC_MAPPING)(v11 + 76),
              v7,
              &GrantedAccess,
              &AccessStatus);
      v57 = v58;
      if ( v58 )
      {
        PrivilegeCount = v58->PrivilegeCount;
        v59 = *(PVOID **)(a3 + 72);
        v21 = *v59;
        v22 = *(_DWORD *)*v59;
        if ( PrivilegeCount + v22 > 3 )
        {
          v42 = 8;
          if ( PrivilegeCount )
          {
            v43 = 12 * PrivilegeCount + 8;
            v42 = 8;
          }
          else
          {
            v43 = 8;
          }
          if ( v21 )
          {
            if ( v22 )
              v42 = 12 * v22 + 8;
          }
          else
          {
            v42 = 0;
          }
          v54 = (void *)ExAllocatePool2(0x100uLL, (unsigned int)(v43 + v42), 0x72506553u);
          if ( v54 )
          {
            v44 = v59;
            v45 = *v59;
            if ( *v59 )
            {
              if ( *v45 )
                v46 = 12 * *v45 + 8;
              else
                v46 = 8;
            }
            else
            {
              v46 = 0;
            }
            memmove(v54, v45, v46);
            SepConcatenatePrivileges(v54, v47, v57);
            if ( *(_BYTE *)(a3 + 11) )
              ExFreePoolWithTag(*v44, 0);
            *v44 = v54;
            *(_BYTE *)(a3 + 11) = 1;
          }
        }
        else
        {
          if ( v21 )
          {
            if ( v22 )
              LODWORD(v54) = 12 * v22 + 8;
            else
              LODWORD(v54) = 8;
          }
          else
          {
            LODWORD(v54) = 0;
          }
          memmove((char *)v21 + (unsigned int)v54, v58->Privilege, 12 * PrivilegeCount);
          *v21 += v57->PrivilegeCount;
        }
        CmSiFreeMemory(v58);
      }
      if ( v19 )
      {
        v23 = GrantedAccess;
        *(_DWORD *)(a3 + 20) |= GrantedAccess;
        *(_DWORD *)(a3 + 16) &= ~(v23 | 0x2000000);
      }
      if ( v7 )
        SeOpenObjectAuditAlarmWithTransaction(
          v60 + 1,
          a2,
          0LL,
          (PSECURITY_DESCRIPTOR)Pool2,
          (PACCESS_STATE)a3,
          0,
          v19,
          v7,
          0LL,
          (PBOOLEAN)(a3 + 10));
      ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(a3 + 48) + 48LL));
      KeLeaveCriticalRegionThread();
      v24 = *(_QWORD *)(a3 + 32);
      if ( v24 )
      {
        ExReleaseResourceLite(*(PERESOURCE *)(v24 + 48));
        KeLeaveCriticalRegionThread();
      }
      if ( v51 )
      {
        ExFreePoolWithTag((PVOID)Pool2, 0);
      }
      else
      {
        _m_prefetchw(a2 - 1);
        v25 = *(a2 - 1);
        while ( (Pool2 ^ v25) < 0xF )
        {
          v26 = v25;
          v25 = _InterlockedCompareExchange64(a2 - 1, v25 + 1, v25);
          if ( v26 == v25 )
            goto LABEL_31;
        }
        ObDereferenceSecurityDescriptor(Pool2, 1LL);
      }
LABEL_31:
      if ( v19 )
        goto LABEL_32;
      return (unsigned int)AccessStatus;
    }
    ExFreePoolWithTag((PVOID)Pool2, 0);
    ObpDefaultSecurityDescriptorLength = Length;
    Pool2 = ExAllocatePool2(0x100uLL, Length, 0x7153624Fu);
    if ( Pool2 )
    {
      v51 = 1;
      v40 = guard_dispatch_icall_no_overrides(a2, 1LL);
      goto LABEL_61;
    }
  }
  return 3221225626LL;
}
