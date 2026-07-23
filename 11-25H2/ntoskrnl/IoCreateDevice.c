/*
 * XREFs of IoCreateDevice @ 0x14099E640
 * Callers:
 *     DifIoCreateDeviceWrapper @ 0x14061AC90 (DifIoCreateDeviceWrapper.c)
 *     HalpAddDevice @ 0x1406F2AF0 (HalpAddDevice.c)
 *     IopCreateRootEnumeratedDeviceObject @ 0x140721A6C (IopCreateRootEnumeratedDeviceObject.c)
 *     VRegSetup @ 0x140819310 (VRegSetup.c)
 *     IoCreateDeviceSecure @ 0x14099CC50 (IoCreateDeviceSecure.c)
 *     RawMountVolume @ 0x14099E244 (RawMountVolume.c)
 *     PiSwGetChildPdo @ 0x140AC044C (PiSwGetChildPdo.c)
 *     ViDdiDriverEntry @ 0x140B74770 (ViDdiDriverEntry.c)
 *     VfFilterAttach @ 0x140B8CDB0 (VfFilterAttach.c)
 *     IopInitializePlugPlayServices @ 0x140C0DF14 (IopInitializePlugPlayServices.c)
 *     PiDaDriverEntry @ 0x140C14530 (PiDaDriverEntry.c)
 *     RawInitialize @ 0x140C25460 (RawInitialize.c)
 *     WmipDriverEntry @ 0x140C2B6E0 (WmipDriverEntry.c)
 * Callees:
 *     PsReferenceSiloContext @ 0x14029A8F0 (PsReferenceSiloContext.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     RtlGetNtProductType @ 0x140311820 (RtlGetNtProductType.c)
 *     KeInitializeEvent @ 0x140401B80 (KeInitializeEvent.c)
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     RtlStringCchPrintfW @ 0x140476E64 (RtlStringCchPrintfW.c)
 *     IopInsertRemoveDevice @ 0x1404824E0 (IopInsertRemoveDevice.c)
 *     KeInitializeDeviceQueue @ 0x1404AC6C0 (KeInitializeDeviceQueue.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     IopCreateVpb @ 0x140708DC8 (IopCreateVpb.c)
 *     ObCreateObjectEx @ 0x14085BE20 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x1408A05E0 (ObInsertObjectEx.c)
 *     ObCloseHandle @ 0x1408EFEC0 (ObCloseHandle.c)
 *     RtlpAddKnownAce @ 0x14092B1E0 (RtlpAddKnownAce.c)
 *     IopCreateSecurityDescriptorPerType @ 0x14099EC00 (IopCreateSecurityDescriptorPerType.c)
 *     EtwTiLogDeviceObjectLoadUnload @ 0x14099EDE4 (EtwTiLogDeviceObjectLoadUnload.c)
 *     AstLogDeviceCreated @ 0x14099EF48 (AstLogDeviceCreated.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1409EC1D0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x1409EC7E0 (RtlCreateSecurityDescriptor.c)
 *     PoVolumeDevice @ 0x140AABF98 (PoVolumeDevice.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall IoCreateDevice(
        PDRIVER_OBJECT DriverObject,
        ULONG DeviceExtensionSize,
        PUNICODE_STRING DeviceName,
        ULONG DeviceType,
        ULONG DeviceCharacteristics,
        BOOLEAN Exclusive,
        PDEVICE_OBJECT *DeviceObject)
{
  ACL *v7; // rbx
  ULONG v8; // esi
  unsigned __int64 v10; // rdi
  ULONG v11; // ecx
  PVOID v12; // r14
  __int64 v13; // rdx
  __int16 v14; // r13
  ACL *v15; // r15
  int v16; // eax
  ACL *v17; // rdx
  __int64 v18; // rcx
  unsigned int v19; // esi
  NTSTATUS inserted; // ebx
  char *v21; // rdx
  ULONG v22; // edx
  __int16 v23; // cx
  __int64 v24; // rcx
  _QWORD *v25; // rax
  char *v26; // rcx
  PDRIVER_OBJECT v27; // rdi
  bool v29; // zf
  USHORT AclSize; // si
  unsigned __int8 *v31; // rax
  ACL *Pool2; // rax
  unsigned __int8 *v33; // rax
  int v34; // r9d
  void *Src; // [rsp+20h] [rbp-E0h]
  PVOID Object; // [rsp+50h] [rbp-B0h] BYREF
  _NT_PRODUCT_TYPE NtProductType; // [rsp+58h] [rbp-A8h] BYREF
  PVOID P; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v39; // [rsp+68h] [rbp-98h]
  ULONG v40; // [rsp+6Ch] [rbp-94h]
  ULONG v41; // [rsp+70h] [rbp-90h]
  _BYTE v42[12]; // [rsp+74h] [rbp-8Ch] BYREF
  PDEVICE_OBJECT *v43; // [rsp+80h] [rbp-80h]
  PDRIVER_OBJECT v44; // [rsp+88h] [rbp-78h]
  _DWORD v45[2]; // [rsp+90h] [rbp-70h] BYREF
  ACL *v46; // [rsp+98h] [rbp-68h]
  PUNICODE_STRING v47; // [rsp+A0h] [rbp-60h]
  __int64 v48; // [rsp+A8h] [rbp-58h]
  ACL *v49; // [rsp+B0h] [rbp-50h]
  ACL *v50; // [rsp+B8h] [rbp-48h]
  UNICODE_STRING DestinationString; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+D0h] [rbp-30h] BYREF
  wchar_t pszDest[20]; // [rsp+F8h] [rbp-8h] BYREF

  v7 = 0LL;
  LOBYTE(v8) = DeviceCharacteristics;
  v44 = DriverObject;
  v43 = DeviceObject;
  v10 = DeviceType;
  v40 = DeviceExtensionSize;
  v41 = DeviceCharacteristics;
  v11 = 8 - (DeviceExtensionSize & 7);
  v45[1] = 0;
  v48 = 0LL;
  Object = 0LL;
  if ( (DeviceExtensionSize & 7) == 0 )
    v11 = DeviceExtensionSize & 7;
  *(_DWORD *)&v42[8] = 0;
  P = 0LL;
  v39 = DeviceExtensionSize + v11;
  v12 = 0LL;
  DestinationString = 0LL;
  *(_QWORD *)v42 = (unsigned __int8)DeviceCharacteristics & 0x80;
  v13 = 4LL;
  v14 = 0;
  if ( (DeviceCharacteristics & 0x80) == 0 )
    goto LABEL_5;
  while ( 1 )
  {
    RtlStringCchPrintfW(
      pszDest,
      0x11uLL,
      L"\\Device\\%08lx",
      (unsigned int)_InterlockedIncrement(&IopUniqueDeviceObjectNumber));
    RtlInitUnicodeString(&DestinationString, pszDest);
    v12 = P;
    DeviceName = &DestinationString;
    v13 = 4LL;
LABEL_5:
    v15 = 0LL;
    if ( (unsigned int)v10 <= 0x12 )
    {
      if ( (_DWORD)v10 == 18 )
        goto LABEL_7;
      if ( (_DWORD)v10 != 2 )
      {
        if ( (_DWORD)v10 == 3 )
          goto LABEL_7;
        if ( (_DWORD)v10 != 7 )
        {
          if ( (_DWORD)v10 == 8 )
            goto LABEL_7;
          v29 = (_DWORD)v10 == 9;
          goto LABEL_79;
        }
      }
      if ( (_DWORD)v10 != 2 && (v8 & 1) == 0 )
      {
LABEL_7:
        v13 = 2LL;
        goto LABEL_8;
      }
      NtProductType = 0;
      AclSize = SePublicDefaultUnrestrictedDacl->AclSize;
      if ( !RtlGetNtProductType(&NtProductType) )
        goto LABEL_9;
      if ( NtProductType == NtProductWinNt )
      {
        v31 = (unsigned __int8 *)SeInteractiveSid;
      }
      else
      {
        if ( (_DWORD)v10 != 2 )
          goto LABEL_84;
        v31 = (unsigned __int8 *)SeWorldSid;
      }
      AclSize += 4 * (v31[1] + 4);
LABEL_84:
      Pool2 = (ACL *)ExAllocatePool2(0x100uLL);
      v7 = Pool2;
      if ( !Pool2 )
      {
LABEL_9:
        v17 = v7;
        goto LABEL_10;
      }
      memmove(Pool2, SePublicDefaultUnrestrictedDacl, SePublicDefaultUnrestrictedDacl->AclSize);
      v29 = NtProductType == NtProductWinNt;
      v7->AclSize = AclSize;
      if ( v29 )
      {
        v33 = (unsigned __int8 *)SeInteractiveSid;
        v34 = -1073676288;
      }
      else
      {
        if ( (_DWORD)v10 != 2 )
        {
LABEL_90:
          RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
          RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v7, 0);
          v15 = v7;
          v7 = 0LL;
          goto LABEL_63;
        }
        v33 = (unsigned __int8 *)SeWorldSid;
        v34 = 0x80000000;
      }
      RtlpAddKnownAce(v7, 2u, 0, v34, v33, 0);
      goto LABEL_90;
    }
    if ( (_DWORD)v10 == 32 || (_DWORD)v10 == 20 || (_DWORD)v10 == 36 || (_DWORD)v10 == 45 )
      goto LABEL_7;
    v29 = (_DWORD)v10 == 53;
LABEL_79:
    if ( v29 )
      goto LABEL_7;
LABEL_8:
    v16 = IopCreateSecurityDescriptorPerType(SecurityDescriptor, v13, &P, 0LL);
    v12 = P;
    if ( v16 < 0 )
      goto LABEL_9;
LABEL_63:
    v17 = (ACL *)SecurityDescriptor;
LABEL_10:
    if ( (_DWORD)v10 == 3 )
    {
      v14 = 2048;
    }
    else if ( (_DWORD)v10 == 7 || (_DWORD)v10 == 8 || (_DWORD)v10 == 36 )
    {
      v14 = 512;
    }
    v45[0] = 48;
    v46 = v7;
    v47 = DeviceName;
    v49 = v17;
    v18 = IopCaseInsensitive != 0 ? 576 : 512;
    v50 = v7;
    LODWORD(v48) = IopCaseInsensitive != 0 ? 576 : 512;
    if ( Exclusive != (_BYTE)v7 )
    {
      v18 = (unsigned int)v18 | 0x20;
      LODWORD(v48) = v18;
    }
    if ( DeviceName )
    {
      v18 = (unsigned int)v18 | 0x10;
      LODWORD(v48) = v18;
    }
    v19 = v39 + 448;
    if ( v39 >= 0xFFFFFE40 )
    {
      inserted = -1073741811;
LABEL_40:
      if ( v15 )
        ExFreePoolWithTag(v15, 0);
      if ( v12 )
        ExFreePoolWithTag(v12, 0);
      if ( inserted >= 0 )
      {
        LOBYTE(v18) = 1;
        EtwTiLogDeviceObjectLoadUnload(v18, *((_QWORD *)Object + 1) + 56LL, DeviceName);
      }
      *v43 = (PDEVICE_OBJECT)Object;
      return inserted;
    }
    inserted = ObCreateObjectEx(
                 0,
                 (_DWORD *)IoDeviceObjectType,
                 (int)v45,
                 0,
                 (__int64)Src,
                 v39 + 448,
                 (int)v7,
                 (int)v7,
                 &Object,
                 v7);
    if ( inserted < 0 )
      goto LABEL_40;
    memset_0(Object, 0, v19);
    v8 = v41;
    v21 = (char *)Object + v39 + 336;
    *((_QWORD *)v21 + 1) = Object;
    *((_QWORD *)Object + 39) = v21;
    *(_DWORD *)v21 = 13;
    *((_QWORD *)v21 + 11) = 0LL;
    *((_DWORD *)v21 + 4) = 0;
    *((_QWORD *)v21 + 3) = 0LL;
    v22 = v40;
    v23 = v40 + 336;
    *(_WORD *)Object = 3;
    *((_WORD *)Object + 1) = v23;
    *((_DWORD *)Object + 18) = v10;
    *((_DWORD *)Object + 13) = v8;
    if ( (unsigned int)v10 <= 0x24 )
    {
      v24 = 0x1080000084LL;
      if ( _bittest64(&v24, v10) )
        break;
    }
LABEL_22:
    *((_DWORD *)Object + 38) = 0;
    *((_WORD *)Object + 152) = v14;
    *((_DWORD *)Object + 12) = 128;
    if ( Exclusive )
      *((_DWORD *)Object + 12) |= 8u;
    if ( DeviceName )
      *((_DWORD *)Object + 12) |= 0x40u;
    if ( v22 )
      *((_QWORD *)Object + 8) = (char *)Object + 336;
    else
      *((_QWORD *)Object + 8) = 0LL;
    *((_BYTE *)Object + 76) = 1;
    if ( (_DWORD)v10 == 3 || (_DWORD)v10 == 8 || (_DWORD)v10 == 9 || (_DWORD)v10 == 20 || (_DWORD)v10 == 32 )
    {
      v25 = (char *)Object + 80;
      *((_QWORD *)Object + 11) = (char *)Object + 80;
      *v25 = v25;
    }
    else
    {
      KeInitializeDeviceQueue((PKDEVICE_QUEUE)Object + 4);
    }
    v26 = (char *)Object;
    if ( (*((_DWORD *)Object + 13) & 0x40001) == 0 )
    {
      *(_DWORD *)(*((_QWORD *)Object + 39) + 32LL) |= 0x800u;
      v26 = (char *)Object;
    }
    inserted = ObInsertObjectEx(v26, 0LL, 3, 1, 0, &Object, (__int64)&v42[4]);
    if ( inserted >= 0 )
    {
      AstLogDeviceCreated(Object, (unsigned int)v10, v8);
      v27 = v44;
      PsReferenceSiloContext(v44);
      *((_QWORD *)Object + 1) = v27;
      IopInsertRemoveDevice((__int64)v27, (__int64)Object, 1);
      if ( *((_QWORD *)Object + 7) )
        PoVolumeDevice();
      ObCloseHandle(*(HANDLE *)&v42[4], 0);
      goto LABEL_40;
    }
    if ( !*(_DWORD *)v42 || inserted != -1073741771 )
    {
      Object = 0LL;
      goto LABEL_40;
    }
    v7 = 0LL;
    if ( v15 )
      ExFreePoolWithTag(v15, 0);
    if ( v12 )
    {
      ExFreePoolWithTag(v12, 0);
      P = 0LL;
    }
  }
  inserted = IopCreateVpb((__int64)Object);
  if ( inserted >= 0 )
  {
    KeInitializeEvent((PRKEVENT)((char *)Object + 280), SynchronizationEvent, 1u);
    v22 = v40;
    goto LABEL_22;
  }
  ObfDereferenceObject(Object);
  if ( v15 )
    ExFreePoolWithTag(v15, 0);
  if ( v12 )
    ExFreePoolWithTag(v12, 0);
  *v43 = 0LL;
  return inserted;
}
