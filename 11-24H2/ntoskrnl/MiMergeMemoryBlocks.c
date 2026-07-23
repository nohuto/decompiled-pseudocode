/*
 * XREFs of MiMergeMemoryBlocks @ 0x1407E9E8C
 * Callers:
 *     MiPerformMemoryChange @ 0x14066F268 (MiPerformMemoryChange.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

void *__fastcall MiMergeMemoryBlocks(_QWORD *a1, __int64 a2, __int64 **a3, int a4, int a5)
{
  unsigned int *v5; // r13
  unsigned __int64 v6; // r14
  __int64 v7; // rax
  unsigned int *v8; // rsi
  __int64 v9; // rdx
  unsigned int *v10; // rdi
  ULONG_PTR v11; // r12
  unsigned int *v12; // rbx
  unsigned int *v13; // r10
  __int64 **v14; // rdx
  char v15; // al
  __int64 v16; // r11
  __int64 v17; // r15
  char v18; // bp
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // r9
  __int64 v22; // rax
  unsigned int *v23; // rax
  unsigned int *v24; // rcx
  unsigned int *v25; // r8
  unsigned int v26; // r12d
  __int64 v27; // r14
  void *result; // rax
  unsigned int *v29; // [rsp+30h] [rbp-78h]
  __int128 v30; // [rsp+48h] [rbp-60h]
  int v32; // [rsp+B8h] [rbp+10h]
  char v35; // [rsp+D0h] [rbp+28h]

  v5 = (unsigned int *)(a2 + 16);
  v6 = 0LL;
  v7 = *(_QWORD *)(a2 + 24);
  v8 = (unsigned int *)(a1 + 2);
  v9 = *((unsigned int *)a1 + 4);
  v10 = 0LL;
  v11 = *v5;
  v12 = 0LL;
  v32 = *((_DWORD *)a1 + 4);
  a1[3] = v7;
  *(_QWORD *)&v30 = 0LL;
  if ( a5 )
  {
    v12 = &v5[4 * *v5 + 4];
    v10 = &v8[4 * v9 + 4];
  }
  if ( (unsigned int)v9 < *((_DWORD *)a3 + 4) + (int)v11 )
    KeBugCheckEx(0x1Au, 0x40F00uLL, (unsigned int)v9, v11, *((unsigned int *)a3 + 4));
  v29 = 0LL;
  v13 = (unsigned int *)(a1 + 4);
  v14 = (__int64 **)*a3;
  v15 = 0;
  v16 = 0LL;
  v35 = 0;
  v17 = 0LL;
  if ( *a3 == (__int64 *)a3 )
    goto LABEL_58;
  do
  {
    v18 = 0;
    v19 = 0LL;
    v20 = (unsigned __int64)v14[3];
    v21 = (unsigned __int64)v14[2];
LABEL_7:
    *((_QWORD *)&v30 + 1) = v19;
    while ( (unsigned int)v16 < (unsigned int)v11 )
    {
      if ( v18 )
      {
        v18 = 0;
      }
      else
      {
        v29 = &v5[4 * (unsigned int)v16 + 4];
        v19 = *((_QWORD *)v29 + 1);
        v15 = v35;
        v30 = *(_OWORD *)v29;
        v6 = *(_QWORD *)v29;
      }
      if ( a4 )
      {
        if ( v6 > v21 )
          break;
        goto LABEL_14;
      }
      if ( v21 < v6 || v21 >= v6 + v19 )
        goto LABEL_14;
      if ( v21 != v6 )
      {
        v19 = v21 - v6;
        *((_QWORD *)&v30 + 1) = v21 - v6;
        v18 = 1;
        goto LABEL_14;
      }
      if ( v20 < v19 )
      {
        v19 -= v20;
        v35 = 1;
        v6 += v20;
        *((_QWORD *)&v30 + 1) = v19;
        *((_QWORD *)v8 + 1) -= v20;
        *(_QWORD *)&v30 = v6;
LABEL_14:
        *(_OWORD *)v13 = v30;
        if ( v10 )
        {
          *(_QWORD *)v10 = *(_QWORD *)v12;
          v10 += 2;
        }
        v17 = (unsigned int)(v17 + 1);
        v13 += 4;
        if ( v18 )
        {
          v6 += v19;
          *(_QWORD *)&v30 = v6;
          v19 = *(_QWORD *)v29 + *((_QWORD *)v29 + 1) - v6;
          v15 = v35;
          goto LABEL_7;
        }
        goto LABEL_26;
      }
      v22 = *((_QWORD *)v8 + 1);
      if ( v20 == v19 )
      {
        v35 = 1;
        *((_QWORD *)v8 + 1) = v22 - v20;
      }
      else
      {
        v21 += v19;
        *((_QWORD *)v8 + 1) = v22 - v19;
        v20 -= v19;
      }
LABEL_26:
      v29 += 4;
      v23 = v12;
      v16 = (unsigned int)(v16 + 1);
      v12 += 2;
      if ( !v23 )
        v12 = 0LL;
      v15 = v35;
      if ( v35 )
        goto LABEL_32;
    }
    if ( v15 )
    {
LABEL_32:
      v15 = 0;
      v35 = 0;
      goto LABEL_57;
    }
    if ( a4 )
    {
      v24 = 0LL;
      *((_QWORD *)v8 + 1) += v14[3];
      v25 = 0LL;
      if ( v13 != v8 + 4 )
      {
        v24 = v13 - 4;
        if ( (__int64 *)(*((_QWORD *)v13 - 2) + *((_QWORD *)v13 - 1)) != v14[2]
          || v12 && (*(v10 - 2) != *((_DWORD *)v14 + 8) || *((_BYTE *)v10 - 4) != *((_BYTE *)v14 + 36)) )
        {
          v24 = 0LL;
        }
      }
      if ( (_DWORD)v16 != (_DWORD)v11 )
      {
        v25 = v29;
        if ( (__int64 *)((char *)v14[2] + (_QWORD)v14[3]) != *(__int64 **)v29
          || v12 && (*v12 != *((_DWORD *)v14 + 8) || *((_BYTE *)v12 + 4) != *((_BYTE *)v14 + 36)) )
        {
          v25 = 0LL;
        }
      }
      if ( v24 )
      {
        if ( v25 )
        {
          v16 = (unsigned int)(v16 + 1);
          *((_QWORD *)v24 + 1) += (char *)v14[3] + *((_QWORD *)v25 + 1);
          if ( v12 )
            v12 += 2;
        }
        else
        {
          *((_QWORD *)v24 + 1) += v14[3];
        }
      }
      else
      {
        *(_OWORD *)v13 = *((_OWORD *)v14 + 1);
        if ( v25 )
        {
          v16 = (unsigned int)(v16 + 1);
          *((_QWORD *)v13 + 1) += *((_QWORD *)v25 + 1);
          v29 += 4;
        }
        if ( v10 )
        {
          *v10 = *((_DWORD *)v14 + 8);
          *((_BYTE *)v10 + 4) = *((_BYTE *)v14 + 36);
          v10 += 2;
        }
        v13 += 4;
        v17 = (unsigned int)(v17 + 1);
      }
      v15 = v35;
    }
LABEL_57:
    v14 = (__int64 **)*v14;
  }
  while ( v14 != a3 );
LABEL_58:
  v26 = v11 - v16;
  if ( v26 )
  {
    v27 = (unsigned int)v16;
    memmove(v13, &v5[4 * v16 + 4], 16LL * v26);
    if ( v10 )
      memmove(v10, &v5[4 * *v5 + 4 + 2 * v27], 8LL * v26);
    v17 = v26 + (unsigned int)v17;
  }
  result = a1;
  a1[1] = 1LL;
  *a1 = &MiSystemPartition;
  if ( (_DWORD)v17 != v32 && v12 )
    result = memmove(&v8[4 * (unsigned int)v17 + 4], &v8[4 * *v8 + 4], 8 * v17);
  *v8 = v17;
  return result;
}
