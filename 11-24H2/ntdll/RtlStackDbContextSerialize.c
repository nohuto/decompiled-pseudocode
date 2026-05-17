/*
 * XREFs of RtlStackDbContextSerialize @ 0x18015D588
 * Callers:
 *     RtlpHpStackTraceSerialize @ 0x18011F158 (RtlpHpStackTraceSerialize.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180172020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlStackDbContextSerialize(__int64 a1, volatile signed __int32 **a2, unsigned __int64 a3)
{
  volatile signed __int32 **v6; // rdx
  unsigned __int64 v7; // r8
  int v8; // ebx
  _QWORD *v9; // rsi
  __int64 *v10; // rdi
  __int64 v11; // rax
  _BYTE *i; // rdx
  _QWORD *v13; // rsi
  __int64 *v14; // rdi
  __int64 v15; // rax
  _BYTE *j; // rdx
  unsigned int v18; // [rsp+20h] [rbp-40h] BYREF
  __int64 v19; // [rsp+28h] [rbp-38h] BYREF
  __int64 v20; // [rsp+30h] [rbp-30h] BYREF
  volatile signed __int64 *v21; // [rsp+38h] [rbp-28h]
  _DWORD v22[4]; // [rsp+40h] [rbp-20h] BYREF

  v19 = 0LL;
  v20 = 0LL;
  v18 = 0;
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)(a1 + 32), a2, a3);
  v21 = (volatile signed __int64 *)(a1 + 40);
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)(a1 + 40), v6, v7);
  v22[0] = *(_DWORD *)a1;
  v22[1] = *(_DWORD *)(a1 + 16);
  v22[2] = 524289;
  v8 = ((__int64 (__fastcall *)(_DWORD *, __int64, unsigned __int64))a2)(v22, 12LL, a3);
  if ( v8 >= 0 )
  {
    v9 = *(_QWORD **)(a1 + 8);
    v10 = v9;
    if ( v9 )
    {
      v11 = *v9;
      if ( (*v9 & 1) == 0 )
        goto LABEL_16;
    }
    for ( i = v9 + 1; ; i += 8 )
    {
      if ( (unsigned __int64)i >= *(_QWORD *)(a1 + 8) + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 4) >> 5) )
        goto LABEL_9;
      if ( (*i & 1) == 0 )
        break;
    }
LABEL_8:
    v10 = *(__int64 **)i;
    v9 = i;
    v11 = *(_QWORD *)i;
    while ( v11 )
    {
      v19 = v11;
      v18 = *(_DWORD *)(v11 + 16);
      v8 = ((__int64 (__fastcall *)(unsigned int *, __int64, unsigned __int64, _QWORD))a2)(&v18, 4LL, a3, 0LL);
      if ( v8 < 0 )
        goto LABEL_41;
      v8 = ((__int64 (__fastcall *)(__int64 *, __int64, unsigned __int64))a2)(&v19, 8LL, a3);
      if ( v8 < 0 )
        goto LABEL_41;
      v8 = ((__int64 (__fastcall *)(__int64, __int64, unsigned __int64))a2)(
             v19 + 24,
             8LL * *(unsigned __int8 *)(v19 + 19),
             a3);
      if ( v8 < 0 )
        goto LABEL_41;
      if ( !v10 || (v11 = *v10, (*v10 & 1) != 0) )
      {
        for ( i = v9 + 1;
              (unsigned __int64)i < *(_QWORD *)(a1 + 8) + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 4) >> 5);
              i += 8 )
        {
          if ( (*i & 1) == 0 )
            goto LABEL_8;
        }
LABEL_9:
        v11 = 0LL;
      }
      else
      {
LABEL_16:
        v10 = (__int64 *)v11;
      }
    }
    v13 = *(_QWORD **)(a1 + 24);
    v14 = v13;
    if ( v13 )
    {
      v15 = *v13;
      if ( (*v13 & 1) == 0 )
        goto LABEL_34;
    }
    for ( j = v13 + 1; ; j += 8 )
    {
      if ( (unsigned __int64)j >= *(_QWORD *)(a1 + 24) + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 20) >> 5) )
        goto LABEL_27;
      if ( (*j & 1) == 0 )
        break;
    }
LABEL_39:
    v14 = *(__int64 **)j;
    v13 = j;
    v15 = *(_QWORD *)j;
    while ( v15 )
    {
      v20 = v15;
      v18 = *(_DWORD *)(v15 + 16);
      v8 = ((__int64 (__fastcall *)(unsigned int *, __int64, unsigned __int64, _QWORD))a2)(&v18, 4LL, a3, 0LL);
      if ( v8 < 0 )
        goto LABEL_41;
      v8 = ((__int64 (__fastcall *)(__int64 *, __int64, unsigned __int64))a2)(&v20, 8LL, a3);
      if ( v8 < 0 )
        goto LABEL_41;
      v8 = ((__int64 (__fastcall *)(__int64, _QWORD, unsigned __int64))a2)(v20 + 24, (HIBYTE(v18) + 7) & 0xFFFFFFF8, a3);
      if ( v8 < 0 )
        goto LABEL_41;
      if ( !v14 || (v15 = *v14, (*v14 & 1) != 0) )
      {
        for ( j = v13 + 1;
              (unsigned __int64)j < *(_QWORD *)(a1 + 24) + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 20) >> 5);
              j += 8 )
        {
          if ( (*j & 1) == 0 )
            goto LABEL_39;
        }
LABEL_27:
        v15 = 0LL;
      }
      else
      {
LABEL_34:
        v14 = (__int64 *)v15;
      }
    }
    v8 = ((__int64 (__fastcall *)(_QWORD, _QWORD, unsigned __int64, _QWORD))a2)(0LL, 0LL, a3, 0LL);
  }
LABEL_41:
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 32));
  RtlReleaseSRWLockExclusive(v21);
  return (unsigned int)v8;
}
