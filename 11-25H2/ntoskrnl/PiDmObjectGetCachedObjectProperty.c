/*
 * XREFs of PiDmObjectGetCachedObjectProperty @ 0x1408CDEA0
 * Callers:
 *     PiDmObjectGetCachedCmProperty @ 0x14094FF80 (PiDmObjectGetCachedCmProperty.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x140295130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1402BCA80 (ExfReleasePushLock.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14030F050 (PsGetCurrentServerSiloGlobals.c)
 *     RtlLookupElementGenericTableAvl @ 0x1403F7C80 (RtlLookupElementGenericTableAvl.c)
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     PiDmObjectGetCachedObjectReference @ 0x1408368AC (PiDmObjectGetCachedObjectReference.c)
 *     PiDmObjectRelease @ 0x1408CE5E0 (PiDmObjectRelease.c)
 *     PiDmGetObject @ 0x1408D1680 (PiDmGetObject.c)
 *     RtlGUIDFromString @ 0x140959130 (RtlGUIDFromString.c)
 *     PiDmObjectGetCachedObjectPropertyData @ 0x14095A5C0 (PiDmObjectGetCachedObjectPropertyData.c)
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
  GUID *Guid; // r12
  int v12; // r14d
  __int64 v14; // rcx
  struct _KTHREAD *v15; // rax
  volatile signed __int64 *v16; // rbx
  ULONG_PTR v17; // rcx
  __int64 *v18; // r14
  signed __int64 v19; // rax
  signed __int64 *v20; // rbx
  signed __int64 *v21; // rdx
  unsigned int v22; // ecx
  NTSTATUS CachedObjectPropertyData; // r14d
  int v24; // eax
  __int64 v25; // rax
  unsigned int v27; // eax
  signed __int64 v28; // rax
  signed __int64 v29; // rdx
  signed __int64 v30; // rtt
  ULONG_PTR v31; // rbx
  struct _ERESOURCE *v32; // rdi
  struct _KTHREAD *CurrentThread; // rax
  int Flink; // r8d
  __int64 v35; // rcx
  _WORD *v36; // rax
  int v37; // eax
  unsigned __int16 v38; // dx
  __int64 v39; // r11
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  int v41; // r9d
  unsigned __int16 *v42; // r11
  unsigned __int16 v43; // dx
  int v44; // r10d
  struct _LIST_ENTRY *v45; // rbx
  unsigned __int64 v46; // rax
  volatile signed __int32 **v47; // rax
  volatile signed __int32 *v48; // rsi
  ULONG_PTR v49; // r9
  unsigned int v50; // ebx
  char v51; // r15
  DEVPROPKEY **v52; // r8
  unsigned int j; // edi
  DEVPROPKEY *v54; // rdx
  __int64 v55; // rax
  int CachedObjectReference; // eax
  PVOID v57; // rbx
  void *v58; // rcx
  unsigned int v59; // ecx
  int v60; // ecx
  int v61; // ecx
  int v62; // ecx
  unsigned int v63; // ecx
  unsigned int v64; // eax
  unsigned int v65; // ecx
  unsigned int v66; // eax
  int v67; // ecx
  unsigned int v68; // [rsp+40h] [rbp-C0h]
  ULONG_PTR BugCheckParameter2; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v70; // [rsp+50h] [rbp-B0h]
  __int64 v71; // [rsp+58h] [rbp-A8h]
  __int128 v72; // [rsp+60h] [rbp-A0h]
  PVOID P; // [rsp+70h] [rbp-90h] BYREF
  __int64 v74; // [rsp+78h] [rbp-88h]
  __int64 *Buffer; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-78h] BYREF
  __int64 v77; // [rsp+A0h] [rbp-60h] BYREF
  char v78[8]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v79; // [rsp+B0h] [rbp-50h]
  int i; // [rsp+B8h] [rbp-48h]
  int v81; // [rsp+BCh] [rbp-44h]

  Guid = a7;
  BugCheckParameter2 = a5;
  v70 = a6;
  v71 = a9;
  v74 = a2;
  P = 0LL;
  if ( a7 )
  {
    v12 = a8;
    v68 = a8;
    if ( !a8 )
      Guid = 0LL;
  }
  else
  {
    v12 = 0;
    v68 = 0;
  }
  if ( a1 >= 7 || a4 )
    return 3221225494LL;
  v32 = 0LL;
  if ( a1 == 3 )
  {
    v32 = &PiDmDeviceInterfaceManager;
  }
  else
  {
    v60 = a1 - 1;
    if ( v60 )
    {
      v61 = v60 - 1;
      if ( v61 )
      {
        v62 = v61 - 2;
        if ( v62 )
        {
          v67 = v62 - 1;
          if ( v67 )
          {
            if ( v67 == 1 )
              v32 = (struct _ERESOURCE *)&PiDmDevicePanelManager;
          }
          else
          {
            v32 = (struct _ERESOURCE *)&PiDmDeviceContainerManager;
          }
        }
        else
        {
          v32 = (struct _ERESOURCE *)&PiDmDeviceInterfaceClassManager;
        }
      }
      else
      {
        v32 = (struct _ERESOURCE *)&PiDmDeviceInstallerClassManager;
      }
    }
    else
    {
      v32 = (struct _ERESOURCE *)&PiDmDeviceManager;
    }
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(v32, 1u);
  v77 = 0LL;
  memset_0(v78, 0, 0x68uLL);
  Buffer = &v77;
  if ( !a2 )
    goto LABEL_59;
  Flink = (int)v32[2].SystemResourcesList.Flink;
  v79 = a2;
  v72 = 0LL;
  v35 = 0x7FFFLL;
  v81 = Flink;
  v36 = (_WORD *)a2;
  do
  {
    if ( !*v36 )
      break;
    ++v36;
    --v35;
  }
  while ( v35 );
  v37 = -1073741811;
  if ( v35 )
  {
    v37 = 0;
    *((_QWORD *)&v72 + 1) = a2;
    v38 = 2 * (0x7FFF - v35);
    v39 = a2;
    LOWORD(v72) = v38;
  }
  else
  {
    v39 = *((_QWORD *)&v72 + 1);
    v38 = v72;
  }
  if ( v37 < 0 )
    goto LABEL_59;
  if ( Flink == 3 )
  {
    if ( v38 <= 8u )
    {
LABEL_59:
      ExReleaseResourceLite(v32);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      return 3221225524LL;
    }
    LOWORD(v72) = v38 - 8;
    *((_QWORD *)&v72 + 1) = v39 + 8;
  }
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  v44 = v43 >> 1;
  v45 = CurrentServerSiloGlobals[75].Flink;
  for ( i = 0; v44; v41 = (unsigned __int16)v46 + 65599 * v41 )
  {
    v46 = *v42++;
    --v44;
    if ( (unsigned int)v46 >= 0x61 )
    {
      if ( (unsigned int)v46 > 0x7A )
      {
        if ( v45 && (unsigned __int16)v46 >= 0xC0u )
          LOWORD(v46) = *((_WORD *)&v45->Flink
                        + (v46 & 0xF)
                        + *((unsigned __int16 *)&v45->Flink
                          + ((unsigned __int8)v46 >> 4)
                          + (unsigned int)*((unsigned __int16 *)&v45->Flink + (v46 >> 8))))
                      + v46;
      }
      else
      {
        LOWORD(v46) = v46 - 32;
      }
    }
  }
  i = v41;
  v47 = (volatile signed __int32 **)RtlLookupElementGenericTableAvl((PRTL_AVL_TABLE)&v32[1], &Buffer);
  if ( !v47 )
    goto LABEL_59;
  v48 = *v47;
  if ( !*v47 )
    goto LABEL_59;
  _InterlockedIncrement(v48 + 2);
  ExReleaseResourceLite(v32);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  v49 = BugCheckParameter2;
  v50 = 3;
  if ( a1 == 3 && *(_DWORD *)(BugCheckParameter2 + 16) == 2 )
  {
    v55 = *(_QWORD *)BugCheckParameter2 - *(_QWORD *)&DEVPKEY_Device_ContainerId.fmtid.Data1;
    if ( *(_QWORD *)BugCheckParameter2 == *(_QWORD *)&DEVPKEY_Device_ContainerId.fmtid.Data1 )
      v55 = *(_QWORD *)(BugCheckParameter2 + 8) - *(_QWORD *)DEVPKEY_Device_ContainerId.fmtid.Data4;
    if ( !v55 )
    {
      CachedObjectReference = PiDmObjectGetCachedObjectReference(
                                3u,
                                a2,
                                (void *)v48,
                                (__int64)&DEVPKEY_Device_InstanceId,
                                &P);
      v49 = BugCheckParameter2;
      if ( CachedObjectReference >= 0 )
      {
        v57 = P;
        CachedObjectPropertyData = PiDmObjectGetCachedObjectPropertyData(
                                     *((_DWORD *)P + 7),
                                     *((_QWORD *)P + 2),
                                     (int)P,
                                     BugCheckParameter2,
                                     v70,
                                     Guid,
                                     v12,
                                     v71);
        v58 = v57;
LABEL_67:
        PiDmObjectRelease(v58);
        goto LABEL_27;
      }
    }
  }
  v51 = 0;
  BugCheckParameter2 = (ULONG_PTR)v48;
  CachedObjectPropertyData = -1073741802;
  switch ( a1 )
  {
    case 1:
      v52 = &PiDmCachedDeviceKeys;
      v50 = 10;
LABEL_50:
      for ( j = 0; ; ++j )
      {
        if ( j >= v50 )
          goto LABEL_27;
        v54 = v52[3 * j];
        if ( *(_DWORD *)(v49 + 16) == v54->pid )
        {
          v14 = *(_QWORD *)v49 - *(_QWORD *)&v54->fmtid.Data1;
          if ( *(_QWORD *)v49 == *(_QWORD *)&v54->fmtid.Data1 )
            v14 = *(_QWORD *)(v49 + 8) - *(_QWORD *)v54->fmtid.Data4;
          if ( !v14 )
            break;
        }
      }
      if ( !v48 )
      {
        CachedObjectPropertyData = PiDmGetObject((unsigned int)a1, v74, &BugCheckParameter2);
        if ( CachedObjectPropertyData < 0 )
          break;
        v51 = 1;
      }
      v15 = KeGetCurrentThread();
      v16 = (volatile signed __int64 *)BugCheckParameter2;
      v17 = BugCheckParameter2;
      --v15->KernelApcDisable;
      v18 = KeAbPreAcquire(v17, 0LL);
      v19 = _InterlockedCompareExchange64(v16, 17LL, 0LL);
      v20 = (signed __int64 *)BugCheckParameter2;
      if ( v19 )
        ExfAcquirePushLockSharedEx((signed __int64 *)BugCheckParameter2, 0, v18, BugCheckParameter2);
      if ( v18 )
        *((_BYTE *)v18 + 10) = 1;
      v21 = &v20[3 * j];
      v22 = *((_DWORD *)v21 + 28);
      if ( v22 <= 1 )
      {
        CachedObjectPropertyData = -1073741802;
        goto LABEL_21;
      }
      CachedObjectPropertyData = 0;
      DestinationString = 0LL;
      if ( v22 == 6 )
      {
        v24 = *((_DWORD *)v21 + 30);
        if ( v24 == 18 )
        {
          *(_DWORD *)v70 = 18;
          v25 = -1LL;
          while ( *(_WORD *)(*(_QWORD *)(v21[16] + 16) + 2 * v25++ + 2) != 0 )
            ;
          v27 = 2 * v25 + 2;
          *(_DWORD *)v71 = v27;
          if ( v68 < v27 )
            goto LABEL_20;
          memmove(Guid, *(const void **)(v21[16] + 16), v27);
LABEL_21:
          _m_prefetchw(v20);
          v28 = *v20;
          v29 = *v20 - 16;
          if ( (*v20 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
            v29 = 0LL;
          if ( (v28 & 2) != 0
            || (v30 = *v20, v30 != _InterlockedCompareExchange64(
                                     (volatile signed __int64 *)BugCheckParameter2,
                                     v29,
                                     v28)) )
          {
            v31 = BugCheckParameter2;
            ExfReleasePushLock((_QWORD *)BugCheckParameter2);
          }
          else
          {
            v31 = BugCheckParameter2;
          }
          KeAbPostRelease(v31);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          if ( v51 )
          {
            v58 = (void *)BugCheckParameter2;
            goto LABEL_67;
          }
          break;
        }
        if ( v24 != 13 )
        {
          CachedObjectPropertyData = -1073741595;
          goto LABEL_21;
        }
        *(_DWORD *)v70 = 13;
        *(_DWORD *)v71 = 16;
        if ( v68 >= 0x10 )
        {
          RtlInitUnicodeString(&DestinationString, *(PCWSTR *)(v21[16] + 16));
          CachedObjectPropertyData = RtlGUIDFromString(&DestinationString, Guid);
          goto LABEL_21;
        }
      }
      else
      {
        v59 = v22 - 2;
        if ( !v59 )
        {
          CachedObjectPropertyData = -1073741275;
          goto LABEL_21;
        }
        v63 = v59 - 1;
        if ( v63 )
        {
          v65 = v63 - 1;
          if ( v65 )
          {
            if ( v65 != 1 )
            {
              CachedObjectPropertyData = -1073741595;
              goto LABEL_21;
            }
            *(_DWORD *)v70 = *((_DWORD *)v21 + 30);
            v66 = *((_DWORD *)v21 + 31);
            *(_DWORD *)v71 = v66;
            if ( v68 >= v66 )
            {
              memmove(Guid, (const void *)v21[16], v66);
              goto LABEL_21;
            }
          }
          else
          {
            *(_DWORD *)v70 = 13;
            *(_DWORD *)v71 = 16;
            if ( v68 >= 0x10 )
            {
              *Guid = *(GUID *)(v21 + 15);
              goto LABEL_21;
            }
          }
        }
        else
        {
          *(_DWORD *)v70 = *((_DWORD *)v21 + 30);
          v64 = *((_DWORD *)v21 + 31);
          *(_DWORD *)v71 = v64;
          if ( v68 >= v64 )
          {
            memmove(Guid, v21 + 16, v64);
            goto LABEL_21;
          }
        }
      }
LABEL_20:
      CachedObjectPropertyData = -1073741789;
      goto LABEL_21;
    case 3:
      v52 = &PiDmCachedDeviceInterfaceKeys;
      v50 = 1;
      goto LABEL_50;
    case 5:
      v52 = &PiDmCachedDeviceContainerKeys;
      goto LABEL_50;
  }
LABEL_27:
  PiDmObjectRelease((PVOID)v48);
  return (unsigned int)CachedObjectPropertyData;
}
