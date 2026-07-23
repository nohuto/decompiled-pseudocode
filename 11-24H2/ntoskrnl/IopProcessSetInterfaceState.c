/*
 * XREFs of IopProcessSetInterfaceState @ 0x1408B1BC4
 * Callers:
 *     IopDoDeferredSetInterfaceState @ 0x1408AFDC4 (IopDoDeferredSetInterfaceState.c)
 *     IoSetDeviceInterfaceState @ 0x1408B19A0 (IoSetDeviceInterfaceState.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     RtlInitUnicodeStringEx @ 0x14044FE60 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwCreateSymbolicLinkObject @ 0x1406A8CB0 (ZwCreateSymbolicLinkObject.c)
 *     ZwOpenSymbolicLinkObject @ 0x1406A9AB0 (ZwOpenSymbolicLinkObject.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     PipCanEnableInterfaces @ 0x1408B0C84 (PipCanEnableInterfaces.c)
 *     _PnpRaiseNtPlugPlayInterfacePropertyChangeEvent @ 0x1408B0E28 (_PnpRaiseNtPlugPlayInterfacePropertyChangeEvent.c)
 *     PnpSetDeviceClassChange @ 0x1408B0E78 (PnpSetDeviceClassChange.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x1408B2184 (PiDmRemoveCacheReferenceForObject.c)
 *     PiDmAddCacheReferenceForObject @ 0x1408B2214 (PiDmAddCacheReferenceForObject.c)
 *     PiDmObjectManagerReleaseLock @ 0x1408B2B2C (PiDmObjectManagerReleaseLock.c)
 *     PiDmObjectManagerAcquireSharedLock @ 0x1408B2B9C (PiDmObjectManagerAcquireSharedLock.c)
 *     PiDmLookupObject @ 0x1408B2D60 (PiDmLookupObject.c)
 *     IopBuildGlobalSymbolicLinkString @ 0x1408B2F30 (IopBuildGlobalSymbolicLinkString.c)
 *     PnpUnicodeStringToWstrFree @ 0x1408B4E80 (PnpUnicodeStringToWstrFree.c)
 *     KsepCacheLock @ 0x1408B8ED0 (KsepCacheLock.c)
 *     IoGetDeviceProperty @ 0x1408BA410 (IoGetDeviceProperty.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x1408BB740 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     _CmGetDeviceInterfaceClassGuid @ 0x1408C9070 (_CmGetDeviceInterfaceClassGuid.c)
 *     _PnpGetObjectProperty @ 0x1408CB9C0 (_PnpGetObjectProperty.c)
 *     PiDmObjectRelease @ 0x1408CE420 (PiDmObjectRelease.c)
 *     PiDmObjectReleaseLock @ 0x1408CECD4 (PiDmObjectReleaseLock.c)
 *     PiDeferSetInterfaceState @ 0x140A8C6C0 (PiDeferSetInterfaceState.c)
 *     PiRemoveDeferredSetInterfaceState @ 0x140A9201C (PiRemoveDeferredSetInterfaceState.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePool @ 0x140B74850 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopProcessSetInterfaceState(unsigned __int16 *a1, unsigned __int8 a2, char a3)
{
  WCHAR *v4; // r14
  void *v5; // r12
  ULONG_PTR v6; // rdi
  struct _DEVICE_OBJECT *v7; // r13
  __int64 v8; // rsi
  _WORD *v9; // rcx
  unsigned __int64 v10; // rdx
  __int64 v11; // r8
  _WORD *Pool2; // rax
  _WORD *v13; // rbx
  NTSTATUS DeviceInterfaceClassGuid; // ebx
  __int64 v15; // rax
  int ObjectProperty; // eax
  int v18; // eax
  GUID *v19; // rcx
  __int64 v20; // rcx
  ULONG_PTR v21; // rax
  ULONG_PTR v22; // r14
  void *v23; // rcx
  __int64 v24; // rax
  char v25; // dl
  __int64 v26; // r8
  NTSTATUS DeviceProperty; // eax
  char v28; // [rsp+68h] [rbp-A0h]
  __int16 v29; // [rsp+69h] [rbp-9Fh]
  ULONG BufferLength; // [rsp+6Ch] [rbp-9Ch] BYREF
  __int64 v32; // [rsp+70h] [rbp-98h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+78h] [rbp-90h] BYREF
  int v34; // [rsp+80h] [rbp-88h] BYREF
  WCHAR *v35; // [rsp+88h] [rbp-80h]
  struct _DEVICE_OBJECT *v36; // [rsp+90h] [rbp-78h]
  PVOID P[2]; // [rsp+98h] [rbp-70h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A8h] [rbp-60h] BYREF
  UNICODE_STRING v39; // [rsp+D8h] [rbp-30h] BYREF
  UNICODE_STRING DestinationString; // [rsp+E8h] [rbp-20h] BYREF
  __int128 v41; // [rsp+F8h] [rbp-10h] BYREF

  v29 = a2;
  BufferLength = 0;
  BugCheckParameter2 = 0LL;
  v4 = 0LL;
  LODWORD(v32) = 0;
  v5 = 0LL;
  v34 = 0;
  v6 = 0LL;
  v7 = 0LL;
  v28 = 0;
  v8 = 0LL;
  DestinationString = 0LL;
  *(_OWORD *)P = 0LL;
  v41 = 0LL;
  memset(&ObjectAttributes, 0, 44);
  v39 = 0LL;
  if ( !a1 )
    goto LABEL_29;
  v9 = (_WORD *)*((_QWORD *)a1 + 1);
  if ( !v9 )
    goto LABEL_29;
  v10 = *a1;
  if ( !(_WORD)v10 )
    goto LABEL_29;
  v11 = a1[1];
  if ( (unsigned __int16)v11 < 2u )
    goto LABEL_12;
  if ( (unsigned __int16)v10 > (unsigned __int16)v11 )
  {
LABEL_29:
    DeviceInterfaceClassGuid = -1073741811;
    goto LABEL_17;
  }
  if ( *v9
    && ((_WORD)v10 != (_WORD)v11 || v9[((unsigned __int64)*a1 >> 1) - 1])
    && (v10 > v11 - 2 || v9[(v10 >> 1) - 1] && v9[v10 >> 1]) )
  {
    Pool2 = (_WORD *)ExAllocatePool2(0x100uLL, v10 + 2, 0x75737050u);
    v13 = Pool2;
    if ( !Pool2 )
      goto LABEL_28;
    memmove(Pool2, *((const void **)a1 + 1), *a1);
    v8 = (__int64)v13;
    v9 = 0LL;
    v13[(unsigned __int64)*a1 >> 1] = 0;
  }
  else
  {
    v8 = (__int64)v9;
  }
LABEL_12:
  DeviceInterfaceClassGuid = CmGetDeviceInterfaceClassGuid(v9, v8, &v41);
  if ( DeviceInterfaceClassGuid < 0 )
    goto LABEL_17;
  DeviceInterfaceClassGuid = IopBuildGlobalSymbolicLinkString(a1, P);
  if ( DeviceInterfaceClassGuid < 0 )
    goto LABEL_17;
  v15 = ExAllocatePool2(0x100uLL, 0x190uLL, 0x20207050u);
  v35 = (WCHAR *)v15;
  v4 = (WCHAR *)v15;
  if ( !v15 )
  {
LABEL_28:
    DeviceInterfaceClassGuid = -1073741670;
    goto LABEL_17;
  }
  ObjectProperty = PnpGetObjectProperty(
                     PiPnpRtlCtx,
                     v8,
                     3,
                     0,
                     0LL,
                     (__int64)&DEVPKEY_Device_InstanceId,
                     (__int64)&v32,
                     v15,
                     400,
                     (__int64)&v34,
                     0);
  DeviceInterfaceClassGuid = ObjectProperty;
  if ( ObjectProperty == -1073741275 )
    goto LABEL_33;
  if ( ObjectProperty < 0 )
    goto LABEL_17;
  if ( (_DWORD)v32 != 18 )
    goto LABEL_33;
  DeviceInterfaceClassGuid = RtlInitUnicodeStringEx(&v39, v4);
  if ( DeviceInterfaceClassGuid < 0 )
    goto LABEL_17;
  v24 = PnpDeviceObjectFromDeviceInstanceWithTag(&v39, 1232105040LL);
  v25 = v29;
  v36 = (struct _DEVICE_OBJECT *)v24;
  v7 = (struct _DEVICE_OBJECT *)v24;
  if ( v24 )
  {
    v26 = *(_QWORD *)(*(_QWORD *)(v24 + 312) + 40LL);
    if ( !(_BYTE)v29 )
      goto LABEL_62;
    if ( PipCanEnableInterfaces(*(_QWORD *)(*(_QWORD *)(v24 + 312) + 40LL)) )
    {
      v25 = v29;
      goto LABEL_62;
    }
LABEL_33:
    DeviceInterfaceClassGuid = -1073741808;
    goto LABEL_17;
  }
  if ( (_BYTE)v29 )
    goto LABEL_33;
  v26 = 0LL;
LABEL_62:
  if ( a3 && v26 && (v7->DeviceObjectExtension->ExtensionFlags & 0x10) != 0 )
  {
    if ( v25 )
      DeviceInterfaceClassGuid = PiDeferSetInterfaceState(v26, a1);
    else
      PiRemoveDeferredSetInterfaceState(v26, a1);
    goto LABEL_17;
  }
  if ( v25 )
  {
    BufferLength = 512;
    while ( 1 )
    {
      if ( v5 )
        ExFreePoolWithTag(v5, 0);
      v5 = (void *)ExAllocatePool2(0x100uLL, BufferLength, 0x20207050u);
      if ( !v5 )
        goto LABEL_28;
      DeviceProperty = IoGetDeviceProperty(v7, DevicePropertyPhysicalDeviceObjectName, BufferLength, v5, &BufferLength);
      DeviceInterfaceClassGuid = DeviceProperty;
      if ( DeviceProperty != -1073741789 )
      {
        if ( DeviceProperty < 0 )
          goto LABEL_17;
        if ( !BufferLength )
          goto LABEL_17;
        RtlInitUnicodeString(&DestinationString, (PCWSTR)v5);
        v18 = PiDmAddCacheReferenceForObject(3LL, v8, &BugCheckParameter2);
        v6 = BugCheckParameter2;
        DeviceInterfaceClassGuid = v18;
        if ( v18 < 0 )
          goto LABEL_17;
        KsepCacheLock(BugCheckParameter2);
        if ( (*(_DWORD *)(v6 + 32) & 1) == 0 )
        {
          DeviceInterfaceClassGuid = -1073741772;
          goto LABEL_53;
        }
        if ( *(_QWORD *)(v6 + 40) )
        {
          DeviceInterfaceClassGuid = 0x40000000;
          goto LABEL_53;
        }
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = (PUNICODE_STRING)P;
        ObjectAttributes.SecurityDescriptor = (PVOID)SePublicDefaultUnrestrictedSd;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 576;
        ObjectAttributes.SecurityQualityOfService = 0LL;
        DeviceInterfaceClassGuid = ZwOpenSymbolicLinkObject((PHANDLE)(v6 + 40), 0xF0001u, &ObjectAttributes);
        if ( DeviceInterfaceClassGuid == -1073741772 )
          DeviceInterfaceClassGuid = ZwCreateSymbolicLinkObject(
                                       (PHANDLE)(v6 + 40),
                                       0xF0001u,
                                       &ObjectAttributes,
                                       &DestinationString);
        if ( DeviceInterfaceClassGuid >= 0 )
          HIBYTE(v29) = 1;
        goto LABEL_41;
      }
    }
  }
  DeviceInterfaceClassGuid = 0;
  PiDmObjectManagerAcquireSharedLock(&PiDmDeviceInterfaceManager);
  v21 = PiDmLookupObject(&PiDmDeviceInterfaceManager, v8);
  BugCheckParameter2 = v21;
  v6 = v21;
  v22 = v21;
  if ( v21 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v21 + 8));
    v6 = BugCheckParameter2;
  }
  else
  {
    DeviceInterfaceClassGuid = -1073741772;
  }
  PiDmObjectManagerReleaseLock(&PiDmDeviceInterfaceManager);
  if ( DeviceInterfaceClassGuid < 0 )
  {
    v4 = v35;
  }
  else
  {
    KsepCacheLock(v6);
    v23 = *(void **)(v22 + 40);
    if ( v23 )
    {
      ZwClose(v23);
      *(_QWORD *)(v22 + 40) = 0LL;
      HIBYTE(v29) = 1;
LABEL_53:
      v28 = 1;
    }
    else
    {
      DeviceInterfaceClassGuid = -1073741772;
    }
LABEL_41:
    PiDmObjectReleaseLock(v6);
    v4 = v35;
    v7 = v36;
    if ( HIBYTE(v29) )
    {
      v19 = &GUID_DEVICE_INTERFACE_ARRIVAL;
      if ( !(_BYTE)v29 )
        v19 = &GUID_DEVICE_INTERFACE_REMOVAL;
      PnpSetDeviceClassChange(v19, &v41, (const void **)a1);
      PnpRaiseNtPlugPlayInterfacePropertyChangeEvent(v20, v8);
    }
    if ( v28 )
      PiDmRemoveCacheReferenceForObject(3LL, v8);
  }
LABEL_17:
  if ( P[1] )
  {
    ExFreePool(P[1]);
    *(_OWORD *)P = 0LL;
  }
  PnpUnicodeStringToWstrFree(v8, a1);
  if ( v7 )
    ObfDereferenceObjectWithTag(v7, 0x49706E50u);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  if ( v6 )
    PiDmObjectRelease((PVOID)v6);
  return (unsigned int)DeviceInterfaceClassGuid;
}
