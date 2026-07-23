/*
 * XREFs of PiDmObjectGetCachedObjectProperty @ 0x1408CDD40
 * Callers:
 *     PiDmObjectGetCachedCmProperty @ 0x1409C4A60 (PiDmObjectGetCachedCmProperty.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     ExfReleasePushLock @ 0x14028E870 (ExfReleasePushLock.c)
 *     ExAcquireResourceSharedLite @ 0x140321360 (ExAcquireResourceSharedLite.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     RtlLookupElementGenericTableAvl @ 0x1403FA3F0 (RtlLookupElementGenericTableAvl.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PiDmObjectGetCachedObjectReference @ 0x1408B7070 (PiDmObjectGetCachedObjectReference.c)
 *     RtlGUIDFromString @ 0x1408C7C70 (RtlGUIDFromString.c)
 *     PiDmGetObject @ 0x1408C95A0 (PiDmGetObject.c)
 *     PiDmObjectRelease @ 0x1408CE420 (PiDmObjectRelease.c)
 *     PiDmObjectAcquireSharedLock @ 0x1408CE46C (PiDmObjectAcquireSharedLock.c)
 *     PiDmObjectGetCachedObjectPropertyData @ 0x14099AAC0 (PiDmObjectGetCachedObjectPropertyData.c)
 */

