/*
 * XREFs of IopInitializeBuiltinDriver @ 0x140C68400
 * Callers:
 *     PnpInitializeBootStartDriver @ 0x140C68294 (PnpInitializeBootStartDriver.c)
 * Callees:
 *     DbgPrintEx @ 0x140275B40 (DbgPrintEx.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     RtlImageNtHeaderEx @ 0x140414520 (RtlImageNtHeaderEx.c)
 *     RtlEqualString @ 0x14047B6E0 (RtlEqualString.c)
 *     VfDifCaptureIoCallbacks @ 0x140499158 (VfDifCaptureIoCallbacks.c)
 *     VfDifCaptureDriverEntry @ 0x1404991B8 (VfDifCaptureDriverEntry.c)
 *     HeadlessKernelAddLogEntry @ 0x1404A7D40 (HeadlessKernelAddLogEntry.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     NtClose @ 0x140846CC0 (NtClose.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     ObInsertObject @ 0x140853260 (ObInsertObject.c)
 *     KseDriverLoadImage @ 0x14094187C (KseDriverLoadImage.c)
 *     KseShimDriverIoCallbacks @ 0x140941BB8 (KseShimDriverIoCallbacks.c)
 *     ObCreateObject @ 0x140973930 (ObCreateObject.c)
 *     PnpPrepareDriverLoading @ 0x1409B8F8C (PnpPrepareDriverLoading.c)
 *     ObMakeTemporaryObject @ 0x1409B9330 (ObMakeTemporaryObject.c)
 *     IopOpenRegistryKeyEx @ 0x140A39394 (IopOpenRegistryKeyEx.c)
 *     IopReadyDeviceObjects @ 0x140A8BB04 (IopReadyDeviceObjects.c)
 *     PnpDriverLoadingFailed @ 0x140A9C798 (PnpDriverLoadingFailed.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     InbvIndicateProgress @ 0x140C1C2E0 (InbvIndicateProgress.c)
 *     MmReapplyBootPatchImports @ 0x140C58C98 (MmReapplyBootPatchImports.c)
 */

