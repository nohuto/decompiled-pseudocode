/*
 * XREFs of IopProcessSetInterfaceState @ 0x140968508
 * Callers:
 *     IoSetDeviceInterfaceState @ 0x140969D40 (IoSetDeviceInterfaceState.c)
 *     IopDoDeferredSetInterfaceState @ 0x140A6C2D0 (IopDoDeferredSetInterfaceState.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     RtlInitUnicodeStringEx @ 0x14045CBF0 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     ZwCreateSymbolicLinkObject @ 0x14069CA40 (ZwCreateSymbolicLinkObject.c)
 *     ZwOpenSymbolicLinkObject @ 0x14069D840 (ZwOpenSymbolicLinkObject.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     KsepCacheLock @ 0x14082C0D4 (KsepCacheLock.c)
 *     IoGetDeviceProperty @ 0x140834450 (IoGetDeviceProperty.c)
 *     _PnpGetObjectProperty @ 0x1408CB8A0 (_PnpGetObjectProperty.c)
 *     PiDmObjectRelease @ 0x1408CE5E0 (PiDmObjectRelease.c)
 *     PiDmObjectReleaseLock @ 0x1408CE958 (PiDmObjectReleaseLock.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x140934F70 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PnpUnicodeStringToWstrFree @ 0x140956510 (PnpUnicodeStringToWstrFree.c)
 *     _CmGetDeviceInterfaceClassGuid @ 0x14095720C (_CmGetDeviceInterfaceClassGuid.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x140968AC8 (PiDmRemoveCacheReferenceForObject.c)
 *     PiDmAddCacheReferenceForObject @ 0x140968B58 (PiDmAddCacheReferenceForObject.c)
 *     PiDmObjectManagerReleaseLock @ 0x140968CC0 (PiDmObjectManagerReleaseLock.c)
 *     PiDmObjectManagerAcquireSharedLock @ 0x140968D50 (PiDmObjectManagerAcquireSharedLock.c)
 *     PiDmLookupObject @ 0x140968F10 (PiDmLookupObject.c)
 *     IopBuildGlobalSymbolicLinkString @ 0x1409690E0 (IopBuildGlobalSymbolicLinkString.c)
 *     PnpSetDeviceClassChange @ 0x14096A1B4 (PnpSetDeviceClassChange.c)
 *     _PnpRaiseNtPlugPlayInterfacePropertyChangeEvent @ 0x14096A758 (_PnpRaiseNtPlugPlayInterfacePropertyChangeEvent.c)
 *     PipCanEnableInterfaces @ 0x140A75904 (PipCanEnableInterfaces.c)
 *     PiDeferSetInterfaceState @ 0x140A8B230 (PiDeferSetInterfaceState.c)
 *     PiRemoveDeferredSetInterfaceState @ 0x140A9163C (PiRemoveDeferredSetInterfaceState.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePool @ 0x140B62CB0 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopProcessSetInterfaceState(unsigned __int16 *a1, unsigned __int8 a2, char a3)
{
  WCHAR *v4; // r14
  void *v5; // r12
  ULONG_PTR v6; // rdi
  struct _DEVICE_OBJECT *v7; // r13
  WCHAR *v8; // rsi
  WCHAR *v9; // rcx
  unsigned __int64 v10; // rdx
  __int64 v11; // r8
  WCHAR *Pool2; // rax
  WCHAR *v13; // rbx
  int DeviceInterfaceClassGuid; // ebx
  WCHAR *v15; // rax
  int ObjectProperty; // eax
  int v18; // eax
  GUID *v19; // rcx
  __int64 v20; // rcx
  ULONG_PTR v21; // rax
  ULONG_PTR v22; // r14
  void *v23; // rcx
  struct _DEVICE_OBJECT *v24; // rax
  __int64 v25; // rdx
  PVOID DeviceNode; // r8
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
  GUID v41; // [rsp+F8h] [rbp-10h] BYREF

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
  v9 = (WCHAR *)*((_QWORD *)a1 + 1);
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
    Pool2 = (WCHAR *)ExAllocatePool2(0x100uLL);
    v13 = Pool2;
    if ( !Pool2 )
      goto LABEL_28;
    memmove(Pool2, *((const void **)a1 + 1), *a1);
    v8 = v13;
    LODWORD(v9) = 0;
    v13[(unsigned __int64)*a1 >> 1] = 0;
  }
  else
  {
    v8 = v9;
  }
LABEL_12:
  DeviceInterfaceClassGuid = CmGetDeviceInterfaceClassGuid((int)v9, (int)v8, &v41);
  if ( DeviceInterfaceClassGuid < 0 )
    goto LABEL_17;
  DeviceInterfaceClassGuid = IopBuildGlobalSymbolicLinkString(a1, P);
  if ( DeviceInterfaceClassGuid < 0 )
    goto LABEL_17;
  v15 = (WCHAR *)ExAllocatePool2(0x100uLL);
  v35 = v15;
  v4 = v15;
  if ( !v15 )
  {
LABEL_28:
    DeviceInterfaceClassGuid = -1073741670;
    goto LABEL_17;
  }
  ObjectProperty = PnpGetObjectProperty(
                     *(_QWORD **)&PiPnpRtlCtx,
                     v8,
                     3u,
                     0LL,
                     0LL,
                     (__int64)&DEVPKEY_Device_InstanceId,
                     &v32,
                     v15,
                     0x190u,
                     (__int64)&v34,
                     0);
  DeviceInterfaceClassGuid = ObjectProperty;
  if ( ObjectProperty == -1073741275 )
    goto LABEL_30;
  if ( ObjectProperty < 0 )
    goto LABEL_17;
  if ( (_DWORD)v32 != 18 )
    goto LABEL_30;
  DeviceInterfaceClassGuid = RtlInitUnicodeStringEx(&v39, v4);
  if ( DeviceInterfaceClassGuid < 0 )
    goto LABEL_17;
  v24 = (struct _DEVICE_OBJECT *)PnpDeviceObjectFromDeviceInstanceWithTag((__int64)&v39, 0x49706E50u);
  LOBYTE(v25) = v29;
  v36 = v24;
  v7 = v24;
  if ( v24 )
  {
    DeviceNode = v24->DeviceObjectExtension->DeviceNode;
    if ( !(_BYTE)v29 )
      goto LABEL_62;
    if ( (unsigned __int8)PipCanEnableInterfaces(v24->DeviceObjectExtension->DeviceNode, v25, DeviceNode) )
    {
      LOBYTE(v25) = v29;
      goto LABEL_62;
    }
LABEL_30:
    DeviceInterfaceClassGuid = -1073741808;
    goto LABEL_17;
  }
  if ( (_BYTE)v29 )
    goto LABEL_30;
  DeviceNode = 0LL;
LABEL_62:
  if ( a3 && DeviceNode && (v7->DeviceObjectExtension->ExtensionFlags & 0x10) != 0 )
  {
    if ( (_BYTE)v25 )
      DeviceInterfaceClassGuid = PiDeferSetInterfaceState(DeviceNode, a1);
    else
      PiRemoveDeferredSetInterfaceState(DeviceNode, a1);
    goto LABEL_17;
  }
  if ( (_BYTE)v25 )
  {
    BufferLength = 512;
    while ( 1 )
    {
      if ( v5 )
        ExFreePoolWithTag(v5, 0);
      v5 = (void *)ExAllocatePool2(0x100uLL);
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
        KsepCacheLock((unsigned __int64 *)BugCheckParameter2);
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
    KsepCacheLock((unsigned __int64 *)v6);
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
    PiDmObjectReleaseLock((signed __int64 *)v6);
    v4 = v35;
    v7 = v36;
    if ( HIBYTE(v29) )
    {
      v19 = &GUID_DEVICE_INTERFACE_ARRIVAL;
      if ( !(_BYTE)v29 )
        v19 = &GUID_DEVICE_INTERFACE_REMOVAL;
      PnpSetDeviceClassChange(v19, &v41, a1);
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
  PnpUnicodeStringToWstrFree(v8, (__int64)a1);
  if ( v7 )
    ObfDereferenceObjectWithTag(v7, 0x49706E50u);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  if ( v6 )
    PiDmObjectRelease((unsigned int *)v6);
  return (unsigned int)DeviceInterfaceClassGuid;
}