__int64 __fastcall PiDmObjectGetCachedObjectProperty(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        ULONG_PTR a5,
        __int64 a6,
        GUID *a7,
        int a8,
        __int64 a9)
{
  GUID *Guid; // r13
  int v12; // r15d
  __int64 v14; // rcx
  signed __int64 *v15; // rdx
  unsigned int v16; // ecx
  int CachedObjectPropertyData; // esi
  int v18; // eax
  __int64 v19; // rax
  unsigned int v21; // eax
  signed __int64 v22; // rax
  signed __int64 v23; // rdx
  signed __int64 v24; // rtt
  ULONG_PTR v25; // rbx
  struct _ERESOURCE *v26; // r14
  struct _KTHREAD *CurrentThread; // rax
  int Flink; // r8d
  __int64 v29; // rcx
  _WORD *v30; // rax
  int v31; // eax
  unsigned __int16 v32; // dx
  __int64 v33; // r11
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  int v35; // r9d
  unsigned __int16 *v36; // r11
  unsigned __int16 v37; // dx
  int v38; // r10d
  struct _LIST_ENTRY *v39; // rbx
  unsigned __int64 v40; // rax
  volatile signed __int32 **v41; // rax
  volatile signed __int32 *v42; // rdi
  ULONG_PTR v43; // r10
  unsigned int v44; // r14d
  char v45; // r12
  signed __int64 *v46; // r15
  DEVPROPKEY **v47; // r8
  unsigned int j; // ebx
  DEVPROPKEY *v49; // rdx
  __int64 v50; // rax
  PVOID v51; // rbx
  unsigned int v52; // ecx
  unsigned int v53; // ecx
  unsigned int v54; // eax
  unsigned int v55; // ecx
  unsigned int v56; // eax
  int v57; // ecx
  int v58; // ecx
  int v59; // ecx
  int v60; // ecx
  unsigned int v61; // [rsp+40h] [rbp-C0h]
  ULONG_PTR BugCheckParameter2; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v63; // [rsp+50h] [rbp-B0h]
  __int64 v64; // [rsp+58h] [rbp-A8h]
  int v65; // [rsp+60h] [rbp-A0h]
  __int128 v66; // [rsp+68h] [rbp-98h]
  PVOID P; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-80h] BYREF
  __int64 *Buffer; // [rsp+90h] [rbp-70h] BYREF
  __int64 v70; // [rsp+A0h] [rbp-60h] BYREF
  char v71[8]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v72; // [rsp+B0h] [rbp-50h]
  int i; // [rsp+B8h] [rbp-48h]
  int v74; // [rsp+BCh] [rbp-44h]

  Guid = a7;
  BugCheckParameter2 = a5;
  v63 = a6;
  v64 = a9;
  *(_QWORD *)&DestinationString.Length = a2;
  v65 = a1;
  P = 0LL;
  if ( a7 )
  {
    v12 = a8;
    v61 = a8;
    if ( !a8 )
      Guid = 0LL;
  }
  else
  {
    v12 = 0;
    v61 = 0;
  }
  if ( a1 >= 7 || a4 )
    return 3221225494LL;
  v26 = 0LL;
  if ( a1 == 3 )
  {
    v26 = &PiDmDeviceInterfaceManager;
  }
  else
  {
    v57 = a1 - 1;
    if ( v57 )
    {
      v58 = v57 - 1;
      if ( v58 )
      {
        v59 = v58 - 2;
        if ( v59 )
        {
          v60 = v59 - 1;
          if ( v60 )
          {
            if ( v60 == 1 )
              v26 = (struct _ERESOURCE *)&PiDmDevicePanelManager;
          }
          else
          {
            v26 = (struct _ERESOURCE *)&PiDmDeviceContainerManager;
          }
        }
        else
        {
          v26 = (struct _ERESOURCE *)&PiDmDeviceInterfaceClassManager;
        }
      }
      else
      {
        v26 = (struct _ERESOURCE *)&PiDmDeviceInstallerClassManager;
      }
    }
    else
    {
      v26 = (struct _ERESOURCE *)&PiDmDeviceManager;
    }
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(v26, 1u);
  v70 = 0LL;
  memset_0(v71, 0, 0x68uLL);
  Buffer = &v70;
  if ( !a2 )
    goto LABEL_55;
  Flink = (int)v26[2].SystemResourcesList.Flink;
  v72 = a2;
  v66 = 0LL;
  v29 = 0x7FFFLL;
  v74 = Flink;
  v30 = (_WORD *)a2;
  do
  {
    if ( !*v30 )
      break;
    ++v30;
    --v29;
  }
  while ( v29 );
  v31 = -1073741811;
  if ( v29 )
  {
    v31 = 0;
    *((_QWORD *)&v66 + 1) = a2;
    v32 = 2 * (0x7FFF - v29);
    v33 = a2;
    LOWORD(v66) = v32;
  }
  else
  {
    v33 = *((_QWORD *)&v66 + 1);
    v32 = v66;
  }
  if ( v31 < 0 )
    goto LABEL_55;
  if ( Flink == 3 )
  {
    if ( v32 <= 8u )
      goto LABEL_55;
    LOWORD(v66) = v32 - 8;
    *((_QWORD *)&v66 + 1) = v33 + 8;
  }
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  v38 = v37 >> 1;
  v39 = CurrentServerSiloGlobals[75].Flink;
  for ( i = 0; v38; v35 = (unsigned __int16)v40 + 65599 * v35 )
  {
    v40 = *v36++;
    --v38;
    if ( (unsigned int)v40 >= 0x61 )
    {
      if ( (unsigned int)v40 > 0x7A )
      {
        if ( v39 && (unsigned __int16)v40 >= 0xC0u )
          LOWORD(v40) = *((_WORD *)&v39->Flink
                        + (v40 & 0xF)
                        + *((unsigned __int16 *)&v39->Flink
                          + ((unsigned __int8)v40 >> 4)
                          + (unsigned int)*((unsigned __int16 *)&v39->Flink + (v40 >> 8))))
                      + v40;
      }
      else
      {
        LOWORD(v40) = v40 - 32;
      }
    }
  }
  i = v35;
  v41 = (volatile signed __int32 **)RtlLookupElementGenericTableAvl((PRTL_AVL_TABLE)&v26[1], &Buffer);
  if ( v41 )
  {
    v42 = *v41;
    if ( *v41 )
    {
      _InterlockedIncrement(v42 + 2);
      ExReleaseResourceLite(v26);
      KeLeaveCriticalRegionThread();
      v43 = BugCheckParameter2;
      v44 = 3;
      if ( a1 == 3 && *(_DWORD *)(BugCheckParameter2 + 16) == 2 )
      {
        v50 = *(_QWORD *)BugCheckParameter2 - *(_QWORD *)&DEVPKEY_Device_ContainerId.fmtid.Data1;
        if ( *(_QWORD *)BugCheckParameter2 == *(_QWORD *)&DEVPKEY_Device_ContainerId.fmtid.Data1 )
          v50 = *(_QWORD *)(BugCheckParameter2 + 8) - *(_QWORD *)DEVPKEY_Device_ContainerId.fmtid.Data4;
        if ( !v50 )
        {
          if ( (int)PiDmObjectGetCachedObjectReference(3u, a2, (void *)v42, (__int64)&DEVPKEY_Device_InstanceId, &P) >= 0 )
          {
            v51 = P;
            CachedObjectPropertyData = PiDmObjectGetCachedObjectPropertyData(
                                         *((_DWORD *)P + 7),
                                         *((_QWORD *)P + 2),
                                         (int)P,
                                         BugCheckParameter2,
                                         v63,
                                         Guid,
                                         v12,
                                         v64);
            PiDmObjectRelease(v51);
LABEL_24:
            PiDmObjectRelease((PVOID)v42);
            return (unsigned int)CachedObjectPropertyData;
          }
          v43 = BugCheckParameter2;
        }
      }
      v45 = 0;
      BugCheckParameter2 = (ULONG_PTR)v42;
      v46 = (signed __int64 *)v42;
      CachedObjectPropertyData = -1073741802;
      switch ( v65 )
      {
        case 1:
          v47 = &PiDmCachedDeviceKeys;
          v44 = 10;
          break;
        case 3:
          v47 = &PiDmCachedDeviceInterfaceKeys;
          v44 = 1;
          break;
        case 5:
          v47 = &PiDmCachedDeviceContainerKeys;
          break;
        default:
          goto LABEL_24;
      }
      for ( j = 0; ; ++j )
      {
        if ( j >= v44 )
          goto LABEL_24;
        v49 = v47[3 * j];
        if ( *(_DWORD *)(v43 + 16) == v49->pid )
        {
          v14 = *(_QWORD *)v43 - *(_QWORD *)&v49->fmtid.Data1;
          if ( *(_QWORD *)v43 == *(_QWORD *)&v49->fmtid.Data1 )
            v14 = *(_QWORD *)(v43 + 8) - *(_QWORD *)v49->fmtid.Data4;
          if ( !v14 )
            break;
        }
      }
      if ( !v42 )
      {
        CachedObjectPropertyData = PiDmGetObject(
                                     v65,
                                     *(unsigned __int16 **)&DestinationString.Length,
                                     &BugCheckParameter2);
        if ( CachedObjectPropertyData < 0 )
          goto LABEL_24;
        v46 = (signed __int64 *)BugCheckParameter2;
        v45 = 1;
      }
      PiDmObjectAcquireSharedLock(v46);
      v15 = &v46[3 * j];
      v16 = *((_DWORD *)v15 + 28);
      if ( v16 <= 1 )
      {
        CachedObjectPropertyData = -1073741802;
        goto LABEL_17;
      }
      CachedObjectPropertyData = 0;
      DestinationString = 0LL;
      if ( v16 == 6 )
      {
        v18 = *((_DWORD *)v15 + 30);
        if ( v18 == 18 )
        {
          *(_DWORD *)v63 = 18;
          v19 = -1LL;
          while ( *(_WORD *)(*(_QWORD *)(v15[16] + 16) + 2 * v19++ + 2) != 0 )
            ;
          v21 = 2 * v19 + 2;
          *(_DWORD *)v64 = v21;
          if ( v61 >= v21 )
          {
            memmove(Guid, *(const void **)(v15[16] + 16), v21);
            goto LABEL_17;
          }
        }
        else
        {
          if ( v18 != 13 )
          {
            CachedObjectPropertyData = -1073741595;
            goto LABEL_17;
          }
          *(_DWORD *)v63 = 13;
          *(_DWORD *)v64 = 16;
          if ( v61 >= 0x10 )
          {
            RtlInitUnicodeString(&DestinationString, *(PCWSTR *)(v15[16] + 16));
            CachedObjectPropertyData = RtlGUIDFromString(&DestinationString, Guid);
            goto LABEL_17;
          }
        }
      }
      else
      {
        v52 = v16 - 2;
        if ( !v52 )
        {
          CachedObjectPropertyData = -1073741275;
          goto LABEL_17;
        }
        v53 = v52 - 1;
        if ( v53 )
        {
          v55 = v53 - 1;
          if ( v55 )
          {
            if ( v55 != 1 )
            {
              CachedObjectPropertyData = -1073741595;
              goto LABEL_17;
            }
            *(_DWORD *)v63 = *((_DWORD *)v15 + 30);
            v56 = *((_DWORD *)v15 + 31);
            *(_DWORD *)v64 = v56;
            if ( v61 >= v56 )
            {
              memmove(Guid, (const void *)v15[16], v56);
              goto LABEL_17;
            }
          }
          else
          {
            *(_DWORD *)v63 = 13;
            *(_DWORD *)v64 = 16;
            if ( v61 >= 0x10 )
            {
              *Guid = *(GUID *)(v15 + 15);
              goto LABEL_17;
            }
          }
        }
        else
        {
          *(_DWORD *)v63 = *((_DWORD *)v15 + 30);
          v54 = *((_DWORD *)v15 + 31);
          *(_DWORD *)v64 = v54;
          if ( v61 >= v54 )
          {
            memmove(Guid, v15 + 16, v54);
            goto LABEL_17;
          }
        }
      }
      CachedObjectPropertyData = -1073741789;
LABEL_17:
      _m_prefetchw(v46);
      v22 = *v46;
      v23 = *v46 - 16;
      if ( (*v46 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v23 = 0LL;
      if ( (v22 & 2) != 0
        || (v24 = *v46, v24 != _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, v23, v22)) )
      {
        v25 = BugCheckParameter2;
        ExfReleasePushLock((_QWORD *)BugCheckParameter2);
      }
      else
      {
        v25 = BugCheckParameter2;
      }
      KeAbPostRelease(v25);
      KeLeaveCriticalRegionThread();
      if ( v45 )
        PiDmObjectRelease((PVOID)BugCheckParameter2);
      goto LABEL_24;
    }
  }
LABEL_55:
  ExReleaseResourceLite(v26);
  KeLeaveCriticalRegionThread();
  return 3221225524LL;
}
