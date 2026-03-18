/*
 * XREFs of CmpSecurityMethod @ 0x140852E10
 * Callers:
 *     ObpCreateHandle @ 0x14084DAA0 (ObpCreateHandle.c)
 *     ObpGrantAccess @ 0x140851390 (ObpGrantAccess.c)
 *     ObpGetObjectSecurity @ 0x140853850 (ObpGetObjectSecurity.c)
 *     NtQuerySecurityObject @ 0x140879460 (NtQuerySecurityObject.c)
 *     ObCheckObjectAccess @ 0x14087A740 (ObCheckObjectAccess.c)
 *     SepAppendAceToTokenObjectAcl @ 0x14090F590 (SepAppendAceToTokenObjectAcl.c)
 *     ObGetObjectSecurity @ 0x1409B26F0 (ObGetObjectSecurity.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     EtwGetKernelTraceTimestamp @ 0x1403C00A0 (EtwGetKernelTraceTimestamp.c)
 *     CmpAllocatePool @ 0x1403E1834 (CmpAllocatePool.c)
 *     CmpInitializeThreadInfo @ 0x1403FA250 (CmpInitializeThreadInfo.c)
 *     CmpCleanupThreadInfo @ 0x14041EE60 (CmpCleanupThreadInfo.c)
 *     CmpIsRegistryLockAcquired @ 0x14041EE80 (CmpIsRegistryLockAcquired.c)
 *     CmSiFreeMemory @ 0x14046B8D0 (CmSiFreeMemory.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     CmpTransUowIsEqual @ 0x1406FB46C (CmpTransUowIsEqual.c)
 *     CmpAssignKeySecurity @ 0x1407DC9C0 (CmpAssignKeySecurity.c)
 *     CmpCallCallBacksEx @ 0x140847D10 (CmpCallCallBacksEx.c)
 *     EtwpTraceRegistry @ 0x140870F40 (EtwpTraceRegistry.c)
 *     SeQuerySecurityDescriptorInfo @ 0x140878A10 (SeQuerySecurityDescriptorInfo.c)
 *     CmEqualTrans @ 0x140879280 (CmEqualTrans.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x140879368 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpSetKeySecurity @ 0x14099FAEC (CmpSetKeySecurity.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 *     CmpUnlockKcb @ 0x140BB92C0 (CmpUnlockKcb.c)
 *     CmpAcquireShutdownRundown @ 0x140BB9400 (CmpAcquireShutdownRundown.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140BB97D0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpReleaseShutdownRundown @ 0x140BB9880 (CmpReleaseShutdownRundown.c)
 *     CmpLockKcbShared @ 0x140BB9A1C (CmpLockKcbShared.c)
 *     CmpLockRegistry @ 0x140BB9E60 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140BB9F50 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmpSecurityMethod(
        ULONG_PTR *a1,
        int a2,
        ULONG *a3,
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
  char v18; // bl
  ULONG_PTR v19; // rdi
  struct _PRIVILEGE_SET *v20; // r8
  int v21; // ebx
  __int64 v22; // r14
  __int16 v23; // bx
  char *v24; // rdi
  __int64 v25; // rsi
  char *v26; // rcx
  int v27; // esi
  __int64 v28; // r15
  unsigned __int16 v29; // ax
  __int64 v30; // r14
  unsigned __int16 v31; // di
  __int64 v32; // rbx
  __int64 v33; // r8
  __int64 v34; // rbx
  __int16 v35; // bx
  ULONG_PTR *v36; // rdi
  ULONG_PTR *v37; // rcx
  struct _PRIVILEGE_SET *v38; // rcx
  unsigned int v39; // ecx
  __int64 v40; // rcx
  unsigned int v42; // ecx
  unsigned int v43; // eax
  int v44; // eax
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // r15
  __int64 v48; // rdi
  __int64 v49; // rsi
  __int64 v50; // rcx
  __int64 v51; // rdx
  bool IsEqual; // al
  __int64 v53; // rax
  unsigned int BugCheckParameter4; // [rsp+20h] [rbp-E0h]
  __int64 v55; // [rsp+28h] [rbp-D8h]
  char v56; // [rsp+41h] [rbp-BFh]
  __int16 v57; // [rsp+42h] [rbp-BEh]
  PPRIVILEGE_SET Privileges; // [rsp+48h] [rbp-B8h]
  __int64 v60; // [rsp+58h] [rbp-A8h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+60h] [rbp-A0h]
  _QWORD v62[2]; // [rsp+68h] [rbp-98h] BYREF
  __int128 v63; // [rsp+78h] [rbp-88h] BYREF
  __int128 v64; // [rsp+88h] [rbp-78h]
  __int64 v65; // [rsp+98h] [rbp-68h]
  PSECURITY_DESCRIPTOR ObjectsSecurityDescriptor; // [rsp+A0h] [rbp-60h] BYREF
  ULONG_PTR *v67; // [rsp+A8h] [rbp-58h] BYREF
  int v68; // [rsp+B0h] [rbp-50h]
  int v69; // [rsp+B4h] [rbp-4Ch]
  __int128 *v70; // [rsp+B8h] [rbp-48h]
  int v71; // [rsp+C0h] [rbp-40h]
  __int128 v72; // [rsp+C4h] [rbp-3Ch]
  __int64 v73; // [rsp+D4h] [rbp-2Ch]
  int v74; // [rsp+DCh] [rbp-24h]
  PULONG Length; // [rsp+E0h] [rbp-20h]
  PSECURITY_INFORMATION SecurityInformation; // [rsp+E8h] [rbp-18h]
  __int128 v77; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v78; // [rsp+100h] [rbp+0h]
  __int128 v79; // [rsp+110h] [rbp+10h]
  __int64 v80; // [rsp+120h] [rbp+20h]
  __int128 v81; // [rsp+128h] [rbp+28h] BYREF
  __int64 v82; // [rsp+138h] [rbp+38h]
  _OWORD v83[2]; // [rsp+140h] [rbp+40h] BYREF

  v9 = a2;
  v10 = a1;
  SecurityDescriptor = a4;
  SecurityInformation = a3;
  ObjectsSecurityDescriptor = a1;
  Length = a5;
  v81 = 0LL;
  v82 = 0LL;
  memset(v83, 0, sizeof(v83));
  v65 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp((LARGE_INTEGER *)v83, 0x20000u);
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v81);
  v62[1] = v62;
  v15 = 0;
  v62[0] = v62;
  v77 = 0LL;
  v80 = 0LL;
  v78 = 0LL;
  v79 = 0LL;
  if ( CmpTraceRoutine && v10 )
    v65 = v10[1];
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( CmpCallBackCount && !CmpIsRegistryLockAcquired() )
  {
    if ( (_DWORD)v9 == 1 )
    {
      v42 = 36;
      *(_QWORD *)&v78 = SecurityDescriptor;
      v43 = 37;
      *((_QWORD *)&v78 + 1) = a5;
    }
    else
    {
      if ( (_DWORD)v9 )
        goto LABEL_63;
      v42 = 38;
      *(_QWORD *)&v78 = SecurityDescriptor;
      v43 = 39;
    }
    *((_QWORD *)&v77 + 1) = a3;
    *(_QWORD *)&v77 = v10;
    v44 = CmpCallCallBacksEx(v42, (__int64)&v77, 0LL, 1, v43, (__int64)v10, (__int64)v62);
    if ( v44 < 0 )
    {
      v27 = 0;
      if ( v44 != -1073740541 )
        v27 = v44;
      goto LABEL_56;
    }
    v15 = 1;
  }
  if ( (_DWORD)v9 == 1 )
  {
    v63 = 0LL;
    WORD1(v63) = -1;
    v60 = 0LL;
    v17 = 0;
    v64 = 0LL;
    v56 = CmpAcquireShutdownRundown(v12, v11, v13, v14);
    v18 = v56;
    if ( !v56 )
    {
      v38 = (struct _PRIVILEGE_SET *)*((_QWORD *)&v64 + 1);
      v27 = -1073741431;
LABEL_42:
      if ( v38 )
        CmSiFreeMemory(v38);
      if ( v17 )
        CmpUnlockRegistry(v38);
      if ( v18 )
        CmpReleaseShutdownRundown(v38);
      if ( v27 < 0 )
        goto LABEL_49;
LABEL_86:
      v27 = 0;
      goto LABEL_49;
    }
    CmpLockRegistry();
    v19 = v10[1];
    v17 = 1;
    v20 = 0LL;
    Privileges = 0LL;
    v21 = *(__int16 *)(v19 + 66);
    if ( v21 >= 2 )
    {
      Privileges = (PPRIVILEGE_SET)CmpAllocatePool(0x100uLL);
      v20 = Privileges;
      if ( !Privileges )
      {
        v38 = (struct _PRIVILEGE_SET *)*((_QWORD *)&v64 + 1);
        v27 = -1073741670;
LABEL_41:
        v18 = v56;
        goto LABEL_42;
      }
    }
    v22 = *(__int16 *)(v19 + 66);
    LOWORD(v63) = v21;
    *((_QWORD *)&v64 + 1) = v20;
    v57 = v22;
    WORD1(v63) = v22;
    if ( (_WORD)v22 )
    {
      v45 = *(_QWORD *)(v19 + 192);
      if ( !v45 )
        goto LABEL_11;
      do
      {
        v46 = *(_QWORD *)(v45 + 16);
        if ( (__int16)v22 >= 2 )
        {
          *((_QWORD *)v20 + (__int16)v22 - 2) = v46;
        }
        else
        {
          *((_QWORD *)&v63 + (__int16)v22 + 1) = v46;
          v20 = (struct _PRIVILEGE_SET *)*((_QWORD *)&v64 + 1);
        }
        v45 = *(_QWORD *)(v45 + 24);
        LOWORD(v22) = v22 - 1;
      }
      while ( v45 );
    }
    else
    {
      *((_QWORD *)&v63 + v22 + 1) = v19;
      v20 = (struct _PRIVILEGE_SET *)*((_QWORD *)&v64 + 1);
    }
    LOWORD(v22) = WORD1(v63);
    v57 = WORD1(v63);
    Privileges = v20;
LABEL_11:
    v23 = 0;
    if ( (v22 & 0x8000u) == 0LL )
    {
      v24 = (char *)&v63 + 8;
      v25 = (char *)v20 - ((char *)&v63 + 8) - 16;
      do
      {
        if ( v23 >= 2 )
          v26 = &v24[v25];
        else
          v26 = v24;
        CmpLockKcbShared(*(_QWORD *)v26);
        ++v23;
        v24 += 8;
      }
      while ( v23 <= (__int16)v22 );
    }
    v27 = CmpPerformKeyBodyDeletionCheck(v10, 0LL);
    if ( v27 >= 0 )
    {
      if ( !v10[7] && !v10[8]
        || (v27 = CmpTransSearchAddTransFromKeyBody(v10, &v60), v27 >= 0)
        && (v27 = CmpPerformKeyBodyDeletionCheck(v10, v60), v27 >= 0) )
      {
        v28 = 0LL;
        v29 = v22;
        if ( (v22 & 0x8000u) == 0LL )
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
          LOWORD(v22) = v57;
          v10 = (ULONG_PTR *)ObjectsSecurityDescriptor;
        }
        v33 = v60;
        v34 = *(_QWORD *)(v28 + 88);
        if ( v60 )
        {
          v47 = v28 + 208;
          v48 = *(_QWORD *)(v47 + 8);
          if ( v47 != v48 )
            goto LABEL_106;
LABEL_98:
          v49 = 0LL;
          while ( v49 )
          {
            v50 = *(_QWORD *)(v49 + 56);
            if ( v50 )
            {
              if ( v50 == v33
                || ((v51 = *(_QWORD *)(v50 + 56)) == 0 || (v53 = *(_QWORD *)(v33 + 56)) == 0
                  ? (IsEqual = CmpTransUowIsEqual((const void *)(v50 + 88), (const void *)(v33 + 88)), v33 = v60)
                  : (IsEqual = v51 == v53),
                    IsEqual) )
              {
                if ( *(_DWORD *)(v49 + 68) == 9 )
                {
                  v34 = *(_QWORD *)(v49 + 88);
                  break;
                }
              }
            }
            if ( !v48 )
              v48 = *(_QWORD *)(v47 + 8);
            if ( v47 == v48 )
              goto LABEL_98;
LABEL_106:
            v49 = v48 - 32;
            v48 = *(_QWORD *)(v48 + 8);
          }
        }
        ObjectsSecurityDescriptor = (PSECURITY_DESCRIPTOR)(v34 + 32);
        v17 = 1;
        v27 = SeQuerySecurityDescriptorInfo(SecurityInformation, SecurityDescriptor, Length, &ObjectsSecurityDescriptor);
        if ( v27 >= 0 )
          v27 = 0;
      }
    }
    v35 = 0;
    if ( (v22 & 0x8000u) == 0LL )
    {
      v36 = (ULONG_PTR *)&v63 + 1;
      do
      {
        if ( v35 >= 2 )
          v37 = (ULONG_PTR *)((char *)v36 + (char *)Privileges - ((char *)&v63 + 8) - 16);
        else
          v37 = v36;
        CmpUnlockKcb(*v37);
        ++v35;
        ++v36;
      }
      while ( v35 <= (__int16)v22 );
      v17 = 1;
    }
    LODWORD(v9) = a2;
    v38 = Privileges;
    goto LABEL_41;
  }
LABEL_63:
  if ( !(_DWORD)v9 )
  {
    v27 = CmpSetKeySecurity((_DWORD)v10, (_DWORD)a3, (_DWORD)SecurityDescriptor, a6, a7, a8);
    if ( v27 < 0 )
      goto LABEL_49;
    goto LABEL_86;
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
    goto LABEL_86;
  }
LABEL_49:
  if ( !v15 )
    goto LABEL_56;
  if ( (_DWORD)v9 == 1 )
  {
    if ( CmpCallBackCount && !CmpIsRegistryLockAcquired() && (_QWORD *)v62[0] != v62 )
    {
      v70 = &v77;
      v39 = 37;
      v55 = (__int64)v10;
      BugCheckParameter4 = 37;
LABEL_55:
      v69 = 0;
      v73 = 0LL;
      v74 = 0;
      v67 = v10;
      v72 = 0LL;
      v68 = v27;
      v71 = v27;
      CmpCallCallBacksEx(v39, (__int64)&v67, 0LL, 0, BugCheckParameter4, v55, (__int64)v62);
      v27 = v71;
    }
  }
  else if ( !(_DWORD)v9 && CmpCallBackCount && !CmpIsRegistryLockAcquired() && (_QWORD *)v62[0] != v62 )
  {
    v70 = &v77;
    v39 = 39;
    v55 = (__int64)v10;
    BugCheckParameter4 = 39;
    goto LABEL_55;
  }
LABEL_56:
  KeLeaveCriticalRegionThread();
  CmpCleanupThreadInfo((_KAFFINITY_EX **)&v81);
  if ( CmpTraceRoutine )
  {
    LOBYTE(v40) = ((_DWORD)v9 != 0) + 28;
    if ( (__int64 (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, __int64, __int64))CmpTraceRoutine == EtwpTraceRegistry )
      EtwpTraceRegistry(v40, (unsigned int)v83, v27, 0, v65, 0LL);
    else
      guard_dispatch_icall_no_overrides(v40, v83, (unsigned int)v27, 0LL);
  }
  return (unsigned int)v27;
}
