/*
 * XREFs of CmpSecurityMethod @ 0x140856B80
 * Callers:
 *     ObpCreateHandle @ 0x1408518D0 (ObpCreateHandle.c)
 *     ObpGrantAccess @ 0x1408551F0 (ObpGrantAccess.c)
 *     ObCheckObjectAccess @ 0x14086E090 (ObCheckObjectAccess.c)
 *     NtQuerySecurityObject @ 0x14086F0A0 (NtQuerySecurityObject.c)
 *     SepAppendAceToTokenObjectAcl @ 0x1408A43D0 (SepAppendAceToTokenObjectAcl.c)
 *     ObGetObjectSecurity @ 0x1408A4D30 (ObGetObjectSecurity.c)
 *     ObpGetObjectSecurity @ 0x1409160F0 (ObpGetObjectSecurity.c)
 * Callees:
 *     CmpIsRegistryLockAcquired @ 0x140206FB0 (CmpIsRegistryLockAcquired.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     EtwGetKernelTraceTimestamp @ 0x14031CDD0 (EtwGetKernelTraceTimestamp.c)
 *     CmpAllocatePool @ 0x1403DCED4 (CmpAllocatePool.c)
 *     CmpInitializeThreadInfo @ 0x1403F5C00 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x140429780 (CmCleanupThreadInfo.c)
 *     CmSiFreeMemory @ 0x14046F140 (CmSiFreeMemory.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     CmpTransUowIsEqual @ 0x1406EF5FC (CmpTransUowIsEqual.c)
 *     CmpAssignKeySecurity @ 0x1407CD200 (CmpAssignKeySecurity.c)
 *     CmpCallCallBacksEx @ 0x14084C050 (CmpCallCallBacksEx.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x140870454 (CmpTransSearchAddTransFromKeyBody.c)
 *     SeQuerySecurityDescriptorInfo @ 0x140870750 (SeQuerySecurityDescriptorInfo.c)
 *     CmEqualTrans @ 0x140871010 (CmEqualTrans.c)
 *     EtwpTraceRegistry @ 0x140874AF0 (EtwpTraceRegistry.c)
 *     CmpSetKeySecurity @ 0x140977054 (CmpSetKeySecurity.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 *     CmpUnlockKcb @ 0x140BA92B0 (CmpUnlockKcb.c)
 *     CmpLockKcbShared @ 0x140BA9340 (CmpLockKcbShared.c)
 *     CmpAcquireShutdownRundown @ 0x140BA9460 (CmpAcquireShutdownRundown.c)
 *     CmpLockRegistry @ 0x140BA9570 (CmpLockRegistry.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140BA9880 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpUnlockRegistry @ 0x140BA9920 (CmpUnlockRegistry.c)
 *     CmpReleaseShutdownRundown @ 0x140BA9970 (CmpReleaseShutdownRundown.c)
 */

