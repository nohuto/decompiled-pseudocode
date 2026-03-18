/*
 * XREFs of IopLiveDumpWriteDumpFile @ 0x14049ADE4
 * Callers:
 *     IoCaptureLiveDump @ 0x1404E6068 (IoCaptureLiveDump.c)
 *     IoWriteDeferredLiveDumpData @ 0x140597C08 (IoWriteDeferredLiveDumpData.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x14028D9C0 (MmUnmapLockedPages.c)
 *     MmFreeIndependentPages @ 0x14039EC60 (MmFreeIndependentPages.c)
 *     MiFreePagesFromMdl @ 0x1403A2330 (MiFreePagesFromMdl.c)
 *     RtlNumberOfSetBitsEx @ 0x1404181F0 (RtlNumberOfSetBitsEx.c)
 *     RtlpComputeCrcInternal @ 0x1404545A0 (RtlpComputeCrcInternal.c)
 *     IopLiveDumpWriteBuffer @ 0x14049B10C (IopLiveDumpWriteBuffer.c)
 *     IopLiveDumpCheckTermination @ 0x14049B204 (IopLiveDumpCheckTermination.c)
 *     IopLiveDumpShouldCheckChunkCRC @ 0x14049B234 (IopLiveDumpShouldCheckChunkCRC.c)
 *     IopLiveDumpFreeDumpBuffers @ 0x14049B264 (IopLiveDumpFreeDumpBuffers.c)
 *     IopLiveDumpFreeIoSpaceRanges @ 0x14059AE24 (IopLiveDumpFreeIoSpaceRanges.c)
 *     IopLiveDumpWriteSecondaryData @ 0x14059F11C (IopLiveDumpWriteSecondaryData.c)
 *     SecureDump_Get_SecureDumpHeader @ 0x1405A1B60 (SecureDump_Get_SecureDumpHeader.c)
 *     IopLiveDumpTraceChunkCRCMismatchWrite @ 0x1405A30B4 (IopLiveDumpTraceChunkCRCMismatchWrite.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopLiveDumpWriteDumpFile(__int64 a1)
{
  __int64 v1; // rdi
  void *v2; // r12
  LARGE_INTEGER *v3; // r15
  void *v4; // r13
  LARGE_INTEGER v6; // rax
  unsigned __int64 v7; // rsi
  struct _KTHREAD *CurrentThread; // rax
  int SecureDumpHeader; // r14d
  ULONG v10; // r12d
  ULONG_PTR v11; // rcx
  struct _MDL *v12; // r14
  struct _MDL *v13; // r14
  __int64 v14; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  __int64 v21; // rax
  int v22; // ecx
  __int64 v23; // rdi
  __int128 v24; // xmm0
  __int64 v25; // rdx
  struct _MDL *Next; // r12
  unsigned __int64 i; // rcx
  struct _MDL *v28; // r12
  unsigned __int64 j; // rcx
  int v30; // ecx
  __int128 v31; // xmm0
  HANDLE v32; // r12
  int v33; // ecx
  __int64 Pool2; // rax
  ULONG v35; // r8d
  unsigned __int8 v36; // [rsp+38h] [rbp-59h]
  LARGE_INTEGER ByteOffset; // [rsp+40h] [rbp-51h] BYREF
  __int64 v38; // [rsp+48h] [rbp-49h]
  HANDLE FileHandle; // [rsp+50h] [rbp-41h]
  struct _KTHREAD *v40; // [rsp+58h] [rbp-39h]
  __int64 v41; // [rsp+60h] [rbp-31h]
  __int128 v42; // [rsp+68h] [rbp-29h] BYREF
  __int128 v43; // [rsp+78h] [rbp-19h]
  __int64 v44; // [rsp+88h] [rbp-9h]
  __int128 v45; // [rsp+90h] [rbp-1h] BYREF
  __int128 v46; // [rsp+A0h] [rbp+Fh]
  __int64 v47; // [rsp+B0h] [rbp+1Fh]

  v41 = 0LL;
  v1 = a1 + 680;
  v2 = *(void **)(a1 + 64);
  v3 = *(LARGE_INTEGER **)(a1 + 560);
  v4 = 0LL;
  v36 = 0;
  v38 = 0LL;
  v42 = 0LL;
  v44 = 0LL;
  v43 = 0LL;
  v47 = 0LL;
  v45 = 0LL;
  FileHandle = v2;
  v46 = 0LL;
  if ( *(_BYTE *)(a1 + 984) )
    v6.QuadPart = v3[1028].QuadPart + *(unsigned int *)(a1 + 992);
  else
    v6 = v3[1028];
  ByteOffset = v6;
  v7 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v40 = CurrentThread;
  while ( v7 < *(_QWORD *)(v1 + 56) )
  {
    SecureDumpHeader = IopLiveDumpCheckTermination(a1, CurrentThread);
    if ( SecureDumpHeader < 0 )
      goto LABEL_20;
    if ( v7 >= *(_QWORD *)(v1 + 56) - 1LL )
      v10 = *(_DWORD *)(v1 + 40) << 12;
    else
      v10 = BufferChunkSizeInBytes;
    if ( (unsigned __int8)IopLiveDumpShouldCheckChunkCRC(v1, v7) )
      v38 = RtlpComputeCrcInternal(*(_QWORD *)(*(_QWORD *)(v1 + 72) + 8 * v7), v10, 0LL, (__int64)&Crc64Ctrl);
    SecureDumpHeader = IopLiveDumpWriteBuffer(
                         FileHandle,
                         *(PVOID *)(*(_QWORD *)(v1 + 72) + 8 * v7),
                         v10,
                         &ByteOffset,
                         a1,
                         0);
    if ( (unsigned __int8)IopLiveDumpShouldCheckChunkCRC(v1, v7) )
    {
      v16 = v38;
      if ( *(_QWORD *)(*(_QWORD *)(v1 + 200) + 8 * v7) == v38 )
      {
        v36 = 1;
        v16 = RtlpComputeCrcInternal(*(_QWORD *)(*(_QWORD *)(v1 + 72) + 8 * v7), v10, 0LL, (__int64)&Crc64Ctrl);
        v38 = v16;
      }
      v25 = *(_QWORD *)(*(_QWORD *)(v1 + 200) + 8 * v7);
      if ( v25 != v16 )
        IopLiveDumpTraceChunkCRCMismatchWrite(v7, v25, v36, v16, v10, ByteOffset.QuadPart);
    }
    if ( SecureDumpHeader < 0 )
      goto LABEL_20;
    v11 = *(_QWORD *)(*(_QWORD *)(v1 + 80) + 8 * v7);
    if ( v11 )
    {
      MiFreePagesFromMdl(v11, 0, 0, 0);
      ExFreePoolWithTag(*(PVOID *)(*(_QWORD *)(v1 + 80) + 8 * v7), 0x706D644Cu);
      *(_QWORD *)(*(_QWORD *)(v1 + 72) + 8 * v7) = 0LL;
      v14 = *(_QWORD *)(v1 + 80);
      goto LABEL_16;
    }
    v12 = *(struct _MDL **)(v1 + 136);
    if ( v12 && (v17 = *(_QWORD *)(v1 + 128)) != 0 && (v18 = *(_QWORD *)(v1 + 120), v7 >= v18) )
    {
      if ( v7 - v18 + 1 == v17 )
      {
        do
        {
          Next = v12->Next;
          if ( (v12->MdlFlags & 1) != 0 )
            MmUnmapLockedPages(v12->MappedSystemVa, v12);
          ExFreePoolWithTag(v12, 0x706D644Cu);
          v12 = Next;
        }
        while ( Next );
        *(_QWORD *)(v1 + 136) = 0LL;
        IopLiveDumpFreeIoSpaceRanges(v1 + 144, *(unsigned int *)(v1 + 152));
        for ( i = *(_QWORD *)(v1 + 120); i <= v7; *(_QWORD *)(v1 + 120) = i )
        {
          *(_QWORD *)(*(_QWORD *)(v1 + 72) + 8 * i) = 0LL;
          i = *(_QWORD *)(v1 + 120) + 1LL;
        }
        *(_QWORD *)(v1 + 128) = 0LL;
      }
    }
    else
    {
      v13 = *(struct _MDL **)(v1 + 176);
      if ( !v13 || (v19 = *(_QWORD *)(v1 + 168)) == 0 || (v20 = *(_QWORD *)(v1 + 160), v7 < v20) )
      {
        MmFreeIndependentPages(*(_QWORD *)(*(_QWORD *)(v1 + 72) + 8 * v7), BufferChunkSizeInBytes);
        v14 = *(_QWORD *)(v1 + 72);
LABEL_16:
        *(_QWORD *)(v14 + 8 * v7) = 0LL;
        goto LABEL_17;
      }
      if ( v7 - v20 + 1 == v19 )
      {
        do
        {
          v28 = v13->Next;
          if ( (v13->MdlFlags & 1) != 0 )
            MmUnmapLockedPages(v13->MappedSystemVa, v13);
          ExFreePoolWithTag(v13, 0x706D644Cu);
          v13 = v28;
        }
        while ( v28 );
        *(_QWORD *)(v1 + 176) = 0LL;
        IopLiveDumpFreeIoSpaceRanges(v1 + 184, *(unsigned int *)(v1 + 192));
        for ( j = *(_QWORD *)(v1 + 160); j <= v7; *(_QWORD *)(v1 + 160) = j )
        {
          *(_QWORD *)(*(_QWORD *)(v1 + 72) + 8 * j) = 0LL;
          j = *(_QWORD *)(v1 + 160) + 1LL;
        }
        *(_QWORD *)(v1 + 168) = 0LL;
      }
    }
LABEL_17:
    CurrentThread = v40;
    ++v7;
  }
  v21 = RtlNumberOfSetBitsEx((__int64 *)(a1 + 544));
  v22 = *(_DWORD *)(a1 + 1088);
  v23 = v21;
  if ( v22 )
  {
    v24 = *(_OWORD *)(a1 + 1064);
    *(_QWORD *)&v43 = *(_QWORD *)(a1 + 1080);
    v44 = *(_QWORD *)(a1 + 56);
    *(_QWORD *)(a1 + 56) = &v42;
    v42 = v24;
    DWORD2(v43) = v22;
  }
  v30 = *(_DWORD *)(a1 + 1040);
  if ( v30 )
  {
    v31 = *(_OWORD *)(a1 + 1016);
    *(_QWORD *)&v46 = *(_QWORD *)(a1 + 1032);
    v47 = *(_QWORD *)(a1 + 56);
    *(_QWORD *)(a1 + 56) = &v45;
    v45 = v31;
    DWORD2(v46) = v30;
  }
  v32 = FileHandle;
  SecureDumpHeader = IopLiveDumpWriteSecondaryData(FileHandle, a1);
  if ( SecureDumpHeader >= 0 )
  {
    v3[500].QuadPart = ByteOffset.QuadPart - *(unsigned int *)(a1 + 992);
    v33 = v3[522].LowPart | 0x10;
    v3[522].LowPart = v33;
    if ( (*(_DWORD *)(a1 + 40) & 0x20) != 0 )
      v3[522].LowPart = v33 | 0x4000;
    v3[1024].LowPart = 1347241043;
    v3[1024].HighPart = 1347245380;
    v3[1029].QuadPart = v23;
    if ( *(_BYTE *)(a1 + 984) )
    {
      ByteOffset.QuadPart = *(unsigned int *)(a1 + 992);
      Pool2 = ExAllocatePool2(0x40uLL);
      v4 = (void *)Pool2;
      if ( !Pool2 )
      {
        SecureDumpHeader = -1073741670;
        goto LABEL_20;
      }
      SecureDumpHeader = SecureDump_Get_SecureDumpHeader(v3, Pool2, *(unsigned int *)(a1 + 992));
      if ( SecureDumpHeader < 0 )
      {
LABEL_64:
        ExFreePoolWithTag(v4, 0);
        goto LABEL_20;
      }
    }
    else
    {
      ByteOffset.QuadPart = 0LL;
    }
    SecureDumpHeader = IopLiveDumpWriteBuffer(v32, v3, v3[1028].LowPart, &ByteOffset, a1, 0);
    if ( *(_BYTE *)(a1 + 984) )
    {
      v35 = *(_DWORD *)(a1 + 992);
      ByteOffset.QuadPart = 0LL;
      SecureDumpHeader = IopLiveDumpWriteBuffer(v32, v4, v35, &ByteOffset, a1, 1);
    }
    if ( v4 )
      goto LABEL_64;
  }
LABEL_20:
  IopLiveDumpFreeDumpBuffers(a1);
  return (unsigned int)SecureDumpHeader;
}
