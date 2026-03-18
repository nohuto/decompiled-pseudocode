/*
 * XREFs of CmpCheckKeyBodyAccess @ 0x1408559A0
 * Callers:
 *     CmpDoAccessCheckOnKCB @ 0x1407CBCA8 (CmpDoAccessCheckOnKCB.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x140855F70 (CmpCheckOpenAccessOnKeyBody.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x140295130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     SeAccessCheck @ 0x1403624F0 (SeAccessCheck.c)
 *     CmpAllocatePool @ 0x1403DCED4 (CmpAllocatePool.c)
 *     CmSiFreeMemory @ 0x14046F140 (CmSiFreeMemory.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     CmpTransUowIsEqual @ 0x1406EF5FC (CmpTransUowIsEqual.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x140854730 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SepConcatenatePrivileges @ 0x140862710 (SepConcatenatePrivileges.c)
 *     CmEqualTrans @ 0x140871010 (CmEqualTrans.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140BA94E0 (CmpIsKeyDeletedForKeyBody.c)
 */

__int64 __fastcall CmpCheckKeyBodyAccess(
        __int64 a1,
        __int64 a2,
        struct _ACCESS_STATE *a3,
        KPROCESSOR_MODE a4,
        NTSTATUS *a5)
{
  PPRIVILEGE_SET v5; // r15
  __int64 v9; // rdi
  struct _PRIVILEGE_SET *Pool; // r12
  int v11; // ebx
  __int64 v12; // rax
  unsigned __int16 v13; // di
  PPRIVILEGE_SET v14; // rbx
  LUID Luid; // rbx
  struct _KTHREAD *CurrentThread; // rax
  void *v17; // rdi
  struct _KTHREAD *v18; // rax
  KPROCESSOR_MODE v19; // r12
  ACCESS_MASK RemainingDesiredAccess; // r9d
  BOOLEAN v21; // al
  PPRIVILEGE_SET v22; // r13
  ULONG PrivilegeCount; // r8d
  _DWORD *v24; // rdi
  int v25; // edx
  unsigned int v26; // r12d
  ACCESS_MASK v27; // eax
  PERESOURCE *ClientToken; // rcx
  LUID_AND_ATTRIBUTES *Privilege; // r12
  __int64 v31; // rdi
  __int64 v32; // r15
  __int64 v33; // rcx
  __int64 v34; // rax
  bool IsEqual; // al
  __int64 i; // rcx
  struct _PRIVILEGE_SET *v37; // rdx
  unsigned int v38; // r12d
  PVOID *v39; // rdi
  _DWORD *v40; // rdx
  void *v41; // r12
  __int64 v42; // rdx
  __int64 v43; // rdx
  NTSTATUS AccessStatus; // [rsp+58h] [rbp-31h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+5Ch] [rbp-2Dh] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+60h] [rbp-29h] BYREF
  PVOID *AuxData; // [rsp+68h] [rbp-21h]
  void *Pool2; // [rsp+70h] [rbp-19h]
  void *v49; // [rsp+78h] [rbp-11h]
  __int128 v50; // [rsp+80h] [rbp-9h]
  PPRIVILEGE_SET v51[2]; // [rsp+90h] [rbp+7h]

  v5 = 0LL;
  GrantedAccess = 0;
  v50 = 0LL;
  WORD1(v50) = -1;
  Privileges = 0LL;
  *(_OWORD *)v51 = 0LL;
  if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, a2) )
  {
    AccessStatus = -1073741444;
  }
  else
  {
    v9 = *(_QWORD *)(a1 + 8);
    Pool = 0LL;
    v11 = *(__int16 *)(v9 + 66);
    if ( v11 < 2 || (Pool = (struct _PRIVILEGE_SET *)CmpAllocatePool(0x100uLL)) != 0LL )
    {
      v12 = *(__int16 *)(v9 + 66);
      LOWORD(v50) = v11;
      v51[1] = Pool;
      WORD1(v50) = v12;
      if ( (_WORD)v12 )
      {
        for ( i = *(_QWORD *)(v9 + 192); i; LOWORD(v12) = v12 - 1 )
        {
          v37 = *(struct _PRIVILEGE_SET **)(i + 16);
          if ( (__int16)v12 >= 2 )
          {
            *((_QWORD *)Pool + (__int16)v12 - 2) = v37;
          }
          else
          {
            v51[(__int16)v12 - 1] = v37;
            Pool = v51[1];
          }
          i = *(_QWORD *)(i + 24);
        }
      }
      else
      {
        v51[v12 - 1] = (PPRIVILEGE_SET)v9;
        Pool = v51[1];
      }
      v13 = WORD1(v50);
      for ( AccessStatus = 0; (v13 & 0x8000u) == 0; --v13 )
      {
        if ( v13 >= 2u )
          v14 = (PPRIVILEGE_SET)*((_QWORD *)Pool + v13 - 2);
        else
          v14 = v51[v13 - 1];
        if ( HIWORD(v14[3].Control) && BYTE1(v14[3].Control) == 1 )
          break;
        if ( v14[2].PrivilegeCount != -1 && (!*(_QWORD *)&v14[12].PrivilegeCount || (unsigned __int8)CmEqualTrans(a2)) )
        {
          v5 = v14;
          if ( HIWORD(v14[3].Control) )
          {
            if ( BYTE1(v14[3].Control) )
              break;
          }
        }
      }
      Luid = v5[4].Privilege[0].Luid;
      if ( a2 )
      {
        Privilege = v5[10].Privilege;
        v31 = *(_QWORD *)&v5[10].Privilege[0].Attributes;
        if ( v5[10].Privilege != (LUID_AND_ATTRIBUTES *)v31 )
          goto LABEL_48;
LABEL_40:
        v32 = 0LL;
        while ( v32 )
        {
          v33 = *(_QWORD *)(v32 + 56);
          if ( v33 )
          {
            if ( v33 == a2
              || ((v34 = *(_QWORD *)(v33 + 56)) == 0 || (v43 = *(_QWORD *)(a2 + 56)) == 0
                ? (IsEqual = CmpTransUowIsEqual((const void *)(v33 + 88), (const void *)(a2 + 88)))
                : (IsEqual = v34 == v43),
                  IsEqual) )
            {
              if ( *(_DWORD *)(v32 + 68) == 9 )
              {
                Luid = *(LUID *)(v32 + 88);
                break;
              }
            }
          }
          if ( !v31 )
            v31 = *(_QWORD *)&Privilege->Attributes;
          if ( Privilege == (LUID_AND_ATTRIBUTES *)v31 )
            goto LABEL_40;
LABEL_48:
          v32 = v31 - 32;
          v31 = *(_QWORD *)(v31 + 8);
        }
      }
      CurrentThread = KeGetCurrentThread();
      v17 = (void *)(*(_QWORD *)&Luid + 32LL);
      v49 = (void *)(*(_QWORD *)&Luid + 32LL);
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceSharedLite(*((PERESOURCE *)a3->SubjectSecurityContext.PrimaryToken + 6), 1u);
      if ( a3->SubjectSecurityContext.ClientToken )
      {
        v18 = KeGetCurrentThread();
        --v18->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)a3->SubjectSecurityContext.ClientToken + 6), 1u);
      }
      v19 = a4;
      RemainingDesiredAccess = a3->RemainingDesiredAccess;
      GrantedAccess = 0;
      Privileges = 0LL;
      v21 = SeAccessCheck(
              (PSECURITY_DESCRIPTOR)(*(_QWORD *)&Luid + 32LL),
              &a3->SubjectSecurityContext,
              1u,
              RemainingDesiredAccess,
              a3->PreviouslyGrantedAccess,
              &Privileges,
              (PGENERIC_MAPPING)((char *)CmKeyObjectType + 76),
              a4,
              &GrantedAccess,
              &AccessStatus);
      v22 = Privileges;
      LOBYTE(v5) = v21;
      if ( Privileges )
      {
        PrivilegeCount = Privileges->PrivilegeCount;
        AuxData = (PVOID *)a3->AuxData;
        v24 = *AuxData;
        v25 = *(_DWORD *)*AuxData;
        if ( PrivilegeCount + v25 > 3 )
        {
          v38 = 8;
          Pool2 = (void *)ExAllocatePool2(0x100uLL);
          if ( Pool2 )
          {
            v39 = AuxData;
            v40 = *AuxData;
            if ( *AuxData )
            {
              if ( *v40 )
                v38 = 12 * *v40 + 8;
            }
            else
            {
              v38 = 0;
            }
            memmove(Pool2, v40, v38);
            v41 = Pool2;
            SepConcatenatePrivileges(Pool2, v42, v22);
            if ( a3->PrivilegesAllocated )
              ExFreePoolWithTag(*v39, 0);
            *v39 = v41;
            a3->PrivilegesAllocated = 1;
          }
        }
        else
        {
          if ( v24 )
          {
            if ( v25 )
              v26 = 12 * v25 + 8;
            else
              v26 = 8;
          }
          else
          {
            v26 = 0;
          }
          memmove((char *)v24 + v26, Privileges->Privilege, 12 * PrivilegeCount);
          *v24 += v22->PrivilegeCount;
        }
        CmSiFreeMemory(Privileges);
        v17 = v49;
        v19 = a4;
      }
      if ( (_BYTE)v5 )
      {
        v27 = GrantedAccess;
        a3->PreviouslyGrantedAccess |= GrantedAccess;
        a3->RemainingDesiredAccess &= ~(v27 | 0x2000000);
      }
      *(_WORD *)(a1 + 48) |= 2u;
      if ( a2 )
      {
        SeOpenObjectAuditAlarmWithTransaction(
          (PUNICODE_STRING)CmKeyObjectType + 1,
          (PVOID)a1,
          0LL,
          v17,
          a3,
          0,
          (BOOLEAN)v5,
          v19,
          (GUID *)(a2 + 88),
          &a3->GenerateOnClose);
      }
      else if ( v19 )
      {
        SeOpenObjectAuditAlarmWithTransaction(
          (PUNICODE_STRING)CmKeyObjectType + 1,
          (PVOID)a1,
          0LL,
          v17,
          a3,
          0,
          (BOOLEAN)v5,
          v19,
          0LL,
          &a3->GenerateOnClose);
      }
      *(_WORD *)(a1 + 48) &= ~2u;
      ExReleaseResourceLite(*((PERESOURCE *)a3->SubjectSecurityContext.PrimaryToken + 6));
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      ClientToken = (PERESOURCE *)a3->SubjectSecurityContext.ClientToken;
      if ( ClientToken )
      {
        ExReleaseResourceLite(ClientToken[6]);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      }
    }
    else
    {
      AccessStatus = -1073741670;
    }
  }
  if ( v51[1] )
    CmSiFreeMemory(v51[1]);
  *a5 = AccessStatus;
  return (unsigned __int8)v5;
}
