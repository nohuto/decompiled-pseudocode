/*
 * XREFs of IopLiveDumpWriteDumpFile @ 0x1404957D4
 * Callers:
 *     IoCaptureLiveDump @ 0x1404DC764 (IoCaptureLiveDump.c)
 *     IoWriteDeferredLiveDumpData @ 0x140594B84 (IoWriteDeferredLiveDumpData.c)
 * Callees:
 *     MiFreePagesFromMdl @ 0x140218F60 (MiFreePagesFromMdl.c)
 *     MmFreeIndependentPages @ 0x14021D100 (MmFreeIndependentPages.c)
 *     MmUnmapLockedPages @ 0x14029D5C0 (MmUnmapLockedPages.c)
 *     RtlNumberOfSetBitsEx @ 0x140407FA0 (RtlNumberOfSetBitsEx.c)
 *     RtlpComputeCrcInternal @ 0x140449440 (RtlpComputeCrcInternal.c)
 *     IopLiveDumpWriteBuffer @ 0x140495AFC (IopLiveDumpWriteBuffer.c)
 *     IopLiveDumpCheckTermination @ 0x140495BF4 (IopLiveDumpCheckTermination.c)
 *     IopLiveDumpShouldCheckChunkCRC @ 0x140495C24 (IopLiveDumpShouldCheckChunkCRC.c)
 *     IopLiveDumpFreeDumpBuffers @ 0x140495C54 (IopLiveDumpFreeDumpBuffers.c)
 *     IopLiveDumpFreeIoSpaceRanges @ 0x140597DA4 (IopLiveDumpFreeIoSpaceRanges.c)
 *     IopLiveDumpWriteSecondaryData @ 0x14059C09C (IopLiveDumpWriteSecondaryData.c)
 *     SecureDump_Get_SecureDumpHeader @ 0x14059EAA0 (SecureDump_Get_SecureDumpHeader.c)
 *     IopLiveDumpTraceChunkCRCMismatchWrite @ 0x14059FFF4 (IopLiveDumpTraceChunkCRCMismatchWrite.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
  __int64 v11; // r8
  ULONG_PTR v12; // rcx
  struct _MDL *v13; // r14
  struct _MDL *v14; // r14
  __int64 v15; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned __int64 v21; // rdx
  __int64 v22; // rax
  int v23; // ecx
  __int64 v24; // rdi
  __int128 v25; // xmm0
  __int64 v26; // rdx
  struct _MDL *Next; // r12
  unsigned __int64 i; // rcx
  struct _MDL *v29; // r12
  unsigned __int64 j; // rcx
  int v31; // ecx
  __int128 v32; // xmm0
  HANDLE v33; // r12
  int v34; // ecx
  ULONG_PTR v35; // rdx
  __int64 Pool2; // rax
  ULONG v37; // r8d
  unsigned __int8 v38; // [rsp+38h] [rbp-59h]
  LARGE_INTEGER ByteOffset; // [rsp+40h] [rbp-51h] BYREF
  __int64 v40; // [rsp+48h] [rbp-49h]
  HANDLE FileHandle; // [rsp+50h] [rbp-41h]
  struct _KTHREAD *v42; // [rsp+58h] [rbp-39h]
  __int64 v43; // [rsp+60h] [rbp-31h]
  __int128 v44; // [rsp+68h] [rbp-29h] BYREF
  __int128 v45; // [rsp+78h] [rbp-19h]
  __int64 v46; // [rsp+88h] [rbp-9h]
  __int128 v47; // [rsp+90h] [rbp-1h] BYREF
  __int128 v48; // [rsp+A0h] [rbp+Fh]
  __int64 v49; // [rsp+B0h] [rbp+1Fh]

  v43 = 0LL;
  v1 = a1 + 680;
  v2 = *(void **)(a1 + 64);
  v3 = *(LARGE_INTEGER **)(a1 + 560);
  v4 = 0LL;
  v38 = 0;
  v40 = 0LL;
  v44 = 0LL;
  v46 = 0LL;
  v45 = 0LL;
  v49 = 0LL;
  v47 = 0LL;
  FileHandle = v2;
  v48 = 0LL;
  if ( *(_BYTE *)(a1 + 984) )
    v6.QuadPart = v3[1028].QuadPart + *(unsigned int *)(a1 + 992);
  else
    v6 = v3[1028];
  ByteOffset = v6;
  v7 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v42 = CurrentThread;
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
      v40 = RtlpComputeCrcInternal(*(_QWORD *)(*(_QWORD *)(v1 + 72) + 8 * v7), v10, 0LL, (__int64)&Crc64Ctrl);
    SecureDumpHeader = IopLiveDumpWriteBuffer(
                         FileHandle,
                         *(PVOID *)(*(_QWORD *)(v1 + 72) + 8 * v7),
                         v10,
                         &ByteOffset,
                         a1,
                         0);
    if ( (unsigned __int8)IopLiveDumpShouldCheckChunkCRC(v1, v7) )
    {
      v17 = v40;
      if ( *(_QWORD *)(*(_QWORD *)(v1 + 200) + 8 * v7) == v40 )
      {
        v38 = 1;
        v17 = RtlpComputeCrcInternal(*(_QWORD *)(*(_QWORD *)(v1 + 72) + 8 * v7), v10, 0LL, (__int64)&Crc64Ctrl);
        v40 = v17;
      }
      v26 = *(_QWORD *)(*(_QWORD *)(v1 + 200) + 8 * v7);
      if ( v26 != v17 )
        IopLiveDumpTraceChunkCRCMismatchWrite(v7, v26, v38, v17, v10, ByteOffset.QuadPart);
    }
    if ( SecureDumpHeader < 0 )
      goto LABEL_20;
    v12 = *(_QWORD *)(*(_QWORD *)(v1 + 80) + 8 * v7);
    if ( v12 )
    {
      MiFreePagesFromMdl(v12, 0, 0, 0);
      ExFreePoolWithTag(*(PVOID *)(*(_QWORD *)(v1 + 80) + 8 * v7), 0x706D644Cu);
      *(_QWORD *)(*(_QWORD *)(v1 + 72) + 8 * v7) = 0LL;
      v15 = *(_QWORD *)(v1 + 80);
      goto LABEL_16;
    }
    v13 = *(struct _MDL **)(v1 + 136);
    if ( v13 && (v18 = *(_QWORD *)(v1 + 128)) != 0 && (v19 = *(_QWORD *)(v1 + 120), v7 >= v19) )
    {
      if ( v7 - v19 + 1 == v18 )
      {
        do
        {
          Next = v13->Next;
          if ( (v13->MdlFlags & 1) != 0 )
            MmUnmapLockedPages(v13->MappedSystemVa, v13);
          ExFreePoolWithTag(v13, 0x706D644Cu);
          v13 = Next;
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
      v14 = *(struct _MDL **)(v1 + 176);
      if ( !v14 || (v20 = *(_QWORD *)(v1 + 168)) == 0 || (v21 = *(_QWORD *)(v1 + 160), v7 < v21) )
      {
        MmFreeIndependentPages(*(_QWORD *)(*(_QWORD *)(v1 + 72) + 8 * v7), BufferChunkSizeInBytes, v11);
        v15 = *(_QWORD *)(v1 + 72);
LABEL_16:
        *(_QWORD *)(v15 + 8 * v7) = 0LL;
        goto LABEL_17;
      }
      if ( v7 - v21 + 1 == v20 )
      {
        do
        {
          v29 = v14->Next;
          if ( (v14->MdlFlags & 1) != 0 )
            MmUnmapLockedPages(v14->MappedSystemVa, v14);
          ExFreePoolWithTag(v14, 0x706D644Cu);
          v14 = v29;
        }
        while ( v29 );
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
    CurrentThread = v42;
    ++v7;
  }
  v22 = RtlNumberOfSetBitsEx((__int64 *)(a1 + 544));
  v23 = *(_DWORD *)(a1 + 1088);
  v24 = v22;
  if ( v23 )
  {
    v25 = *(_OWORD *)(a1 + 1064);
    *(_QWORD *)&v45 = *(_QWORD *)(a1 + 1080);
    v46 = *(_QWORD *)(a1 + 56);
    *(_QWORD *)(a1 + 56) = &v44;
    v44 = v25;
    DWORD2(v45) = v23;
  }
  v31 = *(_DWORD *)(a1 + 1040);
  if ( v31 )
  {
    v32 = *(_OWORD *)(a1 + 1016);
    *(_QWORD *)&v48 = *(_QWORD *)(a1 + 1032);
    v49 = *(_QWORD *)(a1 + 56);
    *(_QWORD *)(a1 + 56) = &v47;
    v47 = v32;
    DWORD2(v48) = v31;
  }
  v33 = FileHandle;
  SecureDumpHeader = IopLiveDumpWriteSecondaryData(FileHandle, a1);
  if ( SecureDumpHeader >= 0 )
  {
    v3[500].QuadPart = ByteOffset.QuadPart - *(unsigned int *)(a1 + 992);
    v34 = v3[522].LowPart | 0x10;
    v3[522].LowPart = v34;
    if ( (*(_DWORD *)(a1 + 40) & 0x20) != 0 )
      v3[522].LowPart = v34 | 0x4000;
    v3[1024].LowPart = 1347241043;
    v3[1024].HighPart = 1347245380;
    v3[1029].QuadPart = v24;
    if ( *(_BYTE *)(a1 + 984) )
    {
      v35 = *(unsigned int *)(a1 + 992);
      ByteOffset.QuadPart = v35;
      Pool2 = ExAllocatePool2(0x40uLL, v35, 0x706D644Cu);
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
    SecureDumpHeader = IopLiveDumpWriteBuffer(v33, v3, v3[1028].LowPart, &ByteOffset, a1, 0);
    if ( *(_BYTE *)(a1 + 984) )
    {
      v37 = *(_DWORD *)(a1 + 992);
      ByteOffset.QuadPart = 0LL;
      SecureDumpHeader = IopLiveDumpWriteBuffer(v33, v4, v37, &ByteOffset, a1, 1);
    }
    if ( v4 )
      goto LABEL_64;
  }
LABEL_20:
  IopLiveDumpFreeDumpBuffers(a1);
  return (unsigned int)SecureDumpHeader;
}
