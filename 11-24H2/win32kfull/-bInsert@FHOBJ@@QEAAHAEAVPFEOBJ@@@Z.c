/*
 * XREFs of ?bInsert@FHOBJ@@QEAAHAEAVPFEOBJ@@@Z @ 0x1400FE730
 * Callers:
 *     ?bAddHash@PFFOBJ@@QEAAHH@Z @ 0x1400FE5E4 (-bAddHash@PFFOBJ@@QEAAHH@Z.c)
 * Callees:
 *     ?cCapString@@YAJPEAGPEBGH@Z @ 0x1400B94E0 (-cCapString@@YAJPEAGPEBGH@Z.c)
 *     ?bAddPFELink@FHOBJ@@QEAAHPEAU_HASHBUCKET@@IPEBGAEAVPFEOBJ@@H@Z @ 0x140146448 (-bAddPFELink@FHOBJ@@QEAAHPEAU_HASHBUCKET@@IPEBGAEAVPFEOBJ@@H@Z.c)
 *     ?iHash@@YAIPEBGI@Z @ 0x140146B14 (-iHash@@YAIPEBGI@Z.c)
 *     ?pwszName@FHOBJ@@QEAAPEAGAEAVPFEOBJ@@@Z @ 0x140146B40 (-pwszName@FHOBJ@@QEAAPEAGAEAVPFEOBJ@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall FHOBJ::bInsert(FHOBJ *this, struct PFEOBJ *a2)
{
  __int64 v4; // r8
  __int64 v5; // rax
  int v6; // ecx
  __int64 v7; // rax
  __int64 v8; // rdx
  unsigned __int16 *v9; // rdx
  __int64 *v10; // r9
  unsigned int j; // eax
  int v12; // ecx
  __int64 v13; // rcx
  unsigned int v14; // r10d
  __int64 *i; // rdx
  unsigned __int16 *k; // rax
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rax
  unsigned __int16 *v20; // rbx
  unsigned int v22; // r11d
  __int64 v23; // r10
  char *m; // rdx
  unsigned __int16 *n; // rcx
  int v27; // eax
  unsigned __int16 v28[32]; // [rsp+40h] [rbp-9h] BYREF

  memset_0(v28, 0, sizeof(v28));
  if ( *(_DWORD *)(*((_QWORD *)this + 1) + 4LL)
    || _wcsicmp(
         (const wchar_t *)(*(_QWORD *)(*(_QWORD *)a2 + 32LL) + *(int *)(*(_QWORD *)(*(_QWORD *)a2 + 32LL) + 16LL)),
         (const wchar_t *)(*(_QWORD *)(*(_QWORD *)a2 + 32LL) + *(int *)(*(_QWORD *)(*(_QWORD *)a2 + 32LL) + 8LL))) )
  {
    v4 = *((_QWORD *)this + 1);
    v5 = *(_QWORD *)a2;
    v6 = *(_DWORD *)(v4 + 4);
    if ( v6 == 2 )
    {
      v18 = *(_QWORD *)(v5 + 84);
      if ( (_DWORD)v18 == 1 )
        v19 = HIDWORD(v18);
      else
        LODWORD(v19) = v18;
      v14 = (unsigned int)v19 % *(_DWORD *)(v4 + 8);
      for ( i = *(__int64 **)(v4 + 8LL * v14 + 40); i; i = (__int64 *)*i )
      {
        v27 = *((_DWORD *)i + 15);
        if ( v27 == 1 && (_DWORD)v18 == 1 )
        {
          if ( *((_DWORD *)i + 16) == HIDWORD(v18) )
            goto LABEL_10;
        }
        else if ( v27 == (_DWORD)v18 )
        {
          goto LABEL_10;
        }
      }
      i = 0LL;
    }
    else
    {
      v7 = *(_QWORD *)(v5 + 32);
      if ( v6 == 1 )
        v8 = *(int *)(v7 + 8);
      else
        v8 = *(int *)(v7 + 16);
      cCapString(v28, (WCHAR *)(v7 + v8), 32);
      v9 = v28;
      v10 = 0LL;
      for ( j = 0; *v9; j = v12 + 257 * j )
        v12 = *(unsigned __int8 *)v9++;
      v13 = *((_QWORD *)this + 1);
      v14 = j % *(_DWORD *)(v13 + 8);
      for ( i = *(__int64 **)(v13 + 8LL * v14 + 40); i; i = (__int64 *)*i )
      {
        for ( k = v28; *k == *(unsigned __int16 *)((char *)k + (char *)i - (char *)v28 + 60); ++k )
        {
          if ( !*k )
          {
            if ( (i[4] & 2) == 0 )
              goto LABEL_10;
            v10 = i;
            break;
          }
        }
      }
      i = v10;
    }
LABEL_10:
    if ( !(unsigned int)FHOBJ::bAddPFELink(this, (struct _HASHBUCKET *)i, v14, v28, a2, 0) )
      return 0LL;
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 32LL) + 48LL) & 0x8000000) != 0
      && *(_DWORD *)(*((_QWORD *)this + 1) + 4LL) == 1 )
    {
      v20 = FHOBJ::pwszName(this, a2);
      while ( *v20++ )
        ;
      while ( *v20 )
      {
        cCapString(v28, v20, 32);
        v22 = iHash(v28, *(_DWORD *)(*((_QWORD *)this + 1) + 8LL));
        for ( m = *(char **)(v23 + 8LL * v22 + 40); m; m = *(char **)m )
        {
          if ( (*((_DWORD *)m + 8) & 2) != 0 )
          {
            for ( n = v28; *n == *(unsigned __int16 *)((char *)n + m - (char *)v28 + 60); ++n )
            {
              if ( !*n )
                goto LABEL_33;
            }
          }
        }
        m = 0LL;
LABEL_33:
        if ( !(unsigned int)FHOBJ::bAddPFELink(this, (struct _HASHBUCKET *)m, v22, v28, a2, 1) )
          return 0LL;
        while ( *v20++ )
          ;
      }
    }
  }
  return 1LL;
}
