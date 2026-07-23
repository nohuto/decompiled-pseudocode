/*
 * XREFs of ObQueryNameStringMode @ 0x1409524C0
 * Callers:
 *     IopGetRelatedFileName @ 0x14070FD10 (IopGetRelatedFileName.c)
 *     AlpcpGetPortNameInformation @ 0x14073FFDC (AlpcpGetPortNameInformation.c)
 *     PspQueryAndCheckCpuPartitionName @ 0x140776F2C (PspQueryAndCheckCpuPartitionName.c)
 *     SmKmFileInfoGetPath @ 0x140799CF0 (SmKmFileInfoGetPath.c)
 *     SmKmStoreFileOpenVolume @ 0x14079B558 (SmKmStoreFileOpenVolume.c)
 *     EtwpObjectHandleEnumCallback @ 0x1407B1180 (EtwpObjectHandleEnumCallback.c)
 *     EtwpTraceHandle @ 0x140848E7C (EtwpTraceHandle.c)
 *     AstLogDeviceCreated @ 0x1408AC7C4 (AstLogDeviceCreated.c)
 *     IoRegisterDeviceInterface @ 0x1408B0410 (IoRegisterDeviceInterface.c)
 *     IoGetDeviceProperty @ 0x1408BA410 (IoGetDeviceProperty.c)
 *     ObpParseSymbolicLinkEx @ 0x1408E3460 (ObpParseSymbolicLinkEx.c)
 *     SepQueryNameString @ 0x140914194 (SepQueryNameString.c)
 *     IopQueryNameInternal @ 0x140950DC0 (IopQueryNameInternal.c)
 *     NtQueryObject @ 0x140951400 (NtQueryObject.c)
 *     EtwpEnumerateAddressSpace @ 0x140951B80 (EtwpEnumerateAddressSpace.c)
 *     ObQueryNameString @ 0x1409524A0 (ObQueryNameString.c)
 *     CmpQueryNameString @ 0x14096C1C4 (CmpQueryNameString.c)
 *     MmQueryVirtualMemory @ 0x14096EC30 (MmQueryVirtualMemory.c)
 *     ObGetObjectInformation @ 0x1409C5D80 (ObGetObjectInformation.c)
 *     MmGetFileNameForAddress @ 0x140A15B1C (MmGetFileNameForAddress.c)
 *     PspInitializeFullProcessImageName @ 0x140A286FC (PspInitializeFullProcessImageName.c)
 *     IopGraftName @ 0x140A2F1E8 (IopGraftName.c)
 *     IopErrorLogThread @ 0x140A3FC00 (IopErrorLogThread.c)
 *     IopRaiseHardError @ 0x140A44CA0 (IopRaiseHardError.c)
 *     PiControlGetDeviceStack @ 0x140A5027C (PiControlGetDeviceStack.c)
 *     MmGetFileNameForSection @ 0x140A7DBDC (MmGetFileNameForSection.c)
 *     PnpBuildCmResourceList @ 0x140A8FE84 (PnpBuildCmResourceList.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     PsReferenceSiloContext @ 0x14031EF70 (PsReferenceSiloContext.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     PsGetCurrentSilo @ 0x1403FCA20 (PsGetCurrentSilo.c)
 *     OBP_GET_SILO_ROOT_DIRECTORY_FROM_SILO @ 0x1403FCA80 (OBP_GET_SILO_ROOT_DIRECTORY_FROM_SILO.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     CmpQueryKeyName @ 0x140952F50 (CmpQueryKeyName.c)
 *     IopQueryName @ 0x140952F80 (IopQueryName.c)
 */

