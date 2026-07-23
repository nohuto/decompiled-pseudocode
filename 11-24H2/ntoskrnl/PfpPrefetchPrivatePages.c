/*
 * XREFs of PfpPrefetchPrivatePages @ 0x140936C3C
 * Callers:
 *     PfpPrefetchRequestPerform @ 0x1409353B4 (PfpPrefetchRequestPerform.c)
 * Callees:
 *     MmQueryMemoryListInformation @ 0x1402623FC (MmQueryMemoryListInformation.c)
 *     PfpCheckPrefetchAbort @ 0x140481ADC (PfpCheckPrefetchAbort.c)
 *     NtClose @ 0x140846CC0 (NtClose.c)
 *     MmPrefetchVirtualMemory @ 0x140936AD8 (MmPrefetchVirtualMemory.c)
 *     PfpAvailablePagesForPrefetch @ 0x140938C40 (PfpAvailablePagesForPrefetch.c)
 *     PfpUpdateRepurposedByPrefetch @ 0x140938C78 (PfpUpdateRepurposedByPrefetch.c)
 *     PfpSourceBuildVaArray @ 0x140AAB45C (PfpSourceBuildVaArray.c)
 *     PfpSourceGetPrefetchSupport @ 0x140AB1900 (PfpSourceGetPrefetchSupport.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfpPrefetchPrivatePages(_QWORD *a1)
{
  __int64 v1; // rbx
  _QWORD *v2; // r14
  int v3; // r13d
  int v4; // r8d
  PVOID v5; // rsi
  int v6; // edx
  int v7; // ecx
  int v8; // edx
  int v9; // r15d
  __int64 v10; // r12
  unsigned int v11; // ebx
  __int64 result; // rax
  __int64 v13; // rdi
  __int64 v14; // r9
  unsigned int v15; // r15d
  _OWORD *v16; // r14
  HANDLE v17; // rdi
  unsigned int v18; // r12d
  unsigned __int64 v19; // rdx
  unsigned int v20; // [rsp+30h] [rbp-48h]
  char *v21; // [rsp+38h] [rbp-40h]
  _OWORD *v22; // [rsp+40h] [rbp-38h]
  int v23; // [rsp+48h] [rbp-30h]
  PVOID P[2]; // [rsp+50h] [rbp-28h] BYREF
  HANDLE Handle[2]; // [rsp+60h] [rbp-18h] BYREF
  int v27; // [rsp+C8h] [rbp+50h]
  int v28; // [rsp+D0h] [rbp+58h]
  __int64 v29; // [rsp+D8h] [rbp+60h] BYREF

  v1 = *a1;
  v2 = a1;
  LODWORD(v29) = 0;
  v3 = 0;
  *(_OWORD *)P = 0LL;
  v4 = *(_DWORD *)(v1 + 80);
  v5 = 0LL;
  v20 = *(unsigned __int16 *)(*a1 + 30LL);
  v23 = ((MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324]) << 8)
      + ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  v6 = (8 * (v20 & 7)) | *(_DWORD *)(*a1 + 28LL) & 7;
  v7 = v6 | 0x100;
  if ( (v4 & 0x10) != 0 )
    v7 = v6;
  v8 = v7 | 0x200;
  if ( (v4 & 8) == 0 )
    v8 = v7;
  v9 = v8 | 0x800;
  if ( (v4 & 0x20) == 0 )
    v9 = v8;
  v10 = 0LL;
  v28 = v9;
  while ( 1 )
  {
    v27 = v10;
    if ( (unsigned int)v10 >= *(_DWORD *)(v1 + 20) )
    {
      v11 = 0;
      goto LABEL_10;
    }
    *(_OWORD *)Handle = 0LL;
    if ( (unsigned int)PfpCheckPrefetchAbort(v2) )
    {
      v3 = 1;
LABEL_37:
      v17 = Handle[1];
      goto LABEL_27;
    }
    v13 = *(_QWORD *)(v1 + 56) + 40 * v10;
    if ( (int)PfpSourceBuildVaArray(v13, P) < 0 || (int)PfpSourceGetPrefetchSupport(v13, Handle) < 0 )
    {
      v5 = P[1];
      goto LABEL_37;
    }
    v5 = P[1];
    if ( (*(_DWORD *)(v1 + 80) & 4) != 0 )
    {
      v15 = (unsigned int)P[0];
      v16 = v2 + 6;
      v21 = (char *)P[1];
      v22 = v16;
      MmQueryMemoryListInformation((ULONG **)0xFFFFFFFFFFFFFFFFLL, v16, 0xB0u, v14, &v29);
      v17 = Handle[1];
      while ( v15 )
      {
        if ( (unsigned int)PfpCheckPrefetchAbort(a1) || !(unsigned int)PfpAvailablePagesForPrefetch(v16, v20) )
        {
          LODWORD(v10) = v27;
          v3 = 1;
          goto LABEL_27;
        }
        v18 = v15;
        if ( v15 > 0x10 )
          v18 = 16;
        if ( (int)MmPrefetchVirtualMemory((ULONG_PTR)v17, v18, (__int64)v21, v28) >= 0 )
          *(_DWORD *)(v1 + 104) += v18;
        PfpUpdateRepurposedByPrefetch(v22, v18);
        v21 += 16 * v18;
        v16 = v22;
        v15 -= v18;
      }
      LODWORD(v10) = v27;
    }
    else
    {
      v17 = Handle[1];
      v19 = LODWORD(P[0]);
      *(_DWORD *)(v1 + 104) += LODWORD(P[0]);
      MmPrefetchVirtualMemory((ULONG_PTR)v17, v19, (__int64)v5, v9);
    }
    ++*(_DWORD *)(v1 + 92);
LABEL_27:
    if ( v17 )
      NtClose(v17);
    v2 = a1;
    if ( v3 )
      break;
    v9 = v28;
    v10 = (unsigned int)(v10 + 1);
  }
  v11 = -1073741248;
LABEL_10:
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  result = v11;
  *(_DWORD *)(*v2 + 120LL) += ((MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324]) << 8)
                            + ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
                            - v23;
  return result;
}
