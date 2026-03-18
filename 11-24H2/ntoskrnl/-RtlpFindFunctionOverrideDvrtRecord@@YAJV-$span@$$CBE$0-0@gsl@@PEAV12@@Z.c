/*
 * XREFs of ?RtlpFindFunctionOverrideDvrtRecord@@YAJV?$span@$$CBE$0?0@gsl@@PEAV12@@Z @ 0x1409EB26C
 * Callers:
 *     RtlCreateFunctionOverrideFixupInfo @ 0x1409EB0E0 (RtlCreateFunctionOverrideFixupInfo.c)
 * Callees:
 *     ?terminate@details@gsl@@YAXXZ @ 0x1404F8960 (-terminate@details@gsl@@YAXXZ.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1406B5CF0 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall RtlpFindFunctionOverrideDvrtRecord(__int64 a1, _OWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // r8
  unsigned __int64 v7; // rdx
  gsl::details *v8; // rcx
  unsigned __int64 v9; // rcx
  __int128 v10; // xmm0
  __int64 v11; // r8
  __int64 v12; // r9
  gsl::details *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v17; // [rsp+20h] [rbp-48h] BYREF
  __int128 v18; // [rsp+28h] [rbp-40h]
  __int128 v19; // [rsp+38h] [rbp-30h]
  gsl::details *v20[2]; // [rsp+48h] [rbp-20h] BYREF

  v6 = 8LL;
  if ( *(_QWORD *)a1 < 8uLL )
  {
    v7 = 0LL;
  }
  else
  {
    v7 = *(_QWORD *)(a1 + 8);
    v8 = *(gsl::details **)a1;
    if ( (unsigned __int64)v8 < 8 )
      goto LABEL_29;
    v8 = (gsl::details *)((char *)v8 - 8);
    v20[0] = v8;
    if ( v8 == (gsl::details *)-1LL )
      goto LABEL_29;
    v20[1] = (gsl::details *)(v7 + 8);
    *(_OWORD *)a1 = *(_OWORD *)v20;
  }
  v17 = 0LL;
  if ( !v7 )
    return 3221225595LL;
  RtlCopyVolatileMemory(&v17, (const void *)v7, 8uLL);
  if ( (_DWORD)v17 != 1 )
    return 3221225659LL;
  v9 = *(_QWORD *)a1;
  if ( HIDWORD(v17) != *(_QWORD *)a1 )
    return 3221225595LL;
  if ( v9 < 0xC )
    goto LABEL_11;
  v7 = *(_QWORD *)(a1 + 8);
  v8 = (gsl::details *)(v9 - 12);
  v20[0] = v8;
  if ( v8 == (gsl::details *)-1LL )
  {
LABEL_29:
    gsl::details::terminate(v8, v7, v6, a4);
    __debugbreak();
  }
  v20[1] = (gsl::details *)(v7 + 12);
  v10 = *(_OWORD *)v20;
LABEL_22:
  *(_OWORD *)a1 = v10;
  while ( v7 )
  {
    v20[0] = 0LL;
    LODWORD(v20[1]) = 0;
    RtlCopyVolatileMemory(v20, (const void *)v7, 0xCuLL);
    v13 = (gsl::details *)LODWORD(v20[1]);
    v7 = *(_QWORD *)a1;
    if ( (unsigned __int64)LODWORD(v20[1]) > *(_QWORD *)a1 || ((__int64)v20[1] & 3) != 0 || !LODWORD(v20[1]) )
      return 3221225595LL;
    v14 = *(_QWORD *)(a1 + 8);
    if ( v20[0] == (gsl::details *)7 )
    {
      *(_QWORD *)&v18 = LODWORD(v20[1]);
      *((_QWORD *)&v18 + 1) = v14;
      if ( v14 )
      {
        *a2 = v18;
        return 0LL;
      }
LABEL_30:
      gsl::details::terminate(v13, v7, v11, v12);
      JUMPOUT(0x1409EB47BLL);
    }
    v15 = LODWORD(v20[1]) + v14;
    v7 -= LODWORD(v20[1]);
    *(_QWORD *)&v18 = v7;
    if ( v7 == -1LL )
      goto LABEL_30;
    *((_QWORD *)&v18 + 1) = v15;
    *(_OWORD *)a1 = v18;
    if ( v7 >= 0xC )
    {
      v7 = *(_QWORD *)(a1 + 8);
      v13 = *(gsl::details **)a1;
      if ( *(_QWORD *)a1 < 0xCuLL )
        goto LABEL_30;
      v13 = (gsl::details *)((char *)v13 - 12);
      *(_QWORD *)&v19 = v13;
      if ( v13 == (gsl::details *)-1LL )
        goto LABEL_30;
      *((_QWORD *)&v19 + 1) = v7 + 12;
      v10 = v19;
      goto LABEL_22;
    }
LABEL_11:
    v7 = 0LL;
  }
  return *(_QWORD *)a1 != 0LL ? -1073741701 : -1073741275;
}