__int64 __fastcall CmpSecurityMethod(
        ULONG_PTR *a1,
        int a2,
        DWORD *a3,
        void *a4,
        ULONG *a5,
        __int64 a6,
        int a7,
        __int64 a8)
{
  ULONG_PTR v9; // r14
  ULONG_PTR *v10; // r13
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  char v15; // r12
  struct _KTHREAD *CurrentThread; // rax
  struct _PRIVILEGE_SET *v17; // r15
  char v18; // bl
  __int64 v19; // rcx
  char v20; // di
  ULONG_PTR v21; // rdi
  int v22; // ebx
  __int64 v23; // r14
  __int16 v24; // bx
  char *v25; // rdi
  char *v26; // rcx
  int v27; // esi
  __int64 v28; // r15
  unsigned __int16 v29; // ax
  __int64 v30; // r13
  unsigned __int16 v31; // di
  __int64 v32; // rbx
  __int64 v33; // r8
  __int64 v34; // rbx
  __int16 v35; // bx
  ULONG_PTR *v36; // rdi
  __int64 v37; // r15
  ULONG_PTR *v38; // rcx
  struct _PRIVILEGE_SET *v39; // rax
  unsigned int v40; // ecx
  __int64 v41; // rcx
  unsigned int v43; // ecx
  unsigned int v44; // eax
  int v45; // eax
  __int64 v46; // r15
  __int64 v47; // rdi
  __int64 v48; // rsi
  __int64 v49; // rcx
  __int64 v50; // rdx
  bool IsEqual; // al
  __int64 v52; // rax
  __int64 v53; // rcx
  __int64 v54; // rax
  unsigned int BugCheckParameter4; // [rsp+20h] [rbp-E0h]
  __int64 v56; // [rsp+28h] [rbp-D8h]
  char v57; // [rsp+41h] [rbp-BFh]
  __int16 v58; // [rsp+42h] [rbp-BEh]
  PPRIVILEGE_SET Privileges; // [rsp+48h] [rbp-B8h]
  __int64 v60; // [rsp+50h] [rbp-B0h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+58h] [rbp-A8h]
  _QWORD v62[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v63; // [rsp+70h] [rbp-90h] BYREF
  __int128 v64; // [rsp+80h] [rbp-80h]
  int v65; // [rsp+90h] [rbp-70h]
  __int64 v66; // [rsp+98h] [rbp-68h]
  PSECURITY_DESCRIPTOR ObjectsSecurityDescriptor; // [rsp+A0h] [rbp-60h] BYREF
  ULONG_PTR *v68; // [rsp+A8h] [rbp-58h] BYREF
  int v69; // [rsp+B0h] [rbp-50h]
  int v70; // [rsp+B4h] [rbp-4Ch]
  __int128 *v71; // [rsp+B8h] [rbp-48h]
  int v72; // [rsp+C0h] [rbp-40h]
  __int128 v73; // [rsp+C4h] [rbp-3Ch]
  __int64 v74; // [rsp+D4h] [rbp-2Ch]
  int v75; // [rsp+DCh] [rbp-24h]
  PULONG Length; // [rsp+E0h] [rbp-20h]
  PSECURITY_INFORMATION SecurityInformation; // [rsp+E8h] [rbp-18h]
  __int128 v78; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v79; // [rsp+100h] [rbp+0h]
  __int128 v80; // [rsp+110h] [rbp+10h]
  __int64 v81; // [rsp+120h] [rbp+20h]
  __int128 v82; // [rsp+128h] [rbp+28h] BYREF
  _OWORD v83[2]; // [rsp+138h] [rbp+38h] BYREF

  v9 = a2;
  v10 = a1;
  SecurityDescriptor = a4;
  SecurityInformation = a3;
  v65 = a2;
  ObjectsSecurityDescriptor = a1;
  Length = a5;
  v82 = 0LL;
  v66 = 0LL;
  memset(v83, 0, sizeof(v83));
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp((LARGE_INTEGER *)v83, 0x20000u);
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v82);
  v62[1] = v62;
  v15 = 0;
  v62[0] = v62;
  v78 = 0LL;
  v81 = 0LL;
  v79 = 0LL;
  v80 = 0LL;
  if ( CmpTraceRoutine && v10 )
    v66 = v10[1];
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( CmpCallBackCount && !CmpIsRegistryLockAcquired() )
  {
    if ( (_DWORD)v9 == 1 )
    {
      v43 = 36;
      *(_QWORD *)&v79 = SecurityDescriptor;
      v44 = 37;
      *((_QWORD *)&v79 + 1) = a5;
    }
    else
    {
      if ( (_DWORD)v9 )
        goto LABEL_63;
      v43 = 38;
      *(_QWORD *)&v79 = SecurityDescriptor;
      v44 = 39;
    }
    *((_QWORD *)&v78 + 1) = a3;
    *(_QWORD *)&v78 = v10;
    v45 = CmpCallCallBacksEx(v43, (__int64)&v78, 0LL, 1, v44, (__int64)v10, (__int64)v62);
    if ( v45 < 0 )
    {
      v27 = 0;
      if ( v45 != -1073740541 )
        v27 = v45;
      goto LABEL_56;
    }
    v15 = 1;
  }
  if ( (_DWORD)v9 == 1 )
  {
    v63 = 0LL;
    v17 = 0LL;
    WORD1(v63) = -1;
    v60 = 0LL;
    v18 = 0;
    v64 = 0LL;
    v57 = CmpAcquireShutdownRundown(v12, v11, v13, v14);
    v20 = v57;
    if ( !v57 )
    {
      v39 = (struct _PRIVILEGE_SET *)*((_QWORD *)&v64 + 1);
      v27 = -1073741431;
LABEL_42:
      if ( v39 )
        CmSiFreeMemory(v39);
      if ( v18 )
        CmpUnlockRegistry(v19);
      if ( v20 )
        CmpReleaseShutdownRundown(v19);
      if ( v27 < 0 )
        goto LABEL_49;
LABEL_100:
      v27 = 0;
      goto LABEL_49;
    }
    CmpLockRegistry();
    v21 = v10[1];
    Privileges = 0LL;
    v22 = *(__int16 *)(v21 + 66);
    if ( v22 >= 2 )
    {
      Privileges = (PPRIVILEGE_SET)CmpAllocatePool(0x100uLL);
      v17 = Privileges;
      if ( !Privileges )
      {
        v39 = (struct _PRIVILEGE_SET *)*((_QWORD *)&v64 + 1);
        v27 = -1073741670;
LABEL_41:
        v20 = v57;
        v18 = 1;
        goto LABEL_42;
      }
    }
    v23 = *(__int16 *)(v21 + 66);
    LOWORD(v63) = v22;
    *((_QWORD *)&v64 + 1) = v17;
    v58 = v23;
    WORD1(v63) = v23;
    if ( (_WORD)v23 )
    {
      v52 = *(_QWORD *)(v21 + 192);
      if ( !v52 )
        goto LABEL_11;
      do
      {
        v53 = *(_QWORD *)(v52 + 16);
        if ( (__int16)v23 >= 2 )
        {
          *((_QWORD *)v17 + (__int16)v23 - 2) = v53;
        }
        else
        {
          *((_QWORD *)&v63 + (__int16)v23 + 1) = v53;
          v17 = (struct _PRIVILEGE_SET *)*((_QWORD *)&v64 + 1);
        }
        v52 = *(_QWORD *)(v52 + 24);
        LOWORD(v23) = v23 - 1;
      }
      while ( v52 );
    }
    else
    {
      *((_QWORD *)&v63 + v23 + 1) = v21;
      v17 = (struct _PRIVILEGE_SET *)*((_QWORD *)&v64 + 1);
    }
    LOWORD(v23) = WORD1(v63);
    v58 = WORD1(v63);
    Privileges = v17;
LABEL_11:
    v24 = 0;
    if ( (v23 & 0x8000u) == 0LL )
    {
      v25 = (char *)&v63 + 8;
      do
      {
        if ( v24 >= 2 )
          v26 = &v25[(char *)v17 - ((char *)&v63 + 8) - 16];
        else
          v26 = v25;
        CmpLockKcbShared(*(_QWORD *)v26);
        ++v24;
        v25 += 8;
      }
      while ( v24 <= (__int16)v23 );
    }
    v27 = CmpPerformKeyBodyDeletionCheck(v10, 0LL);
    if ( v27 >= 0 )
    {
      if ( !v10[7] && !v10[8]
        || (v27 = CmpTransSearchAddTransFromKeyBody(v10, &v60), v27 >= 0)
        && (v27 = CmpPerformKeyBodyDeletionCheck(v10, v60), v27 >= 0) )
      {
        v28 = 0LL;
        v29 = v23;
        if ( (v23 & 0x8000u) == 0LL )
        {
          v30 = v60;
          do
          {
            v31 = v29;
            if ( v29 >= 2u )
              v32 = *((_QWORD *)Privileges + v29 - 2);
            else
              v32 = *((_QWORD *)&v63 + v29 + 1);
            if ( *(_WORD *)(v32 + 66) && *(_BYTE *)(v32 + 65) == 1 )
              break;
            if ( *(_DWORD *)(v32 + 40) != -1 && (!*(_QWORD *)(v32 + 240) || (unsigned __int8)CmEqualTrans(v30)) )
            {
              v28 = v32;
              if ( *(_WORD *)(v32 + 66) )
              {
                if ( *(_BYTE *)(v32 + 65) )
                  break;
              }
            }
            v29 = v31 - 1;
          }
          while ( (__int16)(v31 - 1) >= 0 );
          LOWORD(v23) = v58;
          v10 = (ULONG_PTR *)ObjectsSecurityDescriptor;
        }
        v33 = v60;
        v34 = *(_QWORD *)(v28 + 88);
        if ( v60 )
        {
          v46 = v28 + 208;
          v47 = *(_QWORD *)(v46 + 8);
          if ( v46 != v47 )
            goto LABEL_94;
LABEL_86:
          v48 = 0LL;
          while ( v48 )
          {
            v49 = *(_QWORD *)(v48 + 56);
            if ( v49 )
            {
              if ( v49 == v33
                || ((v50 = *(_QWORD *)(v49 + 56)) == 0 || (v54 = *(_QWORD *)(v33 + 56)) == 0
                  ? (IsEqual = CmpTransUowIsEqual((const void *)(v49 + 88), (const void *)(v33 + 88)), v33 = v60)
                  : (IsEqual = v50 == v54),
                    IsEqual) )
              {
                if ( *(_DWORD *)(v48 + 68) == 9 )
                {
                  v34 = *(_QWORD *)(v48 + 88);
                  break;
                }
              }
            }
            if ( !v47 )
              v47 = *(_QWORD *)(v46 + 8);
            if ( v46 == v47 )
              goto LABEL_86;
LABEL_94:
            v48 = v47 - 32;
            v47 = *(_QWORD *)(v47 + 8);
          }
        }
        ObjectsSecurityDescriptor = (PSECURITY_DESCRIPTOR)(v34 + 32);
        v27 = SeQuerySecurityDescriptorInfo(SecurityInformation, SecurityDescriptor, Length, &ObjectsSecurityDescriptor);
        if ( v27 >= 0 )
          v27 = 0;
        v17 = Privileges;
      }
    }
    v35 = 0;
    if ( (v23 & 0x8000u) == 0LL )
    {
      v36 = (ULONG_PTR *)&v63 + 1;
      v37 = (char *)v17 - ((char *)&v63 + 8) - 16;
      do
      {
        if ( v35 >= 2 )
          v38 = (ULONG_PTR *)((char *)v36 + v37);
        else
          v38 = v36;
        CmpUnlockKcb(*v38);
        ++v35;
        ++v36;
      }
      while ( v35 <= (__int16)v23 );
    }
    v39 = Privileges;
    LODWORD(v9) = v65;
    goto LABEL_41;
  }
LABEL_63:
  if ( !(_DWORD)v9 )
  {
    v27 = CmpSetKeySecurity((_DWORD)v10, (_DWORD)a3, (_DWORD)SecurityDescriptor, a6, a7, a8);
    if ( v27 < 0 )
      goto LABEL_49;
    goto LABEL_100;
  }
  if ( (_DWORD)v9 == 2 )
  {
    v27 = 0;
    goto LABEL_49;
  }
  if ( (_DWORD)v9 != 3 )
    KeBugCheckEx(0x51u, 5uLL, 1uLL, v10[1], v9);
  v27 = CmpAssignKeySecurity((__int64)v10, SecurityDescriptor);
  if ( v27 >= 0 )
  {
    ExFreePoolWithTag(SecurityDescriptor, 0);
    goto LABEL_100;
  }
LABEL_49:
  if ( !v15 )
    goto LABEL_56;
  if ( (_DWORD)v9 == 1 )
  {
    if ( CmpCallBackCount && !CmpIsRegistryLockAcquired() && (_QWORD *)v62[0] != v62 )
    {
      v71 = &v78;
      v40 = 37;
      v56 = (__int64)v10;
      BugCheckParameter4 = 37;
LABEL_55:
      v70 = 0;
      v74 = 0LL;
      v75 = 0;
      v68 = v10;
      v73 = 0LL;
      v69 = v27;
      v72 = v27;
      CmpCallCallBacksEx(v40, (__int64)&v68, 0LL, 0, BugCheckParameter4, v56, (__int64)v62);
      v27 = v72;
    }
  }
  else if ( !(_DWORD)v9 && CmpCallBackCount && !CmpIsRegistryLockAcquired() && (_QWORD *)v62[0] != v62 )
  {
    v71 = &v78;
    v40 = 39;
    v56 = (__int64)v10;
    BugCheckParameter4 = 39;
    goto LABEL_55;
  }
LABEL_56:
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  CmCleanupThreadInfo((_KAFFINITY_EX **)&v82);
  if ( CmpTraceRoutine )
  {
    LOBYTE(v41) = ((_DWORD)v9 != 0) + 28;
    if ( (__int64 (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, __int64, __int64))CmpTraceRoutine == EtwpTraceRegistry )
      EtwpTraceRegistry(v41, (unsigned int)v83, v27, 0, v66, 0LL);
    else
      guard_dispatch_icall_no_overrides(v41);
  }
  return (unsigned int)v27;
}
