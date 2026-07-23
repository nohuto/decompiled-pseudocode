/*
 * XREFs of IopInitializeBuiltinDriver @ 0x140C54388
 * Callers:
 *     PnpInitializeBootStartDriver @ 0x140C5421C (PnpInitializeBootStartDriver.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     DbgPrintEx @ 0x1403A9690 (DbgPrintEx.c)
 *     RtlImageNtHeaderEx @ 0x140420FB0 (RtlImageNtHeaderEx.c)
 *     RtlEqualString @ 0x1404884F0 (RtlEqualString.c)
 *     VfDifCaptureIoCallbacks @ 0x14049F4E8 (VfDifCaptureIoCallbacks.c)
 *     VfDifCaptureDriverEntry @ 0x14049F548 (VfDifCaptureDriverEntry.c)
 *     HeadlessKernelAddLogEntry @ 0x1404AC070 (HeadlessKernelAddLogEntry.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     NtClose @ 0x14084EC50 (NtClose.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     ObCreateObject @ 0x140858920 (ObCreateObject.c)
 *     ObInsertObject @ 0x14089FF30 (ObInsertObject.c)
 *     IopReadyDeviceObjects @ 0x1409AF208 (IopReadyDeviceObjects.c)
 *     ObMakeTemporaryObject @ 0x1409AF2C0 (ObMakeTemporaryObject.c)
 *     PnpPrepareDriverLoading @ 0x1409AFA84 (PnpPrepareDriverLoading.c)
 *     IopOpenRegistryKeyEx @ 0x140A3E608 (IopOpenRegistryKeyEx.c)
 *     KseDriverLoadImage @ 0x140A4FD90 (KseDriverLoadImage.c)
 *     KseShimDriverIoCallbacks @ 0x140A500CC (KseShimDriverIoCallbacks.c)
 *     PnpDriverLoadingFailed @ 0x140A9BB78 (PnpDriverLoadingFailed.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     InbvIndicateProgress @ 0x140C09200 (InbvIndicateProgress.c)
 *     MmReapplyBootPatchImports @ 0x140C45828 (MmReapplyBootPatchImports.c)
 */

