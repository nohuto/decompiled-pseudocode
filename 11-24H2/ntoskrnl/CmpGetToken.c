/*
 * XREFs of CmpGetToken @ 0x140C1A318
 * Callers:
 *     CmpParseInfBuffer @ 0x140C1A5C4 (CmpParseInfBuffer.c)
 * Callees:
 *     isspace @ 0x1404FC300 (isspace.c)
 *     strchr @ 0x1404FD0E0 (strchr.c)
 *     strncpy_s @ 0x140501D30 (strncpy_s.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

void __fastcall CmpGetToken(const char **a1, unsigned __int64 a2, __int64 a3)
{
  const char *i; // rdi
  int v7; // eax
  const char *v8; // rbx
  const char *v9; // r15
  const char *v10; // rcx
  const char *v11; // rbx
  const char *v12; // rax
  const char *v13; // r13
  const char *v14; // r12
  char *v15; // rdx
  const char *v16; // rax
  __int64 v17; // rbx
  char *Pool2; // rax
  char *v19; // rbp
  const char *v20; // rdi
  const char *j; // rbx
  int v22; // ecx
  const char *v23; // [rsp+60h] [rbp+8h]
  const char *v24; // [rsp+68h] [rbp+10h]

  *(_BYTE *)(a3 + 16) = 0;
  *(_QWORD *)(a3 + 8) = 0LL;
  while ( 1 )
  {
    for ( i = *a1; (unsigned __int64)i < a2 && *i != 10 && isspace(*(unsigned __int8 *)i); ++i )
      ;
    if ( (unsigned __int64)i >= a2 )
      goto LABEL_59;
    if ( *i == 35 || *i == 59 )
    {
      do
      {
        if ( *i == 10 )
          break;
        ++i;
      }
      while ( (unsigned __int64)i < a2 );
    }
    if ( (unsigned __int64)i >= a2 || (v7 = *i, *i == 26) )
    {
LABEL_59:
      *(_DWORD *)a3 = 0;
      *(_QWORD *)(a3 + 8) = 0LL;
      goto LABEL_60;
    }
    if ( v7 == 10 )
    {
      ++i;
      *(_DWORD *)a3 = 1;
      goto LABEL_60;
    }
    if ( v7 == 34 )
      break;
    switch ( v7 )
    {
      case ',':
        ++i;
        *(_DWORD *)a3 = 6;
        goto LABEL_60;
      case '=':
        ++i;
        *(_DWORD *)a3 = 5;
        goto LABEL_60;
      case '[':
        ++i;
        *(_DWORD *)a3 = 2;
        goto LABEL_60;
    }
    if ( v7 != 92 )
    {
      if ( v7 == 93 )
      {
        ++i;
        *(_DWORD *)a3 = 3;
      }
      else
      {
LABEL_35:
        v9 = i;
        v10 = i;
        if ( (unsigned __int64)i >= a2 )
          goto LABEL_46;
        v11 = i;
        v12 = i;
        do
        {
          v13 = v11;
          v23 = v10;
          v14 = v11;
          v24 = v12;
          v15 = strchr(StringTerminators, *i);
          if ( v15 )
            break;
          i = v11 + 1;
          v12 = i;
          ++v11;
          v10 = i;
        }
        while ( (unsigned __int64)i < a2 );
        v16 = v14 + 1;
        v10 = v13 + 1;
        if ( v15 )
        {
          v16 = v24;
          v10 = v23;
        }
        if ( v16 == v9 )
        {
LABEL_46:
          *(_DWORD *)a3 = 7;
          *a1 = v10 + 1;
          return;
        }
        v17 = (unsigned int)((_DWORD)i - (_DWORD)v9);
        if ( (int)v17 + 1 >= (unsigned int)v17
          && (Pool2 = (char *)ExAllocatePool2(0x100uLL, (unsigned int)(v17 + 1), 0x69704D43uLL), (v19 = Pool2) != 0LL) )
        {
          strncpy_s(Pool2, (unsigned int)(v17 + 1), v9, (unsigned int)v17);
          v19[v17] = 0;
          *(_DWORD *)a3 = 4;
          *(_QWORD *)(a3 + 8) = v19;
          *(_BYTE *)(a3 + 16) = 1;
        }
        else
        {
          *(_DWORD *)a3 = 8;
        }
      }
LABEL_60:
      *a1 = i;
      return;
    }
    v8 = ++i;
    if ( (unsigned __int64)i < a2 )
    {
      do
      {
        if ( *v8 == 10 )
          break;
        if ( !isspace(*(unsigned __int8 *)v8) )
          break;
        ++v8;
      }
      while ( (unsigned __int64)v8 < a2 );
    }
    if ( (*v8 == 35 || *v8 == 59) && (++i, v8 = i, (unsigned __int64)i < a2) )
    {
      while ( *v8 != 10 )
      {
        if ( (unsigned __int64)++v8 >= a2 )
          goto LABEL_29;
      }
    }
    else
    {
LABEL_29:
      if ( (unsigned __int64)v8 >= a2 )
      {
        *(_DWORD *)a3 = 7;
        goto LABEL_60;
      }
      if ( *v8 != 10 )
        goto LABEL_35;
    }
    *a1 = v8 + 1;
  }
  v20 = i + 1;
  for ( j = v20; (unsigned __int64)j < a2; ++j )
  {
    if ( strchr(&StringTerminators[6], *j) )
      break;
  }
  if ( (unsigned __int64)j < a2 && *j == 34 )
  {
    *j = 0;
    v22 = 4;
    ++j;
    *(_QWORD *)(a3 + 8) = v20;
  }
  else
  {
    v22 = 7;
  }
  *(_DWORD *)a3 = v22;
  *a1 = j;
}
