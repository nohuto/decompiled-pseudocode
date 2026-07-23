/*
 * XREFs of PfpVolumePrefetchMetadata @ 0x140936598
 * Callers:
 *     PfpPrefetchRequestPerform @ 0x1409353B4 (PfpPrefetchRequestPerform.c)
 * Callees:
 *     MmQueryMemoryListInformation @ 0x1402623FC (MmQueryMemoryListInformation.c)
 *     PfpCheckPrefetchAbort @ 0x140481ADC (PfpCheckPrefetchAbort.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     IopXxxControlFile @ 0x1408BF330 (IopXxxControlFile.c)
 *     PfpPrefetchDirectoryStream @ 0x140936ED4 (PfpPrefetchDirectoryStream.c)
 *     PfpAvailablePagesForPrefetch @ 0x140938C40 (PfpAvailablePagesForPrefetch.c)
 *     PfpUpdateRepurposedByPrefetch @ 0x140938C78 (PfpUpdateRepurposedByPrefetch.c)
 */

__int64 __fastcall PfpVolumePrefetchMetadata(__int64 *a1, unsigned int a2)
{
  __int64 v3; // r13
  __int64 v4; // r12
  __int64 v5; // rsi
  __int64 v6; // rax
  unsigned __int64 v7; // r9
  unsigned int v8; // ebx
  __int64 v9; // r10
  int v10; // ecx
  __int64 v11; // r9
  int v12; // ecx
  __int64 v13; // r15
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rdx
  unsigned __int64 v17; // r14
  unsigned int v18; // r12d
  unsigned int v19; // r9d
  unsigned int v20; // r8d
  unsigned int v21; // ebx
  __int64 v22; // rax
  unsigned __int64 v23; // r10
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // r11
  __int64 v26; // rax
  unsigned __int64 v27; // rcx
  unsigned int v28; // r11d
  int v29; // r11d
  int v30; // ebx
  int v31; // r11d
  __int64 result; // rax
  __int64 i; // rsi
  __int64 v34; // r8
  __int64 v35; // rcx
  int v36; // r9d
  __int64 v37; // rcx
  int v38; // eax
  __int64 v39; // rdx
  int v40; // eax
  __int64 v41; // [rsp+60h] [rbp-49h]
  int v42; // [rsp+68h] [rbp-41h]
  __int128 v43; // [rsp+70h] [rbp-39h] BYREF
  ULONG_PTR v44[2]; // [rsp+80h] [rbp-29h] BYREF
  __int128 v45; // [rsp+90h] [rbp-19h] BYREF
  __int128 v46; // [rsp+A0h] [rbp-9h]
  __int128 v47; // [rsp+B0h] [rbp+7h]
  unsigned int v48; // [rsp+110h] [rbp+67h]
  __int64 v50; // [rsp+120h] [rbp+77h] BYREF
  __int64 v51; // [rsp+128h] [rbp+7Fh]

  LODWORD(v50) = 0;
  *(_QWORD *)&v47 = 0LL;
  DWORD2(v47) = 0;
  *(_OWORD *)v44 = 0LL;
  v3 = 0LL;
  v43 = 0LL;
  v4 = a2;
  v45 = 0LL;
  v5 = a1[3];
  v6 = *a1;
  v7 = MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004];
  v46 = 0LL;
  v8 = *(unsigned __int16 *)(v6 + 30);
  v9 = *(_QWORD *)(v6 + 32);
  v10 = (MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324]) << 8;
  *(_DWORD *)v5 = 3;
  v48 = v8;
  v42 = v10 + (v7 >> 24);
  v11 = 5LL * a2;
  v12 = *(_DWORD *)(*a1 + 28);
  v51 = v11;
  v41 = v9;
  *(_QWORD *)(v5 + 8) = (8 * (v8 & 7)) | (unsigned __int64)(v12 & 7);
  if ( (*(_DWORD *)(*a1 + 80) & 4) != 0 )
  {
    MmQueryMemoryListInformation((ULONG **)0xFFFFFFFFFFFFFFFFLL, (_OWORD *)a1 + 3, 0xB0u, v11, &v50);
    v11 = v51;
    v9 = v41;
  }
  v13 = 0LL;
  while ( (unsigned int)v13 < *(_DWORD *)(v9 + 8 * v11 + 12) >> 1 )
  {
    *(_DWORD *)(v5 + 4) = 0;
    while ( (unsigned int)v13 < *(_DWORD *)(v9 + 8 * v11 + 12) >> 1 )
    {
      v14 = 3 * v13;
      v13 = (unsigned int)(v13 + 1);
      v15 = *(_QWORD *)(v9 + 8 * v11 + 16) + 16 * v14;
      v16 = *(_QWORD *)(v15 + 8);
      if ( (*(_BYTE *)v15 & 0x10) != 0 )
        v3 = v15;
      if ( v16 )
      {
        *(_QWORD *)(v5 + 8LL * (unsigned int)(*(_DWORD *)(v5 + 4))++ + 16) = v16;
        if ( *(_DWORD *)(v5 + 4) >= *((_DWORD *)a1 + 8) )
          break;
      }
    }
    if ( !*(_DWORD *)(v5 + 4) )
      break;
    if ( (unsigned int)PfpCheckPrefetchAbort(a1)
      || (*(_DWORD *)(*a1 + 80) & 4) != 0 && !(unsigned int)PfpAvailablePagesForPrefetch(a1 + 6, v8) )
    {
LABEL_34:
      v30 = -1073741248;
      goto LABEL_35;
    }
    v30 = IopXxxControlFile(
            *(HANDLE *)((v4 << 6) + a1[2]),
            0LL,
            0LL,
            0LL,
            (struct _IO_STATUS_BLOCK *)v44,
            0x90120u,
            (char *)v5,
            8 * v31 + 16,
            0LL,
            0,
            0,
            0);
    if ( (*(_DWORD *)(*a1 + 80) & 4) != 0 )
      PfpUpdateRepurposedByPrefetch(a1 + 6, *(unsigned int *)(v5 + 4));
    if ( v30 < 0 )
      goto LABEL_35;
    if ( v30 == 259 )
      KeBugCheckEx(0x191u, 0x16EDuLL, 0LL, 0LL, 0LL);
    v11 = v51;
    v9 = v41;
    v8 = v48;
  }
  if ( v3 )
  {
    v17 = 0LL;
    ++*(_DWORD *)(*a1 + 88);
    v18 = 0;
    while ( v18 < *(_DWORD *)(v3 + 16) )
    {
      *(_DWORD *)(v5 + 4) = 0;
      if ( v18 >= *(_DWORD *)(v3 + 16) )
        break;
      v19 = *((_DWORD *)a1 + 8);
      v20 = 0;
      v21 = 0;
      do
      {
        v22 = *(_QWORD *)(v3 + 24);
        v23 = v17;
        v24 = *(_QWORD *)(v22 + 16LL * v18);
        v25 = v24 + *(unsigned int *)(v22 + 16LL * v18 + 8);
        v26 = v20;
        v20 = v21;
        if ( v24 >= v17 )
          v17 = v24;
        while ( v17 < v25 )
        {
          v27 = v17;
          v17 += 4096LL;
          *(_QWORD *)(v5 + 8 * v26 + 16) = v27 >> 10;
          v20 = *(_DWORD *)(v5 + 4) + 1;
          *(_DWORD *)(v5 + 4) = v20;
          v19 = *((_DWORD *)a1 + 8);
          v26 = v20;
          if ( v20 >= v19 )
          {
            v28 = v20;
            goto LABEL_24;
          }
        }
        v21 = v20;
        v28 = v20;
        v17 = v23;
        if ( v20 >= v19 )
          break;
        ++v18;
      }
      while ( v18 < *(_DWORD *)(v3 + 16) );
LABEL_24:
      if ( !v28 )
        break;
      if ( (unsigned int)PfpCheckPrefetchAbort(a1)
        || (*(_DWORD *)(*a1 + 80) & 4) != 0 && !(unsigned int)PfpAvailablePagesForPrefetch(a1 + 6, v48) )
      {
        goto LABEL_34;
      }
      v30 = IopXxxControlFile(
              *(HANDLE *)(((unsigned __int64)a2 << 6) + a1[2]),
              0LL,
              0LL,
              0LL,
              (struct _IO_STATUS_BLOCK *)v44,
              0x90120u,
              (char *)v5,
              8 * v29 + 16,
              0LL,
              0,
              0,
              0);
      if ( (*(_DWORD *)(*a1 + 80) & 4) != 0 )
        PfpUpdateRepurposedByPrefetch(a1 + 6, *(unsigned int *)(v5 + 4));
      if ( v30 < 0 )
        goto LABEL_35;
      if ( v30 == 259 )
        KeBugCheckEx(0x191u, 0x1752uLL, 0LL, 0LL, 0LL);
    }
    v11 = v51;
    v9 = v41;
  }
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v9 + 8 * v11 + 12) >> 1; i = (unsigned int)(i + 1) )
  {
    v34 = *(_QWORD *)(v9 + 8 * v11 + 16) + 48 * i;
    if ( (*(_DWORD *)v34 & 2) != 0 )
    {
      v35 = *(_QWORD *)(v34 + 32);
      if ( !v35 || (*(_DWORD *)v34 & 4) != 0 )
      {
        v37 = a1[2];
        *((_QWORD *)&v43 + 1) = v34 + 8;
        v36 = 24609;
        LODWORD(v43) = 524296;
        v38 = a2 << 6;
        v39 = *(_QWORD *)(v37 + ((unsigned __int64)a2 << 6));
      }
      else
      {
        v36 = 16417;
        *((_QWORD *)&v43 + 1) = v35 + 2;
        WORD1(v43) = 2 * *(_WORD *)(v34 + 40);
        v37 = a1[2];
        LOWORD(v43) = WORD1(v43) - 2;
        v38 = a2 << 6;
        v39 = *(_QWORD *)(v37 + ((unsigned __int64)a2 << 6) + 32);
      }
      *((_QWORD *)&v45 + 1) = v39;
      *(_QWORD *)&v46 = &v43;
      LODWORD(v45) = 48;
      DWORD2(v46) = 576;
      v47 = 0LL;
      v40 = PfpPrefetchDirectoryStream((_DWORD)a1, v38 + (int)v37, v34, v36, (__int64)&v45, v36);
      v30 = v40;
      if ( v40 >= 0 )
      {
        ++*(_DWORD *)(*a1 + 88);
      }
      else if ( v40 == -1073741248 )
      {
        goto LABEL_35;
      }
      v9 = v41;
      v11 = v51;
    }
  }
  v30 = 0;
LABEL_35:
  result = (unsigned int)v30;
  *(_DWORD *)(*a1 + 108) += ((MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324]) << 8)
                          + ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
                          - v42;
  return result;
}
