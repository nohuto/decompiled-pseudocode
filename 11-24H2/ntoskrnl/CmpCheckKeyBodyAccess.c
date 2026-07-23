/*
 * XREFs of CmpCheckKeyBodyAccess @ 0x14084DE00
 * Callers:
 *     CmpDoAccessCheckOnKCB @ 0x1407DB9B8 (CmpDoAccessCheckOnKCB.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x14084E400 (CmpCheckOpenAccessOnKeyBody.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140321360 (ExAcquireResourceSharedLite.c)
 *     SeAccessCheck @ 0x1403B6900 (SeAccessCheck.c)
 *     CmpAllocatePool @ 0x1403C9EA4 (CmpAllocatePool.c)
 *     CmSiFreeMemory @ 0x140464550 (CmSiFreeMemory.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     CmpTransUowIsEqual @ 0x1406F90AC (CmpTransUowIsEqual.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x14084CBA0 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SepConcatenatePrivileges @ 0x1409C23F0 (SepConcatenatePrivileges.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140BBB480 (CmpIsKeyDeletedForKeyBody.c)
 */

__int64 __fastcall CmpCheckKeyBodyAccess(
        _QWORD *Object,
        __int64 a2,
        struct _ACCESS_STATE *a3,
        KPROCESSOR_MODE a4,
        NTSTATUS *a5)
{
  PPRIVILEGE_SET v7; // r13
  _QWORD *v8; // r14
  __int64 v9; // rsi
  struct _PRIVILEGE_SET *Pool; // r15
  int v11; // edi
  __int64 v12; // rax
  unsigned __int16 v13; // si
  PPRIVILEGE_SET v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // r8
  LUID Luid; // r12
  struct _KTHREAD *CurrentThread; // rax
  void *v19; // r12
  struct _KTHREAD *v20; // rax
  KPROCESSOR_MODE v21; // r13
  ACCESS_MASK RemainingDesiredAccess; // r9d
  BOOLEAN v23; // al
  PPRIVILEGE_SET v24; // r15
  BOOLEAN v25; // si
  PVOID *AuxData; // r13
  ULONG PrivilegeCount; // edx
  _DWORD *v28; // rdi
  int v29; // r8d
  unsigned int v30; // r12d
  ACCESS_MASK v31; // eax
  PERESOURCE *ClientToken; // rcx
  __int64 v34; // rcx
  bool IsEqual; // al
  __int64 i; // rcx
  struct _PRIVILEGE_SET *v37; // rdx
  LUID_AND_ATTRIBUTES *Privilege; // r13
  __int64 v39; // rdi
  __int64 v40; // rsi
  __int64 v41; // rcx
  __int64 v42; // rax
  bool v43; // al
  unsigned int v44; // r12d
  int v45; // ecx
  int v46; // eax
  void *Pool2; // rdi
  _DWORD *v48; // rdx
  __int64 v49; // rdx
  __int64 v50; // rax
  __int64 v51; // rdx
  NTSTATUS AccessStatus; // [rsp+58h] [rbp-21h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+5Ch] [rbp-1Dh] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+60h] [rbp-19h] BYREF
  void *v55; // [rsp+68h] [rbp-11h]
  __int128 v56; // [rsp+70h] [rbp-9h]
  PPRIVILEGE_SET v57[2]; // [rsp+80h] [rbp+7h]

  v7 = 0LL;
  GrantedAccess = 0;
  v56 = 0LL;
  WORD1(v56) = -1;
  v8 = Object;
  Privileges = 0LL;
  *(_OWORD *)v57 = 0LL;
  if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(Object, a2) )
  {
    AccessStatus = -1073741444;
    v25 = 0;
  }
  else
  {
    v9 = v8[1];
    Pool = 0LL;
    v11 = *(__int16 *)(v9 + 66);
    if ( v11 < 2
      || (Pool = (struct _PRIVILEGE_SET *)CmpAllocatePool(0x100uLL, 8LL * (unsigned int)(v11 - 1), 0x35364D43u)) != 0LL )
    {
      v12 = *(__int16 *)(v9 + 66);
      LOWORD(v56) = v11;
      v57[1] = Pool;
      WORD1(v56) = v12;
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
            v57[(__int16)v12 - 1] = v37;
            Pool = v57[1];
          }
          i = *(_QWORD *)(i + 24);
        }
      }
      else
      {
        v57[v12 - 1] = (PPRIVILEGE_SET)v9;
        Pool = v57[1];
      }
      v13 = WORD1(v56);
      AccessStatus = 0;
      if ( (SWORD1(v56) & 0x8000u) == 0 )
      {
        do
        {
          if ( v13 >= 2u )
            v14 = (PPRIVILEGE_SET)*((_QWORD *)Pool + v13 - 2);
          else
            v14 = v57[v13 - 1];
          if ( HIWORD(v14[3].Control) && BYTE1(v14[3].Control) == 1 )
            break;
          if ( v14[2].PrivilegeCount != -1 )
          {
            v15 = *(_QWORD *)&v14[12].PrivilegeCount;
            if ( !v15
              || a2
              && (a2 == v15
               || ((v34 = *(_QWORD *)(a2 + 56)) == 0 || (v50 = *(_QWORD *)(v15 + 56)) == 0
                 ? (IsEqual = CmpTransUowIsEqual((const void *)(a2 + 88), (const void *)(v15 + 88)))
                 : (IsEqual = v34 == v50),
                   IsEqual)) )
            {
              v7 = v14;
              if ( HIWORD(v14[3].Control) )
              {
                if ( BYTE1(v14[3].Control) )
                  break;
              }
            }
          }
          --v13;
        }
        while ( (v13 & 0x8000u) == 0 );
        v8 = Object;
      }
      v16 = a2;
      Luid = v7[4].Privilege[0].Luid;
      if ( a2 )
      {
        Privilege = v7[10].Privilege;
        v39 = *(_QWORD *)&Privilege->Attributes;
        if ( Privilege != (LUID_AND_ATTRIBUTES *)v39 )
          goto LABEL_63;
LABEL_55:
        v40 = 0LL;
        while ( v40 )
        {
          v41 = *(_QWORD *)(v40 + 56);
          if ( v41 )
          {
            if ( v41 == v16
              || ((v42 = *(_QWORD *)(v41 + 56)) == 0 || (v51 = *(_QWORD *)(v16 + 56)) == 0
                ? (v43 = CmpTransUowIsEqual((const void *)(v41 + 88), (const void *)(v16 + 88)), v16 = a2)
                : (v43 = v42 == v51),
                  v43) )
            {
              if ( *(_DWORD *)(v40 + 68) == 9 )
              {
                Luid = *(LUID *)(v40 + 88);
                break;
              }
            }
          }
          if ( !v39 )
            v39 = *(_QWORD *)&Privilege->Attributes;
          if ( Privilege == (LUID_AND_ATTRIBUTES *)v39 )
            goto LABEL_55;
LABEL_63:
          v40 = v39 - 32;
          v39 = *(_QWORD *)(v39 + 8);
        }
      }
      CurrentThread = KeGetCurrentThread();
      v19 = (void *)(*(_QWORD *)&Luid + 32LL);
      v55 = v19;
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceSharedLite(*((PERESOURCE *)a3->SubjectSecurityContext.PrimaryToken + 6), 1u);
      if ( a3->SubjectSecurityContext.ClientToken )
      {
        v20 = KeGetCurrentThread();
        --v20->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)a3->SubjectSecurityContext.ClientToken + 6), 1u);
      }
      v21 = a4;
      RemainingDesiredAccess = a3->RemainingDesiredAccess;
      GrantedAccess = 0;
      Privileges = 0LL;
      v23 = SeAccessCheck(
              v19,
              &a3->SubjectSecurityContext,
              1u,
              RemainingDesiredAccess,
              a3->PreviouslyGrantedAccess,
              &Privileges,
              (PGENERIC_MAPPING)((char *)CmKeyObjectType + 76),
              a4,
              &GrantedAccess,
              &AccessStatus);
      v24 = Privileges;
      v25 = v23;
      if ( Privileges )
      {
        AuxData = (PVOID *)a3->AuxData;
        PrivilegeCount = Privileges->PrivilegeCount;
        v28 = *AuxData;
        v29 = *(_DWORD *)*AuxData;
        if ( Privileges->PrivilegeCount + v29 > 3 )
        {
          v44 = 8;
          if ( PrivilegeCount )
            v45 = 12 * PrivilegeCount + 8;
          else
            v45 = 8;
          if ( v28 )
          {
            if ( v29 )
              v46 = 12 * v29 + 8;
            else
              v46 = 8;
          }
          else
          {
            v46 = 0;
          }
          Pool2 = (void *)ExAllocatePool2(0x100uLL, (unsigned int)(v45 + v46), 0x72506553u);
          if ( Pool2 )
          {
            v48 = *AuxData;
            if ( *AuxData )
            {
              if ( *v48 )
                v44 = 12 * *v48 + 8;
            }
            else
            {
              v44 = 0;
            }
            memmove(Pool2, v48, v44);
            SepConcatenatePrivileges(Pool2, v49, v24);
            if ( a3->PrivilegesAllocated )
              ExFreePoolWithTag(*AuxData, 0);
            *AuxData = Pool2;
            a3->PrivilegesAllocated = 1;
          }
        }
        else
        {
          if ( v28 )
          {
            if ( v29 )
              v30 = 12 * v29 + 8;
            else
              v30 = 8;
          }
          else
          {
            v30 = 0;
          }
          memmove((char *)v28 + v30, Privileges->Privilege, 12 * PrivilegeCount);
          *v28 += v24->PrivilegeCount;
        }
        CmSiFreeMemory(Privileges);
        v19 = v55;
        v21 = a4;
      }
      if ( v25 )
      {
        v31 = GrantedAccess;
        a3->PreviouslyGrantedAccess |= GrantedAccess;
        a3->RemainingDesiredAccess &= ~(v31 | 0x2000000);
      }
      *((_WORD *)v8 + 24) |= 2u;
      if ( a2 )
      {
        SeOpenObjectAuditAlarmWithTransaction(
          (PUNICODE_STRING)CmKeyObjectType + 1,
          v8,
          0LL,
          v19,
          a3,
          0,
          v25,
          v21,
          (GUID *)(a2 + 88),
          &a3->GenerateOnClose);
      }
      else if ( v21 )
      {
        SeOpenObjectAuditAlarmWithTransaction(
          (PUNICODE_STRING)CmKeyObjectType + 1,
          v8,
          0LL,
          v19,
          a3,
          0,
          v25,
          v21,
          0LL,
          &a3->GenerateOnClose);
      }
      *((_WORD *)v8 + 24) &= ~2u;
      ExReleaseResourceLite(*((PERESOURCE *)a3->SubjectSecurityContext.PrimaryToken + 6));
      KeLeaveCriticalRegionThread();
      ClientToken = (PERESOURCE *)a3->SubjectSecurityContext.ClientToken;
      if ( ClientToken )
      {
        ExReleaseResourceLite(ClientToken[6]);
        KeLeaveCriticalRegionThread();
      }
    }
    else
    {
      AccessStatus = -1073741670;
      v25 = 0;
    }
  }
  if ( v57[1] )
    CmSiFreeMemory(v57[1]);
  *a5 = AccessStatus;
  return v25;
}
