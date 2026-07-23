/*
 * XREFs of EtwpSavePersistedLogger @ 0x1407B02B0
 * Callers:
 *     EtwpSavePersistedLoggersWorker @ 0x1407B087C (EtwpSavePersistedLoggersWorker.c)
 * Callees:
 *     IoAllocateMdl @ 0x14025F1D0 (IoAllocateMdl.c)
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     MmMapLockedPagesWithReservedMapping @ 0x14041D8B0 (MmMapLockedPagesWithReservedMapping.c)
 *     MmUnmapReservedMapping @ 0x140433320 (MmUnmapReservedMapping.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwWriteFile @ 0x1406A74B0 (ZwWriteFile.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwSetInformationFile @ 0x1406A7890 (ZwSetInformationFile.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     EtwpInitializeCompressedWriter @ 0x1407AFCCC (EtwpInitializeCompressedWriter.c)
 *     EtwpQueryPersistedMemory @ 0x1407B01C4 (EtwpQueryPersistedMemory.c)
 *     EtwpTraceSavePersistedLoggerStop @ 0x1407B0990 (EtwpTraceSavePersistedLoggerStop.c)
 *     EtwpWriteBufferCompressed @ 0x1407B0AA0 (EtwpWriteBufferCompressed.c)
 *     EtwpWriteRemainingCompressedData @ 0x1407B0C70 (EtwpWriteRemainingCompressedData.c)
 *     RtlFreeAnsiString @ 0x1408B69C0 (RtlFreeAnsiString.c)
 *     RtlCreateUnicodeString @ 0x1409D2A00 (RtlCreateUnicodeString.c)
 *     EtwpExpandFileName @ 0x1409D5FA4 (EtwpExpandFileName.c)
 *     EtwpDelayCreate @ 0x1409D61B0 (EtwpDelayCreate.c)
 *     MmAllocateMappingAddressEx @ 0x140A531F0 (MmAllocateMappingAddressEx.c)
 *     MmFreeMappingAddress @ 0x140A55EC0 (MmFreeMappingAddress.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpSavePersistedLogger(__int64 a1, __int64 a2)
{
  HANDLE v3; // r14
  int v4; // esi
  unsigned int v5; // r13d
  struct _MDL *v6; // r15
  PVOID v7; // rdi
  __int64 i; // r8
  __int64 v9; // r12
  int v10; // ebx
  PMDL Mdl; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // r9
  int v17; // eax
  unsigned int v18; // r11d
  struct _MDL *v19; // rcx
  unsigned int v20; // edi
  unsigned int v21; // r14d
  struct _MDL *v22; // r9
  __int64 v23; // r10
  _QWORD *v24; // rdx
  __int64 v25; // rax
  _DWORD *v26; // rax
  _DWORD *v27; // rdi
  unsigned int v28; // eax
  unsigned int v29; // r11d
  struct _MDL *v30; // r15
  __int64 v31; // rbx
  _QWORD *v32; // rdx
  unsigned int v33; // r10d
  unsigned int v34; // eax
  __int64 v35; // r9
  __int64 v36; // rcx
  _DWORD *Buffer; // rax
  void *v38; // rdi
  bool v39; // zf
  int UserData; // [rsp+20h] [rbp-E0h]
  int v42; // [rsp+50h] [rbp-B0h] BYREF
  char v43; // [rsp+54h] [rbp-ACh]
  unsigned int v44; // [rsp+58h] [rbp-A8h] BYREF
  ULONG Length; // [rsp+5Ch] [rbp-A4h]
  unsigned int v46; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v47; // [rsp+64h] [rbp-9Ch]
  PVOID MappingAddress; // [rsp+68h] [rbp-98h]
  HANDLE FileHandle; // [rsp+70h] [rbp-90h] BYREF
  PVOID v50; // [rsp+78h] [rbp-88h] BYREF
  __int64 v51; // [rsp+80h] [rbp-80h]
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-78h] BYREF
  __int64 v53; // [rsp+98h] [rbp-68h]
  struct _MDL *v54; // [rsp+A0h] [rbp-60h]
  struct _MDL *v55; // [rsp+A8h] [rbp-58h]
  LARGE_INTEGER ByteOffset; // [rsp+B0h] [rbp-50h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+B8h] [rbp-48h] BYREF
  char v58[8]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v59; // [rsp+D8h] [rbp-28h]
  PVOID P; // [rsp+F0h] [rbp-10h]
  PVOID v61; // [rsp+F8h] [rbp-8h]
  _OWORD FileInformation[2]; // [rsp+110h] [rbp+10h] BYREF
  __int64 v63; // [rsp+130h] [rbp+30h]

  v53 = a2;
  v51 = a1;
  ByteOffset.QuadPart = 0LL;
  v44 = 0;
  v63 = 0LL;
  FileHandle = 0LL;
  v42 = 0;
  memset(FileInformation, 0, sizeof(FileInformation));
  v3 = 0LL;
  v4 = 0;
  v5 = 0;
  v46 = 0;
  DestinationString = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  IoStatusBlock = 0LL;
  v50 = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  memset_0(v58, 0, 0x40uLL);
  EtwWrite(EtwpEventTracingProvRegHandle, &ETW_EVENT_SAVE_PERSISTED_LOGGER_START, 0LL, 0, 0LL);
  v9 = *(unsigned int *)(a1 + 8);
  Length = v9;
  if ( !(_DWORD)v9 || (v9 & 0xFFF) != 0 )
  {
    v10 = -1072037875;
    goto LABEL_60;
  }
  MappingAddress = (PVOID)MmAllocateMappingAddressEx((unsigned int)v9, 1266119749LL, 0LL);
  v7 = MappingAddress;
  if ( !MappingAddress || (Mdl = IoAllocateMdl(0LL, v9, 0, 0, 0LL), v55 = Mdl, (v6 = Mdl) == 0LL) )
  {
    v10 = -1073741670;
    goto LABEL_60;
  }
  v13 = v53;
  Mdl->MdlFlags |= 2u;
  v10 = EtwpQueryPersistedMemory(v12, v13, &v50, &v44);
  if ( v10 >= 0 )
  {
    v14 = v51;
    if ( !RtlCreateUnicodeString(&DestinationString, (PCWSTR)(v51 + *(unsigned int *)(v51 + 12))) )
    {
      v10 = -1073741801;
      goto LABEL_60;
    }
    v15 = 0LL;
    for ( i = 0LL; (unsigned int)i < v44; i = (unsigned int)(i + 1) )
    {
      v16 = *((_QWORD *)v50 + i) >> 40;
      if ( !v16 )
        goto LABEL_13;
      v15 += v16;
    }
    if ( v15 << 12 != v9 * *(unsigned int *)(v14 + 4) )
    {
LABEL_13:
      v10 = -1072103376;
      goto LABEL_60;
    }
    LOBYTE(UserData) = 0;
    v10 = EtwpExpandFileName(0LL, &DestinationString, 0LL, &DestinationString, UserData);
    if ( v10 < 0 )
      goto LABEL_60;
    v43 = 0;
    v17 = EtwpDelayCreate((__int64)&FileHandle, 0, 1, 0LL);
    v3 = FileHandle;
    v10 = v17;
    if ( v17 < 0 )
      goto LABEL_60;
    LODWORD(v63) = 0x2000;
    ZwSetInformationFile(FileHandle, &IoStatusBlock, FileInformation, 0x28u, FileBasicInformation);
    v10 = EtwpInitializeCompressedWriter((__int64)v58, v9, (__int64)v3);
    if ( v10 < 0 )
      goto LABEL_60;
    v18 = 0;
    v19 = v6 + 1;
    v20 = 0;
    v47 = 0;
    v44 = 0;
    v54 = v6 + 1;
    v21 = (unsigned int)v9 >> 12;
    while ( 1 )
    {
      if ( v5 >= *(_DWORD *)(v51 + 4) )
      {
        EtwpWriteRemainingCompressedData(v58, &v46, &v42);
        v29 = 0;
        if ( v21 )
        {
          v30 = v54;
          v31 = v21;
          do
          {
            v32 = v50;
            v33 = v20 + 1;
            v34 = v29 + 1;
            v30->Next = (struct _MDL *)(v20 + (*((_QWORD *)v50 + v29) & 0xFFFFFFFFFFLL));
            v30 = (struct _MDL *)((char *)v30 + 8);
            v35 = v32[v29] >> 40;
            v36 = v20 + 1;
            if ( v36 != v35 )
              v34 = v29;
            v20 = 0;
            v29 = v34;
            if ( v36 != v35 )
              v20 = v33;
            --v31;
          }
          while ( v31 );
          v6 = v55;
        }
        Buffer = MmMapLockedPagesWithReservedMapping(MappingAddress, 0x4B777445u, v6, MmCached);
        v5 = v46;
        v38 = Buffer;
        v4 = v42;
        Buffer[34] |= 0x4000000u;
        v39 = Buffer[37] == 4;
        Buffer[35] = v5 + 1;
        Buffer[11] = 3;
        if ( v39 )
          Buffer[93] += v4;
        else
          Buffer[95] += v4;
        v3 = FileHandle;
        v10 = ZwWriteFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, Length, &ByteOffset, 0LL);
        MmUnmapReservedMapping(v38, 0x4B777445u, v6);
        v7 = MappingAddress;
        if ( v10 >= 0 )
          ++v5;
        else
          LOBYTE(v4) = v4 + 1;
        LODWORD(v9) = Length;
        goto LABEL_60;
      }
      if ( v21 )
      {
        v22 = v19;
        v23 = v21;
        do
        {
          v24 = v50;
          v25 = v20++;
          v22->Next = (struct _MDL *)(v25 + (*((_QWORD *)v50 + v18) & 0xFFFFFFFFFFLL));
          if ( v20 == v24[v18] >> 40 )
          {
            ++v18;
            v20 = 0;
          }
          v22 = (struct _MDL *)((char *)v22 + 8);
          --v23;
        }
        while ( v23 );
        LODWORD(v9) = Length;
        v47 = v18;
        v44 = v20;
      }
      v26 = MmMapLockedPagesWithReservedMapping(MappingAddress, 0x4B777445u, v6, MmCached);
      v27 = v26;
      if ( *v26 != (_DWORD)v9 )
        goto LABEL_27;
      v28 = v26[2] <= *v26 ? v26[2] : v26[1];
      v27[12] = v28;
      if ( v28 > (unsigned int)v9 )
        break;
      if ( v28 > 0x48 )
      {
        if ( (_DWORD)v9 != v28 )
          memset_0((char *)v27 + v28, 255, (unsigned int)v9 - v28);
        if ( v5 )
          v10 = EtwpWriteBufferCompressed(v58, v27);
        else
          v59 += (unsigned int)v9;
      }
      v4 = v42;
LABEL_40:
      MmUnmapReservedMapping(v27, 0x4B777445u, v6);
      if ( v10 < 0 && !v5 )
      {
        v5 = v46;
        v3 = FileHandle;
        v7 = MappingAddress;
        goto LABEL_60;
      }
      v20 = v44;
      v19 = v6 + 1;
      v18 = v47;
      ++v5;
    }
    v4 = v42;
LABEL_27:
    ++v4;
    v10 = -1073741306;
    v42 = v4;
    goto LABEL_40;
  }
LABEL_60:
  if ( P )
  {
    ExFreePoolWithTag(P, 0);
    P = 0LL;
  }
  if ( v61 )
  {
    ExFreePoolWithTag(v61, 0);
    v61 = 0LL;
  }
  if ( v3 )
    ZwClose(v3);
  if ( v7 )
    MmFreeMappingAddress(v7, 0x4B777445u);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  if ( v50 )
    ExFreePoolWithTag(v50, 0);
  LOBYTE(i) = 1;
  KsrFreePersistedMemoryBlock(EtwpKsrGuid, v53, i);
  EtwpTraceSavePersistedLoggerStop((unsigned int)&DestinationString, v9, *(_DWORD *)(v51 + 4), v5, v4, v10);
  RtlFreeAnsiString(&DestinationString);
  return (unsigned int)v10;
}
