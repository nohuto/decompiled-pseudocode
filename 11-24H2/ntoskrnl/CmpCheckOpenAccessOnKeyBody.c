/*
 * XREFs of CmpCheckOpenAccessOnKeyBody @ 0x140852140
 * Callers:
 *     CmpDoParseKey @ 0x14086E7B0 (CmpDoParseKey.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     PsGetSessionIdEx @ 0x1403025D0 (PsGetSessionIdEx.c)
 *     ExAcquireResourceSharedLite @ 0x140341E80 (ExAcquireResourceSharedLite.c)
 *     SeAccessCheck @ 0x14035A5B0 (SeAccessCheck.c)
 *     CmpAllocatePool @ 0x1403E1834 (CmpAllocatePool.c)
 *     PsGetProcessServerSilo @ 0x140445660 (PsGetProcessServerSilo.c)
 *     PsGetServerSiloServiceSessionId @ 0x1404566C0 (PsGetServerSiloServiceSessionId.c)
 *     CmSiFreeMemory @ 0x14046B8D0 (CmSiFreeMemory.c)
 *     PsGetCurrentThreadProcess @ 0x1404709D0 (PsGetCurrentThreadProcess.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     CmpTransUowIsEqual @ 0x1406FB46C (CmpTransUowIsEqual.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x1408508E0 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     CmpCheckKeyBodyAccess @ 0x140851B40 (CmpCheckKeyBodyAccess.c)
 *     SeSinglePrivilegeCheckEx @ 0x140853CA0 (SeSinglePrivilegeCheckEx.c)
 *     CmpCheckKeyOwnerForPca @ 0x140868640 (CmpCheckKeyOwnerForPca.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x14086DD20 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpIsSystemEntity @ 0x14090D660 (CmpIsSystemEntity.c)
 *     SepAdjustAccessStateForConstraints @ 0x1409175B0 (SepAdjustAccessStateForConstraints.c)
 *     CmpCheckAdminAccess @ 0x1409A7658 (CmpCheckAdminAccess.c)
 *     SepConcatenatePrivileges @ 0x1409D25C0 (SepConcatenatePrivileges.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140BB9480 (CmpIsKeyDeletedForKeyBody.c)
 */

