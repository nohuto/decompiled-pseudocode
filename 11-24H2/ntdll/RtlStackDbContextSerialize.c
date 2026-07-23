/*
 * XREFs of RtlStackDbContextSerialize @ 0x18015B948
 * Callers:
 *     RtlpHpStackTraceSerialize @ 0x18011D388 (RtlpHpStackTraceSerialize.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180171020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlStackDbContextSerialize(
        __int64 a1,
        __int64 (__fastcall *a2)(_DWORD *, __int64, __int64),
        __int64 a3)
{
  int v6; // ebx
  _QWORD *v7; // rsi
  __int64 *v8; // rdi
  __int64 v9; // rax
  _BYTE *i; // rdx
  _QWORD *v11; // rsi
  __int64 *v12; // rdi
  __int64 v13; // rax
  _BYTE *j; // rdx
  unsigned int v16; // [rsp+20h] [rbp-40h] BYREF
  __int64 v17; // [rsp+28h] [rbp-38h] BYREF
  __int64 v18; // [rsp+30h] [rbp-30h] BYREF
  PRTL_SRWLOCK SRWLock; // [rsp+38h] [rbp-28h]
  _DWORD v20[4]; // [rsp+40h] [rbp-20h] BYREF

  v17 = 0LL;
  v18 = 0LL;
  v16 = 0;
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 32));
  SRWLock = (PRTL_SRWLOCK)(a1 + 40);
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 40));
  v20[0] = *(_DWORD *)a1;
  v20[1] = *(_DWORD *)(a1 + 16);
  v20[2] = 524289;
  v6 = a2(v20, 12LL, a3);
  if ( v6 >= 0 )
  {
    v7 = *(_QWORD **)(a1 + 8);
    v8 = v7;
    if ( v7 )
    {
      v9 = *v7;
      if ( (*v7 & 1) == 0 )
        goto LABEL_16;
    }
    for ( i = v7 + 1; ; i += 8 )
    {
      if ( (unsigned __int64)i >= *(_QWORD *)(a1 + 8) + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 4) >> 5) )
        goto LABEL_9;
      if ( (*i & 1) == 0 )
        break;
    }
LABEL_8:
    v8 = *(__int64 **)i;
    v7 = i;
    v9 = *(_QWORD *)i;
    while ( v9 )
    {
      v17 = v9;
      v16 = *(_DWORD *)(v9 + 16);
      v6 = ((__int64 (__fastcall *)(unsigned int *, __int64, __int64, _QWORD))a2)(&v16, 4LL, a3, 0LL);
      if ( v6 < 0 )
        goto LABEL_41;
      v6 = a2(&v17, 8LL, a3);
      if ( v6 < 0 )
        goto LABEL_41;
      v6 = a2((_DWORD *)(v17 + 24), 8LL * *(unsigned __int8 *)(v17 + 19), a3);
      if ( v6 < 0 )
        goto LABEL_41;
      if ( !v8 || (v9 = *v8, (*v8 & 1) != 0) )
      {
        for ( i = v7 + 1;
              (unsigned __int64)i < *(_QWORD *)(a1 + 8) + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 4) >> 5);
              i += 8 )
        {
          if ( (*i & 1) == 0 )
            goto LABEL_8;
        }
LABEL_9:
        v9 = 0LL;
      }
      else
      {
LABEL_16:
        v8 = (__int64 *)v9;
      }
    }
    v11 = *(_QWORD **)(a1 + 24);
    v12 = v11;
    if ( v11 )
    {
      v13 = *v11;
      if ( (*v11 & 1) == 0 )
        goto LABEL_34;
    }
    for ( j = v11 + 1; ; j += 8 )
    {
      if ( (unsigned __int64)j >= *(_QWORD *)(a1 + 24) + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 20) >> 5) )
        goto LABEL_27;
      if ( (*j & 1) == 0 )
        break;
    }
LABEL_39:
    v12 = *(__int64 **)j;
    v11 = j;
    v13 = *(_QWORD *)j;
    while ( v13 )
    {
      v18 = v13;
      v16 = *(_DWORD *)(v13 + 16);
      v6 = ((__int64 (__fastcall *)(unsigned int *, __int64, __int64, _QWORD))a2)(&v16, 4LL, a3, 0LL);
      if ( v6 < 0 )
        goto LABEL_41;
      v6 = a2(&v18, 8LL, a3);
      if ( v6 < 0 )
        goto LABEL_41;
      v6 = a2((_DWORD *)(v18 + 24), (HIBYTE(v16) + 7) & 0xFFFFFFF8, a3);
      if ( v6 < 0 )
        goto LABEL_41;
      if ( !v12 || (v13 = *v12, (*v12 & 1) != 0) )
      {
        for ( j = v11 + 1;
              (unsigned __int64)j < *(_QWORD *)(a1 + 24) + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 20) >> 5);
              j += 8 )
        {
          if ( (*j & 1) == 0 )
            goto LABEL_39;
        }
LABEL_27:
        v13 = 0LL;
      }
      else
      {
LABEL_34:
        v12 = (__int64 *)v13;
      }
    }
    v6 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, _QWORD))a2)(0LL, 0LL, a3, 0LL);
  }
LABEL_41:
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 32));
  RtlReleaseSRWLockExclusive(SRWLock);
  return (unsigned int)v6;
}
