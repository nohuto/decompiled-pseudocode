/*
 * XREFs of ObQueryNameStringMode @ 0x1408C0E20
 * Callers:
 *     IopGetRelatedFileName @ 0x140706080 (IopGetRelatedFileName.c)
 *     AlpcpGetPortNameInformation @ 0x140735DCC (AlpcpGetPortNameInformation.c)
 *     PspQueryAndCheckCpuPartitionName @ 0x14076733C (PspQueryAndCheckCpuPartitionName.c)
 *     SmKmFileInfoGetPath @ 0x14078A818 (SmKmFileInfoGetPath.c)
 *     SmKmStoreFileOpenVolume @ 0x14078C080 (SmKmStoreFileOpenVolume.c)
 *     EtwpObjectHandleEnumCallback @ 0x1407A1960 (EtwpObjectHandleEnumCallback.c)
 *     IoGetDeviceProperty @ 0x140834450 (IoGetDeviceProperty.c)
 *     ObpParseSymbolicLinkEx @ 0x14083FD90 (ObpParseSymbolicLinkEx.c)
 *     EtwpTraceHandle @ 0x140850E08 (EtwpTraceHandle.c)
 *     IopGraftName @ 0x140862214 (IopGraftName.c)
 *     MmGetFileNameForAddress @ 0x140899218 (MmGetFileNameForAddress.c)
 *     IopQueryNameInternal @ 0x1408BF6D0 (IopQueryNameInternal.c)
 *     NtQueryObject @ 0x1408BFD10 (NtQueryObject.c)
 *     EtwpEnumerateAddressSpace @ 0x1408C04E0 (EtwpEnumerateAddressSpace.c)
 *     ObQueryNameString @ 0x1408C0E00 (ObQueryNameString.c)
 *     IoRegisterDeviceInterface @ 0x14095CE40 (IoRegisterDeviceInterface.c)
 *     SepQueryNameString @ 0x140983F00 (SepQueryNameString.c)
 *     AstLogDeviceCreated @ 0x14099EF48 (AstLogDeviceCreated.c)
 *     MmQueryVirtualMemory @ 0x1409D0670 (MmQueryVirtualMemory.c)
 *     ObGetObjectInformation @ 0x1409D7DC0 (ObGetObjectInformation.c)
 *     CmpQueryNameString @ 0x1409FA3D4 (CmpQueryNameString.c)
 *     PspInitializeFullProcessImageName @ 0x140A2F378 (PspInitializeFullProcessImageName.c)
 *     IopErrorLogThread @ 0x140A44600 (IopErrorLogThread.c)
 *     IopRaiseHardError @ 0x140A4B9B0 (IopRaiseHardError.c)
 *     PiControlGetDeviceStack @ 0x140A55090 (PiControlGetDeviceStack.c)
 *     MmGetFileNameForSection @ 0x140A7F334 (MmGetFileNameForSection.c)
 *     PnpBuildCmResourceList @ 0x140A8EBE4 (PnpBuildCmResourceList.c)
 * Callees:
 *     PsReferenceSiloContext @ 0x14029A8F0 (PsReferenceSiloContext.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     PsGetCurrentSilo @ 0x1403FA570 (PsGetCurrentSilo.c)
 *     OBP_GET_SILO_ROOT_DIRECTORY_FROM_SILO @ 0x1403FA5D0 (OBP_GET_SILO_ROOT_DIRECTORY_FROM_SILO.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     CmpQueryKeyName @ 0x1408C1890 (CmpQueryKeyName.c)
 *     IopQueryName @ 0x1408C18C0 (IopQueryName.c)
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
  __int64 *v17; // rcx
  unsigned int v18; // edx
  char *v19; // rcx
  __int64 *v20; // rcx
  signed __int64 *v21; // r10
  char *v22; // rcx
  ULONG_PTR v23; // rcx
  char *v24; // r9
  char *v25; // rcx
  size_t v26; // r8
  char *v27; // rcx
  __int64 *v28; // rdx
  char *v29; // rbx
  __int64 v30; // rbx
  __int64 *v31; // rdx
  signed __int64 *v32; // rcx
  size_t v33; // r8
  char *v34; // rcx
  int v35; // ebx
  char *v36; // r8
  char *v37; // rdx
  char v38; // [rsp+40h] [rbp-118h]
  char v39; // [rsp+41h] [rbp-117h]
  int v40; // [rsp+44h] [rbp-114h]
  unsigned int v41; // [rsp+48h] [rbp-110h]
  char *v42; // [rsp+50h] [rbp-108h]
  char *v43; // [rsp+50h] [rbp-108h]
  char *Object; // [rsp+58h] [rbp-100h]
  signed __int64 *BugCheckParameter2; // [rsp+60h] [rbp-F8h]
  signed __int64 *BugCheckParameter2a; // [rsp+60h] [rbp-F8h]
  __int64 *v47; // [rsp+68h] [rbp-F0h]
  char *v48; // [rsp+68h] [rbp-F0h]
  __int64 *v49; // [rsp+68h] [rbp-F0h]
  __int64 *v50; // [rsp+68h] [rbp-F0h]
  unsigned int v51; // [rsp+70h] [rbp-E8h]
  __int64 *v52; // [rsp+78h] [rbp-E0h]
  char *v53; // [rsp+80h] [rbp-D8h]
  char *v54; // [rsp+80h] [rbp-D8h]
  char *v55; // [rsp+80h] [rbp-D8h]
  char *v56; // [rsp+88h] [rbp-D0h]
  char *v57; // [rsp+90h] [rbp-C8h]
  char *v58; // [rsp+90h] [rbp-C8h]
  char *v59; // [rsp+98h] [rbp-C0h]
  struct _KTHREAD *CurrentThread; // [rsp+C8h] [rbp-90h]
  struct _KTHREAD *v61; // [rsp+D8h] [rbp-80h]
  struct _KTHREAD *v62; // [rsp+F0h] [rbp-68h]
  struct _KTHREAD *v63; // [rsp+100h] [rbp-58h]

  v38 = 1;
  v39 = 0;
  v51 = 0;
  Object = 0LL;
  v40 = -1073741823;
  v8 = (signed __int64 *)(a1 - 48);
  v9 = (unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*(a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)a1 - 48) >> 8);
  v10 = a1 - 22;
  if ( (*v10 & 2) != 0 )
    v11 = (char *)v8 - ObpInfoMaskToOffset[*(a1 - 22) & 3];
  else
    v11 = 0LL;
  v59 = v11;
  v12 = *(__int64 (__fastcall **)(_DWORD, _DWORD, _DWORD, _DWORD, __int64, char))(ObTypeIndexTable[v9] + 160);
  if ( v12 )
  {
    if ( v11 && *((_WORD *)v11 + 4) )
      LOBYTE(v9) = 1;
    else
      LODWORD(v9) = 0;
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
      KeyName = guard_dispatch_icall_no_overrides(a1);
    }
    v40 = KeyName;
LABEL_9:
    if ( v40 >= 0 )
LABEL_10:
      *(_DWORD *)(a2 + 4) = 0;
    return (unsigned int)v40;
  }
  CurrentSilo = PsGetCurrentSilo();
  v16 = (char *)OBP_GET_SILO_ROOT_DIRECTORY_FROM_SILO((__int64)CurrentSilo);
  v56 = v16;
  while ( v11 )
  {
    if ( a1 == v16 || a1 == ObpRootDirectoryObject )
    {
      v18 = 2;
LABEL_48:
      v51 = v18 + 18;
      *a4 = v18 + 18;
      if ( a3 < v18 + 18 )
      {
        v40 = -1073741820;
        v38 = 0;
      }
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v17 = KeAbPreAcquire((__int64)(v8 + 2), 0LL);
      v47 = v17;
      if ( _InterlockedCompareExchange64(v8 + 2, 17LL, 0LL) )
      {
        ExfAcquirePushLockSharedEx(v8 + 2, 0, v17, (unsigned __int64)(v8 + 2));
        v17 = v47;
      }
      if ( v17 )
        *((_BYTE *)v17 + 10) = 1;
      v48 = *(char **)v59;
      v53 = *(char **)v59;
      if ( *(_QWORD *)v59 )
      {
        PsReferenceSiloContext(*(void **)v59);
        Object = v48;
      }
      v41 = *((unsigned __int16 *)v59 + 4) + 2;
      if ( _InterlockedCompareExchange64(v8 + 2, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v8 + 2);
      KeAbPostRelease((ULONG_PTR)(v8 + 2));
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      v18 = v41;
      v19 = v53;
      while ( v19 != v56 && v19 != ObpRootDirectoryObject && v19 && (*((_DWORD *)v19 + 84) & 0x20) == 0 )
      {
        v57 = v19 - 48;
        v61 = KeGetCurrentThread();
        --v61->KernelApcDisable;
        BugCheckParameter2 = (signed __int64 *)(v19 - 32);
        v20 = KeAbPreAcquire((__int64)BugCheckParameter2, 0LL);
        v49 = v20;
        v21 = BugCheckParameter2;
        if ( _InterlockedCompareExchange64(BugCheckParameter2, 17LL, 0LL) )
        {
          ExfAcquirePushLockSharedEx(BugCheckParameter2, 0, v20, (unsigned __int64)BugCheckParameter2);
          v21 = BugCheckParameter2;
          v20 = v49;
        }
        if ( v20 )
          *((_BYTE *)v20 + 10) = 1;
        if ( (v57[26] & 2) != 0 )
          v22 = &v57[-ObpInfoMaskToOffset[v57[26] & 3]];
        else
          v22 = 0LL;
        if ( !v22 || !*(_QWORD *)v22 )
        {
          if ( _InterlockedCompareExchange64(v21, 0LL, 17LL) != 17 )
          {
            ExfReleasePushLockShared(v21);
            v21 = BugCheckParameter2;
          }
          KeAbPostRelease((ULONG_PTR)v21);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          v18 = v41 + 8;
          break;
        }
        v41 += 2 + *((unsigned __int16 *)v22 + 4);
        v54 = *(char **)v22;
        PsReferenceSiloContext(*(void **)v22);
        v23 = (ULONG_PTR)BugCheckParameter2;
        if ( _InterlockedCompareExchange64(BugCheckParameter2, 0LL, 17LL) != 17 )
        {
          ExfReleasePushLockShared(BugCheckParameter2);
          v23 = (ULONG_PTR)BugCheckParameter2;
        }
        KeAbPostRelease(v23);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        ObfDereferenceObject(Object);
        v19 = v54;
        Object = v54;
        v18 = v41;
        if ( v41 > 0xFFFF )
          goto LABEL_52;
      }
      if ( v18 <= 0xFFFF )
        goto LABEL_48;
LABEL_52:
      v40 = -1073741562;
      v38 = 0;
    }
    if ( Object )
    {
      ObfDereferenceObject(Object);
      Object = 0LL;
    }
    if ( !v38 )
      goto LABEL_9;
    if ( (*v10 & 2) != 0 )
      v11 = (char *)v8 - ObpInfoMaskToOffset[*v10 & 3];
    else
      v11 = 0LL;
    v59 = v11;
    if ( v11 )
    {
      v24 = (char *)(a2 + 16);
      v25 = (char *)(v51 + a2 - 2);
      *(_WORD *)v25 = 0;
      if ( a1 != v56 && a1 != ObpRootDirectoryObject )
      {
        v26 = *((unsigned __int16 *)v11 + 4);
        v27 = &v25[-v26];
        v42 = v27;
        if ( v27 <= v24 )
        {
          v39 = 1;
          goto LABEL_102;
        }
        memmove(v27, *((const void **)v11 + 2), v26);
        v62 = KeGetCurrentThread();
        --v62->KernelApcDisable;
        v28 = KeAbPreAcquire((__int64)(v8 + 2), 0LL);
        v50 = v28;
        if ( _InterlockedCompareExchange64(v8 + 2, 17LL, 0LL) )
        {
          ExfAcquirePushLockSharedEx(v8 + 2, 0, v28, (unsigned __int64)(v8 + 2));
          v28 = v50;
        }
        if ( v28 )
          *((_BYTE *)v28 + 10) = 1;
        v29 = *(char **)v11;
        v55 = v29;
        if ( v29 )
        {
          PsReferenceSiloContext(v29);
          Object = v29;
        }
        if ( _InterlockedCompareExchange64(v8 + 2, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v8 + 2);
        KeAbPostRelease((ULONG_PTR)(v8 + 2));
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        while ( 1 )
        {
          if ( v55 == v56 || v55 == ObpRootDirectoryObject || !v55 || (*((_DWORD *)v55 + 84) & 0x20) != 0 )
          {
            v25 = v42;
            v24 = (char *)(a2 + 16);
            goto LABEL_89;
          }
          v43 = v42 - 2;
          *(_WORD *)v43 = 92;
          v58 = v55 - 48;
          if ( (*(v55 - 22) & 2) != 0 )
            v30 = (__int64)&v55[-ObpInfoMaskToOffset[*(v55 - 22) & 3] - 48];
          else
            v30 = 0LL;
          v63 = KeGetCurrentThread();
          --v63->KernelApcDisable;
          BugCheckParameter2a = (signed __int64 *)(v58 + 16);
          v31 = KeAbPreAcquire((__int64)(v58 + 16), 0LL);
          v52 = v31;
          v32 = (signed __int64 *)(v58 + 16);
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)v58 + 2, 17LL, 0LL) )
          {
            ExfAcquirePushLockSharedEx(v32, 0, v31, (unsigned __int64)v32);
            v32 = (signed __int64 *)(v58 + 16);
            v31 = v52;
          }
          if ( v31 )
            *((_BYTE *)v31 + 10) = 1;
          if ( !v30 || !*(_QWORD *)v30 )
            break;
          ObfDereferenceObject(Object);
          v55 = *(char **)v30;
          PsReferenceSiloContext(*(void **)v30);
          Object = v55;
          v33 = *(unsigned __int16 *)(v30 + 8);
          v34 = &v43[-v33];
          v42 = v34;
          if ( (unsigned __int64)v34 <= a2 + 16 )
          {
            v39 = 1;
            if ( _InterlockedCompareExchange64(BugCheckParameter2a, 0LL, 17LL) != 17 )
              ExfReleasePushLockShared(BugCheckParameter2a);
            KeAbPostRelease((ULONG_PTR)BugCheckParameter2a);
            KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
            goto LABEL_102;
          }
          memmove(v34, *(const void **)(v30 + 16), v33);
          if ( _InterlockedCompareExchange64(BugCheckParameter2a, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared(BugCheckParameter2a);
          KeAbPostRelease((ULONG_PTR)BugCheckParameter2a);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        }
        if ( _InterlockedCompareExchange64(v32, 0LL, 17LL) != 17 )
        {
          ExfReleasePushLockShared(v32);
          v32 = (signed __int64 *)(v58 + 16);
        }
        KeAbPostRelease((ULONG_PTR)v32);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        v25 = v43 - 6;
        v36 = v43 - 6;
        v37 = v43 - 6;
        v24 = (char *)(a2 + 16);
        if ( (unsigned __int64)(v43 - 6) < a2 + 16 )
        {
          v25 = (char *)(a2 + 16);
          v36 = (char *)(a2 + 16);
          v37 = (char *)(a2 + 16);
        }
        *(_DWORD *)v25 = *(_DWORD *)L"...";
        *((_WORD *)v25 + 2) = asc_140ADCC60[2];
        if ( v36 == v24 )
          v25 = v37 + 2;
      }
LABEL_89:
      *((_WORD *)v25 - 1) = 92;
      v35 = (unsigned __int16)(a2 + v51 - ((_WORD)v25 - 2));
      *(_WORD *)(a2 + 2) = v35;
      *(_WORD *)a2 = a2 + v51 - (_WORD)v25;
      *(_QWORD *)(a2 + 8) = v24;
      if ( v24 != v25 - 2 )
      {
        memmove(v24, v25 - 2, (unsigned __int16)(a2 + v51 - ((_WORD)v25 - 2)));
        *a4 = v35 + 16;
      }
LABEL_102:
      if ( Object )
        ObfDereferenceObject(Object);
      if ( !v39 )
        goto LABEL_105;
      if ( (*v10 & 2) == 0 )
      {
        v11 = 0LL;
        v59 = 0LL;
        v39 = 0;
        goto LABEL_109;
      }
      v11 = (char *)v8 - ObpInfoMaskToOffset[*v10 & 3];
      v59 = v11;
      v39 = 0;
      v16 = v56;
    }
    else
    {
LABEL_109:
      v16 = v56;
    }
  }
  *a4 = 16;
  if ( a3 >= 0x10 )
  {
    *(_DWORD *)a2 = 0;
    *(_QWORD *)(a2 + 8) = 0LL;
LABEL_105:
    v40 = 0;
    goto LABEL_10;
  }
  return (unsigned int)-1073741820;
}
