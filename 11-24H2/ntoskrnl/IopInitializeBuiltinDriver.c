/*
 * XREFs of IopInitializeBuiltinDriver @ 0x140C66284
 * Callers:
 *     PnpInitializeBootStartDriver @ 0x140C66118 (PnpInitializeBootStartDriver.c)
 * Callees:
 *     DbgPrintEx @ 0x1402CB2F0 (DbgPrintEx.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     RtlImageNtHeaderEx @ 0x14041E7E0 (RtlImageNtHeaderEx.c)
 *     RtlEqualString @ 0x140480C10 (RtlEqualString.c)
 *     VfDifCaptureIoCallbacks @ 0x14049E358 (VfDifCaptureIoCallbacks.c)
 *     VfDifCaptureDriverEntry @ 0x14049E3B8 (VfDifCaptureDriverEntry.c)
 *     HeadlessKernelAddLogEntry @ 0x1404AD660 (HeadlessKernelAddLogEntry.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     NtClose @ 0x14084AA00 (NtClose.c)
 *     ObReferenceObjectByHandle @ 0x14084AF40 (ObReferenceObjectByHandle.c)
 *     ObInsertObject @ 0x140856F80 (ObInsertObject.c)
 *     KseDriverLoadImage @ 0x140959DBC (KseDriverLoadImage.c)
 *     KseShimDriverIoCallbacks @ 0x14095A0F8 (KseShimDriverIoCallbacks.c)
 *     ObCreateObject @ 0x14098A240 (ObCreateObject.c)
 *     IopReadyDeviceObjects @ 0x1409C7584 (IopReadyDeviceObjects.c)
 *     PnpPrepareDriverLoading @ 0x1409C7848 (PnpPrepareDriverLoading.c)
 *     IopOpenRegistryKeyEx @ 0x140A43B04 (IopOpenRegistryKeyEx.c)
 *     ObMakeTemporaryObject @ 0x140A68350 (ObMakeTemporaryObject.c)
 *     PnpDriverLoadingFailed @ 0x140AA1408 (PnpDriverLoadingFailed.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     InbvIndicateProgress @ 0x140C1A2A0 (InbvIndicateProgress.c)
 *     MmReapplyBootPatchImports @ 0x140C56B08 (MmReapplyBootPatchImports.c)
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
  __int64 v16; // r8
  __int64 v17; // r9
  PVOID *i; // rdi
  void *v19; // r15
  PVOID v20; // rcx
  ULONG_PTR Pool2; // rax
  ULONG_PTR v22; // rdi
  __int64 v23; // r15
  unsigned __int64 Length; // rax
  wchar_t *Buffer; // rcx
  unsigned __int16 v26; // r12
  wchar_t *v27; // rdi
  wchar_t *j; // rdi
  void *v29; // rax
  unsigned __int16 *v30; // r13
  UNICODE_STRING *v31; // r8
  int v32; // eax
  __int64 v33; // r8
  __int64 v34; // r9
  int v35; // eax
  __int64 v36; // rdx
  PVOID *NewObject; // [rsp+20h] [rbp-79h]
  PVOID Object; // [rsp+50h] [rbp-49h] BYREF
  int v40; // [rsp+58h] [rbp-41h] BYREF
  int v41; // [rsp+5Ch] [rbp-3Dh] BYREF
  HANDLE v42; // [rsp+60h] [rbp-39h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-31h] BYREF
  PVOID v44; // [rsp+70h] [rbp-29h] BYREF
  _QWORD v45[4]; // [rsp+78h] [rbp-21h] BYREF
  __int128 v46; // [rsp+98h] [rbp-1h]
  bool v47; // [rsp+F0h] [rbp+57h] BYREF
  UNICODE_STRING *v48; // [rsp+F8h] [rbp+5Fh]

  v48 = a2;
  v6 = a2;
  Handle = 0LL;
  Object = 0LL;
  v45[0] = 48LL;
  v45[3] = 80LL;
  v42 = 0LL;
  *a6 = 0LL;
  v40 = 0;
  v41 = 0;
  v47 = 0;
  HeadlessKernelAddLogEntry();
  v45[1] = 0LL;
  v45[2] = a1;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v46 = 0LL;
  inserted = ObCreateObject(PreviousMode, IoDriverObjectType, (__int64)v45, 0, 0, 424, 0, 0, &Object);
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
  ObReferenceObjectByHandle(Handle, 0, IoDriverObjectType, 0, &v44, 0LL);
  for ( i = (PVOID *)PsLoadedModuleList; i != &PsLoadedModuleList && a4; i = (PVOID *)*i )
  {
    if ( RtlEqualString((const STRING *)(a4 + 88), (const STRING *)(i + 11), 1u) )
    {
      *((_QWORD *)v12 + 5) = i;
      InbvIndicateProgress(v15, v14, v16, v17);
      goto LABEL_11;
    }
  }
  InbvIndicateProgress(v15, v14, v16, v17);
  if ( !a4 )
  {
    v44 = 0LL;
    *((_DWORD *)v12 + 4) |= 2u;
    goto LABEL_13;
  }
LABEL_11:
  v19 = *(void **)(a4 + 48);
  v44 = v19;
  Object = 0LL;
  RtlImageNtHeaderEx(1, (unsigned __int64)v19, 0LL, &Object);
  v20 = Object;
  *((_QWORD *)v12 + 3) = v19;
  *((_DWORD *)v12 + 8) = *((_DWORD *)v20 + 20);
  if ( !_bittest16((const signed __int16 *)v20 + 47, 0xDu) )
    *((_DWORD *)v12 + 4) |= 2u;
LABEL_13:
  Pool2 = ExAllocatePool2(0x40uLL, a1[1] + 2LL, 0x344E6F49uLL);
  v22 = Pool2;
  if ( Pool2 )
  {
    *((_QWORD *)v12 + 8) = Pool2;
    *((_WORD *)v12 + 29) = a1[1];
    *((_WORD *)v12 + 28) = *a1;
    memmove(*((void **)v12 + 8), *((const void **)a1 + 1), a1[1]);
    *(_WORD *)(v22 + 2 * ((unsigned __int64)*a1 >> 1)) = 0;
  }
  v23 = *((_QWORD *)v12 + 6);
  if ( !v6 || (Length = v6->Length, !(_WORD)Length) )
  {
    *(_QWORD *)(v23 + 32) = 0LL;
    *(_DWORD *)(v23 + 24) = 0;
    goto LABEL_32;
  }
  Buffer = v6->Buffer;
  v26 = 0;
  v27 = &Buffer[Length >> 1];
  if ( *(v27 - 1) != 92 )
    v13 = 2LL;
  for ( j = &v27[v13 / 0xFFFFFFFFFFFFFFFEuLL]; j != Buffer; --j )
  {
    if ( *j == 92 )
    {
      if ( ++j != Buffer )
        goto LABEL_26;
      break;
    }
    v26 += 2;
  }
  v26 += 2;
LABEL_26:
  v29 = (void *)ExAllocatePool2(0x40uLL, v26 + 2LL, 0x344E6F49uLL);
  Object = v29;
  v30 = (unsigned __int16 *)(v23 + 24);
  if ( !v29 )
  {
    *(_QWORD *)(v23 + 32) = 0LL;
    inserted = -1073741670;
    *v30 = 0;
    goto LABEL_46;
  }
  *(_QWORD *)(v23 + 32) = v29;
  *(_WORD *)(v23 + 26) = v26 + 2;
  *v30 = v26;
  memmove(v29, j, v26);
  v6 = v48;
  v31 = v48;
  *((_WORD *)Object + ((unsigned __int64)*v30 >> 1)) = 0;
  inserted = IopOpenRegistryKeyEx(&v42, 0LL, v31, 0xF003Fu);
  if ( inserted >= 0 )
  {
    inserted = PnpPrepareDriverLoading((int)v30, v42, (unsigned __int64)v44, a5, &v40, &v47);
    NtClose(v42);
    if ( inserted >= 0 )
    {
LABEL_32:
      if ( (v40 & 1) != 0 )
        *((_DWORD *)v12 + 4) |= 0x100u;
      if ( v47 )
        *((_DWORD *)v12 + 4) |= 0x1000u;
      *((_QWORD *)v12 + 9) = &CmRegistryMachineHardwareDescriptionSystemName;
      VfDifCaptureDriverEntry((__int64)v12);
      v32 = KseDriverLoadImage(a4, &v41);
      inserted = v32;
      if ( v32 >= 0 )
      {
        if ( !a4 || !v41 || (inserted = MmReapplyBootPatchImports(*(_QWORD *)(a4 + 48)), inserted >= 0) )
        {
          v35 = guard_dispatch_icall_no_overrides(v12, v6, v33, v34);
          inserted = v35;
          if ( v35 < 0 )
          {
            if ( v35 == -1073741218 )
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
              LODWORD(NewObject) = v35;
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
            KseShimDriverIoCallbacks(v12, v36, (a4 + 72) & -(__int64)(a4 != 0));
          }
        }
      }
      else
      {
        LODWORD(NewObject) = v32;
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
