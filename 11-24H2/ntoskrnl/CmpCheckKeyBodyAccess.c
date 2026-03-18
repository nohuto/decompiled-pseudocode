/*
 * XREFs of CmpCheckKeyBodyAccess @ 0x140851B40
 * Callers:
 *     CmpDoAccessCheckOnKCB @ 0x1407DB468 (CmpDoAccessCheckOnKCB.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x140852140 (CmpCheckOpenAccessOnKeyBody.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140341E80 (ExAcquireResourceSharedLite.c)
 *     SeAccessCheck @ 0x14035A5B0 (SeAccessCheck.c)
 *     CmpAllocatePool @ 0x1403E1834 (CmpAllocatePool.c)
 *     CmSiFreeMemory @ 0x14046B8D0 (CmSiFreeMemory.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     CmpTransUowIsEqual @ 0x1406FB46C (CmpTransUowIsEqual.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x1408508E0 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SepConcatenatePrivileges @ 0x1409D25C0 (SepConcatenatePrivileges.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140BB9480 (CmpIsKeyDeletedForKeyBody.c)
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
  _DWORD *v27; // rdi
  int v28; // r8d
  unsigned int v29; // r12d
  ACCESS_MASK v30; // eax
  PERESOURCE *ClientToken; // rcx
  __int64 v33; // rcx
  bool IsEqual; // al
  __int64 i; // rcx
  struct _PRIVILEGE_SET *v36; // rdx
  LUID_AND_ATTRIBUTES *Privilege; // r13
  __int64 v38; // rdi
  __int64 v39; // rsi
  __int64 v40; // rcx
  __int64 v41; // rax
  bool v42; // al
  unsigned int v43; // r12d
  void *Pool2; // rdi
  _DWORD *v45; // rdx
  __int64 v46; // rdx
  __int64 v47; // rax
  __int64 v48; // rdx
  NTSTATUS AccessStatus; // [rsp+58h] [rbp-21h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+5Ch] [rbp-1Dh] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+60h] [rbp-19h] BYREF
  void *v52; // [rsp+68h] [rbp-11h]
  __int128 v53; // [rsp+70h] [rbp-9h]
  PPRIVILEGE_SET v54[2]; // [rsp+80h] [rbp+7h]

  v7 = 0LL;
  GrantedAccess = 0;
  v53 = 0LL;
  WORD1(v53) = -1;
  v8 = Object;
  Privileges = 0LL;
  *(_OWORD *)v54 = 0LL;
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
    if ( v11 < 2 || (Pool = (struct _PRIVILEGE_SET *)CmpAllocatePool(0x100uLL)) != 0LL )
    {
      v12 = *(__int16 *)(v9 + 66);
      LOWORD(v53) = v11;
      v54[1] = Pool;
      WORD1(v53) = v12;
      if ( (_WORD)v12 )
      {
        for ( i = *(_QWORD *)(v9 + 192); i; LOWORD(v12) = v12 - 1 )
        {
          v36 = *(struct _PRIVILEGE_SET **)(i + 16);
          if ( (__int16)v12 >= 2 )
          {
            *((_QWORD *)Pool + (__int16)v12 - 2) = v36;
          }
          else
          {
            v54[(__int16)v12 - 1] = v36;
            Pool = v54[1];
          }
          i = *(_QWORD *)(i + 24);
        }
      }
      else
      {
        v54[v12 - 1] = (PPRIVILEGE_SET)v9;
        Pool = v54[1];
      }
      v13 = WORD1(v53);
      AccessStatus = 0;
      if ( (SWORD1(v53) & 0x8000u) == 0 )
      {
        do
        {
          if ( v13 >= 2u )
            v14 = (PPRIVILEGE_SET)*((_QWORD *)Pool + v13 - 2);
          else
            v14 = v54[v13 - 1];
          if ( HIWORD(v14[3].Control) && BYTE1(v14[3].Control) == 1 )
            break;
          if ( v14[2].PrivilegeCount != -1 )
          {
            v15 = *(_QWORD *)&v14[12].PrivilegeCount;
            if ( !v15
              || a2
              && (a2 == v15
               || ((v33 = *(_QWORD *)(a2 + 56)) == 0 || (v47 = *(_QWORD *)(v15 + 56)) == 0
                 ? (IsEqual = CmpTransUowIsEqual((const void *)(a2 + 88), (const void *)(v15 + 88)))
                 : (IsEqual = v33 == v47),
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
        v38 = *(_QWORD *)&Privilege->Attributes;
        if ( Privilege != (LUID_AND_ATTRIBUTES *)v38 )
          goto LABEL_63;
LABEL_55:
        v39 = 0LL;
        while ( v39 )
        {
          v40 = *(_QWORD *)(v39 + 56);
          if ( v40 )
          {
            if ( v40 == v16
              || ((v41 = *(_QWORD *)(v40 + 56)) == 0 || (v48 = *(_QWORD *)(v16 + 56)) == 0
                ? (v42 = CmpTransUowIsEqual((const void *)(v40 + 88), (const void *)(v16 + 88)), v16 = a2)
                : (v42 = v41 == v48),
                  v42) )
            {
              if ( *(_DWORD *)(v39 + 68) == 9 )
              {
                Luid = *(LUID *)(v39 + 88);
                break;
              }
            }
          }
          if ( !v38 )
            v38 = *(_QWORD *)&Privilege->Attributes;
          if ( Privilege == (LUID_AND_ATTRIBUTES *)v38 )
            goto LABEL_55;
LABEL_63:
          v39 = v38 - 32;
          v38 = *(_QWORD *)(v38 + 8);
        }
      }
      CurrentThread = KeGetCurrentThread();
      v19 = (void *)(*(_QWORD *)&Luid + 32LL);
      v52 = v19;
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
        v27 = *AuxData;
        v28 = *(_DWORD *)*AuxData;
        if ( Privileges->PrivilegeCount + v28 > 3 )
        {
          v43 = 8;
          Pool2 = (void *)ExAllocatePool2(0x100uLL);
          if ( Pool2 )
          {
            v45 = *AuxData;
            if ( *AuxData )
            {
              if ( *v45 )
                v43 = 12 * *v45 + 8;
            }
            else
            {
              v43 = 0;
            }
            memmove(Pool2, v45, v43);
            SepConcatenatePrivileges(Pool2, v46, v24);
            if ( a3->PrivilegesAllocated )
              ExFreePoolWithTag(*AuxData, 0);
            *AuxData = Pool2;
            a3->PrivilegesAllocated = 1;
          }
        }
        else
        {
          if ( v27 )
          {
            if ( v28 )
              v29 = 12 * v28 + 8;
            else
              v29 = 8;
          }
          else
          {
            v29 = 0;
          }
          memmove((char *)v27 + v29, Privileges->Privilege, 12 * Privileges->PrivilegeCount);
          *v27 += v24->PrivilegeCount;
        }
        CmSiFreeMemory(Privileges);
        v19 = v52;
        v21 = a4;
      }
      if ( v25 )
      {
        v30 = GrantedAccess;
        a3->PreviouslyGrantedAccess |= GrantedAccess;
        a3->RemainingDesiredAccess &= ~(v30 | 0x2000000);
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
  if ( v54[1] )
    CmSiFreeMemory(v54[1]);
  *a5 = AccessStatus;
  return v25;
}
