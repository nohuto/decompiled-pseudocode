/*
 * XREFs of NtQueryObject @ 0x140951400
 * Callers:
 *     IopLoadDriver @ 0x1409B6EEC (IopLoadDriver.c)
 *     IopQueryRegistryKeySystemPath @ 0x1409B81B0 (IopQueryRegistryKeySystemPath.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     PsReferenceSiloContext @ 0x14031EF70 (PsReferenceSiloContext.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     OBJECT_HEADER_TO_QUOTA_INFO @ 0x140402A00 (OBJECT_HEADER_TO_QUOTA_INFO.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     ExRaiseAccessViolation @ 0x1408BEAA0 (ExRaiseAccessViolation.c)
 *     ObQueryNameStringMode @ 0x1409524C0 (ObQueryNameStringMode.c)
 *     ObQueryTypeInfo @ 0x14095329C (ObQueryTypeInfo.c)
 */

NTSTATUS __stdcall NtQueryObject(
        HANDLE Handle,
        OBJECT_INFORMATION_CLASS ObjectInformationClass,
        PVOID ObjectInformation,
        ULONG ObjectInformationLength,
        PULONG ReturnLength)
{
  ULONG v5; // r11d
  char *v6; // r14
  PULONG v9; // r13
  unsigned int v10; // ebx
  KPROCESSOR_MODE PreviousMode; // r12
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  __int64 v14; // r8
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rdx
  NTSTATUS result; // eax
  NTSTATUS v20; // edi
  __int64 *v21; // rsi
  ACCESS_MASK GrantedAccess; // r9d
  char *v23; // r8
  __int64 v24; // r10
  NTSTATUS NameStringMode; // eax
  __int32 v26; // r15d
  ULONG HandleAttributes; // eax
  char v28; // cl
  __int64 *v29; // rax
  __int64 v30; // r8
  PVOID v31; // r10
  __int64 v32; // rax
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v34; // r15
  char *v35; // rdi
  volatile signed __int64 *v36; // rdi
  void **v37; // rcx
  __int32 v38; // r15d
  char v39; // al
  void *v40; // rcx
  signed __int64 *v41; // rcx
  __int32 v42; // eax
  void *v43; // r14
  struct _KTHREAD *v44; // rax
  char *v45; // rcx
  volatile signed __int64 *v46; // r10
  char *v47; // rcx
  char *v48; // rdx
  int v49; // r13d
  char *v50; // rdi
  ULONG_PTR v51; // rcx
  signed __int64 v52; // rax
  unsigned int v53; // ecx
  int v54; // r8d
  __int64 v55; // rcx
  NTSTATUS v56; // eax
  NTSTATUS v57; // [rsp+50h] [rbp-108h]
  unsigned int v58; // [rsp+54h] [rbp-104h] BYREF
  KPROCESSOR_MODE v59; // [rsp+5Ah] [rbp-FEh]
  ULONG_PTR BugCheckParameter2; // [rsp+60h] [rbp-F8h]
  unsigned int v61; // [rsp+68h] [rbp-F0h]
  char *v62; // [rsp+70h] [rbp-E8h]
  ACCESS_MASK v63; // [rsp+78h] [rbp-E0h]
  int v64; // [rsp+7Ch] [rbp-DCh]
  __int32 v65; // [rsp+80h] [rbp-D8h]
  PVOID v66; // [rsp+88h] [rbp-D0h]
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+90h] [rbp-C8h] BYREF
  __int64 v68; // [rsp+98h] [rbp-C0h]
  volatile signed __int64 *v69; // [rsp+A0h] [rbp-B8h]
  PVOID v70; // [rsp+A8h] [rbp-B0h]
  char *v71; // [rsp+B0h] [rbp-A8h]
  __int128 v72; // [rsp+C0h] [rbp-98h]
  __m256i v73; // [rsp+D0h] [rbp-88h] BYREF
  __int64 v74; // [rsp+F0h] [rbp-68h]
  PVOID Object[7]; // [rsp+F8h] [rbp-60h] BYREF

  v5 = ObjectInformationLength;
  v6 = (char *)ObjectInformation;
  v9 = ReturnLength;
  v10 = 0;
  HandleInformation = 0LL;
  v72 = 0LL;
  memset(&v73, 0, sizeof(v73));
  v74 = 0LL;
  v65 = 0;
  v64 = 0;
  v58 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v59 = PreviousMode;
  if ( !PreviousMode )
    goto LABEL_23;
  if ( ObjectInformationClass != ObjectHandleFlagInformation )
  {
    if ( ObjectInformationLength )
    {
      v12 = (unsigned __int64)ObjectInformation;
      if ( ((unsigned __int8)ObjectInformation & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v13 = (unsigned __int64)ObjectInformation + ObjectInformationLength - 1;
      if ( (unsigned __int64)ObjectInformation <= v13 )
      {
        v14 = 0x7FFFFFFF0000LL;
        if ( v13 < 0x7FFFFFFF0000LL )
        {
          v15 = (v13 & 0xFFFFFFFFFFFFF000uLL) + 4096;
          do
          {
            *(_BYTE *)v12 = *(_BYTE *)v12;
            v12 = (v12 & 0xFFFFFFFFFFFFF000uLL) + 4096;
          }
          while ( v12 != v15 );
          goto LABEL_11;
        }
      }
LABEL_15:
      ExRaiseAccessViolation();
    }
LABEL_10:
    v14 = 0x7FFFFFFF0000LL;
    goto LABEL_11;
  }
  if ( !ObjectInformationLength )
    goto LABEL_10;
  v16 = (unsigned __int64)ObjectInformation;
  v17 = (unsigned __int64)ObjectInformation + ObjectInformationLength - 1;
  if ( (unsigned __int64)ObjectInformation > v17 )
    goto LABEL_15;
  v14 = 0x7FFFFFFF0000LL;
  if ( v17 >= 0x7FFFFFFF0000LL )
    goto LABEL_15;
  v18 = (v17 & 0xFFFFFFFFFFFFF000uLL) + 4096;
  do
  {
    *(_BYTE *)v16 = *(_BYTE *)v16;
    v16 = (v16 & 0xFFFFFFFFFFFFF000uLL) + 4096;
  }
  while ( v16 != v18 );
LABEL_11:
  if ( ReturnLength )
  {
    if ( (unsigned __int64)ReturnLength < 0x7FFFFFFF0000LL )
      v14 = (__int64)ReturnLength;
    *(_DWORD *)v14 = *(_DWORD *)v14;
  }
LABEL_23:
  if ( ObjectInformationClass == ObjectTypesInformation )
  {
    GrantedAccess = 0;
    v63 = 0;
    v21 = 0LL;
    v66 = 0LL;
    v23 = 0LL;
    v24 = 0LL;
    v68 = 0LL;
    v20 = 0;
    v57 = 0;
  }
  else
  {
    Object[0] = 0LL;
    result = ObReferenceObjectByHandle(Handle, 0, 0LL, PreviousMode, Object, &HandleInformation);
    v20 = result;
    v21 = (__int64 *)Object[0];
    v66 = Object[0];
    v57 = result;
    if ( result < 0 )
      return result;
    GrantedAccess = HandleInformation.GrantedAccess;
    v63 = HandleInformation.GrantedAccess;
    v23 = (char *)Object[0] - 48;
    v24 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *((unsigned __int8 *)Object[0] - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(LOWORD(Object[0]) - 48) >> 8)];
    v68 = v24;
    v5 = ObjectInformationLength;
  }
  v69 = (volatile signed __int64 *)v23;
  if ( ObjectInformationClass == ObjectNameInformation )
  {
    NameStringMode = ObQueryNameStringMode((_DWORD)v21, (_DWORD)v6, v5, (unsigned int)&v58, PreviousMode);
  }
  else
  {
    if ( ObjectInformationClass == ObjectBasicInformation )
    {
      if ( v5 != 56 )
      {
        ObfDereferenceObject(v21);
        return -1073741820;
      }
      memset(&v73.m256i_u64[1], 0, 24);
      HandleAttributes = HandleInformation.HandleAttributes;
      LODWORD(v72) = HandleInformation.HandleAttributes;
      v28 = v23[27];
      if ( (v28 & 0x10) != 0 )
      {
        HandleAttributes = HandleInformation.HandleAttributes | 0x10;
        LODWORD(v72) = HandleInformation.HandleAttributes | 0x10;
      }
      if ( (v28 & 8) != 0 )
        LODWORD(v72) = HandleAttributes | 0x20;
      DWORD1(v72) = GrantedAccess;
      DWORD2(v72) = *((_DWORD *)v23 + 2);
      HIDWORD(v72) = *(_DWORD *)v23;
      v29 = (__int64 *)OBJECT_HEADER_TO_QUOTA_INFO((__int64)v23);
      if ( v29 )
        v73.m256i_i64[0] = *v29;
      else
        v73.m256i_i64[0] = 0LL;
      if ( v31 == ObpSymbolicLinkObjectType )
        v32 = *v21;
      else
        v32 = 0LL;
      v74 = v32;
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v34 = (signed __int64 *)(v30 + 16);
      v35 = (char *)KeAbPreAcquire(v30 + 16, 0LL);
      if ( _InterlockedCompareExchange64(v34, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(v34, 0, v35, (__int64)v34);
      if ( v35 )
        v35[10] = 1;
      v36 = v69;
      if ( (*((_BYTE *)v69 + 26) & 2) != 0 )
      {
        v37 = (void **)((char *)v69 - ObpInfoMaskToOffset[*((_BYTE *)v69 + 26) & 3]);
        BugCheckParameter2 = (ULONG_PTR)v37;
      }
      else
      {
        v37 = 0LL;
        BugCheckParameter2 = 0LL;
      }
      if ( v37 && (v40 = *v37, (v70 = v40) != 0LL) )
      {
        PsReferenceSiloContext(v40);
        v41 = (signed __int64 *)(v36 + 2);
        if ( _InterlockedCompareExchange64(v36 + 2, 0LL, 17LL) != 17 )
        {
          ExfReleasePushLockShared(v41);
          v41 = (signed __int64 *)(v36 + 2);
        }
        KeAbPostRelease((ULONG_PTR)v41);
        KeLeaveCriticalRegionThread();
        v50 = (char *)v70;
        v49 = *(unsigned __int16 *)(BugCheckParameter2 + 8) + 2;
        while ( 1 )
        {
          v43 = v50;
          v71 = v50 - 48;
          v44 = KeGetCurrentThread();
          --v44->KernelApcDisable;
          BugCheckParameter2 = (ULONG_PTR)(v50 - 32);
          v45 = (char *)KeAbPreAcquire(BugCheckParameter2, 0LL);
          v62 = v45;
          v46 = (volatile signed __int64 *)BugCheckParameter2;
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 17LL, 0LL) )
          {
            ExfAcquirePushLockSharedEx((signed __int64 *)BugCheckParameter2, 0, v45, BugCheckParameter2);
            v45 = v62;
            v46 = (volatile signed __int64 *)BugCheckParameter2;
          }
          if ( v45 )
            v45[10] = 1;
          v47 = (v71[26] & 2) != 0 ? &v71[-ObpInfoMaskToOffset[v71[26] & 3]] : 0LL;
          if ( !v47 )
            break;
          v48 = *(char **)v47;
          if ( !*(_QWORD *)v47 )
            break;
          v49 += *((unsigned __int16 *)v47 + 4) + 2;
          v50 = *(char **)v47;
          v70 = *(PVOID *)v47;
          PsReferenceSiloContext(v48);
          v51 = BugCheckParameter2;
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
          {
            ExfReleasePushLockShared((signed __int64 *)BugCheckParameter2);
            v51 = BugCheckParameter2;
          }
          KeAbPostRelease(v51);
          KeLeaveCriticalRegionThread();
          ObfDereferenceObject(v43);
        }
        LODWORD(v62) = v49;
        v52 = _InterlockedCompareExchange64(v46, 0LL, 17LL);
        v6 = (char *)ObjectInformation;
        v9 = ReturnLength;
        v36 = v69;
        if ( v52 != 17 )
        {
          ExfReleasePushLockShared((signed __int64 *)v46);
          v46 = (volatile signed __int64 *)BugCheckParameter2;
        }
        KeAbPostRelease((ULONG_PTR)v46);
        KeLeaveCriticalRegionThread();
        if ( v70 )
          ObfDereferenceObject(v70);
        v42 = (_DWORD)v62 + 18;
      }
      else
      {
        if ( _InterlockedCompareExchange64(v69 + 2, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)v36 + 2);
        KeAbPostRelease((ULONG_PTR)(v36 + 2));
        KeLeaveCriticalRegionThread();
        v42 = 0;
      }
      v73.m256i_i32[5] = v42;
      v73.m256i_i32[6] = *(unsigned __int16 *)(v68 + 16) + 106;
      if ( (v63 & 0x20000) != 0 && *((_QWORD *)v36 + 5) )
      {
        v64 = 15;
        guard_dispatch_icall_no_overrides(v21, 1LL);
      }
      v73.m256i_i32[7] = v65;
      *(_OWORD *)v6 = v72;
      *(__m256i *)(v6 + 16) = v73;
      *((_QWORD *)v6 + 6) = v74;
      v58 = 56;
      v20 = v57;
      goto LABEL_29;
    }
    v26 = ObjectInformationClass - 2;
    if ( v26 )
    {
      v38 = v26 - 1;
      if ( v38 )
      {
        if ( v38 != 1 )
        {
          ObfDereferenceObject(v21);
          return -1073741821;
        }
        v58 = 2;
        if ( v5 < 2 )
        {
          v20 = -1073741820;
        }
        else
        {
          *v6 = 0;
          v39 = HandleInformation.HandleAttributes;
          if ( (HandleInformation.HandleAttributes & 2) != 0 )
            *v6 = 1;
          v6[1] = 0;
          if ( (v39 & 1) != 0 )
            v6[1] = 1;
        }
      }
      else
      {
        v58 = 8;
        Object[5] = v6;
        if ( v5 >= 4 )
        {
          *(_DWORD *)v6 = 0;
          v53 = 0;
          v61 = 0;
          v54 = 0;
          while ( v53 < 0x100 )
          {
            v68 = ObpObjectTypes[v53];
            if ( !v68 )
              break;
            *(_DWORD *)v6 = ++v54;
            v61 = ++v53;
          }
          v61 = 0;
          while ( v10 < 0x100 )
          {
            Object[6] = &v6[v58];
            v55 = ObpObjectTypes[v10];
            v68 = v55;
            if ( !v55 )
              break;
            v56 = ObQueryTypeInfo(v55, &v6[v58], v5, &v58);
            v20 = v56;
            if ( ((v56 + 0x80000000) & 0x80000000) == 0 && v56 != -1073741820 )
              break;
            v61 = ++v10;
            v5 = ObjectInformationLength;
          }
        }
        else
        {
          v20 = -1073741820;
        }
      }
      goto LABEL_29;
    }
    NameStringMode = ObQueryTypeInfo(v24, v6, v5, &v58);
  }
  v20 = NameStringMode;
LABEL_29:
  if ( v9 )
    *v9 = v58;
  if ( v21 )
    ObfDereferenceObject(v21);
  return v20;
}