__int64 __fastcall ObQueryNameStringMode(char *a1, __int64 a2, unsigned int a3, _DWORD *a4, char a5)
{
  signed __int64 *v8; // rdi
  unsigned __int64 v9; // rdx
  char *v10; // r12
  char *v11; // rbx
  __int64 (__fastcall *v12)(_DWORD, _DWORD, _DWORD, _DWORD, __int64, char); // rax
  int KeyName; // eax
  struct _LIST_ENTRY *CurrentSilo; // rax
  char *v16; // rax
  char *v17; // rcx
  void **v18; // rax
  void *v19; // rbx
  unsigned int v20; // edx
  char *v21; // rcx
  char *v22; // rcx
  signed __int64 *v23; // r10
  char *v24; // rcx
  ULONG_PTR v25; // rcx
  char *v26; // r9
  char *v27; // rcx
  size_t v28; // r8
  char *v29; // rcx
  char *v30; // rcx
  char *v31; // rbx
  __int64 v32; // rbx
  char *v33; // rcx
  signed __int64 *v34; // r10
  size_t v35; // r8
  char *v36; // rcx
  int v37; // ebx
  char *v38; // r8
  char *v39; // rdx
  char v40; // [rsp+40h] [rbp-118h]
  char v41; // [rsp+41h] [rbp-117h]
  int v42; // [rsp+44h] [rbp-114h]
  unsigned int v43; // [rsp+48h] [rbp-110h]
  char *v44; // [rsp+50h] [rbp-108h]
  char *v45; // [rsp+50h] [rbp-108h]
  char *Object; // [rsp+58h] [rbp-100h]
  signed __int64 *BugCheckParameter2; // [rsp+60h] [rbp-F8h]
  signed __int64 *BugCheckParameter2a; // [rsp+60h] [rbp-F8h]
  unsigned int v49; // [rsp+68h] [rbp-F0h]
  char *v50; // [rsp+70h] [rbp-E8h]
  char *v51; // [rsp+70h] [rbp-E8h]
  char *v52; // [rsp+70h] [rbp-E8h]
  char *v53; // [rsp+78h] [rbp-E0h]
  char *v54; // [rsp+80h] [rbp-D8h]
  char *v55; // [rsp+80h] [rbp-D8h]
  char *v56; // [rsp+80h] [rbp-D8h]
  char *v57; // [rsp+88h] [rbp-D0h]
  char *v58; // [rsp+90h] [rbp-C8h]
  char *v59; // [rsp+90h] [rbp-C8h]
  void **v60; // [rsp+98h] [rbp-C0h]
  struct _KTHREAD *CurrentThread; // [rsp+C8h] [rbp-90h]
  struct _KTHREAD *v62; // [rsp+D8h] [rbp-80h]
  struct _KTHREAD *v63; // [rsp+F0h] [rbp-68h]
  struct _KTHREAD *v64; // [rsp+100h] [rbp-58h]

  v40 = 1;
  v41 = 0;
  v49 = 0;
  Object = 0LL;
  v42 = -1073741823;
  v8 = (signed __int64 *)(a1 - 48);
  v9 = (unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*(a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)a1 - 48) >> 8);
  v10 = a1 - 22;
  if ( (*v10 & 2) != 0 )
    v11 = (char *)v8 - ObpInfoMaskToOffset[*(a1 - 22) & 3];
  else
    v11 = 0LL;
  v60 = (void **)v11;
  v12 = *(__int64 (__fastcall **)(_DWORD, _DWORD, _DWORD, _DWORD, __int64, char))(ObTypeIndexTable[v9] + 160);
  if ( v12 )
  {
    if ( v11 && *((_WORD *)v11 + 4) )
      LOBYTE(v9) = 1;
    else
      v9 = 0LL;
    if ( (char *)v12 == (char *)CmpQueryKeyName )
    {
      KeyName = CmpQueryKeyName((_DWORD)a1, v9, a2, a3, (__int64)a4);
    }
    else if ( v12 == IopQueryName )
    {
      KeyName = IopQueryName((_DWORD)a1, v9, a2, a3, (__int64)a4, a5);
    }
    else
    {
      KeyName = guard_dispatch_icall_no_overrides(a1, v9);
    }
    v42 = KeyName;
LABEL_9:
    if ( v42 >= 0 )
LABEL_10:
      *(_DWORD *)(a2 + 4) = 0;
    return (unsigned int)v42;
  }
  CurrentSilo = PsGetCurrentSilo();
  v16 = (char *)OBP_GET_SILO_ROOT_DIRECTORY_FROM_SILO((__int64)CurrentSilo);
  v57 = v16;
  while ( v11 )
  {
    if ( a1 == v16 || a1 == ObpRootDirectoryObject )
    {
      v20 = 2;
LABEL_45:
      v49 = v20 + 18;
      *a4 = v20 + 18;
      if ( a3 < v20 + 18 )
      {
        v42 = -1073741820;
        v40 = 0;
      }
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v17 = (char *)KeAbPreAcquire((__int64)(v8 + 2), 0LL);
      v50 = v17;
      if ( _InterlockedCompareExchange64(v8 + 2, 17LL, 0LL) )
      {
        ExfAcquirePushLockSharedEx(v8 + 2, 0, v17, (__int64)(v8 + 2));
        v17 = v50;
      }
      if ( v17 )
        v17[10] = 1;
      v18 = v60;
      v19 = *v60;
      v54 = (char *)*v60;
      if ( *v60 )
      {
        PsReferenceSiloContext(v19);
        Object = (char *)v19;
        v18 = v60;
      }
      v43 = *((unsigned __int16 *)v18 + 4) + 2;
      if ( _InterlockedCompareExchange64(v8 + 2, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v8 + 2);
      KeAbPostRelease((ULONG_PTR)(v8 + 2));
      KeLeaveCriticalRegionThread();
      v20 = v43;
      v21 = v54;
      while ( v21 != v57 && v21 != ObpRootDirectoryObject && v21 && (*((_DWORD *)v21 + 84) & 0x20) == 0 )
      {
        v58 = v21 - 48;
        v62 = KeGetCurrentThread();
        --v62->KernelApcDisable;
        BugCheckParameter2 = (signed __int64 *)(v21 - 32);
        v22 = (char *)KeAbPreAcquire((__int64)BugCheckParameter2, 0LL);
        v51 = v22;
        v23 = BugCheckParameter2;
        if ( _InterlockedCompareExchange64(BugCheckParameter2, 17LL, 0LL) )
        {
          ExfAcquirePushLockSharedEx(BugCheckParameter2, 0, v22, (__int64)BugCheckParameter2);
          v23 = BugCheckParameter2;
          v22 = v51;
        }
        if ( v22 )
          v22[10] = 1;
        if ( (v58[26] & 2) != 0 )
          v24 = &v58[-ObpInfoMaskToOffset[v58[26] & 3]];
        else
          v24 = 0LL;
        if ( !v24 || !*(_QWORD *)v24 )
        {
          if ( _InterlockedCompareExchange64(v23, 0LL, 17LL) != 17 )
          {
            ExfReleasePushLockShared(v23);
            v23 = BugCheckParameter2;
          }
          KeAbPostRelease((ULONG_PTR)v23);
          KeLeaveCriticalRegionThread();
          v20 = v43 + 8;
          break;
        }
        v43 += 2 + *((unsigned __int16 *)v24 + 4);
        v55 = *(char **)v24;
        PsReferenceSiloContext(*(void **)v24);
        v25 = (ULONG_PTR)BugCheckParameter2;
        if ( _InterlockedCompareExchange64(BugCheckParameter2, 0LL, 17LL) != 17 )
        {
          ExfReleasePushLockShared(BugCheckParameter2);
          v25 = (ULONG_PTR)BugCheckParameter2;
        }
        KeAbPostRelease(v25);
        KeLeaveCriticalRegionThread();
        ObfDereferenceObject(Object);
        v21 = v55;
        Object = v55;
        v20 = v43;
        if ( v43 > 0xFFFF )
          goto LABEL_49;
      }
      if ( v20 <= 0xFFFF )
        goto LABEL_45;
LABEL_49:
      v42 = -1073741562;
      v40 = 0;
    }
    if ( Object )
    {
      ObfDereferenceObject(Object);
      Object = 0LL;
    }
    if ( !v40 )
      goto LABEL_9;
    if ( (*v10 & 2) != 0 )
      v11 = (char *)v8 - ObpInfoMaskToOffset[*v10 & 3];
    else
      v11 = 0LL;
    v60 = (void **)v11;
    if ( v11 )
    {
      v26 = (char *)(a2 + 16);
      v27 = (char *)(v49 + a2 - 2);
      *(_WORD *)v27 = 0;
      if ( a1 != v57 && a1 != ObpRootDirectoryObject )
      {
        v28 = *((unsigned __int16 *)v11 + 4);
        v29 = &v27[-v28];
        v44 = v29;
        if ( v29 <= v26 )
        {
          v41 = 1;
          goto LABEL_102;
        }
        memmove(v29, *((const void **)v11 + 2), v28);
        v63 = KeGetCurrentThread();
        --v63->KernelApcDisable;
        v30 = (char *)KeAbPreAcquire((__int64)(v8 + 2), 0LL);
        v52 = v30;
        if ( _InterlockedCompareExchange64(v8 + 2, 17LL, 0LL) )
        {
          ExfAcquirePushLockSharedEx(v8 + 2, 0, v30, (__int64)(v8 + 2));
          v30 = v52;
        }
        if ( v30 )
          v30[10] = 1;
        v31 = *(char **)v11;
        v56 = v31;
        if ( v31 )
        {
          PsReferenceSiloContext(v31);
          Object = v31;
        }
        if ( _InterlockedCompareExchange64(v8 + 2, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v8 + 2);
        KeAbPostRelease((ULONG_PTR)(v8 + 2));
        KeLeaveCriticalRegionThread();
        while ( 1 )
        {
          if ( v56 == v57 || v56 == ObpRootDirectoryObject || !v56 || (*((_DWORD *)v56 + 84) & 0x20) != 0 )
          {
            v27 = v44;
            v26 = (char *)(a2 + 16);
            goto LABEL_89;
          }
          v45 = v44 - 2;
          *(_WORD *)v45 = 92;
          v59 = v56 - 48;
          if ( (*(v56 - 22) & 2) != 0 )
            v32 = (__int64)&v56[-ObpInfoMaskToOffset[*(v56 - 22) & 3] - 48];
          else
            v32 = 0LL;
          v64 = KeGetCurrentThread();
          --v64->KernelApcDisable;
          BugCheckParameter2a = (signed __int64 *)(v59 + 16);
          v33 = (char *)KeAbPreAcquire((__int64)(v59 + 16), 0LL);
          v53 = v33;
          v34 = (signed __int64 *)(v59 + 16);
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)v59 + 2, 17LL, 0LL) )
          {
            ExfAcquirePushLockSharedEx(v34, 0, v33, (__int64)v34);
            v33 = v53;
            v34 = (signed __int64 *)(v59 + 16);
          }
          if ( v33 )
            v33[10] = 1;
          if ( !v32 || !*(_QWORD *)v32 )
            break;
          ObfDereferenceObject(Object);
          v56 = *(char **)v32;
          PsReferenceSiloContext(*(void **)v32);
          Object = v56;
          v35 = *(unsigned __int16 *)(v32 + 8);
          v36 = &v45[-v35];
          v44 = v36;
          if ( (unsigned __int64)v36 <= a2 + 16 )
          {
            v41 = 1;
            if ( _InterlockedCompareExchange64(BugCheckParameter2a, 0LL, 17LL) != 17 )
              ExfReleasePushLockShared(BugCheckParameter2a);
            KeAbPostRelease((ULONG_PTR)BugCheckParameter2a);
            KeLeaveCriticalRegionThread();
            goto LABEL_102;
          }
          memmove(v36, *(const void **)(v32 + 16), v35);
          if ( _InterlockedCompareExchange64(BugCheckParameter2a, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared(BugCheckParameter2a);
          KeAbPostRelease((ULONG_PTR)BugCheckParameter2a);
          KeLeaveCriticalRegionThread();
        }
        if ( _InterlockedCompareExchange64(v34, 0LL, 17LL) != 17 )
        {
          ExfReleasePushLockShared(v34);
          v34 = (signed __int64 *)(v59 + 16);
        }
        KeAbPostRelease((ULONG_PTR)v34);
        KeLeaveCriticalRegionThread();
        v27 = v45 - 6;
        v38 = v45 - 6;
        v39 = v45 - 6;
        v26 = (char *)(a2 + 16);
        if ( (unsigned __int64)(v45 - 6) < a2 + 16 )
        {
          v27 = (char *)(a2 + 16);
          v38 = (char *)(a2 + 16);
          v39 = (char *)(a2 + 16);
        }
        *(_DWORD *)v27 = *(_DWORD *)L"...";
        *((_WORD *)v27 + 2) = asc_140AF2480[2];
        if ( v38 == v26 )
          v27 = v39 + 2;
      }
LABEL_89:
      *((_WORD *)v27 - 1) = 92;
      v37 = (unsigned __int16)(a2 + v49 - ((_WORD)v27 - 2));
      *(_WORD *)(a2 + 2) = v37;
      *(_WORD *)a2 = a2 + v49 - (_WORD)v27;
      *(_QWORD *)(a2 + 8) = v26;
      if ( v26 != v27 - 2 )
      {
        memmove(v26, v27 - 2, (unsigned __int16)(a2 + v49 - ((_WORD)v27 - 2)));
        *a4 = v37 + 16;
      }
LABEL_102:
      if ( Object )
        ObfDereferenceObject(Object);
      if ( !v41 )
        goto LABEL_105;
      if ( (*v10 & 2) == 0 )
      {
        v11 = 0LL;
        v60 = 0LL;
        v41 = 0;
        goto LABEL_109;
      }
      v11 = (char *)v8 - ObpInfoMaskToOffset[*v10 & 3];
      v60 = (void **)v11;
      v41 = 0;
      v16 = v57;
    }
    else
    {
LABEL_109:
      v16 = v57;
    }
  }
  *a4 = 16;
  if ( a3 >= 0x10 )
  {
    *(_DWORD *)a2 = 0;
    *(_QWORD *)(a2 + 8) = 0LL;
LABEL_105:
    v42 = 0;
    goto LABEL_10;
  }
  return (unsigned int)-1073741820;
}