__int64 __fastcall IopInitializeBuiltinDriver(
        unsigned __int16 *a1,
        UNICODE_STRING *a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 a5,
        _QWORD *a6)
{
  UNICODE_STRING *v6; // r12
  char PreviousMode; // cl
  int inserted; // edi
  char *v12; // rbx
  __int64 v13; // r13
  __int64 v14; // rdx
  __int64 v15; // rcx
  PVOID *i; // rdi
  void *v17; // r15
  PVOID v18; // rcx
  __int64 Pool2; // rax
  __int64 v20; // rdi
  __int64 v21; // r15
  unsigned __int64 Length; // rax
  wchar_t *Buffer; // rcx
  unsigned __int16 v24; // r12
  wchar_t *v25; // rdi
  wchar_t *j; // rdi
  void *v27; // rax
  UNICODE_STRING *v28; // r13
  UNICODE_STRING *v29; // r8
  int v30; // eax
  int v31; // eax
  __int64 v32; // rdx
  PVOID *NewObject; // [rsp+20h] [rbp-79h]
  PVOID Object; // [rsp+50h] [rbp-49h] BYREF
  int v36; // [rsp+58h] [rbp-41h] BYREF
  int v37; // [rsp+5Ch] [rbp-3Dh] BYREF
  HANDLE v38; // [rsp+60h] [rbp-39h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-31h] BYREF
  PVOID v40; // [rsp+70h] [rbp-29h] BYREF
  _QWORD v41[4]; // [rsp+78h] [rbp-21h] BYREF
  __int128 v42; // [rsp+98h] [rbp-1h]
  bool v43; // [rsp+F0h] [rbp+57h] BYREF
  UNICODE_STRING *v44; // [rsp+F8h] [rbp+5Fh]

  v44 = a2;
  v6 = a2;
  Handle = 0LL;
  Object = 0LL;
  v41[0] = 48LL;
  v41[3] = 80LL;
  v38 = 0LL;
  *a6 = 0LL;
  v36 = 0;
  v37 = 0;
  v43 = 0;
  HeadlessKernelAddLogEntry();
  v41[1] = 0LL;
  v41[2] = a1;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v42 = 0LL;
  inserted = ObCreateObject(PreviousMode, IoDriverObjectType, (__int64)v41, 0, 0, 424, 0, 0, &Object);
  if ( inserted < 0 )
    goto LABEL_2;
  v12 = (char *)Object;
  memset_0(Object, 0, 0x1A8uLL);
  *((_QWORD *)v12 + 6) = v12 + 336;
  *((_QWORD *)v12 + 42) = v12;
  v13 = 4LL;
  memset64(v12 + 112, (unsigned __int64)IopInvalidDeviceRequest, 0x1CuLL);
  *(_DWORD *)v12 = 22020100;
  *((_QWORD *)v12 + 11) = a3;
  inserted = ObInsertObject(v12, 0LL, 1u, 0, 0LL, &Handle);
  if ( inserted < 0 )
  {
LABEL_2:
    HeadlessKernelAddLogEntry();
    return (unsigned int)inserted;
  }
  ObReferenceObjectByHandle(Handle, 0, IoDriverObjectType, 0, &v40, 0LL);
  for ( i = (PVOID *)PsLoadedModuleList; i != &PsLoadedModuleList && a4; i = (PVOID *)*i )
  {
    if ( RtlEqualString((const STRING *)(a4 + 88), (const STRING *)(i + 11), 1u) )
    {
      *((_QWORD *)v12 + 5) = i;
      InbvIndicateProgress(v15, v14);
      goto LABEL_11;
    }
  }
  InbvIndicateProgress(v15, v14);
  if ( !a4 )
  {
    v40 = 0LL;
    *((_DWORD *)v12 + 4) |= 2u;
    goto LABEL_13;
  }
LABEL_11:
  v17 = *(void **)(a4 + 48);
  v40 = v17;
  Object = 0LL;
  RtlImageNtHeaderEx(1u, v17, 0LL, (PIMAGE_NT_HEADERS *)&Object);
  v18 = Object;
  *((_QWORD *)v12 + 3) = v17;
  *((_DWORD *)v12 + 8) = *((_DWORD *)v18 + 20);
  if ( !_bittest16((const signed __int16 *)v18 + 47, 0xDu) )
    *((_DWORD *)v12 + 4) |= 2u;
LABEL_13:
  Pool2 = ExAllocatePool2(0x40uLL, a1[1] + 2LL, 0x344E6F49uLL);
  v20 = Pool2;
  if ( Pool2 )
  {
    *((_QWORD *)v12 + 8) = Pool2;
    *((_WORD *)v12 + 29) = a1[1];
    *((_WORD *)v12 + 28) = *a1;
    memmove(*((void **)v12 + 8), *((const void **)a1 + 1), a1[1]);
    *(_WORD *)(v20 + 2 * ((unsigned __int64)*a1 >> 1)) = 0;
  }
  v21 = *((_QWORD *)v12 + 6);
  if ( !v6 || (Length = v6->Length, !(_WORD)Length) )
  {
    *(_QWORD *)(v21 + 32) = 0LL;
    *(_DWORD *)(v21 + 24) = 0;
    goto LABEL_32;
  }
  Buffer = v6->Buffer;
  v24 = 0;
  v25 = &Buffer[Length >> 1];
  if ( *(v25 - 1) != 92 )
    v13 = 2LL;
  for ( j = &v25[v13 / 0xFFFFFFFFFFFFFFFEuLL]; j != Buffer; --j )
  {
    if ( *j == 92 )
    {
      if ( ++j != Buffer )
        goto LABEL_26;
      break;
    }
    v24 += 2;
  }
  v24 += 2;
LABEL_26:
  v27 = (void *)ExAllocatePool2(0x40uLL, v24 + 2LL, 0x344E6F49uLL);
  Object = v27;
  v28 = (UNICODE_STRING *)(v21 + 24);
  if ( !v27 )
  {
    *(_QWORD *)(v21 + 32) = 0LL;
    inserted = -1073741670;
    v28->Length = 0;
    goto LABEL_46;
  }
  *(_QWORD *)(v21 + 32) = v27;
  *(_WORD *)(v21 + 26) = v24 + 2;
  v28->Length = v24;
  memmove(v27, j, v24);
  v6 = v44;
  v29 = v44;
  *((_WORD *)Object + ((unsigned __int64)v28->Length >> 1)) = 0;
  inserted = IopOpenRegistryKeyEx(&v38, 0LL, v29, 0xF003Fu);
  if ( inserted >= 0 )
  {
    inserted = PnpPrepareDriverLoading(v28, v38, v40, a5, &v36, &v43);
    NtClose(v38);
    if ( inserted >= 0 )
    {
LABEL_32:
      if ( (v36 & 1) != 0 )
        *((_DWORD *)v12 + 4) |= 0x100u;
      if ( v43 )
        *((_DWORD *)v12 + 4) |= 0x1000u;
      *((_QWORD *)v12 + 9) = &CmRegistryMachineHardwareDescriptionSystemName;
      VfDifCaptureDriverEntry((__int64)v12);
      v30 = KseDriverLoadImage(a4, &v37);
      inserted = v30;
      if ( v30 >= 0 )
      {
        if ( !a4 || !v37 || (inserted = MmReapplyBootPatchImports(*(_QWORD *)(a4 + 48)), inserted >= 0) )
        {
          v31 = guard_dispatch_icall_no_overrides(v12, v6);
          inserted = v31;
          if ( v31 < 0 )
          {
            if ( v31 == -1073741218 )
            {
              LODWORD(NewObject) = -1073741218;
              DbgPrintEx(
                0x65u,
                3u,
                "IOINIT: Built-in driver %wZ failed to initialize with status - 0x%lX\n",
                a1,
                NewObject);
            }
            else
            {
              LODWORD(NewObject) = v31;
              DbgPrintEx(
                0x65u,
                0,
                "IOINIT: Built-in driver %wZ failed to initialize with status - 0x%lX\n",
                a1,
                NewObject);
            }
          }
          else
          {
            VfDifCaptureIoCallbacks((__int64)v12);
            KseShimDriverIoCallbacks(v12, v32, (a4 + 72) & -(__int64)(a4 != 0));
          }
        }
      }
      else
      {
        LODWORD(NewObject) = v30;
        DbgPrintEx(0x65u, 3u, "IOINIT: Built-in driver %wZ blocked with status - 0x%lX\n", a1, NewObject);
      }
    }
  }
LABEL_46:
  NtClose(Handle);
  if ( inserted < 0 )
  {
    if ( inserted != -1073741218 )
      PnpDriverLoadingFailed(0LL, (UNICODE_STRING *)(*((_QWORD *)v12 + 6) + 24LL));
    HeadlessKernelAddLogEntry();
    ObMakeTemporaryObject(v12);
    ObfDereferenceObjectWithTag(v12, 0x746C6644u);
  }
  else
  {
    IopReadyDeviceObjects((__int64)v12);
    HeadlessKernelAddLogEntry();
    *a6 = v12;
  }
  return (unsigned int)inserted;
}
