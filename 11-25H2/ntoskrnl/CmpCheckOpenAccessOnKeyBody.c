/*
 * XREFs of CmpCheckOpenAccessOnKeyBody @ 0x140855F70
 * Callers:
 *     CmpDoParseKey @ 0x140871670 (CmpDoParseKey.c)
 * Callees:
 *     PsGetSessionIdEx @ 0x140246440 (PsGetSessionIdEx.c)
 *     ExAcquireResourceSharedLite @ 0x140295130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     SeAccessCheck @ 0x1403624F0 (SeAccessCheck.c)
 *     CmpAllocatePool @ 0x1403DCED4 (CmpAllocatePool.c)
 *     PsGetProcessServerSilo @ 0x140447CD0 (PsGetProcessServerSilo.c)
 *     PsGetServerSiloServiceSessionId @ 0x1404565D0 (PsGetServerSiloServiceSessionId.c)
 *     CmSiFreeMemory @ 0x14046F140 (CmSiFreeMemory.c)
 *     PsGetCurrentThreadProcess @ 0x1404725F0 (PsGetCurrentThreadProcess.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     CmpTransUowIsEqual @ 0x1406EF5FC (CmpTransUowIsEqual.c)
 *     CmpIsSystemEntity @ 0x1408416A0 (CmpIsSystemEntity.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x140854730 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     CmpCheckKeyBodyAccess @ 0x1408559A0 (CmpCheckKeyBodyAccess.c)
 *     SepConcatenatePrivileges @ 0x140862710 (SepConcatenatePrivileges.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x14086CAF0 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpCheckKeyOwnerForPca @ 0x14086E770 (CmpCheckKeyOwnerForPca.c)
 *     CmEqualTrans @ 0x140871010 (CmEqualTrans.c)
 *     CmpSetAccessStateForBackupRestore @ 0x1408F6088 (CmpSetAccessStateForBackupRestore.c)
 *     CmpCheckAdminAccess @ 0x14099970C (CmpCheckAdminAccess.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140BA94E0 (CmpIsKeyDeletedForKeyBody.c)
 */

