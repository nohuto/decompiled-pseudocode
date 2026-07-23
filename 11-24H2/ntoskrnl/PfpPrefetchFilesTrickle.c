/*
 * XREFs of PfpPrefetchFilesTrickle @ 0x140938928
 * Callers:
 *     PfpPrefetchRequestPerform @ 0x1409353B4 (PfpPrefetchRequestPerform.c)
 * Callees:
 *     MmQueryMemoryListInformation @ 0x1402623FC (MmQueryMemoryListInformation.c)
 *     PfpCheckPrefetchAbort @ 0x140481ADC (PfpCheckPrefetchAbort.c)
 *     PfpReadSupportInitialize @ 0x14049CB30 (PfpReadSupportInitialize.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     PfpFileBuildReadSupport @ 0x140937944 (PfpFileBuildReadSupport.c)
 *     PfpReadSupportCleanup @ 0x140937D20 (PfpReadSupportCleanup.c)
 *     PfpAvailablePagesForPrefetch @ 0x140938C40 (PfpAvailablePagesForPrefetch.c)
 *     PfpUpdateRepurposedByPrefetch @ 0x140938C78 (PfpUpdateRepurposedByPrefetch.c)
 *     MmPrefetchPagesEx @ 0x140938DE0 (MmPrefetchPagesEx.c)
 */

__int64 __fastcall PfpPrefetchFilesTrickle(_QWORD *a1)
{
  __int64 v1; // rsi
  unsigned int v3; // edi
  unsigned int v4; // edx
  __int64 v5; // rax
  __int64 v6; // r10
  __int64 v7; // r9
  unsigned int i; // r8d
  int *v9; // r14
  int v10; // eax
  char j; // r12
  char v12; // cl
  unsigned int v13; // edx
  __int64 v14; // r9
  __int64 v15; // rcx
  unsigned int v16; // r13d
  unsigned int *v17; // rbx
  unsigned int v18; // r11d
  unsigned int v19; // eax
  _QWORD *v20; // rbx
  int v21; // eax
  __int64 result; // rax
  unsigned int v23; // [rsp+30h] [rbp-59h]
  int v24; // [rsp+34h] [rbp-55h] BYREF
  unsigned int v25; // [rsp+38h] [rbp-51h]
  __int64 v26; // [rsp+40h] [rbp-49h]
  __int64 v27; // [rsp+48h] [rbp-41h]
  __int64 v28; // [rsp+50h] [rbp-39h]
  __int64 v29; // [rsp+58h] [rbp-31h] BYREF
  __int64 v30; // [rsp+60h] [rbp-29h]
  __int128 v31; // [rsp+68h] [rbp-21h] BYREF
  __int128 v32; // [rsp+78h] [rbp-11h]
  __int128 v33; // [rsp+88h] [rbp-1h]
  __int64 v34; // [rsp+98h] [rbp+Fh]
  char v35; // [rsp+F0h] [rbp+67h]
  int v36; // [rsp+F8h] [rbp+6Fh]
  unsigned int v37; // [rsp+100h] [rbp+77h]
  unsigned int v38; // [rsp+108h] [rbp+7Fh]

  v1 = *a1;
  v34 = 0LL;
  v3 = 0;
  v24 = 0;
  v31 = 0LL;
  v35 = 0;
  v32 = 0LL;
  v33 = 0LL;
  v4 = 0;
  v23 = *(unsigned __int16 *)(*a1 + 30LL);
  v30 = ((MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324]) << 8)
      + (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  while ( 1 )
  {
    v38 = v4;
    if ( v4 >= *(_DWORD *)(v1 + 8) )
      break;
    v5 = a1[2];
    v6 = *(_QWORD *)(v1 + 32);
    v28 = v6;
    v7 = 5LL * v4;
    v27 = v7;
    if ( _bittest64((const signed __int64 *)(((unsigned __int64)v4 << 6) + v5 + 24), 0x22u) )
    {
      for ( i = 0; ; ++i )
      {
        v37 = i;
        if ( i >= *(_DWORD *)(v6 + 8 * v7 + 12) >> 1 )
          break;
        v9 = (int *)(*(_QWORD *)(v6 + 8 * v7 + 16) + 48LL * i);
        v10 = *v9;
        if ( (*v9 & 2) != 0 || !v9[4] )
          continue;
        for ( j = 0; ; ++j )
        {
          v12 = v10;
          if ( (unsigned __int8)j > 1u )
            break;
          if ( j )
          {
            if ( (v10 & 1) == 0 )
              continue;
          }
          else if ( (v10 & 1) != 0 )
          {
            continue;
          }
          PfpReadSupportInitialize((__int64)&v31);
          if ( (int)PfpFileBuildReadSupport(a1, (__int64)v9, v13, j, (__int64)&v31) >= 0 )
          {
            v15 = v31;
            v26 = v31;
            v16 = 0;
            v29 = v31;
            *(_QWORD *)v31 = v32;
            v17 = (unsigned int *)(v15 + 8);
            v25 = *(_DWORD *)(v15 + 8);
            v36 = 0;
            MmQueryMemoryListInformation((ULONG **)0xFFFFFFFFFFFFFFFFLL, (_OWORD *)a1 + 3, 0xB0u, v14, &v24);
            while ( v16 < v25 )
            {
              if ( (unsigned int)PfpCheckPrefetchAbort(a1) || !(unsigned int)PfpAvailablePagesForPrefetch(a1 + 6, v23) )
              {
                v35 = 1;
                break;
              }
              if ( v16 + 16 > v18 )
                v19 = v18 - v16;
              else
                v19 = 16;
              *v17 = v19;
              v20 = (_QWORD *)(v26 + 16);
              memmove((void *)(v26 + 16), (const void *)(v26 + 16 + 8LL * v16), 8LL * v19);
              *v20 |= (8 * (v23 & 7)) | (unsigned __int64)(*(_DWORD *)(*a1 + 28LL) & 7);
              LODWORD(v20) = MmPrefetchPagesEx(1LL, &v29, 0LL);
              PfpUpdateRepurposedByPrefetch(a1 + 6, *(unsigned int *)(v26 + 8));
              if ( (int)v20 < 0 )
                break;
              v17 = (unsigned int *)(v26 + 8);
              v21 = *(_DWORD *)(v26 + 8);
              v36 += v21;
              v16 += v21;
            }
            if ( j )
              *(_DWORD *)(v1 + 100) += v36;
            else
              *(_DWORD *)(v1 + 96) += v36;
          }
          PfpReadSupportCleanup(a1[5], (__int64)&v31);
          if ( v35 || (unsigned int)PfpCheckPrefetchAbort(a1) )
          {
            v3 = -1073741248;
            goto LABEL_26;
          }
          v10 = *v9;
          v12 = *v9;
          v4 = v38;
          if ( (v12 & 8) != 0 )
            break;
        }
        i = v37;
        v7 = v27;
        v6 = v28;
        if ( (v12 & 8) == 0 )
          ++*(_DWORD *)(v1 + 84);
      }
    }
    ++v4;
  }
LABEL_26:
  result = v3;
  *(_DWORD *)(*a1 + 112LL) += ((MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324]) << 8)
                            + ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
                            - v30;
  return result;
}