__int64 __fastcall CmpCheckOpenAccessOnKeyBody(
        char *Object,
        __int64 a2,
        _DWORD *a3,
        struct _ACCESS_STATE *a4,
        unsigned __int8 AccessMode,
        char a6,
        GUID *TransactionId,
        bool *a8,
        _DWORD *a9)
{
  unsigned __int16 v9; // di
  _WORD *v10; // r15
  __int64 v11; // r14
  char *v13; // r13
  GUID *v14; // r12
  __int64 v15; // rbx
  GUID *v16; // rdx
  GUID *v17; // r12
  __int64 v18; // r15
  char v19; // r14
  __int64 v20; // rdi
  ACCESS_MASK OriginalDesiredAccess; // edx
  __int64 v22; // rcx
  struct _PRIVILEGE_SET *v23; // rdx
  struct _PRIVILEGE_SET *Pool; // r15
  int v25; // ebx
  ACCESS_MASK v26; // ecx
  _DWORD *v27; // rdi
  __int64 v28; // rdi
  int v29; // ebx
  __int64 v30; // rax
  unsigned __int16 v31; // di
  PPRIVILEGE_SET v32; // r14
  PPRIVILEGE_SET v33; // rbx
  GUID *v34; // rdx
  LUID Luid; // rbx
  struct _KTHREAD *CurrentThread; // rax
  void *v37; // r14
  struct _KTHREAD *v38; // rax
  ACCESS_MASK RemainingDesiredAccess; // r9d
  BOOLEAN v40; // al
  PPRIVILEGE_SET v41; // rdi
  PVOID *AuxData; // r12
  _DWORD *v43; // rbx
  int v44; // edx
  unsigned int v45; // r14d
  ACCESS_MASK v46; // eax
  PERESOURCE *ClientToken; // rcx
  unsigned __int8 v48; // dl
  bool v49; // r8
  __int64 result; // rax
  __int64 v51; // rcx
  bool IsEqual; // al
  __int64 v53; // rcx
  bool v54; // al
  __int64 v55; // r14
  __int64 v56; // rbx
  __int64 v57; // rdi
  GUID *v58; // rcx
  __int64 v59; // rdx
  bool v60; // al
  int started; // eax
  __int16 v62; // r8
  PPRIVILEGE_SET v63; // r9
  __int16 i; // ax
  PPRIVILEGE_SET v65; // rcx
  char v66; // al
  __int64 v67; // r8
  ACCESS_MASK PreviouslyGrantedAccess; // ecx
  __int64 v69; // rbx
  _KPROCESS *CurrentThreadProcess; // rdi
  __int64 ProcessServerSilo; // rax
  int ServerSiloServiceSessionId; // ebx
  __int64 j; // rcx
  struct _PRIVILEGE_SET *v74; // rdx
  LUID_AND_ATTRIBUTES *Privilege; // r15
  __int64 v76; // rdi
  __int64 v77; // r14
  GUID *v78; // rcx
  __int64 v79; // rdx
  bool v80; // al
  unsigned int v81; // r14d
  void *Pool2; // rbx
  _DWORD *v83; // rdx
  __int64 v84; // rdx
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // rax
  __int64 v88; // rax
  NTSTATUS AccessStatus; // [rsp+54h] [rbp-35h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+58h] [rbp-31h] BYREF
  PPRIVILEGE_SET v91; // [rsp+60h] [rbp-29h] BYREF
  __int128 v92; // [rsp+68h] [rbp-21h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+78h] [rbp-11h]
  void *v95; // [rsp+D0h] [rbp+47h]

  v9 = *(_WORD *)(a2 + 2);
  v10 = Object + 4;
  v11 = 0LL;
  v13 = Object;
  if ( (v9 & 0x8000u) == 0 )
  {
    v14 = TransactionId;
    do
    {
      if ( v9 >= 2u )
        v15 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 8LL * v9 - 16);
      else
        v15 = *(_QWORD *)(a2 + 8LL * v9 + 8);
      if ( *(_WORD *)(v15 + 66) && *(_BYTE *)(v15 + 65) == 1 )
        break;
      if ( *(_DWORD *)(v15 + 40) != -1 )
      {
        v16 = *(GUID **)(v15 + 240);
        if ( !v16
          || v14
          && (v14 == v16
           || ((v51 = *(_QWORD *)v14[3].Data4) == 0 || (v85 = *(_QWORD *)v16[3].Data4) == 0
             ? (IsEqual = CmpTransUowIsEqual(v14[5].Data4, v16[5].Data4))
             : (IsEqual = v51 == v85),
               IsEqual)) )
        {
          v11 = v15;
          if ( *(_WORD *)(v15 + 66) )
          {
            if ( *(_BYTE *)(v15 + 65) )
              break;
          }
        }
      }
      --v9;
    }
    while ( (v9 & 0x8000u) == 0 );
    v10 = v13 + 4;
  }
  if ( v10 )
    *v10 = *(_WORD *)(v11 + 66);
  v17 = TransactionId;
  v18 = *(_QWORD *)(v11 + 88);
  if ( TransactionId )
  {
    v55 = v11 + 208;
    v56 = *(_QWORD *)(v55 + 8);
    if ( v55 != v56 )
      goto LABEL_88;
LABEL_80:
    v57 = 0LL;
    while ( v57 )
    {
      v58 = *(GUID **)(v57 + 56);
      if ( v58 )
      {
        if ( v58 == v17
          || ((v59 = *(_QWORD *)v58[3].Data4) == 0 || (v86 = *(_QWORD *)v17[3].Data4) == 0
            ? (v60 = CmpTransUowIsEqual(v58[5].Data4, v17[5].Data4))
            : (v60 = v59 == v86),
              v60) )
        {
          if ( *(_DWORD *)(v57 + 68) == 9 )
          {
            v18 = *(_QWORD *)(v57 + 88);
            break;
          }
        }
      }
      if ( !v56 )
        v56 = *(_QWORD *)(v55 + 8);
      if ( v55 == v56 )
        goto LABEL_80;
LABEL_88:
      v57 = v56 - 32;
      v56 = *(_QWORD *)(v56 + 8);
    }
  }
  v19 = a6;
  if ( a6 )
  {
    a4->PreviouslyGrantedAccess = 0;
    if ( (unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))SeSinglePrivilegeCheckEx)(
                            SeBackupPrivilege,
                            &a4->SubjectSecurityContext,
                            AccessMode) )
    {
      a4->Flags |= 2u;
      a4->PreviouslyGrantedAccess |= 0x1020019u;
    }
    v66 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))SeSinglePrivilegeCheckEx)(
            SeRestorePrivilege,
            &a4->SubjectSecurityContext,
            AccessMode);
    PreviouslyGrantedAccess = a4->PreviouslyGrantedAccess;
    if ( v66 )
    {
      a4->Flags |= 4u;
      PreviouslyGrantedAccess |= 0x10F0006u;
      a4->PreviouslyGrantedAccess = PreviouslyGrantedAccess;
    }
    a4->OriginalDesiredAccess = PreviouslyGrantedAccess;
    if ( !PreviouslyGrantedAccess )
      goto LABEL_141;
    LOBYTE(v67) = 1;
    SepAdjustAccessStateForConstraints(CmKeyObjectType, v18 + 32, v67, a4);
    a4->RemainingDesiredAccess = a4->OriginalDesiredAccess & ~a4->PreviouslyGrantedAccess;
  }
  v20 = *((_QWORD *)v13 + 1);
  OriginalDesiredAccess = a4->OriginalDesiredAccess;
  v92 = 0LL;
  WORD1(v92) = -1;
  v22 = *(_QWORD *)(v20 + 32);
  *(_OWORD *)Privileges = 0LL;
  if ( (*(_DWORD *)(v22 + 160) & 0x100000) == 0 || (OriginalDesiredAccess & 0xD0026) == 0 )
  {
    v23 = Privileges[1];
    Pool = 0LL;
    v25 = 0;
    goto LABEL_19;
  }
  if ( (OriginalDesiredAccess & 0xD0002) != 0 || (*(_DWORD *)(v22 + 4112) & 0x2000) == 0 || *(_BYTE *)(v20 + 65) )
  {
    v23 = Privileges[1];
  }
  else
  {
    started = CmpStartKcbStackForTopLayerKcb(&v92, v20);
    v23 = Privileges[1];
    v25 = started;
    if ( started < 0 )
      goto LABEL_116;
    v62 = *(_WORD *)(v20 + 66);
LABEL_99:
    if ( --v62 < 0 )
      goto LABEL_116;
    if ( v62 >= 2 )
      v63 = (PPRIVILEGE_SET)*((_QWORD *)Privileges[1] + v62 - 2);
    else
      v63 = Privileges[v62 - 1];
    WORD1(v92) = v62;
    for ( i = v62; i >= 0; --i )
    {
      v65 = i >= 2 ? (PPRIVILEGE_SET)*((_QWORD *)Privileges[1] + i - 2) : Privileges[i - 1];
      if ( HIWORD(v65[3].Control) && BYTE1(v65[3].Control) == 1 )
        break;
      if ( v65[2].PrivilegeCount != -1 )
      {
        if ( (*(_DWORD *)(*(_QWORD *)&v63[1].Privilege[0].Luid.HighPart + 160LL) & 0x100000) == 0 )
        {
          Pool = 0LL;
          v25 = 0;
          goto LABEL_19;
        }
        if ( (*(_DWORD *)(*(_QWORD *)(v20 + 32) + 4112LL) & 0x2000) != 0 && !*(_BYTE *)(v20 + 65) )
          goto LABEL_99;
        break;
      }
    }
  }
  v25 = -1073741790;
