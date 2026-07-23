/*
 * XREFs of IopLiveDumpAllocateFromIOSpace @ 0x140595CAC
 * Callers:
 *     IopLiveDumpAllocateDumpBuffers @ 0x1404952D4 (IopLiveDumpAllocateDumpBuffers.c)
 * Callees:
 *     IopLiveDumpDiscardVirtualAddressRange @ 0x14029293C (IopLiveDumpDiscardVirtualAddressRange.c)
 *     MmUnmapLockedPages @ 0x14029D5C0 (MmUnmapLockedPages.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14029F5F0 (MmMapLockedPagesSpecifyCache.c)
 *     IopLiveDumpAllocateIoSpaceRanges @ 0x1405963CC (IopLiveDumpAllocateIoSpaceRanges.c)
 *     IopLiveDumpFreeIoSpaceRanges @ 0x140597DA4 (IopLiveDumpFreeIoSpaceRanges.c)
 *     IopLiveDumpQueryIOSpaceRanges @ 0x140599C20 (IopLiveDumpQueryIOSpaceRanges.c)
 *     IopLiveDumpUnpackMemoryRun @ 0x14059B4AC (IopLiveDumpUnpackMemoryRun.c)
 *     IopLiveDumpTraceEventGeneric @ 0x1405A0124 (IopLiveDumpTraceEventGeneric.c)
 *     IopLiveDumpTraceRunPageCountLoop @ 0x1405A0324 (IopLiveDumpTraceRunPageCountLoop.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall IopLiveDumpAllocateFromIOSpace(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 *a4)
{
  _QWORD *v4; // rsi
  int v5; // r12d
  __int64 v6; // r13
  struct _MDL *v7; // rbx
  unsigned int v8; // r15d
  unsigned __int64 v9; // r14
  int v10; // edx
  unsigned __int64 v11; // rdi
  __int64 i; // r10
  const wchar_t *v13; // rdi
  int v14; // r10d
  unsigned int v15; // r11d
  int v16; // eax
  __int64 v17; // rdx
  unsigned int v18; // r13d
  unsigned int v19; // eax
  unsigned int v20; // edi
  int v21; // ecx
  unsigned __int64 v22; // r12
  unsigned int v23; // edi
  struct _MDL *Pool2; // rax
  __int64 v25; // rdx
  unsigned __int64 v26; // rdi
  bool v27; // zf
  char *v28; // rdi
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rtt
  unsigned __int64 v31; // r12
  unsigned __int64 v32; // r8
  char *v33; // rdx
  unsigned __int64 *v34; // rdi
  unsigned __int64 v35; // rcx
  unsigned __int64 v36; // r8
  unsigned __int64 *v37; // r10
  unsigned __int64 v38; // rdx
  __int64 v39; // rax
  unsigned __int64 v40; // r8
  __int64 v41; // rcx
  __int64 v42; // rax
  struct _MDL *Next; // rdi
  unsigned __int64 v44; // rcx
  const wchar_t *v45; // rtt
  unsigned int v46; // [rsp+30h] [rbp-99h] BYREF
  unsigned int v47; // [rsp+34h] [rbp-95h] BYREF
  int v48; // [rsp+38h] [rbp-91h]
  unsigned __int64 v49; // [rsp+40h] [rbp-89h] BYREF
  __int64 v50; // [rsp+48h] [rbp-81h]
  __int64 v51; // [rsp+50h] [rbp-79h] BYREF
  unsigned __int64 *v52; // [rsp+58h] [rbp-71h]
  __int64 v53; // [rsp+60h] [rbp-69h]
  const wchar_t *v54; // [rsp+68h] [rbp-61h] BYREF
  ULONG v55[2]; // [rsp+70h] [rbp-59h] BYREF
  struct _MDL *v56; // [rsp+78h] [rbp-51h]
  __int64 v57; // [rsp+80h] [rbp-49h]
  char *v58; // [rsp+88h] [rbp-41h]
  unsigned __int64 v59; // [rsp+90h] [rbp-39h]
  unsigned __int64 v60; // [rsp+98h] [rbp-31h]
  const wchar_t *v61; // [rsp+A0h] [rbp-29h] BYREF
  unsigned __int64 v62; // [rsp+A8h] [rbp-21h]
  const wchar_t *v63; // [rsp+B0h] [rbp-19h]
  const wchar_t *v64; // [rsp+B8h] [rbp-11h] BYREF
  const wchar_t *v65; // [rsp+C0h] [rbp-9h]
  unsigned __int64 v66; // [rsp+C8h] [rbp-1h]

  v52 = a4;
  v4 = (_QWORD *)(a1 + 680);
  v57 = a3;
  v50 = a1;
  v5 = a2;
  v56 = 0LL;
  v6 = a1;
  v49 = 0LL;
  v7 = 0LL;
  v51 = 0LL;
  v8 = 0;
  v46 = 0;
  v54 = 0LL;
  v47 = 0;
  *(_QWORD *)v55 = 0LL;
  v53 = 0LL;
  if ( a1 != -680 )
  {
    v60 = *a4;
    v9 = -(__int64)(a2 != 0) & 0xFFFFFFFFFFFFFFD8uLL;
    if ( (int)IopLiveDumpQueryIOSpaceRanges(a2, a2, &v49) >= 0 )
    {
      v11 = v49;
      if ( !v49 )
      {
LABEL_60:
        v44 = (unsigned int)BufferChunkSizeInPages;
        *(_QWORD *)((char *)v4 + v9 + 160) = v60;
        v45 = v54;
        *(_QWORD *)((char *)v4 + v9 + 176) = v7;
        *(_QWORD *)((char *)v4 + v9 + 168) = (unsigned __int64)v45 / v44;
        *(_QWORD *)((char *)v4 + v9 + 184) = v51;
        *(_DWORD *)((char *)v4 + v9 + 192) = v8;
        return;
      }
      if ( (v57 * (unsigned __int64)(unsigned int)BufferChunkSizeInPages + 0x3FFFF) >> 18 < v49 )
        v11 = (v57 * (unsigned __int64)(unsigned int)BufferChunkSizeInPages + 0x3FFFF) >> 18;
      if ( (int)IopLiveDumpAllocateIoSpaceRanges(v5, v10, v11, (unsigned int)&v51, (__int64)&v46, (__int64)&v54) >= 0 )
      {
        if ( v54 )
        {
          v8 = v46;
          if ( (*(_DWORD *)(v6 + 80) & 0x20000) != 0 )
          {
            v63 = v54;
            v64 = L"PageCount";
            v61 = (const wchar_t *)v11;
            v65 = L"MemoryRunCount";
            v62 = v46;
            v66 = (unsigned __int64)L"TotalAllocatedPageCount";
            IopLiveDumpTraceEventGeneric(L"IopLiveDumpAllocateIoSpaceRangesResult", 3LL, &v64, &v61);
          }
          for ( i = 0LL; ; i = (unsigned int)(v14 + 1) )
          {
            v48 = i;
            if ( (unsigned int)i >= v8 )
              break;
            v13 = (const wchar_t *)(unsigned int)i;
            if ( (int)IopLiveDumpUnpackMemoryRun(*(_QWORD *)(v51 + 8 * i), v55, &v47) < 0 )
            {
LABEL_53:
              if ( v7 )
              {
                do
                {
                  Next = v7->Next;
                  if ( (v7->MdlFlags & 1) != 0 )
                    MmUnmapLockedPages(v7->MappedSystemVa, v7);
                  ExFreePoolWithTag(v7, 0x706D644Cu);
                  v7 = Next;
                }
                while ( Next );
              }
              goto LABEL_57;
            }
            v16 = *(_DWORD *)(v6 + 80);
            v17 = *(_QWORD *)v55;
            v18 = v47;
            v49 = *(_QWORD *)v55;
            if ( (v16 & 0x20000) != 0 )
            {
              v65 = *(const wchar_t **)v55;
              v61 = L"RunCountIndex";
              v64 = v13;
              v62 = (unsigned __int64)L"RunBasePage";
              v66 = v47;
              v63 = L"RunPageCount";
              IopLiveDumpTraceEventGeneric(L"MemoryRunCountLoop", 3LL, &v61, &v64);
              v14 = v48;
              v15 = 786432;
              v17 = v49;
            }
            v19 = 0;
            while ( 1 )
            {
              v46 = v19;
              if ( !v18 )
                break;
              v20 = v18;
              v21 = *(_DWORD *)(v50 + 80);
              if ( (v21 & 0x80000) != 0 )
              {
                if ( BufferChunkSizeInPages < v18 )
                  v20 = BufferChunkSizeInPages;
              }
              else if ( v18 > v15 )
              {
                v20 = v15;
              }
              v18 -= v20;
              v22 = v20;
              v47 = v18;
              if ( (v21 & 0x20000) != 0 )
                IopLiveDumpTraceRunPageCountLoop(v14, v19, v18, v20, v17);
              v23 = 8 * v20 + 48;
              Pool2 = (struct _MDL *)ExAllocatePool2(0x40uLL, v23, 0x706D644Cu);
              if ( !Pool2 )
                goto LABEL_53;
              Pool2->Next = 0LL;
              v25 = 0LL;
              Pool2->Size = v23;
              Pool2->ByteCount = (_DWORD)v22 << 12;
              Pool2->MdlFlags = 2050;
              if ( v22 )
              {
                v26 = v49;
                do
                {
                  *((_QWORD *)&Pool2[1].Next + v25) = v26;
                  v25 = (unsigned int)(v25 + 1);
                  ++v26;
                }
                while ( (unsigned int)v25 < v22 );
                v49 = v26;
              }
              if ( !v7 )
                v7 = Pool2;
              if ( v56 )
                v56->Next = Pool2;
              v27 = (Pool2->MdlFlags & 5) == 0;
              v56 = Pool2;
              v28 = (char *)(v27
                           ? MmMapLockedPagesSpecifyCache(Pool2, 0, MmCached, 0LL, 0, 0x40000020u)
                           : Pool2->MappedSystemVa);
              v58 = v28;
              if ( !v28 )
                goto LABEL_53;
              v30 = v22;
              v29 = v22 / (unsigned int)BufferChunkSizeInPages;
              v31 = 0LL;
              v59 = v30 / (unsigned int)BufferChunkSizeInPages;
              while ( v31 < v29 )
              {
                v32 = BufferChunkSizeInBytes;
                v33 = &v28[v31 * BufferChunkSizeInBytes];
                v34 = v52;
                *(_QWORD *)(v4[9] + 8 * *v52) = v33;
                if ( (*(_DWORD *)(v50 + 80) & 0x40000) != 0 )
                {
                  v35 = 0LL;
                  v36 = v32 >> 3;
                  v37 = *(unsigned __int64 **)(v4[9] + 8 * *v34);
                  if ( v36 )
                  {
                    if ( v36 < 2 || v37 <= v34 && &v37[v36 - 1] >= v34 )
                      goto LABEL_64;
                    v38 = v36 & 0xFFFFFFFFFFFFFFFEuLL;
                    do
                      v35 += 2LL;
                    while ( v35 < v38 );
                    memset64(v37, *v34, (2 * (v38 >> 1)) & 0x1FFFFFFFFFFFFFFFLL);
                    v34 = v52;
                    if ( v35 < v36 )
                    {
LABEL_64:
                      do
                        v37[v35++] = *v34;
                      while ( v35 < v36 );
                    }
                  }
                }
                ++v4[8];
                *v4 += (unsigned int)BufferChunkSizeInPages;
                v39 = v4[10];
                v40 = BufferChunkSizeInBytes;
                v41 = v50;
                ++v53;
                *(_QWORD *)(v39 + 8 * v31) = 0LL;
                IopLiveDumpDiscardVirtualAddressRange(v41, *(char **)(v4[9] + 8 * *v34), v40);
                v42 = v53;
                ++*v34;
                if ( v42 == v57 )
                  goto LABEL_60;
                v28 = v58;
                ++v31;
                v29 = v59;
              }
              v15 = 786432;
              v14 = v48;
              v19 = v46 + 1;
              v17 = v49;
            }
            v6 = v50;
          }
        }
        else
        {
          v8 = v46;
        }
        goto LABEL_60;
      }
      v8 = v46;
    }
LABEL_57:
    IopLiveDumpFreeIoSpaceRanges(&v51, v8);
  }
}
