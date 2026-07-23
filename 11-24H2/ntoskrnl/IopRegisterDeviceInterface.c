/*
 * XREFs of IopRegisterDeviceInterface @ 0x1408B141C
 * Callers:
 *     PiSwIrpInterfaceRegister @ 0x1408AFE78 (PiSwIrpInterfaceRegister.c)
 *     IoRegisterDeviceInterface @ 0x1408B0410 (IoRegisterDeviceInterface.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x140A71FC0 (PiDevCfgConfigureDeviceInterfaces.c)
 *     PiCMRegisterDeviceInterface @ 0x140A79094 (PiCMRegisterDeviceInterface.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14022BF50 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     RtlCompareMemory @ 0x1406B4930 (RtlCompareMemory.c)
 *     PipCheckForDenyExecute @ 0x1408B02F4 (PipCheckForDenyExecute.c)
 *     PiDmListAddObject @ 0x1408B0CE4 (PiDmListAddObject.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x1408B2184 (PiDmRemoveCacheReferenceForObject.c)
 *     PiDmAddCacheReferenceForObject @ 0x1408B2214 (PiDmAddCacheReferenceForObject.c)
 *     PiDmObjectManagerReleaseLock @ 0x1408B2B2C (PiDmObjectManagerReleaseLock.c)
 *     PiDmObjectManagerAcquireSharedLock @ 0x1408B2B9C (PiDmObjectManagerAcquireSharedLock.c)
 *     PiDmLookupObject @ 0x1408B2D60 (PiDmLookupObject.c)
 *     _PnpStringFromGuid @ 0x1408B4EBC (_PnpStringFromGuid.c)
 *     _CmGetDeviceInterfaceName @ 0x1408B54E4 (_CmGetDeviceInterfaceName.c)
 *     _PnpSetObjectProperty @ 0x1408B6258 (_PnpSetObjectProperty.c)
 *     _CmValidateDeviceInterfaceName @ 0x1408C77C0 (_CmValidateDeviceInterfaceName.c)
 *     PiPnpRtlBeginOperation @ 0x1408C99A8 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x1408C9B88 (PiPnpRtlEndOperation.c)
 *     _PnpGetObjectProperty @ 0x1408CB9C0 (_PnpGetObjectProperty.c)
 *     PiDmObjectRelease @ 0x1408CE420 (PiDmObjectRelease.c)
 *     PiDmObjectAcquireSharedLock @ 0x1408CE46C (PiDmObjectAcquireSharedLock.c)
 *     PiDmObjectReleaseLock @ 0x1408CECD4 (PiDmObjectReleaseLock.c)
 *     _CmDeleteDeviceInterface @ 0x1409AABD0 (_CmDeleteDeviceInterface.c)
 *     _CmCreateDeviceInterface @ 0x1409C3968 (_CmCreateDeviceInterface.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopRegisterDeviceInterface(__int64 a1, __int64 a2, __int64 a3, char a4, PVOID *a5, __int64 a6)
{
  PVOID *v6; // r12
  ULONG_PTR v7; // rsi
  void *v8; // r13
  ULONG_PTR v9; // r14
  _DWORD *v10; // rbx
  ULONG_PTR v11; // r15
  int DeviceInterfaceName; // edi
  __int64 Pool2; // rax
  _DWORD *v14; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v16; // r14
  PVOID v17; // rbx
  int v18; // edi
  __int64 v19; // rax
  char v20; // si
  __int64 v21; // r13
  int ObjectProperty; // eax
  __int64 v23; // rdx
  __int64 v24; // r8
  char v25; // si
  int v27; // esi
  __int64 v28; // rax
  PVOID v29; // rbx
  __int64 v30; // rax
  unsigned int v31; // edi
  __int64 v32; // rax
  int v33; // [rsp+20h] [rbp-E0h]
  __int64 v34; // [rsp+38h] [rbp-C8h]
  char v35; // [rsp+60h] [rbp-A0h] BYREF
  char v36; // [rsp+61h] [rbp-9Fh]
  unsigned int v37; // [rsp+64h] [rbp-9Ch] BYREF
  ULONG_PTR v38; // [rsp+68h] [rbp-98h] BYREF
  ULONG_PTR v39; // [rsp+70h] [rbp-90h] BYREF
  int v40; // [rsp+78h] [rbp-88h]
  int v41; // [rsp+7Ch] [rbp-84h] BYREF
  int v42; // [rsp+80h] [rbp-80h] BYREF
  __int64 v43; // [rsp+88h] [rbp-78h]
  void *v44; // [rsp+90h] [rbp-70h] BYREF
  ULONG_PTR v45; // [rsp+98h] [rbp-68h] BYREF
  __int64 v46; // [rsp+A0h] [rbp-60h]
  PVOID P; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v48; // [rsp+B0h] [rbp-50h]
  __int128 Source2; // [rsp+B8h] [rbp-48h] BYREF
  wchar_t Str2[40]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v51[80]; // [rsp+120h] [rbp+20h] BYREF

  v6 = a5;
  v43 = a1;
  v48 = a6;
  v7 = 0LL;
  v38 = 0LL;
  v8 = 0LL;
  v44 = 0LL;
  v9 = 0LL;
  v39 = 0LL;
  LOBYTE(v40) = 0;
  v10 = 0LL;
  P = 0LL;
  v11 = 0LL;
  v35 = 0;
  v45 = 0LL;
  v42 = 0;
  v41 = 0;
  *a5 = 0LL;
  v36 = a4;
  v46 = a3;
  Source2 = 0LL;
  DeviceInterfaceName = PnpStringFromGuid(a2, Str2);
  if ( DeviceInterfaceName < 0 )
    goto LABEL_27;
  v37 = 512;
  Pool2 = ExAllocatePool2(0x100uLL, 0x400uLL, 0x20207050u);
  *a5 = (PVOID)Pool2;
  if ( !Pool2 )
    goto LABEL_59;
  DeviceInterfaceName = CmGetDeviceInterfaceName(&v37, Str2, v43, v46, 0, Pool2, 512, &v37);
  if ( DeviceInterfaceName != -1073741789 )
    goto LABEL_4;
  ExFreePoolWithTag(*a5, 0);
  v31 = v37;
  v32 = ExAllocatePool2(0x100uLL, 2LL * v37, 0x20207050u);
  *a5 = (PVOID)v32;
  if ( !v32 )
  {
LABEL_59:
    DeviceInterfaceName = -1073741670;
    goto LABEL_27;
  }
  LOBYTE(v33) = 0;
  DeviceInterfaceName = CmGetDeviceInterfaceName(&v37, Str2, v43, v46, v33, v32, v31, &v37);
LABEL_4:
  if ( DeviceInterfaceName < 0 )
  {
LABEL_27:
    if ( !*a5 )
      goto LABEL_28;
    ExFreePoolWithTag(*a5, 0);
    v28 = 0LL;
    goto LABEL_47;
  }
  v14 = (_DWORD *)v48;
  if ( v48 )
    *v14 = PipCheckForDenyExecute(Str2) ? 0x800000 : 0;
  CurrentThread = KeGetCurrentThread();
  v16 = -1LL;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
  v17 = *a5;
  v18 = 0;
  PiDmObjectManagerAcquireSharedLock(&PiDmDeviceInterfaceManager);
  v19 = PiDmLookupObject(&PiDmDeviceInterfaceManager, v17);
  v10 = (_DWORD *)v19;
  if ( v19 )
    _InterlockedIncrement((volatile signed __int32 *)(v19 + 8));
  else
    v18 = -1073741772;
  PiDmObjectManagerReleaseLock(&PiDmDeviceInterfaceManager);
  if ( v18 >= 0 )
  {
    PiDmObjectAcquireSharedLock(v10);
    v27 = v10[8];
    PiDmObjectReleaseLock((ULONG_PTR)v10);
    v20 = v27 & 1;
  }
  else
  {
    v20 = v40;
  }
  DeviceInterfaceName = PiDmAddCacheReferenceForObject(4LL, Str2, &v45);
  if ( DeviceInterfaceName < 0 )
    goto LABEL_49;
  v21 = v43;
  DeviceInterfaceName = PiDmAddCacheReferenceForObject(1LL, v43, &v39);
  if ( DeviceInterfaceName < 0 )
    goto LABEL_49;
  ObjectProperty = PnpGetObjectProperty(
                     PiPnpRtlCtx,
                     v21,
                     1,
                     0,
                     0LL,
                     (__int64)&DEVPKEY_Device_ContainerId,
                     (__int64)&v42,
                     (__int64)&Source2,
                     16,
                     (__int64)&v41,
                     0);
  DeviceInterfaceName = ObjectProperty;
  if ( ObjectProperty == -1073741275 )
  {
    Source2 = 0LL;
  }
  else if ( ObjectProperty < 0 )
  {
LABEL_49:
    v8 = v44;
    v11 = v45;
LABEL_25:
    v7 = v38;
    v9 = v39;
    goto LABEL_26;
  }
  if ( RtlCompareMemory(&CPER_EMPTY_GUID, &Source2, 0x10uLL) != 16 )
  {
    DeviceInterfaceName = PnpStringFromGuid(&Source2, v51);
    if ( DeviceInterfaceName < 0 )
      goto LABEL_49;
    DeviceInterfaceName = PiDmAddCacheReferenceForObject(5LL, v51, &v38);
    if ( DeviceInterfaceName < 0 )
      goto LABEL_49;
  }
  if ( !v20 )
  {
    DeviceInterfaceName = PiPnpRtlBeginOperation(&P, v23, v24);
    if ( DeviceInterfaceName < 0 )
      goto LABEL_49;
    DeviceInterfaceName = CmCreateDeviceInterface(
                            PiPnpRtlCtx,
                            (unsigned int)*a5,
                            2,
                            (unsigned int)&v44,
                            (__int64)&v35,
                            0);
    if ( DeviceInterfaceName < 0 )
      goto LABEL_49;
  }
  if ( !v10 )
  {
    v29 = *a5;
    DeviceInterfaceName = 0;
    PiDmObjectManagerAcquireSharedLock(&PiDmDeviceInterfaceManager);
    v30 = PiDmLookupObject(&PiDmDeviceInterfaceManager, v29);
    v10 = (_DWORD *)v30;
    if ( v30 )
      _InterlockedIncrement((volatile signed __int32 *)(v30 + 8));
    else
      DeviceInterfaceName = -1073741772;
    PiDmObjectManagerReleaseLock(&PiDmDeviceInterfaceManager);
    if ( DeviceInterfaceName < 0 )
      goto LABEL_49;
  }
  v11 = v45;
  PiDmListAddObject(0, v45, (ULONG_PTR)v10, 0LL);
  v25 = v35;
  do
    ++v16;
  while ( *(_WORD *)(v21 + 2 * v16) );
  v34 = v21;
  v8 = v44;
  DeviceInterfaceName = PnpSetObjectProperty(
                          PiPnpRtlCtx,
                          (unsigned int)*a5,
                          3,
                          0LL,
                          (__int64)&DEVPKEY_Device_InstanceId,
                          18,
                          v34,
                          2 * (int)v16 + 2,
                          v35 != 0 ? 0x20000 : 0);
  if ( DeviceInterfaceName < 0 )
  {
    if ( v25 )
      CmDeleteDeviceInterface(*(_QWORD *)&PiPnpRtlCtx, *a5, 0LL);
    goto LABEL_25;
  }
  v9 = v39;
  PiDmListAddObject(1, v39, (ULONG_PTR)v10, 0LL);
  v7 = v38;
  if ( v38 )
    PiDmListAddObject(2, v38, (ULONG_PTR)v10, 0LL);
LABEL_26:
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KeLeaveCriticalRegion();
  if ( DeviceInterfaceName < 0 )
    goto LABEL_27;
  if ( !v36 )
  {
    v6 = (PVOID *)*a5;
    DeviceInterfaceName = CmValidateDeviceInterfaceName(0LL, *a5);
    if ( DeviceInterfaceName >= 0 )
    {
      v28 = 0x5C003F003F005CLL;
LABEL_47:
      *v6 = (PVOID)v28;
    }
  }
LABEL_28:
  if ( v8 )
    ZwClose(v8);
  if ( P )
    PiPnpRtlEndOperation(P);
  if ( v10 )
    PiDmObjectRelease(v10);
  if ( v11 )
  {
    PiDmRemoveCacheReferenceForObject(*(unsigned int *)(v11 + 28), *(_QWORD *)(v11 + 16));
    PiDmObjectRelease((PVOID)v11);
  }
  if ( v9 )
  {
    PiDmRemoveCacheReferenceForObject(*(unsigned int *)(v9 + 28), *(_QWORD *)(v9 + 16));
    PiDmObjectRelease((PVOID)v9);
  }
  if ( v7 )
  {
    PiDmRemoveCacheReferenceForObject(*(unsigned int *)(v7 + 28), *(_QWORD *)(v7 + 16));
    PiDmObjectRelease((PVOID)v7);
  }
  return (unsigned int)DeviceInterfaceName;
}