LABEL_116:
  Pool = 0LL;
LABEL_19:
  if ( v23 )
    CmSiFreeMemory(v23);
  if ( v25 < 0 || (v26 = a4->OriginalDesiredAccess, v27 = a3, (v26 & a3[24]) != v26) )
  {
LABEL_141:
    v48 = 0;
    v49 = 0;
    *a9 = -1073741790;
    goto LABEL_63;
  }
  if ( a6 && !a4->RemainingDesiredAccess || !v26 && (*a3 & 0x1000) != 0 )
  {
    v48 = 1;
    v49 = 0;
    *a9 = 0;
    goto LABEL_63;
  }
  GrantedAccess = 0;
  v91 = 0LL;
  v92 = 0LL;
  WORD1(v92) = -1;
  *(_OWORD *)Privileges = 0LL;
  if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(v13, v17) )
  {
    AccessStatus = -1073741444;
    LOBYTE(Pool) = 0;
  }
  else
  {
    v28 = *((_QWORD *)v13 + 1);
    v29 = *(__int16 *)(v28 + 66);
    if ( v29 < 2 || (Pool = (struct _PRIVILEGE_SET *)CmpAllocatePool(0x100uLL)) != 0LL )
    {
      v30 = *(__int16 *)(v28 + 66);
      LOWORD(v92) = v29;
      Privileges[1] = Pool;
      WORD1(v92) = v30;
      if ( (_WORD)v30 )
      {
        for ( j = *(_QWORD *)(v28 + 192); j; LOWORD(v30) = v30 - 1 )
        {
          v74 = *(struct _PRIVILEGE_SET **)(j + 16);
          if ( (__int16)v30 >= 2 )
          {
            *((_QWORD *)Pool + (__int16)v30 - 2) = v74;
          }
          else
          {
            Privileges[(__int16)v30 - 1] = v74;
            Pool = Privileges[1];
          }
          j = *(_QWORD *)(j + 24);
        }
      }
      else
      {
        Privileges[v30 - 1] = (PPRIVILEGE_SET)v28;
        Pool = Privileges[1];
      }
      v31 = WORD1(v92);
      v32 = 0LL;
      AccessStatus = 0;
      if ( (SWORD1(v92) & 0x8000u) == 0 )
      {
        do
        {
          if ( v31 >= 2u )
            v33 = (PPRIVILEGE_SET)*((_QWORD *)Pool + v31 - 2);
          else
            v33 = Privileges[v31 - 1];
          if ( HIWORD(v33[3].Control) && BYTE1(v33[3].Control) == 1 )
            break;
          if ( v33[2].PrivilegeCount != -1 )
          {
            v34 = *(GUID **)&v33[12].PrivilegeCount;
            if ( !v34
              || v17
              && (v17 == v34
               || ((v53 = *(_QWORD *)v17[3].Data4) == 0 || (v87 = *(_QWORD *)v34[3].Data4) == 0
                 ? (v54 = CmpTransUowIsEqual(v17[5].Data4, v34[5].Data4))
                 : (v54 = v53 == v87),
                   v54)) )
            {
              v32 = v33;
              if ( HIWORD(v33[3].Control) )
              {
                if ( BYTE1(v33[3].Control) )
                  break;
              }
            }
          }
          --v31;
        }
        while ( (v31 & 0x8000u) == 0 );
        v13 = Object;
      }
      Luid = v32[4].Privilege[0].Luid;
      if ( v17 )
      {
        Privilege = v32[10].Privilege;
        v76 = *(_QWORD *)&v32[10].Privilege[0].Attributes;
        if ( v32[10].Privilege != (LUID_AND_ATTRIBUTES *)v76 )
          goto LABEL_163;
LABEL_155:
        v77 = 0LL;
        while ( v77 )
        {
          v78 = *(GUID **)(v77 + 56);
          if ( v78 )
          {
            if ( v78 == v17
              || ((v79 = *(_QWORD *)v78[3].Data4) == 0 || (v88 = *(_QWORD *)v17[3].Data4) == 0
                ? (v80 = CmpTransUowIsEqual(v78[5].Data4, v17[5].Data4))
                : (v80 = v79 == v88),
                  v80) )
            {
              if ( *(_DWORD *)(v77 + 68) == 9 )
              {
                Luid = *(LUID *)(v77 + 88);
                break;
              }
            }
          }
          if ( !v76 )
            v76 = *(_QWORD *)&Privilege->Attributes;
          if ( Privilege == (LUID_AND_ATTRIBUTES *)v76 )
            goto LABEL_155;
LABEL_163:
          v77 = v76 - 32;
          v76 = *(_QWORD *)(v76 + 8);
        }
      }
      CurrentThread = KeGetCurrentThread();
      v37 = (void *)(*(_QWORD *)&Luid + 32LL);
      v95 = (void *)(*(_QWORD *)&Luid + 32LL);
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceSharedLite(*((PERESOURCE *)a4->SubjectSecurityContext.PrimaryToken + 6), 1u);
      if ( a4->SubjectSecurityContext.ClientToken )
      {
        v38 = KeGetCurrentThread();
        --v38->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)a4->SubjectSecurityContext.ClientToken + 6), 1u);
      }
      RemainingDesiredAccess = a4->RemainingDesiredAccess;
      GrantedAccess = 0;
      v91 = 0LL;
      v40 = SeAccessCheck(
              (PSECURITY_DESCRIPTOR)(*(_QWORD *)&Luid + 32LL),
              &a4->SubjectSecurityContext,
              1u,
              RemainingDesiredAccess,
              a4->PreviouslyGrantedAccess,
              &v91,
              (PGENERIC_MAPPING)((char *)CmKeyObjectType + 76),
              AccessMode,
              &GrantedAccess,
              &AccessStatus);
      v41 = v91;
      LOBYTE(Pool) = v40;
      if ( v91 )
      {
        AuxData = (PVOID *)a4->AuxData;
        v43 = *AuxData;
        v44 = *(_DWORD *)*AuxData;
        if ( v91->PrivilegeCount + v44 > 3 )
        {
          v81 = 8;
          Pool2 = (void *)ExAllocatePool2(0x100uLL);
          if ( Pool2 )
          {
            v83 = *AuxData;
            if ( *AuxData )
            {
              if ( *v83 )
                v81 = 12 * *v83 + 8;
            }
            else
            {
              v81 = 0;
            }
            memmove(Pool2, v83, v81);
            SepConcatenatePrivileges(Pool2, v84, v41);
            if ( a4->PrivilegesAllocated )
              ExFreePoolWithTag(*AuxData, 0);
            *AuxData = Pool2;
            a4->PrivilegesAllocated = 1;
          }
        }
        else
        {
          if ( v43 )
          {
            if ( v44 )
              v45 = 12 * v44 + 8;
            else
              v45 = 8;
          }
          else
          {
            v45 = 0;
          }
          memmove((char *)v43 + v45, v91->Privilege, 12 * v91->PrivilegeCount);
          *v43 += v41->PrivilegeCount;
        }
        CmSiFreeMemory(v91);
        v37 = v95;
        v17 = TransactionId;
      }
      if ( (_BYTE)Pool )
      {
        v46 = GrantedAccess;
        a4->PreviouslyGrantedAccess |= GrantedAccess;
        a4->RemainingDesiredAccess &= ~(v46 | 0x2000000);
      }
      *((_WORD *)v13 + 24) |= 2u;
      if ( v17 )
      {
        SeOpenObjectAuditAlarmWithTransaction(
          (PUNICODE_STRING)CmKeyObjectType + 1,
          v13,
          0LL,
          v37,
          a4,
          0,
          (BOOLEAN)Pool,
          AccessMode,
          (GUID *)((char *)v17 + 88),
          &a4->GenerateOnClose);
      }
      else if ( AccessMode )
      {
        SeOpenObjectAuditAlarmWithTransaction(
          (PUNICODE_STRING)CmKeyObjectType + 1,
          v13,
          0LL,
          v37,
          a4,
          0,
          (BOOLEAN)Pool,
          AccessMode,
          0LL,
          &a4->GenerateOnClose);
      }
      *((_WORD *)v13 + 24) &= ~2u;
      ExReleaseResourceLite(*((PERESOURCE *)a4->SubjectSecurityContext.PrimaryToken + 6));
      KeLeaveCriticalRegionThread();
      ClientToken = (PERESOURCE *)a4->SubjectSecurityContext.ClientToken;
      if ( ClientToken )
      {
        ExReleaseResourceLite(ClientToken[6]);
        KeLeaveCriticalRegionThread();
      }
      v19 = a6;
    }
    else
    {
      AccessStatus = -1073741670;
    }
    v27 = a3;
  }
  if ( Privileges[1] )
    CmSiFreeMemory(Privileges[1]);
  if ( !(_BYTE)Pool )
  {
    if ( v19 )
      goto LABEL_143;
    v69 = *((_QWORD *)v13 + 1);
    if ( *(_WORD *)(v69 + 66)
      || (v27[6] & 0x10) != 0
      || (*(_DWORD *)(v69 + 184) & 0x40) != 0
      || (*(_DWORD *)(*(_QWORD *)(v69 + 32) + 4112LL) & 0x10) == 0
      || (unsigned __int8)CmpIsSystemEntity((unsigned __int8)KeGetCurrentThread()->PreviousMode)
      || (LODWORD(TransactionId) = CmpCheckAdminAccess(
                                     a4->RemainingDesiredAccess,
                                     (PSECURITY_DESCRIPTOR)(*(_QWORD *)(v69 + 88) + 32LL)),
          (int)TransactionId < 0) )
    {
      if ( AccessStatus >= 0 )
        goto LABEL_62;
    }
    if ( KeGetCurrentThread()->PreviousMode != 1
      || (CurrentThreadProcess = PsGetCurrentThreadProcess(),
          ProcessServerSilo = PsGetProcessServerSilo((__int64)CurrentThreadProcess),
          ServerSiloServiceSessionId = PsGetServerSiloServiceSessionId(ProcessServerSilo),
          (unsigned int)PsGetSessionIdEx((__int64)CurrentThreadProcess) == ServerSiloServiceSessionId)
      || (a4->RemainingDesiredAccess & 0xD0026) == 0 )
    {
LABEL_143:
      v49 = 0;
    }
    else
    {
      v49 = (unsigned __int8)CmpCheckKeyOwnerForPca(a2, v17) != 0;
    }
    v48 = 0;
    *a9 = -1073741790;
    goto LABEL_63;
  }
LABEL_62:
  v48 = 1;
  v49 = 0;
  *a9 = 0;
LABEL_63:
  result = v48;
  *a8 = v49;
  return result;
}
