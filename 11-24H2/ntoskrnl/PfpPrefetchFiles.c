/*
 * XREFs of PfpPrefetchFiles @ 0x140937198
 * Callers:
 *     PfpPrefetchRequestPerform @ 0x1409353B4 (PfpPrefetchRequestPerform.c)
 * Callees:
 *     PfpCheckPrefetchAbort @ 0x140481ADC (PfpCheckPrefetchAbort.c)
 *     PfpReadSupportInitialize @ 0x14049CB30 (PfpReadSupportInitialize.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PfpFileBuildReadSupport @ 0x140937944 (PfpFileBuildReadSupport.c)
 *     PfpReadSupportCleanup @ 0x140937D20 (PfpReadSupportCleanup.c)
 *     MmPrefetchPagesEx @ 0x140938DE0 (MmPrefetchPagesEx.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfpPrefetchFiles(__int64 *a1, char a2)
{
  __int64 v2; // rdi
  int v3; // r14d
  int v4; // r15d
  char v5; // r13
  __int64 *v6; // r12
  int v7; // ebp
  unsigned int v8; // ebx
  __int64 v9; // r9
  int v10; // r8d
  unsigned int v12; // ecx
  __int64 v13; // r11
  unsigned int v14; // r8d
  _DWORD *v15; // r9
  __int64 v16; // rdx
  __int64 v17; // r10
  __int64 v18; // rsi
  char *Pool2; // rbp
  __int64 v20; // rsi
  __int64 v21; // r15
  __int64 v22; // rbx
  _DWORD *v23; // rdx
  __int64 v24; // r12
  char v25; // r8
  int v26; // r9d
  int v27; // edx
  int v28; // r9d
  __int64 v29; // r8
  _QWORD *v30; // rdx
  int v31; // eax
  char *v32; // rdi
  __int64 v33; // rsi
  int v34; // [rsp+30h] [rbp-68h]
  __int64 v35; // [rsp+40h] [rbp-58h]
  unsigned int v38; // [rsp+B0h] [rbp+18h]
  char *v39; // [rsp+B8h] [rbp+20h]

  v2 = *a1;
  v3 = 0;
  v35 = *a1;
  v4 = 0;
  v5 = a2;
  v6 = a1;
  v7 = ((MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324]) << 8)
     + ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  v34 = v7;
  v38 = *(_DWORD *)(*a1 + 28) & 7 | (8 * (*(_WORD *)(*a1 + 30) & 7));
  if ( !*(_DWORD *)(*a1 + 8) )
    goto LABEL_2;
  v17 = 0LL;
  v16 = *(_QWORD *)(v2 + 32) + 12LL;
  v18 = *(unsigned int *)(*a1 + 8);
  do
  {
    if ( (*(_QWORD *)(v17 + v6[2] + 24) & 0x400000000LL) != 0 )
    {
      v12 = *(_DWORD *)v16;
      v13 = 0LL;
      if ( (*(_DWORD *)v16 & 0xFFFFFFFE) != 0 )
      {
        do
        {
          v14 = v12;
          v15 = (_DWORD *)(*(_QWORD *)(v16 + 4) + 48 * v13);
          if ( (*v15 & 0xA) != 0 || !v15[4] )
            goto LABEL_14;
          if ( v5 )
          {
            if ( (*v15 & 1) == 0 )
              goto LABEL_14;
          }
          else
          {
            ++*(_DWORD *)(v2 + 84);
            v14 = *(_DWORD *)v16;
          }
          ++v4;
          v12 = v14;
LABEL_14:
          v13 = (unsigned int)(v13 + 1);
        }
        while ( (unsigned int)v13 < v12 >> 1 );
      }
    }
    v16 += 40LL;
    v17 += 64LL;
    --v18;
  }
  while ( v18 );
  if ( !v4 )
  {
LABEL_2:
    v8 = -1073741275;
    goto LABEL_3;
  }
  Pool2 = (char *)ExAllocatePool2(0x100uLL, (unsigned int)(v4 << 6), 0x41536650u);
  if ( Pool2 )
  {
    v39 = &Pool2[56 * v4];
    memset_0(Pool2, 0, (unsigned int)(v4 << 6));
    v20 = 0LL;
    if ( !*(_DWORD *)(v2 + 8) )
      goto LABEL_19;
    do
    {
      if ( _bittest64((const signed __int64 *)(((unsigned __int64)(unsigned int)v20 << 6) + v6[2] + 24), 0x22u) )
      {
        v21 = 0LL;
        if ( (*(_DWORD *)(*(_QWORD *)(v2 + 32) + 40 * v20 + 12) & 0xFFFFFFFE) != 0 )
        {
          v22 = *(_QWORD *)(v2 + 32);
          do
          {
            v23 = (_DWORD *)(*(_QWORD *)(v22 + 40 * v20 + 16) + 48 * v21);
            if ( (*v23 & 0xA) == 0 && v23[4] && (!a2 || (*v23 & 1) != 0) )
            {
              v24 = (__int64)&Pool2[56 * v3];
              PfpReadSupportInitialize(v24);
              LOBYTE(v26) = v25;
              if ( (int)PfpFileBuildReadSupport((_DWORD)a1, v27, v20, v26, v24) < 0 )
              {
                PfpReadSupportCleanup(a1[5], v24);
                PfpReadSupportInitialize(v24);
              }
              else
              {
                ++v3;
              }
            }
            v21 = (unsigned int)(v21 + 1);
          }
          while ( (unsigned int)v21 < *(_DWORD *)(v22 + 40 * v20 + 12) >> 1 );
          v2 = v35;
          v6 = a1;
        }
      }
      v20 = (unsigned int)(v20 + 1);
    }
    while ( (unsigned int)v20 < *(_DWORD *)(v2 + 8) );
    if ( v3 )
    {
      if ( (unsigned int)PfpCheckPrefetchAbort(v6) )
      {
        v8 = -1073741248;
      }
      else
      {
        v28 = 0;
        if ( v3 > 0 )
        {
          v29 = 0LL;
          v30 = Pool2;
          do
          {
            *(_QWORD *)*v30 = v30[2];
            *(_QWORD *)&v39[8 * v29] = *v30;
            v31 = *(_DWORD *)(*v30 + 8LL);
            v28 += v31;
            if ( v31 )
              *(_QWORD *)(*v30 + 16LL) |= v38;
            ++v29;
            v30 += 7;
          }
          while ( v29 < v3 );
        }
        if ( a2 )
          *(_DWORD *)(v2 + 100) += v28;
        else
          *(_DWORD *)(v2 + 96) += v28;
        v8 = MmPrefetchPagesEx((unsigned int)v3, v39, 0LL);
      }
      if ( v3 > 0 )
      {
        v32 = Pool2;
        v33 = (unsigned int)v3;
        do
        {
          PfpReadSupportCleanup(v6[5], v32);
          v32 += 56;
          --v33;
        }
        while ( v33 );
      }
    }
    else
    {
LABEL_19:
      v8 = -1073741275;
    }
    ExFreePoolWithTag(Pool2, 0);
    v5 = a2;
  }
  else
  {
    v8 = -1073741670;
  }
  v7 = v34;
LABEL_3:
  v9 = *v6;
  v10 = ((MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324]) << 8)
      + ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
      - v7;
  if ( v5 )
    *(_DWORD *)(v9 + 116) += v10;
  else
    *(_DWORD *)(v9 + 112) += v10;
  return v8;
}