__int64 __fastcall CmpCheckOpenAccessOnKeyBody(
        char *Object,
        __int64 a2,
        _DWORD *a3,
        struct _ACCESS_STATE *a4,
        unsigned __int8 AccessMode,
        char a6,
        __int64 a7,
        bool *a8,
        _DWORD *a9)
{
  unsigned __int16 v9; // ax
  _WORD *v10; // r14
  __int64 v11; // rsi
  _QWORD *v12; // r13
  struct _ACCESS_STATE *v13; // r15
  __int64 v14; // r12
  __int64 v15; // r13
  unsigned __int16 v16; // di
  __int64 v17; // rbx
  __int64 v18; // r12
  __int64 v19; // r14
  char v20; // si
  __int64 v21; // rdi
  ACCESS_MASK OriginalDesiredAccess; // edx
  __int64 v23; // rcx
  struct _PRIVILEGE_SET *v24; // rdx
  struct _PRIVILEGE_SET *Pool; // r14
  int v26; // ebx
  ACCESS_MASK v27; // ecx
  _DWORD *v28; // rdi
  __int64 v29; // rdi
  int v30; // ebx
  __int64 v31; // rax
  PPRIVILEGE_SET v32; // rsi
  unsigned __int16 v33; // ax
  unsigned __int16 v34; // di
  PPRIVILEGE_SET v35; // rbx
  LUID Luid; // r14
  struct _KTHREAD *CurrentThread; // rax
  void *v38; // rbx
  struct _KTHREAD *v39; // rax
  KPROCESSOR_MODE v40; // si
  ACCESS_MASK RemainingDesiredAccess; // r9d
  BOOLEAN v42; // al
  PPRIVILEGE_SET v43; // r14
  BOOLEAN v44; // r12
  PVOID *AuxData; // r13
  _DWORD *v46; // rbx
  int v47; // edx
  unsigned int v48; // esi
  ACCESS_MASK v49; // eax
  PERESOURCE *ClientToken; // rcx
  unsigned __int8 v51; // dl
  bool v52; // r8
  __int64 result; // rax
  __int64 v54; // rsi
  __int64 v55; // rbx
  __int64 v56; // rdi
  __int64 v57; // rcx
  __int64 v58; // rdx
  bool IsEqual; // al
  int started; // eax
  __int16 v61; // r8
  PPRIVILEGE_SET v62; // r9
  __int16 i; // ax
  PPRIVILEGE_SET v64; // rcx
  __int64 v65; // rbx
  NTSTATUS v66; // eax
  __int64 v67; // r12
  _KPROCESS *CurrentThreadProcess; // rdi
  __int64 ProcessServerSilo; // rax
  int ServerSiloServiceSessionId; // ebx
  LUID_AND_ATTRIBUTES *Privilege; // rsi
  __int64 v72; // rbx
  __int64 v73; // rdi
  __int64 v74; // rcx
  __int64 v75; // rdx
  bool v76; // al
  __int64 j; // rcx
  struct _PRIVILEGE_SET *v78; // rdx
  unsigned int v79; // esi
  void *Pool2; // rbx
  _DWORD *v81; // rdx
  __int64 v82; // rdx
  KPROCESSOR_MODE v83; // r9
  __int64 v84; // rdx
  __int64 v85; // rax
  __int64 v86; // rax
  NTSTATUS AccessStatus; // [rsp+54h] [rbp-35h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+58h] [rbp-31h] BYREF
  PPRIVILEGE_SET v89; // [rsp+60h] [rbp-29h] BYREF
  void *v90; // [rsp+68h] [rbp-21h]
  __int128 v91; // [rsp+70h] [rbp-19h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+80h] [rbp-9h]
  char *v93; // [rsp+D0h] [rbp+47h] BYREF
  __int64 v94; // [rsp+D8h] [rbp+4Fh]
  _DWORD *v95; // [rsp+E0h] [rbp+57h]

  v95 = a3;
  v94 = a2;
  v93 = Object;
  v9 = *(_WORD *)(a2 + 2);
  v10 = Object + 4;
  v11 = 0LL;
  v12 = Object;
  v13 = a4;
  if ( (v9 & 0x8000u) == 0 )
  {
    v14 = a7;
    v15 = v94;
    do
    {
      v16 = v9;
      if ( v9 >= 2u )
        v17 = *(_QWORD *)(*(_QWORD *)(v15 + 24) + 8LL * v9 - 16);
      else
        v17 = *(_QWORD *)(v15 + 8LL * v9 + 8);
      if ( *(_WORD *)(v17 + 66) && *(_BYTE *)(v17 + 65) == 1 )
        break;
      if ( *(_DWORD *)(v17 + 40) != -1 && (!*(_QWORD *)(v17 + 240) || (unsigned __int8)CmEqualTrans(v14)) )
      {
        v11 = v17;
        if ( *(_WORD *)(v17 + 66) )
        {
          if ( *(_BYTE *)(v17 + 65) )
            break;
        }
      }
      v9 = v16 - 1;
    }
    while ( (__int16)(v16 - 1) >= 0 );
    v12 = v93;
  }
  if ( v10 )
    *v10 = *(_WORD *)(v11 + 66);
  v18 = a7;
  v19 = *(_QWORD *)(v11 + 88);
  if ( a7 )
  {
    v54 = v11 + 208;
    v55 = *(_QWORD *)(v54 + 8);
    if ( v54 != v55 )
      goto LABEL_80;
LABEL_72:
    v56 = 0LL;
    while ( v56 )
    {
      v57 = *(_QWORD *)(v56 + 56);
      if ( v57 )
      {
        if ( v57 == v18
          || ((v58 = *(_QWORD *)(v57 + 56)) == 0 || (v85 = *(_QWORD *)(v18 + 56)) == 0
            ? (IsEqual = CmpTransUowIsEqual((const void *)(v57 + 88), (const void *)(v18 + 88)))
            : (IsEqual = v58 == v85),
              IsEqual) )
        {
          if ( *(_DWORD *)(v56 + 68) == 9 )
          {
            v19 = *(_QWORD *)(v56 + 88);
            break;
          }
        }
      }
      if ( !v55 )
        v55 = *(_QWORD *)(v54 + 8);
      if ( v54 == v55 )
        goto LABEL_72;
LABEL_80:
      v56 = v55 - 32;
      v55 = *(_QWORD *)(v55 + 8);
    }
  }
  v20 = a6;
  if ( a6 )
  {
    LOBYTE(a4) = 1;
    if ( (int)CmpSetAccessStateForBackupRestore(v13, AccessMode, v19 + 32, a4) < 0 )
      goto LABEL_110;
  }
  v21 = v12[1];
  OriginalDesiredAccess = v13->OriginalDesiredAccess;
  v91 = 0LL;
  WORD1(v91) = -1;
  v23 = *(_QWORD *)(v21 + 32);
  *(_OWORD *)Privileges = 0LL;
  if ( (*(_DWORD *)(v23 + 160) & 0x100000) == 0 || (OriginalDesiredAccess & 0xD0026) == 0 )
  {
    v24 = Privileges[1];
    Pool = 0LL;
    v26 = 0;
    goto LABEL_19;
  }
  if ( (OriginalDesiredAccess & 0xD0002) != 0 || (*(_DWORD *)(v23 + 4112) & 0x2000) == 0 || *(_BYTE *)(v21 + 65) )
  {
    v24 = Privileges[1];
  }
  else
  {
    started = CmpStartKcbStackForTopLayerKcb(&v91, v21);
    v24 = Privileges[1];
    v26 = started;
    if ( started < 0 )
      goto LABEL_108;
    v61 = *(_WORD *)(v21 + 66);
LABEL_91:
    if ( --v61 < 0 )
      goto LABEL_108;
    if ( v61 >= 2 )
      v62 = (PPRIVILEGE_SET)*((_QWORD *)Privileges[1] + v61 - 2);
    else
      v62 = Privileges[v61 - 1];
    WORD1(v91) = v61;
    for ( i = v61; i >= 0; --i )
    {
      v64 = i >= 2 ? (PPRIVILEGE_SET)*((_QWORD *)Privileges[1] + i - 2) : Privileges[i - 1];
      if ( HIWORD(v64[3].Control) && BYTE1(v64[3].Control) == 1 )
        break;
      if ( v64[2].PrivilegeCount != -1 )
      {
        if ( (*(_DWORD *)(*(_QWORD *)&v62[1].Privilege[0].Luid.HighPart + 160LL) & 0x100000) == 0 )
        {
          Pool = 0LL;
          v26 = 0;
          goto LABEL_19;
        }
        if ( (*(_DWORD *)(*(_QWORD *)(v21 + 32) + 4112LL) & 0x2000) != 0 && !*(_BYTE *)(v21 + 65) )
          goto LABEL_91;
        break;
      }
    }
  }
  v26 = -1073741790;
LABEL_108:
  Pool = 0LL;
LABEL_19:
  if ( v24 )
    CmSiFreeMemory(v24);
  if ( v26 < 0 || (v27 = v13->OriginalDesiredAccess, v28 = v95, (v27 & v95[24]) != v27) )
  {
LABEL_110:
    v52 = 0;
    *a9 = -1073741790;
LABEL_111:
    v51 = 0;
    goto LABEL_63;
  }
  if ( (!v20 || v13->RemainingDesiredAccess) && (v27 || (*v95 & 0x1000) == 0) )
  {
    GrantedAccess = 0;
    v89 = 0LL;
    v91 = 0LL;
    WORD1(v91) = -1;
    *(_OWORD *)Privileges = 0LL;
    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(v12, v18) )
    {
      AccessStatus = -1073741444;
      v44 = 0;
    }
    else
    {
      v29 = v12[1];
      v30 = *(__int16 *)(v29 + 66);
      if ( v30 < 2 || (Pool = (struct _PRIVILEGE_SET *)CmpAllocatePool(0x100uLL)) != 0LL )
      {
        v31 = *(__int16 *)(v29 + 66);
        LOWORD(v91) = v30;
        Privileges[1] = Pool;
        WORD1(v91) = v31;
        if ( (_WORD)v31 )
        {
          for ( j = *(_QWORD *)(v29 + 192); j; LOWORD(v31) = v31 - 1 )
          {
            v78 = *(struct _PRIVILEGE_SET **)(j + 16);
            if ( (__int16)v31 >= 2 )
            {
              *((_QWORD *)Pool + (__int16)v31 - 2) = v78;
            }
            else
            {
              Privileges[(__int16)v31 - 1] = v78;
              Pool = Privileges[1];
            }
            j = *(_QWORD *)(j + 24);
          }
        }
        else
        {
          Privileges[v31 - 1] = (PPRIVILEGE_SET)v29;
          Pool = Privileges[1];
        }
        v32 = 0LL;
        AccessStatus = 0;
        v33 = WORD1(v91);
        if ( (SWORD1(v91) & 0x8000u) == 0 )
        {
          do
          {
            v34 = v33;
            if ( v33 >= 2u )
              v35 = (PPRIVILEGE_SET)*((_QWORD *)Pool + v33 - 2);
            else
              v35 = Privileges[v33 - 1];
            if ( HIWORD(v35[3].Control) && BYTE1(v35[3].Control) == 1 )
              break;
            if ( v35[2].PrivilegeCount != -1
              && (!*(_QWORD *)&v35[12].PrivilegeCount || (unsigned __int8)CmEqualTrans(v18)) )
            {
              v32 = v35;
              if ( HIWORD(v35[3].Control) )
              {
                if ( BYTE1(v35[3].Control) )
                  break;
              }
            }
            v33 = v34 - 1;
          }
          while ( (__int16)(v34 - 1) >= 0 );
          v12 = v93;
        }
        Luid = v32[4].Privilege[0].Luid;
        if ( v18 )
        {
          Privilege = v32[10].Privilege;
          v72 = *(_QWORD *)&Privilege->Attributes;
          if ( Privilege != (LUID_AND_ATTRIBUTES *)v72 )
            goto LABEL_139;
LABEL_131:
          v73 = 0LL;
          while ( v73 )
          {
            v74 = *(_QWORD *)(v73 + 56);
            if ( v74 )
            {
              if ( v74 == v18
                || ((v75 = *(_QWORD *)(v74 + 56)) == 0 || (v86 = *(_QWORD *)(v18 + 56)) == 0
                  ? (v76 = CmpTransUowIsEqual((const void *)(v74 + 88), (const void *)(v18 + 88)))
                  : (v76 = v75 == v86),
                    v76) )
              {
                if ( *(_DWORD *)(v73 + 68) == 9 )
                {
                  Luid = *(LUID *)(v73 + 88);
                  break;
                }
              }
            }
            if ( !v72 )
              v72 = *(_QWORD *)&Privilege->Attributes;
            if ( Privilege == (LUID_AND_ATTRIBUTES *)v72 )
              goto LABEL_131;
LABEL_139:
            v73 = v72 - 32;
            v72 = *(_QWORD *)(v72 + 8);
          }
        }
        CurrentThread = KeGetCurrentThread();
        v38 = (void *)(*(_QWORD *)&Luid + 32LL);
        v90 = (void *)(*(_QWORD *)&Luid + 32LL);
        --CurrentThread->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)v13->SubjectSecurityContext.PrimaryToken + 6), 1u);
        if ( v13->SubjectSecurityContext.ClientToken )
        {
          v39 = KeGetCurrentThread();
          --v39->KernelApcDisable;
          ExAcquireResourceSharedLite(*((PERESOURCE *)v13->SubjectSecurityContext.ClientToken + 6), 1u);
        }
        v40 = AccessMode;
        RemainingDesiredAccess = v13->RemainingDesiredAccess;
        GrantedAccess = 0;
        v89 = 0LL;
        v42 = SeAccessCheck(
                (PSECURITY_DESCRIPTOR)(*(_QWORD *)&Luid + 32LL),
                &v13->SubjectSecurityContext,
                1u,
                RemainingDesiredAccess,
                v13->PreviouslyGrantedAccess,
                &v89,
                (PGENERIC_MAPPING)((char *)CmKeyObjectType + 76),
                AccessMode,
                &GrantedAccess,
                &AccessStatus);
        v43 = v89;
        v44 = v42;
        if ( v89 )
        {
          AuxData = (PVOID *)v13->AuxData;
          v46 = *AuxData;
          v47 = *(_DWORD *)*AuxData;
          if ( v89->PrivilegeCount + v47 > 3 )
          {
            v79 = 8;
            Pool2 = (void *)ExAllocatePool2(0x100uLL);
            if ( Pool2 )
            {
              v81 = *AuxData;
              if ( *AuxData )
              {
                if ( *v81 )
                  v79 = 12 * *v81 + 8;
              }
              else
              {
                v79 = 0;
              }
              memmove(Pool2, v81, v79);
              SepConcatenatePrivileges(Pool2, v82, v43);
              if ( v13->PrivilegesAllocated )
                ExFreePoolWithTag(*AuxData, 0);
              *AuxData = Pool2;
              v13->PrivilegesAllocated = 1;
            }
          }
          else
          {
            if ( v46 )
            {
              if ( v47 )
                v48 = 12 * v47 + 8;
              else
                v48 = 8;
            }
            else
            {
              v48 = 0;
            }
            memmove((char *)v46 + v48, v89->Privilege, 12 * v89->PrivilegeCount);
            *v46 += v43->PrivilegeCount;
          }
          CmSiFreeMemory(v89);
          v12 = v93;
          v38 = v90;
          v40 = AccessMode;
        }
        if ( v44 )
        {
          v49 = GrantedAccess;
          v13->PreviouslyGrantedAccess |= GrantedAccess;
          v13->RemainingDesiredAccess &= ~(v49 | 0x2000000);
        }
        *((_WORD *)v12 + 24) |= 2u;
        if ( a7 )
        {
          SeOpenObjectAuditAlarmWithTransaction(
            (PUNICODE_STRING)CmKeyObjectType + 1,
            v12,
            0LL,
            v38,
            v13,
            0,
            v44,
            v40,
            (GUID *)(a7 + 88),
            &v13->GenerateOnClose);
        }
        else if ( v40 )
        {
          SeOpenObjectAuditAlarmWithTransaction(
            (PUNICODE_STRING)CmKeyObjectType + 1,
            v12,
            0LL,
            v38,
            v13,
            0,
            v44,
            v40,
            0LL,
            &v13->GenerateOnClose);
        }
        *((_WORD *)v12 + 24) &= ~2u;
        ExReleaseResourceLite(*((PERESOURCE *)v13->SubjectSecurityContext.PrimaryToken + 6));
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        ClientToken = (PERESOURCE *)v13->SubjectSecurityContext.ClientToken;
        if ( ClientToken )
        {
          ExReleaseResourceLite(ClientToken[6]);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        }
        v20 = a6;
      }
      else
      {
        AccessStatus = -1073741670;
        v44 = 0;
      }
      v28 = v95;
    }
    if ( Privileges[1] )
      CmSiFreeMemory(Privileges[1]);
    if ( !v44 )
    {
      if ( v20 )
        goto LABEL_147;
      v65 = v12[1];
      a6 = 0;
      if ( *(_WORD *)(v65 + 66)
        || (v28[6] & 0x10) != 0
        || (*(_DWORD *)(v65 + 184) & 0x40) != 0
        || (*(_DWORD *)(*(_QWORD *)(v65 + 32) + 4112LL) & 0x10) == 0
        || CmpIsSystemEntity(KeGetCurrentThread()->PreviousMode, 0LL, v28 + 4)
        || (LODWORD(v93) = CmpCheckAdminAccess(
                             v13->RemainingDesiredAccess,
                             (PSECURITY_DESCRIPTOR)(*(_QWORD *)(v65 + 88) + 32LL)),
            (int)v93 < 0) )
      {
        v66 = AccessStatus;
        v67 = a7;
      }
      else
      {
        v67 = a7;
        if ( !a6 )
          goto LABEL_122;
        v83 = AccessMode;
        v84 = a7;
        v13->RemainingDesiredAccess = 0x2000000;
        v13->OriginalDesiredAccess = 0x2000000;
        if ( (unsigned __int8)CmpCheckKeyBodyAccess((__int64)v12, v84, v13, v83, (NTSTATUS *)&v93) )
          goto LABEL_62;
        v66 = (int)v93;
      }
      if ( v66 >= 0 )
        goto LABEL_62;
LABEL_122:
      if ( KeGetCurrentThread()->PreviousMode == 1 )
      {
        CurrentThreadProcess = PsGetCurrentThreadProcess();
        ProcessServerSilo = PsGetProcessServerSilo((__int64)CurrentThreadProcess);
        ServerSiloServiceSessionId = PsGetServerSiloServiceSessionId(ProcessServerSilo);
        if ( (unsigned int)PsGetSessionIdEx((__int64)CurrentThreadProcess) != ServerSiloServiceSessionId
          && (v13->RemainingDesiredAccess & 0xD0026) != 0 )
        {
          v52 = (unsigned __int8)CmpCheckKeyOwnerForPca(v94, v67) != 0;
LABEL_126:
          *a9 = -1073741790;
          goto LABEL_111;
        }
      }
LABEL_147:
      v52 = 0;
      goto LABEL_126;
    }
  }
LABEL_62:
  v51 = 1;
  v52 = 0;
  *a9 = 0;
LABEL_63:
  result = v51;
  *a8 = v52;
  return result;
}
