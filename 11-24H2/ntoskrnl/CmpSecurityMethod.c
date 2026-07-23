/*
 * XREFs of CmpSecurityMethod @ 0x14084F0D0
 * Callers:
 *     ObpCreateHandle @ 0x140849D60 (ObpCreateHandle.c)
 *     ObpGrantAccess @ 0x14084D650 (ObpGrantAccess.c)
 *     ObpGetObjectSecurity @ 0x14084FB10 (ObpGetObjectSecurity.c)
 *     NtQuerySecurityObject @ 0x14087D790 (NtQuerySecurityObject.c)
 *     ObCheckObjectAccess @ 0x14087E5F0 (ObCheckObjectAccess.c)
 *     SepAppendAceToTokenObjectAcl @ 0x1408E6CE0 (SepAppendAceToTokenObjectAcl.c)
 *     ObGetObjectSecurity @ 0x1409A9A80 (ObGetObjectSecurity.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     EtwGetKernelTraceTimestamp @ 0x1403AEC60 (EtwGetKernelTraceTimestamp.c)
 *     CmpAllocatePool @ 0x1403C9EA4 (CmpAllocatePool.c)
 *     CmpInitializeThreadInfo @ 0x1403F0160 (CmpInitializeThreadInfo.c)
 *     CmpCleanupThreadInfo @ 0x140414BA0 (CmpCleanupThreadInfo.c)
 *     CmpIsRegistryLockAcquired @ 0x140414BC0 (CmpIsRegistryLockAcquired.c)
 *     CmSiFreeMemory @ 0x140464550 (CmSiFreeMemory.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     CmpTransUowIsEqual @ 0x1406F90AC (CmpTransUowIsEqual.c)
 *     CmpAssignKeySecurity @ 0x1407DCF10 (CmpAssignKeySecurity.c)
 *     CmpSetKeySecurity @ 0x140830A20 (CmpSetKeySecurity.c)
 *     CmpCallCallBacksEx @ 0x140843FD0 (CmpCallCallBacksEx.c)
 *     EtwpTraceRegistry @ 0x140875270 (EtwpTraceRegistry.c)
 *     SeQuerySecurityDescriptorInfo @ 0x14087CD40 (SeQuerySecurityDescriptorInfo.c)
 *     CmEqualTrans @ 0x14087D5B0 (CmEqualTrans.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x14087D698 (CmpTransSearchAddTransFromKeyBody.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     CmpUnlockKcb @ 0x140BBB2C0 (CmpUnlockKcb.c)
 *     CmpAcquireShutdownRundown @ 0x140BBB400 (CmpAcquireShutdownRundown.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140BBB7D0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpReleaseShutdownRundown @ 0x140BBB880 (CmpReleaseShutdownRundown.c)
 *     CmpLockKcbShared @ 0x140BBBA1C (CmpLockKcbShared.c)
 *     CmpLockRegistry @ 0x140BBBE60 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140BBBF50 (CmpUnlockRegistry.c)
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
  char v17; // r15
  __int64 v18; // rcx
  char v19; // bl
  ULONG_PTR v20; // rdi
  struct _PRIVILEGE_SET *v21; // r8
  int v22; // ebx
  __int64 v23; // r14
  __int16 v24; // bx
  char *v25; // rdi
  __int64 v26; // rsi
  char *v27; // rcx
  int v28; // esi
  __int64 v29; // r15
  unsigned __int16 v30; // ax
  __int64 v31; // r14
  unsigned __int16 v32; // di
  __int64 v33; // rbx
  __int64 v34; // r8
  __int64 v35; // rbx
  __int16 v36; // bx
  ULONG_PTR *v37; // rdi
  ULONG_PTR *v38; // rcx
  struct _PRIVILEGE_SET *v39; // rcx
  unsigned int v40; // ecx
  __int64 v41; // rcx
  unsigned int v43; // ecx
  unsigned int v44; // eax
  int v45; // eax
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // r15
  __int64 v49; // rdi
  __int64 v50; // rsi
  __int64 v51; // rcx
  __int64 v52; // rdx
  bool IsEqual; // al
  __int64 v54; // rax
  unsigned int BugCheckParameter4; // [rsp+20h] [rbp-E0h]
  __int64 v56; // [rsp+28h] [rbp-D8h]
  char v57; // [rsp+41h] [rbp-BFh]
  __int16 v58; // [rsp+42h] [rbp-BEh]
  PPRIVILEGE_SET Privileges; // [rsp+48h] [rbp-B8h]
  __int64 v61; // [rsp+58h] [rbp-A8h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+60h] [rbp-A0h]
  _QWORD v63[2]; // [rsp+68h] [rbp-98h] BYREF
  __int128 v64; // [rsp+78h] [rbp-88h] BYREF
  __int128 v65; // [rsp+88h] [rbp-78h]
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
  __int64 v83; // [rsp+138h] [rbp+38h]
  _OWORD v84[2]; // [rsp+140h] [rbp+40h] BYREF

  v9 = a2;
  v10 = a1;
  SecurityDescriptor = a4;
  SecurityInformation = a3;
  ObjectsSecurityDescriptor = a1;
  Length = a5;
  v82 = 0LL;
  v83 = 0LL;
  memset(v84, 0, sizeof(v84));
  v66 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp((LARGE_INTEGER *)v84, 0x20000u);
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v82);
  v63[1] = v63;
  v15 = 0;
  v63[0] = v63;
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
    v45 = CmpCallCallBacksEx(v43, (__int64)&v78, 0LL, 1, v44, (__int64)v10, (__int64)v63);
    if ( v45 < 0 )
    {
      v28 = 0;
      if ( v45 != -1073740541 )
        v28 = v45;
      goto LABEL_56;
    }
    v15 = 1;
  }
  if ( (_DWORD)v9 == 1 )
  {
    v64 = 0LL;
    WORD1(v64) = -1;
    v61 = 0LL;
    v17 = 0;
    v65 = 0LL;
    v57 = CmpAcquireShutdownRundown(v12, v11, v13, v14);
    v19 = v57;
    if ( !v57 )
    {
      v39 = (struct _PRIVILEGE_SET *)*((_QWORD *)&v65 + 1);
      v28 = -1073741431;
LABEL_42:
      if ( v39 )
        CmSiFreeMemory(v39);
      if ( v17 )
        CmpUnlockRegistry(v39);
      if ( v19 )
        CmpReleaseShutdownRundown(v39);
      if ( v28 < 0 )
        goto LABEL_49;
LABEL_86:
      v28 = 0;
      goto LABEL_49;
    }
    CmpLockRegistry(v18);
    v20 = v10[1];
    v17 = 1;
    v21 = 0LL;
    Privileges = 0LL;
    v22 = *(__int16 *)(v20 + 66);
    if ( v22 >= 2 )
    {
      Privileges = (PPRIVILEGE_SET)CmpAllocatePool(0x100uLL, 8LL * (unsigned int)(v22 - 1), 0x35364D43u);
      v21 = Privileges;
      if ( !Privileges )
      {
        v39 = (struct _PRIVILEGE_SET *)*((_QWORD *)&v65 + 1);
        v28 = -1073741670;
LABEL_41:
        v19 = v57;
        goto LABEL_42;
      }
    }
    v23 = *(__int16 *)(v20 + 66);
    LOWORD(v64) = v22;
    *((_QWORD *)&v65 + 1) = v21;
    v58 = v23;
    WORD1(v64) = v23;
    if ( (_WORD)v23 )
    {
      v46 = *(_QWORD *)(v20 + 192);
      if ( !v46 )
        goto LABEL_11;
      do
      {
        v47 = *(_QWORD *)(v46 + 16);
        if ( (__int16)v23 >= 2 )
        {
          *((_QWORD *)v21 + (__int16)v23 - 2) = v47;
        }
        else
        {
          *((_QWORD *)&v64 + (__int16)v23 + 1) = v47;
          v21 = (struct _PRIVILEGE_SET *)*((_QWORD *)&v65 + 1);
        }
        v46 = *(_QWORD *)(v46 + 24);
        LOWORD(v23) = v23 - 1;
      }
      while ( v46 );
    }
    else
    {
      *((_QWORD *)&v64 + v23 + 1) = v20;
      v21 = (struct _PRIVILEGE_SET *)*((_QWORD *)&v65 + 1);
    }
    LOWORD(v23) = WORD1(v64);
    v58 = WORD1(v64);
    Privileges = v21;
LABEL_11:
    v24 = 0;
    if ( (v23 & 0x8000u) == 0LL )
    {
      v25 = (char *)&v64 + 8;
      v26 = (char *)v21 - ((char *)&v64 + 8) - 16;
      do
      {
        if ( v24 >= 2 )
          v27 = &v25[v26];
        else
          v27 = v25;
        CmpLockKcbShared(*(_QWORD *)v27);
        ++v24;
        v25 += 8;
      }
      while ( v24 <= (__int16)v23 );
    }
    v28 = CmpPerformKeyBodyDeletionCheck(v10, 0LL);
    if ( v28 >= 0 )
    {
      if ( !v10[7] && !v10[8]
        || (v28 = CmpTransSearchAddTransFromKeyBody(v10, &v61), v28 >= 0)
        && (v28 = CmpPerformKeyBodyDeletionCheck(v10, v61), v28 >= 0) )
      {
        v29 = 0LL;
        v30 = v23;
        if ( (v23 & 0x8000u) == 0LL )
        {
          v31 = v61;
          do
          {
            v32 = v30;
            if ( v30 >= 2u )
              v33 = *((_QWORD *)Privileges + v30 - 2);
            else
              v33 = *((_QWORD *)&v64 + v30 + 1);
            if ( *(_WORD *)(v33 + 66) && *(_BYTE *)(v33 + 65) == 1 )
              break;
            if ( *(_DWORD *)(v33 + 40) != -1 && (!*(_QWORD *)(v33 + 240) || (unsigned __int8)CmEqualTrans(v31)) )
            {
              v29 = v33;
              if ( *(_WORD *)(v33 + 66) )
              {
                if ( *(_BYTE *)(v33 + 65) )
                  break;
              }
            }
            v30 = v32 - 1;
          }
          while ( (__int16)(v32 - 1) >= 0 );
          LOWORD(v23) = v58;
          v10 = (ULONG_PTR *)ObjectsSecurityDescriptor;
        }
        v34 = v61;
        v35 = *(_QWORD *)(v29 + 88);
        if ( v61 )
        {
          v48 = v29 + 208;
          v49 = *(_QWORD *)(v48 + 8);
          if ( v48 != v49 )
            goto LABEL_106;
LABEL_98:
          v50 = 0LL;
          while ( v50 )
          {
            v51 = *(_QWORD *)(v50 + 56);
            if ( v51 )
            {
              if ( v51 == v34
                || ((v52 = *(_QWORD *)(v51 + 56)) == 0 || (v54 = *(_QWORD *)(v34 + 56)) == 0
                  ? (IsEqual = CmpTransUowIsEqual((const void *)(v51 + 88), (const void *)(v34 + 88)), v34 = v61)
                  : (IsEqual = v52 == v54),
                    IsEqual) )
              {
                if ( *(_DWORD *)(v50 + 68) == 9 )
                {
                  v35 = *(_QWORD *)(v50 + 88);
                  break;
                }
              }
            }
            if ( !v49 )
              v49 = *(_QWORD *)(v48 + 8);
            if ( v48 == v49 )
              goto LABEL_98;
LABEL_106:
            v50 = v49 - 32;
            v49 = *(_QWORD *)(v49 + 8);
          }
        }
        ObjectsSecurityDescriptor = (PSECURITY_DESCRIPTOR)(v35 + 32);
        v17 = 1;
        v28 = SeQuerySecurityDescriptorInfo(SecurityInformation, SecurityDescriptor, Length, &ObjectsSecurityDescriptor);
        if ( v28 >= 0 )
          v28 = 0;
      }
    }
    v36 = 0;
    if ( (v23 & 0x8000u) == 0LL )
    {
      v37 = (ULONG_PTR *)&v64 + 1;
      do
      {
        if ( v36 >= 2 )
          v38 = (ULONG_PTR *)((char *)v37 + (char *)Privileges - ((char *)&v64 + 8) - 16);
        else
          v38 = v37;
        CmpUnlockKcb(*v38);
        ++v36;
        ++v37;
      }
      while ( v36 <= (__int16)v23 );
      v17 = 1;
    }
    LODWORD(v9) = a2;
    v39 = Privileges;
    goto LABEL_41;
  }
LABEL_63:
  if ( !(_DWORD)v9 )
  {
    v28 = CmpSetKeySecurity((__int64)v10, a3, (__int64)SecurityDescriptor, a6, a7, a8);
    if ( v28 < 0 )
      goto LABEL_49;
    goto LABEL_86;
  }
  if ( (_DWORD)v9 == 2 )
  {
    v28 = 0;
    goto LABEL_49;
  }
  if ( (_DWORD)v9 != 3 )
    KeBugCheckEx(0x51u, 5uLL, 1uLL, v10[1], v9);
  v28 = CmpAssignKeySecurity((__int64)v10, SecurityDescriptor);
  if ( v28 >= 0 )
  {
    ExFreePoolWithTag(SecurityDescriptor, 0);
    goto LABEL_86;
  }
LABEL_49:
  if ( !v15 )
    goto LABEL_56;
  if ( (_DWORD)v9 == 1 )
  {
    if ( CmpCallBackCount && !CmpIsRegistryLockAcquired() && (_QWORD *)v63[0] != v63 )
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
      v69 = v28;
      v72 = v28;
      CmpCallCallBacksEx(v40, (__int64)&v68, 0LL, 0, BugCheckParameter4, v56, (__int64)v63);
      v28 = v72;
    }
  }
  else if ( !(_DWORD)v9 && CmpCallBackCount && !CmpIsRegistryLockAcquired() && (_QWORD *)v63[0] != v63 )
  {
    v71 = &v78;
    v40 = 39;
    v56 = (__int64)v10;
    BugCheckParameter4 = 39;
    goto LABEL_55;
  }
LABEL_56:
  KeLeaveCriticalRegionThread();
  CmpCleanupThreadInfo((_KAFFINITY_EX **)&v82);
  if ( CmpTraceRoutine )
  {
    LOBYTE(v41) = ((_DWORD)v9 != 0) + 28;
    if ( (__int64 (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, __int64, __int64))CmpTraceRoutine == EtwpTraceRegistry )
      EtwpTraceRegistry(v41, (unsigned int)v84, v28, 0, v66, 0LL);
    else
      guard_dispatch_icall_no_overrides(v41, v84);
  }
  return (unsigned int)v28;
}
