/*
 * XREFs of IopRegisterDeviceInterface @ 0x14095C574
 * Callers:
 *     IoRegisterDeviceInterface @ 0x14095CE40 (IoRegisterDeviceInterface.c)
 *     PiSwIrpInterfaceRegister @ 0x14095D5E8 (PiSwIrpInterfaceRegister.c)
 *     PiCMRegisterDeviceInterface @ 0x14095DC04 (PiCMRegisterDeviceInterface.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x140A75EEC (PiDevCfgConfigureDeviceInterfaces.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x14028A9E0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     RtlCompareMemory @ 0x1406A86C0 (RtlCompareMemory.c)
 *     _PnpGetObjectProperty @ 0x1408CB8A0 (_PnpGetObjectProperty.c)
 *     PiDmObjectAcquireSharedLock @ 0x1408CCF68 (PiDmObjectAcquireSharedLock.c)
 *     PiDmObjectRelease @ 0x1408CE5E0 (PiDmObjectRelease.c)
 *     PiDmObjectReleaseLock @ 0x1408CE958 (PiDmObjectReleaseLock.c)
 *     PiPnpRtlBeginOperation @ 0x1408D0818 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x1408D09F8 (PiPnpRtlEndOperation.c)
 *     _PnpStringFromGuid @ 0x14094E664 (_PnpStringFromGuid.c)
 *     _PnpSetObjectProperty @ 0x1409558B8 (_PnpSetObjectProperty.c)
 *     _CmValidateDeviceInterfaceName @ 0x140958C90 (_CmValidateDeviceInterfaceName.c)
 *     _CmGetDeviceInterfaceName @ 0x14095A988 (_CmGetDeviceInterfaceName.c)
 *     PipCheckForDenyExecute @ 0x14095D068 (PipCheckForDenyExecute.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x140968AC8 (PiDmRemoveCacheReferenceForObject.c)
 *     PiDmAddCacheReferenceForObject @ 0x140968B58 (PiDmAddCacheReferenceForObject.c)
 *     PiDmObjectManagerReleaseLock @ 0x140968CC0 (PiDmObjectManagerReleaseLock.c)
 *     PiDmObjectManagerAcquireSharedLock @ 0x140968D50 (PiDmObjectManagerAcquireSharedLock.c)
 *     PiDmLookupObject @ 0x140968F10 (PiDmLookupObject.c)
 *     PiDmListAddObject @ 0x14096AA08 (PiDmListAddObject.c)
 *     _CmCreateDeviceInterface @ 0x140A71334 (_CmCreateDeviceInterface.c)
 *     _CmDeleteDeviceInterface @ 0x140AB7998 (_CmDeleteDeviceInterface.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopRegisterDeviceInterface(__int64 a1, int *a2, const wchar_t *a3, char a4, PVOID *a5, __int64 a6)
{
  PVOID *v6; // r12
  __int64 v7; // rsi
  void *v8; // r13
  __int64 v9; // r14
  __int64 v10; // rbx
  __int64 v11; // r15
  int DeviceInterfaceName; // edi
  wchar_t *Pool2; // rax
  _DWORD *v14; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v16; // r14
  PVOID v17; // rbx
  int v18; // edi
  __int64 v19; // rax
  char v20; // si
  const WCHAR *v21; // r13
  int ObjectProperty; // eax
  char v23; // si
  int v25; // esi
  __int64 v26; // rax
  PVOID v27; // rbx
  __int64 v28; // rax
  int v29; // edi
  wchar_t *v30; // rax
  int v31[2]; // [rsp+30h] [rbp-D0h]
  int v32[2]; // [rsp+30h] [rbp-D0h]
  __int64 v33; // [rsp+38h] [rbp-C8h]
  char v34; // [rsp+60h] [rbp-A0h] BYREF
  char v35; // [rsp+61h] [rbp-9Fh]
  int v36; // [rsp+64h] [rbp-9Ch] BYREF
  __int64 v37; // [rsp+68h] [rbp-98h] BYREF
  __int64 v38; // [rsp+70h] [rbp-90h] BYREF
  int v39; // [rsp+78h] [rbp-88h]
  int v40; // [rsp+7Ch] [rbp-84h] BYREF
  int v41; // [rsp+80h] [rbp-80h] BYREF
  __int64 v42; // [rsp+88h] [rbp-78h]
  void *v43; // [rsp+90h] [rbp-70h] BYREF
  __int64 v44; // [rsp+98h] [rbp-68h] BYREF
  const wchar_t *v45; // [rsp+A0h] [rbp-60h]
  PVOID P; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v47; // [rsp+B0h] [rbp-50h]
  int Source2[6]; // [rsp+B8h] [rbp-48h] BYREF
  wchar_t Str2[40]; // [rsp+D0h] [rbp-30h] BYREF
  wchar_t v50[40]; // [rsp+120h] [rbp+20h] BYREF

  v6 = a5;
  v42 = a1;
  v47 = a6;
  v7 = 0LL;
  v37 = 0LL;
  v8 = 0LL;
  v43 = 0LL;
  v9 = 0LL;
  v38 = 0LL;
  LOBYTE(v39) = 0;
  v10 = 0LL;
  P = 0LL;
  v11 = 0LL;
  v34 = 0;
  v44 = 0LL;
  v41 = 0;
  v40 = 0;
  *a5 = 0LL;
  v35 = a4;
  v45 = a3;
  *(_OWORD *)Source2 = 0LL;
  DeviceInterfaceName = PnpStringFromGuid(a2, Str2);
  if ( DeviceInterfaceName < 0 )
    goto LABEL_27;
  v36 = 512;
  Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL);
  *a5 = Pool2;
  if ( !Pool2 )
    goto LABEL_59;
  v31[0] = 512;
  DeviceInterfaceName = CmGetDeviceInterfaceName(
                          (__int64)&v36,
                          Str2,
                          (const wchar_t *)v42,
                          v45,
                          0,
                          Pool2,
                          *(size_t *)v31,
                          &v36);
  if ( DeviceInterfaceName != -1073741789 )
    goto LABEL_4;
  ExFreePoolWithTag(*a5, 0);
  v29 = v36;
  v30 = (wchar_t *)ExAllocatePool2(0x100uLL);
  *a5 = v30;
  if ( !v30 )
  {
LABEL_59:
    DeviceInterfaceName = -1073741670;
    goto LABEL_27;
  }
  v32[0] = v29;
  DeviceInterfaceName = CmGetDeviceInterfaceName(
                          (__int64)&v36,
                          Str2,
                          (const wchar_t *)v42,
                          v45,
                          0,
                          v30,
                          *(size_t *)v32,
                          &v36);
LABEL_4:
  if ( DeviceInterfaceName < 0 )
  {
LABEL_27:
    if ( !*a5 )
      goto LABEL_28;
    ExFreePoolWithTag(*a5, 0);
    v26 = 0LL;
    goto LABEL_47;
  }
  v14 = (_DWORD *)v47;
  if ( v47 )
    *v14 = (unsigned __int8)PipCheckForDenyExecute(Str2) != 0 ? 0x800000 : 0;
  CurrentThread = KeGetCurrentThread();
  v16 = -1LL;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
  v17 = *a5;
  v18 = 0;
  PiDmObjectManagerAcquireSharedLock(&PiDmDeviceInterfaceManager);
  v19 = PiDmLookupObject(&PiDmDeviceInterfaceManager, v17);
  v10 = v19;
  if ( v19 )
    _InterlockedIncrement((volatile signed __int32 *)(v19 + 8));
  else
    v18 = -1073741772;
  PiDmObjectManagerReleaseLock(&PiDmDeviceInterfaceManager);
  if ( v18 >= 0 )
  {
    PiDmObjectAcquireSharedLock((volatile signed __int64 *)v10);
    v25 = *(_DWORD *)(v10 + 32);
    PiDmObjectReleaseLock((signed __int64 *)v10);
    v20 = v25 & 1;
  }
  else
  {
    v20 = v39;
  }
  DeviceInterfaceName = PiDmAddCacheReferenceForObject(4LL, Str2, &v44);
  if ( DeviceInterfaceName < 0 )
    goto LABEL_49;
  v21 = (const WCHAR *)v42;
  DeviceInterfaceName = PiDmAddCacheReferenceForObject(1LL, v42, &v38);
  if ( DeviceInterfaceName < 0 )
    goto LABEL_49;
  ObjectProperty = PnpGetObjectProperty(
                     *(_QWORD **)&PiPnpRtlCtx,
                     v21,
                     1u,
                     0LL,
                     0LL,
                     (__int64)&DEVPKEY_Device_ContainerId,
                     &v41,
                     Source2,
                     0x10u,
                     (__int64)&v40,
                     0);
  DeviceInterfaceName = ObjectProperty;
  if ( ObjectProperty == -1073741275 )
  {
    *(_OWORD *)Source2 = 0LL;
  }
  else if ( ObjectProperty < 0 )
  {
LABEL_49:
    v8 = v43;
    v11 = v44;
LABEL_25:
    v7 = v37;
    v9 = v38;
    goto LABEL_26;
  }
  if ( RtlCompareMemory(&CPER_EMPTY_GUID, Source2, 0x10uLL) != 16 )
  {
    DeviceInterfaceName = PnpStringFromGuid(Source2, v50);
    if ( DeviceInterfaceName < 0 )
      goto LABEL_49;
    DeviceInterfaceName = PiDmAddCacheReferenceForObject(5LL, v50, &v37);
    if ( DeviceInterfaceName < 0 )
      goto LABEL_49;
  }
  if ( !v20 )
  {
    DeviceInterfaceName = PiPnpRtlBeginOperation(&P);
    if ( DeviceInterfaceName < 0 )
      goto LABEL_49;
    DeviceInterfaceName = CmCreateDeviceInterface(
                            PiPnpRtlCtx,
                            (unsigned int)*a5,
                            2,
                            (unsigned int)&v43,
                            (__int64)&v34,
                            0);
    if ( DeviceInterfaceName < 0 )
      goto LABEL_49;
  }
  if ( !v10 )
  {
    v27 = *a5;
    DeviceInterfaceName = 0;
    PiDmObjectManagerAcquireSharedLock(&PiDmDeviceInterfaceManager);
    v28 = PiDmLookupObject(&PiDmDeviceInterfaceManager, v27);
    v10 = v28;
    if ( v28 )
      _InterlockedIncrement((volatile signed __int32 *)(v28 + 8));
    else
      DeviceInterfaceName = -1073741772;
    PiDmObjectManagerReleaseLock(&PiDmDeviceInterfaceManager);
    if ( DeviceInterfaceName < 0 )
      goto LABEL_49;
  }
  v11 = v44;
  PiDmListAddObject(0LL, v44, v10, 0LL);
  v23 = v34;
  do
    ++v16;
  while ( v21[v16] );
  v33 = (__int64)v21;
  v8 = v43;
  DeviceInterfaceName = PnpSetObjectProperty(
                          *(__int64 *)&PiPnpRtlCtx,
                          (__int64)*a5,
                          3,
                          (__int64)v43,
                          0LL,
                          (__int64)&DEVPKEY_Device_InstanceId,
                          18,
                          v33,
                          2 * (int)v16 + 2,
                          v34 != 0 ? 0x20000 : 0);
  if ( DeviceInterfaceName < 0 )
  {
    if ( v23 )
      CmDeleteDeviceInterface(*(_QWORD *)&PiPnpRtlCtx, *a5, 0LL);
    goto LABEL_25;
  }
  v9 = v38;
  PiDmListAddObject(1LL, v38, v10, 0LL);
  v7 = v37;
  if ( v37 )
    PiDmListAddObject(2LL, v37, v10, 0LL);
LABEL_26:
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KeLeaveCriticalRegion();
  if ( DeviceInterfaceName < 0 )
    goto LABEL_27;
  if ( !v35 )
  {
    v6 = (PVOID *)*a5;
    DeviceInterfaceName = CmValidateDeviceInterfaceName(0LL, (const WCHAR *)*a5);
    if ( DeviceInterfaceName >= 0 )
    {
      v26 = 0x5C003F003F005CLL;
LABEL_47:
      *v6 = (PVOID)v26;
    }
  }
LABEL_28:
  if ( v8 )
    ZwClose(v8);
  if ( P )
    PiPnpRtlEndOperation((PVOID **)P);
  if ( v10 )
    PiDmObjectRelease((unsigned int *)v10);
  if ( v11 )
  {
    PiDmRemoveCacheReferenceForObject(*(unsigned int *)(v11 + 28), *(_QWORD *)(v11 + 16));
    PiDmObjectRelease((unsigned int *)v11);
  }
  if ( v9 )
  {
    PiDmRemoveCacheReferenceForObject(*(unsigned int *)(v9 + 28), *(_QWORD *)(v9 + 16));
    PiDmObjectRelease((unsigned int *)v9);
  }
  if ( v7 )
  {
    PiDmRemoveCacheReferenceForObject(*(unsigned int *)(v7 + 28), *(_QWORD *)(v7 + 16));
    PiDmObjectRelease((unsigned int *)v7);
  }
  return (unsigned int)DeviceInterfaceName;
}
