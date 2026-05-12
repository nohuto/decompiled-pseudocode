/*
 * XREFs of RaidFillTcgLockingObjects @ 0x14008C304
 * Callers:
 *     RaidAdapterStorageTcgEnumerateLockingObjects @ 0x14007C7A8 (RaidAdapterStorageTcgEnumerateLockingObjects.c)
 *     RaidUnitStorageTcgEnumerateLockingObjects @ 0x14008108C (RaidUnitStorageTcgEnumerateLockingObjects.c)
 * Callees:
 *     RaidFillTcgLockingInfo @ 0x14008C26C (RaidFillTcgLockingInfo.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

void __fastcall RaidFillTcgLockingObjects(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4, _WORD *a5)
{
  unsigned int *v5; // r15
  unsigned int v6; // edi
  unsigned __int64 v7; // r14
  int v8; // r11d
  char v9; // bl
  unsigned __int64 v10; // r10
  char v12; // cl
  bool v13; // r12
  unsigned int v14; // ebp
  int v16; // eax
  int v17; // r13d
  unsigned int v18; // r9d
  __int64 i; // rdx
  bool v20; // zf
  unsigned int v21; // ebx
  _WORD *v22; // r14
  unsigned int v23; // eax
  int v24; // eax
  __int64 v25; // r8
  unsigned __int64 v26; // rax
  __int64 v27; // r8
  unsigned int v28; // r11d
  char v29; // r15
  int v30; // eax
  __int64 v31; // rdx
  unsigned __int64 v32; // rax
  char v33; // [rsp+20h] [rbp-58h]
  char v34; // [rsp+21h] [rbp-57h]
  int v35; // [rsp+24h] [rbp-54h]
  unsigned __int64 v36; // [rsp+30h] [rbp-48h]
  unsigned __int64 v37; // [rsp+38h] [rbp-40h]

  v5 = a4;
  v6 = 0;
  v7 = 0LL;
  v8 = 0;
  v37 = 0LL;
  v9 = 0;
  v35 = 0;
  v10 = 0LL;
  v34 = 0;
  v36 = 0LL;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v33 = 0;
  if ( *v5 < 0x10 )
  {
    *v5 = 0;
    return;
  }
  v16 = *(_DWORD *)(a3 + 8);
  v17 = *(_DWORD *)(a3 + 12);
  if ( (v16 & 1) != 0 )
  {
    v10 = *(_QWORD *)(a3 + 16);
    v9 = 1;
    v7 = v10 + *(_QWORD *)(a3 + 24);
    v34 = 1;
    v37 = v7;
    v36 = v10;
  }
  else if ( (v16 & 2) != 0 )
  {
    v8 = *(_DWORD *)(a3 + 16);
    v12 = 1;
    v35 = v8;
    v33 = 1;
  }
  else
  {
    v13 = (v16 & 4) != 0;
  }
  v18 = *(_DWORD *)(a1 + 128);
  for ( i = 0LL; (unsigned int)i < v18; i = (unsigned int)(i + 1) )
  {
    if ( v17 != -1 )
    {
      v20 = *(_DWORD *)(a2 + 80 * i + 8) == v17;
      goto LABEL_12;
    }
    if ( v12 )
    {
      if ( *(_DWORD *)(a2 + 80 * i + 8) )
      {
        v24 = *(_DWORD *)(a2 + 80 * i + 72);
        if ( v24 )
        {
          v20 = v24 == v8;
LABEL_12:
          if ( v20 )
          {
            v14 = 1;
            break;
          }
        }
      }
    }
    else if ( v9 )
    {
      if ( *(_DWORD *)(a2 + 80 * i + 8) )
      {
        v25 = *(_QWORD *)(a2 + 80 * i + 56);
        if ( v25 )
        {
          v26 = *(_QWORD *)(a2 + 80 * i + 48);
          if ( v26 >= v10 )
          {
            v12 = v33;
            if ( v25 + v26 > v7 )
              continue;
LABEL_25:
            ++v14;
            continue;
          }
        }
      }
    }
    else
    {
      if ( !v13 )
        goto LABEL_25;
      if ( *(_QWORD *)(a2 + 80 * i + 56) || *(_DWORD *)(a2 + 80 * i + 72) )
        ++v14;
    }
    v12 = v33;
  }
  v21 = *v5;
  v22 = a5;
  memset_0(a5, 0, *v5);
  v23 = (v14 << 6) + 16;
  *a5 = 1;
  *((_DWORD *)a5 + 1) = v23;
  if ( v21 < v23 )
  {
    *v5 = 16;
    return;
  }
  v27 = a1;
  v28 = 0;
  if ( !*(_DWORD *)(a1 + 128) )
    goto LABEL_56;
  v29 = 0;
  while ( 2 )
  {
    if ( v17 == -1 )
    {
      if ( !v33 )
      {
        if ( v34 )
        {
          if ( !*(_DWORD *)(a2 + 80LL * v28 + 8) )
            goto LABEL_54;
          v31 = *(_QWORD *)(a2 + 80LL * v28 + 56);
          if ( !v31 )
            goto LABEL_54;
          v32 = *(_QWORD *)(a2 + 80LL * v28 + 48);
          if ( v32 < v36 || v31 + v32 > v37 )
            goto LABEL_54;
        }
        else if ( v13 && !*(_QWORD *)(a2 + 80LL * v28 + 56) && !*(_DWORD *)(a2 + 80LL * v28 + 72) )
        {
          goto LABEL_54;
        }
LABEL_51:
        if ( v6 < v14 )
        {
          RaidFillTcgLockingInfo(a2 + 80LL * v28, (__int64)&a5[32 * (unsigned __int64)v6 + 8]);
          v27 = a1;
          ++v6;
        }
        goto LABEL_53;
      }
      if ( *(_DWORD *)(a2 + 80LL * v28 + 8) )
      {
        v30 = *(_DWORD *)(a2 + 80LL * v28 + 72);
        if ( v30 )
        {
          if ( v30 == v35 )
          {
            v29 = 1;
            goto LABEL_51;
          }
        }
      }
    }
    else
    {
      if ( *(_DWORD *)(a2 + 80LL * v28 + 8) == v17 )
      {
        v29 = 1;
        goto LABEL_51;
      }
LABEL_53:
      if ( v29 )
        break;
    }
LABEL_54:
    if ( ++v28 < *(_DWORD *)(v27 + 128) )
      continue;
    break;
  }
  v22 = a5;
  v5 = a4;
  if ( v6 <= v14 )
  {
LABEL_56:
    *((_DWORD *)v22 + 2) = v6;
    *v5 = (v6 << 6) + 16;
  }
}
