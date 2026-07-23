/*
 * XREFs of ?RtlpFindFunctionOverrideDvrtRecord@@YAJV?$span@$$CBE$0?0@gsl@@PEAV12@@Z @ 0x14093F600
 * Callers:
 *     RtlCreateFunctionOverrideFixupInfo @ 0x14093F474 (RtlCreateFunctionOverrideFixupInfo.c)
 * Callees:
 *     ?terminate@details@gsl@@YAXXZ @ 0x1404F6240 (-terminate@details@gsl@@YAXXZ.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1406B6C90 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall RtlpFindFunctionOverrideDvrtRecord(__int64 a1, _OWORD *a2)
{
  unsigned __int64 v4; // rdx
  gsl::details *v5; // rcx
  unsigned __int64 v6; // rcx
  __int128 v7; // xmm0
  gsl::details *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v12; // [rsp+20h] [rbp-48h] BYREF
  __int128 v13; // [rsp+28h] [rbp-40h]
  __int128 v14; // [rsp+38h] [rbp-30h]
  gsl::details *v15[2]; // [rsp+48h] [rbp-20h] BYREF

  if ( *(_QWORD *)a1 < 8uLL )
  {
    v4 = 0LL;
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 8);
    v5 = *(gsl::details **)a1;
    if ( (unsigned __int64)v5 < 8 )
      goto LABEL_29;
    v5 = (gsl::details *)((char *)v5 - 8);
    v15[0] = v5;
    if ( v5 == (gsl::details *)-1LL )
      goto LABEL_29;
    v15[1] = (gsl::details *)(v4 + 8);
    *(_OWORD *)a1 = *(_OWORD *)v15;
  }
  v12 = 0LL;
  if ( !v4 )
    return 3221225595LL;
  RtlCopyVolatileMemory(&v12, (const void *)v4, 8uLL);
  if ( (_DWORD)v12 != 1 )
    return 3221225659LL;
  v6 = *(_QWORD *)a1;
  if ( HIDWORD(v12) != *(_QWORD *)a1 )
    return 3221225595LL;
  if ( v6 < 0xC )
    goto LABEL_11;
  v4 = *(_QWORD *)(a1 + 8);
  v5 = (gsl::details *)(v6 - 12);
  v15[0] = v5;
  if ( v5 == (gsl::details *)-1LL )
  {
LABEL_29:
    gsl::details::terminate(v5, v4);
    __debugbreak();
  }
  v15[1] = (gsl::details *)(v4 + 12);
  v7 = *(_OWORD *)v15;
LABEL_22:
  *(_OWORD *)a1 = v7;
  while ( v4 )
  {
    v15[0] = 0LL;
    LODWORD(v15[1]) = 0;
    RtlCopyVolatileMemory(v15, (const void *)v4, 0xCuLL);
    v8 = (gsl::details *)LODWORD(v15[1]);
    v4 = *(_QWORD *)a1;
    if ( (unsigned __int64)LODWORD(v15[1]) > *(_QWORD *)a1 || ((__int64)v15[1] & 3) != 0 || !LODWORD(v15[1]) )
      return 3221225595LL;
    v9 = *(_QWORD *)(a1 + 8);
    if ( v15[0] == (gsl::details *)7 )
    {
      *(_QWORD *)&v13 = LODWORD(v15[1]);
      *((_QWORD *)&v13 + 1) = v9;
      if ( v9 )
      {
        *a2 = v13;
        return 0LL;
      }
LABEL_30:
      gsl::details::terminate(v8, v4);
      JUMPOUT(0x14093F80FLL);
    }
    v10 = LODWORD(v15[1]) + v9;
    v4 -= LODWORD(v15[1]);
    *(_QWORD *)&v13 = v4;
    if ( v4 == -1LL )
      goto LABEL_30;
    *((_QWORD *)&v13 + 1) = v10;
    *(_OWORD *)a1 = v13;
    if ( v4 >= 0xC )
    {
      v4 = *(_QWORD *)(a1 + 8);
      v8 = *(gsl::details **)a1;
      if ( *(_QWORD *)a1 < 0xCuLL )
        goto LABEL_30;
      v8 = (gsl::details *)((char *)v8 - 12);
      *(_QWORD *)&v14 = v8;
      if ( v8 == (gsl::details *)-1LL )
        goto LABEL_30;
      *((_QWORD *)&v14 + 1) = v4 + 12;
      v7 = v14;
      goto LABEL_22;
    }
LABEL_11:
    v4 = 0LL;
  }
  return *(_QWORD *)a1 != 0LL ? -1073741701 : -1073741275;
}