__int64 __fastcall IopInitializeBuiltinDriver(
        unsigned __int16 *a1,
        UNICODE_STRING *a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 a5,
        _QWORD *a6)
{
  char PreviousMode; // cl
  int inserted; // edi
  char *v12; // rbx
  __int64 v13; // r13
  __int64 v14; // rcx
  PVOID *i; // rdi
  void *v16; // r15
  PVOID v17; // rcx
  ULONG_PTR Pool2; // rax
  ULONG_PTR v19; // rdi
  __int64 v20; // r15
  unsigned __int64 Length; // rax
  wchar_t *Buffer; // rcx
  unsigned __int16 v23; // r12
  wchar_t *v24; // rdi
  wchar_t *j; // rdi
  void *v26; // rax
  unsigned __int16 *v27; // r13
  UNICODE_STRING *v28; // r8
  int v29; // eax
  int v30; // eax
  __int64 v31; // rdx
  PVOID *NewObject; // [rsp+20h] [rbp-79h]
  PVOID Object; // [rsp+50h] [rbp-49h] BYREF
  int v35; // [rsp+58h] [rbp-41h] BYREF
  int v36; // [rsp+5Ch] [rbp-3Dh] BYREF
  HANDLE v37; // [rsp+60h] [rbp-39h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-31h] BYREF
  PVOID v39; // [rsp+70h] [rbp-29h] BYREF
  _QWORD v40[4]; // [rsp+78h] [rbp-21h] BYREF
  __int128 v41; // [rsp+98h] [rbp-1h]
  bool v42; // [rsp+F0h] [rbp+57h] BYREF
  UNICODE_STRING *v43; // [rsp+F8h] [rbp+5Fh]

  v43 = a2;
  Handle = 0LL;
  Object = 0LL;
  v40[0] = 48LL;
  v40[3] = 80LL;
  v37 = 0LL;
  *a6 = 0LL;
  v35 = 0;
  v36 = 0;
  v42 = 0;
  HeadlessKernelAddLogEntry();
  v40[1] = 0LL;
  v40[2] = a1;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v41 = 0LL;
  inserted = ObCreateObject(PreviousMode, IoDriverObjectType, (int)v40, 0, 0, 424, 0, 0, &Object);
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
  ObReferenceObjectByHandle(Handle, 0, IoDriverObjectType, 0, &v39, 0LL);
  for ( i = (PVOID *)PsLoadedModuleList; i != &PsLoadedModuleList && a4; i = (PVOID *)*i )
  {
    if ( RtlEqualString((const STRING *)(a4 + 88), (const STRING *)(i + 11), 1u) )
    {
      *((_QWORD *)v12 + 5) = i;
      InbvIndicateProgress(v14);
      goto LABEL_11;
    }
  }
  InbvIndicateProgress(v14);
  if ( !a4 )
  {
    v39 = 0LL;
    *((_DWORD *)v12 + 4) |= 2u;
    goto LABEL_13;
  }
LABEL_11:
  v16 = *(void **)(a4 + 48);
  v39 = v16;
  Object = 0LL;
  RtlImageNtHeaderEx(1u, v16, 0LL, (PIMAGE_NT_HEADERS *)&Object);
  v17 = Object;
  *((_QWORD *)v12 + 3) = v16;
  *((_DWORD *)v12 + 8) = *((_DWORD *)v17 + 20);
  if ( !_bittest16((const signed __int16 *)v17 + 47, 0xDu) )
    *((_DWORD *)v12 + 4) |= 2u;
LABEL_13:
  Pool2 = ExAllocatePool2(0x40uLL, a1[1] + 2LL, 0x344E6F49uLL);
  v19 = Pool2;
  if ( Pool2 )
  {
    *((_QWORD *)v12 + 8) = Pool2;
    *((_WORD *)v12 + 29) = a1[1];
    *((_WORD *)v12 + 28) = *a1;
    memmove(*((void **)v12 + 8), *((const void **)a1 + 1), a1[1]);
    *(_WORD *)(v19 + 2 * ((unsigned __int64)*a1 >> 1)) = 0;
  }
  v20 = *((_QWORD *)v12 + 6);
  if ( !a2 || (Length = a2->Length, !(_WORD)Length) )
  {
    *(_QWORD *)(v20 + 32) = 0LL;
    *(_DWORD *)(v20 + 24) = 0;
    goto LABEL_32;
  }
  Buffer = a2->Buffer;
  v23 = 0;
  v24 = &Buffer[Length >> 1];
  if ( *(v24 - 1) != 92 )
    v13 = 2LL;
  for ( j = &v24[v13 / 0xFFFFFFFFFFFFFFFEuLL]; j != Buffer; --j )
  {
    if ( *j == 92 )
    {
      if ( ++j != Buffer )
        goto LABEL_26;
      break;
    }
    v23 += 2;
  }
  v23 += 2;
LABEL_26:
  v26 = (void *)ExAllocatePool2(0x40uLL, v23 + 2LL, 0x344E6F49uLL);
  Object = v26;
  v27 = (unsigned __int16 *)(v20 + 24);
  if ( !v26 )
  {
    *(_QWORD *)(v20 + 32) = 0LL;
    inserted = -1073741670;
    *v27 = 0;
    goto LABEL_46;
  }
  *(_QWORD *)(v20 + 32) = v26;
  *(_WORD *)(v20 + 26) = v23 + 2;
  *v27 = v23;
  memmove(v26, j, v23);
  v28 = v43;
  *((_WORD *)Object + ((unsigned __int64)*v27 >> 1)) = 0;
  inserted = IopOpenRegistryKeyEx(&v37, 0LL, v28, 0xF003Fu);
  if ( inserted >= 0 )
  {
    inserted = PnpPrepareDriverLoading((__int64)v27, v37, v39, a5, &v35, &v42);
    NtClose(v37);
    if ( inserted >= 0 )
    {
LABEL_32:
      if ( (v35 & 1) != 0 )
        *((_DWORD *)v12 + 4) |= 0x100u;
      if ( v42 )
        *((_DWORD *)v12 + 4) |= 0x1000u;
      *((_QWORD *)v12 + 9) = &CmRegistryMachineHardwareDescriptionSystemName;
      VfDifCaptureDriverEntry((__int64)v12);
      v29 = KseDriverLoadImage(a4, &v36);
      inserted = v29;
      if ( v29 >= 0 )
      {
        if ( !a4 || !v36 || (inserted = MmReapplyBootPatchImports(*(_QWORD *)(a4 + 48)), inserted >= 0) )
        {
          v30 = guard_dispatch_icall_no_overrides(v12);
          inserted = v30;
          if ( v30 < 0 )
          {
            if ( v30 == -1073741218 )
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
              LODWORD(NewObject) = v30;
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
            KseShimDriverIoCallbacks(v12, v31, (a4 + 72) & -(__int64)(a4 != 0));
          }
        }
      }
      else
      {
        LODWORD(NewObject) = v29;
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
