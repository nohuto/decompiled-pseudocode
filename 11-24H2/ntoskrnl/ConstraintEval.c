/*
 * XREFs of ConstraintEval @ 0x1408B2790
 * Callers:
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x1408B237C (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 * Callees:
 *     _wcsicmp @ 0x1404FBC70 (_wcsicmp.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memcmp @ 0x1406C0E10 (memcmp.c)
 *     SimplifyFilter @ 0x1408B0D6C (SimplifyFilter.c)
 *     FilterEvalStrict @ 0x1408CA150 (FilterEvalStrict.c)
 *     FilterEvalImpliedAnd @ 0x1408D1A38 (FilterEvalImpliedAnd.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ConstraintEval(unsigned int a1, _DWORD *a2, __int64 a3, int a4, __int64 a5)
{
  unsigned int v7; // r15d
  size_t v9; // r12
  _DWORD *Pool2; // rax
  _DWORD *v11; // rsi
  unsigned int i; // edi
  __int64 v13; // rdx
  __int64 v14; // rcx
  const wchar_t *v15; // rcx
  const wchar_t *v16; // rdx
  int v17; // r14d
  unsigned int v18; // ebx
  __int64 v20; // rcx
  const wchar_t *v21; // rcx
  const wchar_t *v22; // rdx
  _DWORD *v23; // rdi
  int v24; // ebx
  int v25; // ebx
  unsigned int j; // ebx
  _DWORD *v27; // rdx
  int v28; // eax
  int v29; // ebx
  int v30; // eax
  void *v31; // rcx
  unsigned int v32; // eax
  int v33; // [rsp+30h] [rbp-50h] BYREF
  unsigned int v34; // [rsp+34h] [rbp-4Ch] BYREF
  __int128 v35; // [rsp+38h] [rbp-48h] BYREF
  __int128 v36; // [rsp+48h] [rbp-38h] BYREF
  __int128 v37; // [rsp+58h] [rbp-28h]
  __int128 v38; // [rsp+68h] [rbp-18h]

  v34 = 0;
  v33 = 0;
  v7 = a1;
  v9 = 56LL * a1;
  v36 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  v35 = 0LL;
  if ( (a4 & 0xFF00000) != 0 )
    return (unsigned int)-1073741811;
  if ( !a1 )
    return (unsigned int)-1073741823;
  Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL, 56LL * a1, 0x52544C46u);
  v11 = Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741801;
  if ( (*a2 & 0xFF00000) != 0 )
  {
    SimplifyFilter(v7, (__int64)a2, &v34, (__int64)Pool2);
    v7 = v34;
  }
  else
  {
    memmove(Pool2, a2, v9);
  }
  for ( i = 0; ; ++i )
  {
    if ( i >= v7 )
      goto LABEL_16;
    v13 = 14LL * i;
    if ( v11[v13 + 6] == *(_DWORD *)(a3 + 16) )
    {
      v20 = *(_QWORD *)&v11[v13 + 2] - *(_QWORD *)a3;
      if ( !v20 )
        v20 = *(_QWORD *)&v11[v13 + 4] - *(_QWORD *)(a3 + 8);
      if ( !v20 && v11[v13 + 7] == *(_DWORD *)(a3 + 20) )
      {
        v21 = *(const wchar_t **)&v11[v13 + 8];
        v22 = *(const wchar_t **)(a3 + 24);
        if ( (v21 == v22 || v21 && v22 && !wcsicmp(v21, v22)) && v11[14 * i] == a4 )
          break;
      }
    }
  }
  v23 = &v11[14 * i];
  if ( !v23 )
    goto LABEL_16;
  v36 = *(_OWORD *)(v23 + 2);
  v37 = *(_OWORD *)(v23 + 6);
  v38 = *(_OWORD *)(v23 + 10);
  v24 = a4 - 1;
  if ( v24 )
  {
    v25 = v24 - 1;
    if ( v25 )
    {
      v29 = v25 - 0x10000;
      if ( v29 )
      {
        if ( v29 != 0x10000 )
          goto LABEL_16;
        v30 = v23[10];
        if ( v30 != 18 && v30 != 25 && v30 != 8210 )
          goto LABEL_16;
      }
      else
      {
        if ( (_DWORD)v38 != 17 )
          goto LABEL_16;
        v31 = &unk_140EEFE19;
        if ( **((_BYTE **)&v38 + 1) != 0xFF )
          v31 = &unk_140E0F160;
        *((_QWORD *)&v38 + 1) = v31;
      }
    }
  }
  else
  {
    *(_QWORD *)&v38 = 0x400000007LL;
    *((_QWORD *)&v38 + 1) = &unk_140EEFE1C;
  }
  for ( j = 0; j < v7; ++j )
  {
    v27 = &v11[14 * j];
    if ( v27 != v23 && v27[6] == v23[6] )
    {
      v14 = *((_QWORD *)v27 + 1) - *((_QWORD *)v23 + 1);
      if ( !v14 )
        v14 = *((_QWORD *)v27 + 2) - *((_QWORD *)v23 + 2);
      if ( !v14 && v27[7] == v23[7] )
      {
        v15 = (const wchar_t *)*((_QWORD *)v27 + 4);
        v16 = (const wchar_t *)*((_QWORD *)v23 + 4);
        if ( v15 == v16 || v15 && v16 && !wcsicmp(v15, v16) )
        {
          v17 = v11[14 * j];
          if ( v17 != *v23 )
            goto LABEL_16;
          if ( v11[14 * j + 10] != v23[10] )
            goto LABEL_16;
          v32 = v11[14 * j + 11];
          if ( v32 != v23[11] || memcmp(*(const void **)&v11[14 * j + 12], *((const void **)v23 + 6), v32) )
            goto LABEL_16;
          v11[14 * j] = v17 ^ 0x10000;
        }
      }
    }
  }
  *v23 ^= 0x10000u;
  LODWORD(v35) = 1;
  *((_QWORD *)&v35 + 1) = &v36;
  if ( !v7 )
  {
    v18 = -1073741811;
    goto LABEL_17;
  }
  if ( (*v11 & 0xFF00000) != 0 )
    v28 = FilterEvalStrict((unsigned int)GetPropertyFromPropArray, (unsigned int)&v35, v7, (_DWORD)v11, (__int64)&v33);
  else
    v28 = FilterEvalImpliedAnd(
            (unsigned int)GetPropertyFromPropArray,
            (unsigned int)&v35,
            v7,
            (_DWORD)v11,
            (__int64)&v33);
  v18 = v28;
  if ( v28 < 0 )
    goto LABEL_17;
  if ( v33 )
  {
LABEL_16:
    v18 = -1073741823;
    goto LABEL_17;
  }
  *(_OWORD *)a5 = *(_OWORD *)v23;
  *(_OWORD *)(a5 + 16) = *((_OWORD *)v23 + 1);
  *(_OWORD *)(a5 + 32) = *((_OWORD *)v23 + 2);
  *(_QWORD *)(a5 + 48) = *((_QWORD *)v23 + 6);
  *(_DWORD *)a5 ^= 0x10000u;
LABEL_17:
  ExFreePoolWithTag(v11, 0x52544C46u);
  return v18;
}
