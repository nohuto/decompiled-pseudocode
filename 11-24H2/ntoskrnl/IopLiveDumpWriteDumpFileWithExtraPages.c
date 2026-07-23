/*
 * XREFs of IopLiveDumpWriteDumpFileWithExtraPages @ 0x14059B7D0
 * Callers:
 *     IoCaptureLiveDump @ 0x1404DC764 (IoCaptureLiveDump.c)
 * Callees:
 *     MiFreePagesFromMdl @ 0x140218F60 (MiFreePagesFromMdl.c)
 *     MmFreeIndependentPages @ 0x14021D100 (MmFreeIndependentPages.c)
 *     RtlNumberOfSetBitsEx @ 0x140407FA0 (RtlNumberOfSetBitsEx.c)
 *     IopLiveDumpWriteBuffer @ 0x140495AFC (IopLiveDumpWriteBuffer.c)
 *     IopLiveDumpCheckTermination @ 0x140495BF4 (IopLiveDumpCheckTermination.c)
 *     IopLiveDumpFreeDumpBuffers @ 0x140495C54 (IopLiveDumpFreeDumpBuffers.c)
 *     IopLiveDumpGetExtraMergePages @ 0x140598408 (IopLiveDumpGetExtraMergePages.c)
 *     IopLiveDumpGetNtMergePages @ 0x1405986DC (IopLiveDumpGetNtMergePages.c)
 *     SecureDump_Get_SecureDumpHeader @ 0x14059EAA0 (SecureDump_Get_SecureDumpHeader.c)
 *     RtlMergeBitMapsEx @ 0x1405E56D0 (RtlMergeBitMapsEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopLiveDumpWriteDumpFileWithExtraPages(__int64 a1)
{
  __int64 v1; // r15
  LARGE_INTEGER *v2; // rsi
  _OWORD *Pool2; // r13
  int SecureDumpHeader; // edi
  __int64 v6; // rdi
  LARGE_INTEGER v7; // rax
  void *v8; // r14
  __int64 v9; // rax
  char ExtraMergePages; // al
  unsigned int v11; // r12d
  __int64 v12; // r8
  int v13; // r15d
  __int64 *v14; // rax
  _QWORD *v15; // r8
  _QWORD *v16; // r9
  char v17; // r10
  __int64 v18; // r11
  ULONG v19; // edi
  __int64 v20; // r15
  char v21; // al
  __int64 v22; // rdi
  ULONG_PTR v23; // rcx
  __int64 v24; // rax
  unsigned int v25; // edi
  __int64 v26; // r12
  bool v27; // zf
  char *v28; // rax
  char *v29; // rdx
  __int64 v30; // r12
  unsigned int v31; // ecx
  int v32; // r15d
  __int32 v33; // eax
  __int128 v34; // xmm0
  int v35; // r12d
  unsigned int v36; // edi
  __int32 v37; // eax
  __int128 v38; // xmm0
  __int32 v39; // eax
  __int128 v40; // xmm0
  ULONG_PTR v41; // rdx
  __int64 v42; // rax
  void *v43; // r15
  ULONG v44; // r8d
  char v46; // [rsp+38h] [rbp-89h]
  char v47; // [rsp+39h] [rbp-88h]
  char v48; // [rsp+3Ah] [rbp-87h]
  LARGE_INTEGER ByteOffset; // [rsp+40h] [rbp-81h] BYREF
  unsigned int v50; // [rsp+48h] [rbp-79h] BYREF
  int v51; // [rsp+4Ch] [rbp-75h] BYREF
  char *v52; // [rsp+50h] [rbp-71h] BYREF
  char *v53; // [rsp+58h] [rbp-69h] BYREF
  _QWORD *v54; // [rsp+60h] [rbp-61h]
  __int64 v55; // [rsp+68h] [rbp-59h] BYREF
  __int64 *v56; // [rsp+70h] [rbp-51h]
  __int64 v57; // [rsp+78h] [rbp-49h] BYREF
  __int64 v58; // [rsp+80h] [rbp-41h]
  PVOID Buffer; // [rsp+88h] [rbp-39h]
  __int64 v60; // [rsp+98h] [rbp-29h] BYREF
  __int64 v61; // [rsp+A0h] [rbp-21h]
  __int64 v62; // [rsp+A8h] [rbp-19h]
  struct _KTHREAD *CurrentThread; // [rsp+B0h] [rbp-11h]
  void *v64; // [rsp+B8h] [rbp-9h]
  __m256i v65; // [rsp+C0h] [rbp-1h] BYREF
  __int128 v66; // [rsp+E0h] [rbp+1Fh] BYREF

  v1 = *(_QWORD *)(a1 + 1128);
  v2 = *(LARGE_INTEGER **)(a1 + 560);
  ByteOffset.QuadPart = 0LL;
  v53 = 0LL;
  v57 = 0LL;
  Pool2 = 0LL;
  v51 = 0;
  v52 = 0LL;
  v55 = 0LL;
  v50 = 0;
  v64 = 0LL;
  v62 = v1;
  v66 = 0LL;
  memset(&v65, 0, sizeof(v65));
  if ( !v1 )
    goto LABEL_2;
  v6 = *(_QWORD *)(a1 + 1136);
  v61 = v6;
  if ( !v6 )
    goto LABEL_2;
  if ( *(_BYTE *)(a1 + 984) )
    v7.QuadPart = v2[1028].QuadPart + *(unsigned int *)(a1 + 992);
  else
    v7 = v2[1028];
  v8 = *(void **)(a1 + 64);
  ByteOffset = v7;
  v60 = -1LL;
  CurrentThread = KeGetCurrentThread();
  v9 = *(_QWORD *)(a1 + 624);
  v58 = 0LL;
  v46 = 0;
  if ( *(_QWORD *)(a1 + 552) != v9 )
    memset_0(*(void **)(a1 + 624), 0, 4 * ((*(_QWORD *)(a1 + 616) >> 5) + ((*(_QWORD *)(a1 + 616) & 0x1F) != 0)));
  if ( *(_QWORD *)(a1 + 624) != *(_QWORD *)(a1 + 640) )
    memset_0(*(void **)(a1 + 640), 0, 4 * ((*(_QWORD *)(a1 + 632) >> 5) + ((*(_QWORD *)(a1 + 632) & 0x1F) != 0)));
  *(_QWORD *)(a1 + 728) = 0LL;
  *(_QWORD *)(a1 + 736) = 0LL;
  IopLiveDumpGetNtMergePages(a1, v6, &v52, &v50, &v55);
  v56 = (__int64 *)v6;
  ExtraMergePages = IopLiveDumpGetExtraMergePages((_QWORD *)a1, v1, &v53, &v51, &v57);
  v11 = v50;
  v12 = v1;
  v54 = (_QWORD *)v1;
  v13 = v51;
  v47 = ExtraMergePages;
  while ( v13 || v11 )
  {
    if ( v11 )
    {
      v14 = &v60;
      if ( v13 )
        v14 = (__int64 *)v12;
      v54 = v14;
    }
    else
    {
      v56 = &v60;
    }
    SecureDumpHeader = IopLiveDumpCheckTermination(a1, (__int64)CurrentThread);
    if ( SecureDumpHeader < 0 )
      goto LABEL_90;
    if ( !v13 || v15[v13 - 1] >= *v16 )
    {
      if ( v11 && v16[v11 - 1] < *v15 )
      {
        v25 = v11;
        Buffer = v52;
        v26 = v61;
        v19 = v25 << 12;
        v58 = v55;
        v46 = 1;
        IopLiveDumpGetNtMergePages(a1, v61, &v52, &v50, &v55);
        v56 = (__int64 *)v26;
        v11 = v50;
        goto LABEL_24;
      }
      v19 = v18;
      v48 = 0;
      v27 = *v16 == *v15;
      if ( *v16 < *v15 )
      {
        v28 = v52;
        Buffer = v52;
        goto LABEL_35;
      }
      v29 = v53;
      Buffer = v53;
      v48 = 1;
      if ( v27 )
      {
        v28 = v52;
LABEL_35:
        v27 = v11-- == 1;
        v50 = v11;
        if ( v27 )
        {
          v30 = v61;
          v46 = 1;
          v58 = v55;
          IopLiveDumpGetNtMergePages(a1, v61, &v52, &v50, &v55);
          v15 = v54;
          v18 = 4096LL;
          v17 = v47;
          v56 = (__int64 *)v30;
          v11 = v50;
        }
        else
        {
          v52 = &v28[v18];
          v56 = v16 + 1;
        }
        if ( !v48 )
          goto LABEL_24;
        v29 = v53;
      }
      v27 = v13-- == 1;
      v51 = v13;
      if ( !v27 )
      {
        v53 = &v29[v18];
        v54 = v15 + 1;
        goto LABEL_24;
      }
      goto LABEL_23;
    }
    Buffer = v53;
    v19 = v13 << 12;
LABEL_23:
    v20 = v62;
    v46 = v17;
    v58 = v57;
    v21 = IopLiveDumpGetExtraMergePages((_QWORD *)a1, v62, &v53, &v51, &v57);
    v54 = (_QWORD *)v20;
    v13 = v51;
    v47 = v21;
LABEL_24:
    SecureDumpHeader = IopLiveDumpWriteBuffer(v8, Buffer, v19, &ByteOffset, a1, 0);
    if ( SecureDumpHeader < 0 )
      goto LABEL_90;
    v12 = (__int64)v54;
    if ( v46 )
    {
      v22 = v58;
      v23 = *(_QWORD *)(*(_QWORD *)(a1 + 760) + 8 * v58);
      if ( v23 )
      {
        MiFreePagesFromMdl(v23, 0, 0, 0);
        ExFreePoolWithTag(*(PVOID *)(*(_QWORD *)(a1 + 760) + 8 * v22), 0x706D644Cu);
        *(_QWORD *)(*(_QWORD *)(a1 + 752) + 8 * v22) = 0LL;
        v24 = *(_QWORD *)(a1 + 760);
LABEL_45:
        *(_QWORD *)(v24 + 8 * v22) = 0LL;
        goto LABEL_46;
      }
      if ( !*(_QWORD *)(a1 + 816) && !*(_QWORD *)(a1 + 856) )
      {
        MmFreeIndependentPages(*(_QWORD *)(*(_QWORD *)(a1 + 752) + 8 * v58), BufferChunkSizeInBytes, (__int64)v54);
        v24 = *(_QWORD *)(a1 + 752);
        goto LABEL_45;
      }
LABEL_46:
      v12 = (__int64)v54;
      v46 = 0;
    }
  }
  if ( *(_BYTE *)(a1 + 984) )
  {
    Pool2 = (_OWORD *)ExAllocatePool2(0x40uLL, 0x1000uLL, 0x706D644Cu);
    if ( !Pool2 )
    {
LABEL_2:
      SecureDumpHeader = -1073741670;
      goto LABEL_90;
    }
  }
  v31 = 1;
  LODWORD(v66) = 1886221636;
  *(_QWORD *)((char *)&v66 + 4) = 0x10626F6C42LL;
  HIDWORD(v66) = NtBuildNumber;
  if ( *(_BYTE *)(a1 + 984) )
  {
    *Pool2 = v66;
    goto LABEL_53;
  }
  SecureDumpHeader = IopLiveDumpWriteBuffer(v8, &v66, 0x10u, &ByteOffset, a1, 1);
  if ( SecureDumpHeader >= 0 )
  {
    v31 = 0;
LABEL_53:
    v32 = 32;
    v33 = *(_DWORD *)(a1 + 184);
    v34 = *(_OWORD *)(a1 + 160);
    v65.m256i_i32[0] = 32;
    v65.m256i_i32[5] = v33;
    *(_OWORD *)((char *)v65.m256i_i64 + 4) = v34;
    v65.m256i_i32[7] = 0;
    if ( *(_BYTE *)(a1 + 984) )
    {
      v35 = 4096;
      v65.m256i_i32[6] = 4064 - v31 * 16;
      *(__m256i *)&Pool2[v31] = v65;
      while ( v35 )
      {
        SecureDumpHeader = IopLiveDumpWriteBuffer(v8, Pool2, 0x1000u, &ByteOffset, a1, 0);
        if ( SecureDumpHeader < 0 )
          goto LABEL_88;
        v35 -= 4096;
        memset_0(Pool2, 0, 0x1000uLL);
        if ( v32 != v65.m256i_i32[0] )
        {
          v36 = v65.m256i_i32[0] - v32;
          if ( (unsigned int)(v65.m256i_i32[0] - v32) > 0x1000 )
            v36 = 4096;
          memmove(Pool2, &v65.m256i_i8[v32], v36);
          v32 += v36;
        }
      }
LABEL_63:
      SecureDumpHeader = IopLiveDumpWriteBuffer(v8, *(PVOID *)(a1 + 176), *(_DWORD *)(a1 + 184), &ByteOffset, a1, 0);
      if ( SecureDumpHeader >= 0 )
      {
        v37 = *(_DWORD *)(a1 + 1088);
        if ( !v37
          || (v38 = *(_OWORD *)(a1 + 1064),
              v65.m256i_i64[3] = 0LL,
              v65.m256i_i32[0] = 32,
              v65.m256i_i32[5] = v37,
              *(_OWORD *)((char *)v65.m256i_i64 + 4) = v38,
              SecureDumpHeader = IopLiveDumpWriteBuffer(v8, &v65, 0x20u, &ByteOffset, a1, 0),
              SecureDumpHeader >= 0)
          && (SecureDumpHeader = IopLiveDumpWriteBuffer(
                                   v8,
                                   *(PVOID *)(a1 + 1080),
                                   *(_DWORD *)(a1 + 1088),
                                   &ByteOffset,
                                   a1,
                                   0),
              SecureDumpHeader >= 0) )
        {
          v39 = *(_DWORD *)(a1 + 1040);
          if ( !v39
            || (v40 = *(_OWORD *)(a1 + 1016),
                v65.m256i_i64[3] = 0LL,
                v65.m256i_i32[0] = 32,
                v65.m256i_i32[5] = v39,
                *(_OWORD *)((char *)v65.m256i_i64 + 4) = v40,
                SecureDumpHeader = IopLiveDumpWriteBuffer(v8, &v65, 0x20u, &ByteOffset, a1, 0),
                SecureDumpHeader >= 0)
            && (SecureDumpHeader = IopLiveDumpWriteBuffer(
                                     v8,
                                     *(PVOID *)(a1 + 1032),
                                     *(_DWORD *)(a1 + 1040),
                                     &ByteOffset,
                                     a1,
                                     0),
                SecureDumpHeader >= 0) )
          {
            if ( *(_QWORD *)(a1 + 552) != *(_QWORD *)(a1 + 624) )
              RtlMergeBitMapsEx(a1 + 544, a1 + 616);
            if ( *(_QWORD *)(a1 + 624) != *(_QWORD *)(a1 + 640) )
              RtlMergeBitMapsEx(a1 + 544, a1 + 632);
            v2[1024].LowPart = 1347241043;
            v2[1024].HighPart = 1347245380;
            v2[1029].QuadPart = RtlNumberOfSetBitsEx((__int64 *)(a1 + 544));
            if ( *(_BYTE *)(a1 + 984) )
              v2[500].QuadPart = ByteOffset.QuadPart - *(unsigned int *)(a1 + 992);
            else
              v2[500] = ByteOffset;
            v2[522].LowPart |= 0x10u;
            if ( !*(_BYTE *)(a1 + 984) )
            {
              v43 = v64;
              ByteOffset.QuadPart = 0LL;
              goto LABEL_83;
            }
            v41 = *(unsigned int *)(a1 + 992);
            ByteOffset.QuadPart = v41;
            v42 = ExAllocatePool2(0x40uLL, v41, 0x706D644Cu);
            v43 = (void *)v42;
            if ( !v42 )
            {
              SecureDumpHeader = -1073741670;
              goto LABEL_88;
            }
            SecureDumpHeader = SecureDump_Get_SecureDumpHeader(v2, v42, *(unsigned int *)(a1 + 992));
            if ( SecureDumpHeader < 0 )
            {
LABEL_87:
              ExFreePoolWithTag(v43, 0);
              goto LABEL_88;
            }
LABEL_83:
            SecureDumpHeader = IopLiveDumpWriteBuffer(v8, v2, v2[1028].LowPart, &ByteOffset, a1, 0);
            if ( SecureDumpHeader >= 0 && *(_BYTE *)(a1 + 984) )
            {
              v44 = *(_DWORD *)(a1 + 992);
              ByteOffset.QuadPart = 0LL;
              SecureDumpHeader = IopLiveDumpWriteBuffer(v8, v43, v44, &ByteOffset, a1, 1);
            }
            if ( v43 )
              goto LABEL_87;
          }
        }
      }
    }
    else
    {
      v65.m256i_i32[6] = ((ByteOffset.LowPart + 4127) & 0xFFFFF000) - ByteOffset.LowPart;
      SecureDumpHeader = IopLiveDumpWriteBuffer(v8, &v65, 0x20u, &ByteOffset, a1, 1);
      if ( SecureDumpHeader >= 0 )
      {
        ByteOffset.QuadPart += v65.m256i_u32[6];
        goto LABEL_63;
      }
    }
  }
LABEL_88:
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
LABEL_90:
  IopLiveDumpFreeDumpBuffers(a1);
  return (unsigned int)SecureDumpHeader;
}
