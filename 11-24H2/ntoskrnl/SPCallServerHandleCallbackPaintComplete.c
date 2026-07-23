/*
 * XREFs of SPCallServerHandleCallbackPaintComplete @ 0x140A859A4
 * Callers:
 *     sub_14095C450 @ 0x14095C450 (sub_14095C450.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402DEA60 (KeReleaseMutex.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall SPCallServerHandleCallbackPaintComplete(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v6; // rdx
  int v7; // r8d
  unsigned __int64 v8; // rax
  __int64 v9; // r15
  unsigned int i; // r9d
  __int64 v11; // r11
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // r10
  signed int v14; // ebx
  __int64 v15; // r9
  int v16; // r12d
  unsigned int v17; // ecx
  unsigned int v18; // eax
  unsigned int v19; // edx
  __int64 Pool2; // rax
  char **v21; // rdx
  char *v23; // rdx
  unsigned int v24; // edx
  unsigned int v25; // ecx
  int v26; // eax
  unsigned int j; // r8d
  char *v28; // r13
  unsigned int v29; // eax
  unsigned int v30; // r9d
  char *v31; // rcx
  __int64 v32; // rax
  __int64 v33; // r8
  char *v34; // rdx
  unsigned int v35; // ecx
  unsigned int v36; // eax
  unsigned int k; // r8d
  char *v38; // r11
  unsigned int v39; // eax
  unsigned int v40; // edi
  char *v41; // rcx
  __int64 v42; // rax
  __int64 v44; // [rsp+90h] [rbp+8h]

  v44 = 0LL;
  if ( !a1 || !a2 || !a4 )
    return (unsigned int)-1073741811;
  v6 = 0LL;
  v7 = 0;
  v8 = *(_QWORD *)(a1 + 8);
  v9 = -1LL;
  if ( v8 && *(_DWORD *)a1 > 3u )
  {
    for ( i = 0; ; ++i )
    {
      v11 = *(unsigned int *)v8;
      v12 = v8 + 4;
      if ( i >= 3 )
        break;
      v13 = -1LL;
      if ( v12 >= v8 )
        v13 = v8 + 4;
      v14 = v12 < v8 ? 0xC0000095 : 0;
      if ( v12 < v8 )
        goto LABEL_20;
      v8 = -1LL;
      if ( v13 + v11 >= v13 )
        v8 = v13 + v11;
      v14 = v13 + v11 < v13 ? 0xC0000095 : 0;
      if ( v13 + v11 < v13 )
        goto LABEL_20;
    }
    v15 = -1LL;
    if ( v12 >= v8 )
      v15 = v8 + 4;
    v14 = v12 < v8 ? 0xC0000095 : 0;
    if ( v12 >= v8 )
    {
      v7 = *(_DWORD *)v8;
      if ( (_DWORD)v11 )
        v6 = (__int64 *)v15;
    }
  }
  else
  {
    v14 = -1073741811;
  }
LABEL_20:
  if ( v14 >= 0 )
  {
    if ( v7 == 8 )
      v44 = *v6;
    else
      v14 = -1073741789;
    if ( v14 >= 0 )
    {
      KeReleaseMutex(&Mutex, 0);
      v16 = -1;
      v17 = -1;
      if ( *(_DWORD *)(a2 + 16) < 0xFFFFFFD0 )
        v17 = *(_DWORD *)(a2 + 16) + 48;
      v14 = *(_DWORD *)(a2 + 16) >= 0xFFFFFFD0 ? 0xC0000095 : 0;
      if ( (unsigned int)(*(_DWORD *)(a2 + 16) + 48) >= 0x30 )
      {
        v18 = v17 + 4;
        v19 = -1;
        if ( v17 + 4 >= v17 )
          v19 = v17 + 4;
        v14 = v18 < v17 ? 0xC0000095 : 0;
        if ( v18 >= v17 )
          v14 = v19 + *(_DWORD *)(a2 + 32) < v19 ? 0xC0000095 : 0;
      }
      if ( v14 >= 0 )
      {
        *(_DWORD *)(a4 + 4) = 20;
        v14 = 0;
        Pool2 = ExAllocatePool2(0x100uLL, 0x14uLL, 0x20534C53u);
        if ( Pool2 )
        {
          v21 = (char **)(a4 + 8);
          *(_QWORD *)(a4 + 8) = Pool2;
        }
        else
        {
          v14 = -1073741801;
          v21 = (char **)(a4 + 8);
        }
        if ( v14 >= 0 )
        {
          *(_DWORD *)a4 = 0;
          v23 = *v21;
          if ( v23 )
          {
            for ( j = 0; ; ++j )
            {
              v28 = v23;
              if ( j >= *(_DWORD *)a4 )
                break;
              v29 = -1;
              if ( *(_DWORD *)v23 < 0xFFFFFFFC )
                v29 = *(_DWORD *)v23 + 4;
              v14 = *(_DWORD *)v23 >= 0xFFFFFFFC ? 0xC0000095 : 0;
              if ( (unsigned int)(*(_DWORD *)v23 + 4) < 4 )
                goto LABEL_61;
              v30 = v29;
              v31 = &v23[v29];
              v32 = -1LL;
              if ( v31 >= v23 )
                v32 = (__int64)&v23[v30];
              v23 = (char *)v32;
              v14 = v31 < v28 ? 0xC0000095 : 0;
              if ( v31 < v28 )
                goto LABEL_61;
            }
            v33 = -1LL;
            if ( v23 + 4 >= v23 )
              v33 = (__int64)(v23 + 4);
            v14 = v23 + 4 < v23 ? 0xC0000095 : 0;
            if ( v23 + 4 >= v23 )
            {
              if ( (unsigned __int64)(v23 + 8) > *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
              {
                v14 = -1073741789;
                goto LABEL_61;
              }
              *(_DWORD *)v23 = 4;
              *(_DWORD *)v33 = 0;
              goto LABEL_60;
            }
          }
          else
          {
            v24 = *(_DWORD *)(a4 + 4);
            v25 = v24 + 8;
            v26 = -1;
            if ( v24 + 8 >= v24 )
              v26 = v24 + 8;
            *(_DWORD *)(a4 + 4) = v26;
            v14 = v25 < v24 ? 0xC0000095 : 0;
            if ( v25 >= v24 )
            {
              v14 = 0;
LABEL_60:
              ++*(_DWORD *)a4;
            }
          }
LABEL_61:
          if ( v14 < 0 )
            return (unsigned int)v14;
          v34 = *(char **)(a4 + 8);
          if ( v34 )
          {
            for ( k = 0; ; ++k )
            {
              v38 = v34;
              if ( k >= *(_DWORD *)a4 )
                break;
              v39 = -1;
              if ( *(_DWORD *)v34 < 0xFFFFFFFC )
                v39 = *(_DWORD *)v34 + 4;
              v14 = *(_DWORD *)v34 >= 0xFFFFFFFC ? 0xC0000095 : 0;
              if ( (unsigned int)(*(_DWORD *)v34 + 4) < 4 )
                return (unsigned int)v14;
              v40 = v39;
              v41 = &v34[v39];
              v42 = -1LL;
              if ( v41 >= v34 )
                v42 = (__int64)&v34[v40];
              v34 = (char *)v42;
              v14 = v41 < v38 ? 0xC0000095 : 0;
              if ( v41 < v38 )
                return (unsigned int)v14;
            }
            if ( v34 + 4 >= v34 )
              v9 = (__int64)(v34 + 4);
            v14 = v34 + 4 < v34 ? 0xC0000095 : 0;
            if ( v34 + 4 < v34 )
              return (unsigned int)v14;
            if ( (unsigned __int64)(v34 + 12) > *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
              return (unsigned int)-1073741789;
            *(_DWORD *)v34 = 8;
            *(_QWORD *)v9 = v44;
          }
          else
          {
            v35 = *(_DWORD *)(a4 + 4);
            v36 = v35 + 12;
            if ( v35 + 12 >= v35 )
              v16 = v35 + 12;
            *(_DWORD *)(a4 + 4) = v16;
            v14 = v36 < v35 ? 0xC0000095 : 0;
            if ( v36 < v35 )
              return (unsigned int)v14;
            v14 = 0;
          }
          ++*(_DWORD *)a4;
        }
      }
    }
  }
  return (unsigned int)v14;
}
