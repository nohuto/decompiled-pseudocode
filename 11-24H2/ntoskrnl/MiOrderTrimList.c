/*
 * XREFs of MiOrderTrimList @ 0x140425554
 * Callers:
 *     MiProcessWorkingSets @ 0x1402F2D10 (MiProcessWorkingSets.c)
 * Callees:
 *     MiIsStoreProcess @ 0x140343630 (MiIsStoreProcess.c)
 *     MiUpdateClaimDistribution @ 0x1404257E0 (MiUpdateClaimDistribution.c)
 *     MiWorkingSetVeryLarge @ 0x140425840 (MiWorkingSetVeryLarge.c)
 *     MiComputeAgeDistribution @ 0x140425950 (MiComputeAgeDistribution.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

unsigned __int64 __fastcall MiOrderTrimList(_QWORD *a1, unsigned int a2)
{
  unsigned int v2; // ebx
  _QWORD *v4; // rsi
  __int64 v5; // r15
  _QWORD *v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rcx
  _QWORD *v9; // r14
  __int64 v10; // rax
  unsigned __int64 v11; // r12
  int v12; // ebx
  unsigned int i; // edx
  _BYTE *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 j; // rdx
  unsigned int v21; // r8d
  _QWORD *v22; // rcx
  _QWORD *v23; // rax
  _QWORD *v24; // rdx
  __int64 v25; // rbx
  unsigned __int64 result; // rax
  _BYTE *v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rax
  _QWORD *v30; // rcx
  unsigned __int64 v32; // [rsp+28h] [rbp-150h]
  _BYTE Src[64]; // [rsp+30h] [rbp-148h] BYREF
  _BYTE v34[192]; // [rsp+70h] [rbp-108h] BYREF

  v2 = a2;
  memset_0(Src, 0, sizeof(Src));
  v4 = a1 + 2201;
  if ( (_QWORD *)*v4 == v4 )
    return 0LL;
  v5 = a1[2200];
  v6 = v34;
  v7 = 0LL;
  v32 = 0LL;
  v8 = 12LL;
  do
  {
    v6[1] = v6;
    *v6 = v6;
    v6 += 2;
    --v8;
  }
  while ( v8 );
  while ( 1 )
  {
    v9 = (_QWORD *)*v4;
    if ( (_QWORD *)*v4 == v4 )
      break;
    if ( (_QWORD *)v9[1] != v4 || (v10 = *v9, *(_QWORD **)(*v9 + 8LL) != v9) )
LABEL_12:
      __fastfail(3u);
    *v4 = v10;
    *(_QWORD *)(v10 + 8) = v4;
    MiUpdateClaimDistribution(v9 - 3, Src);
    v11 = 0LL;
    if ( v2 < 8 )
    {
      v16 = 8 - v2;
      v17 = &v9[v2 + 2];
      do
      {
        v18 = *v17++;
        v11 += v18;
        --v16;
      }
      while ( v16 );
    }
    v12 = *((_DWORD *)v9 + 40);
    if ( (v12 & 0xF) == 0 && MiIsStoreProcess((__int64)(v9 - 131)) )
    {
LABEL_10:
      i = 11;
      goto LABEL_11;
    }
    if ( BYTE2(v12) != 2 || (unsigned int)MiWorkingSetVeryLarge(v9 - 3, 0LL) )
    {
      if ( !v11 || (v12 & 0x80u) != 0 && v9[15] <= v9[11] )
        goto LABEL_10;
      for ( i = 0; i < 9; ++i )
      {
        if ( v11 >= 0x100000uLL >> i )
          goto LABEL_24;
      }
      if ( i >= 0xA )
        goto LABEL_11;
LABEL_24:
      v19 = -1LL;
      if ( v32 + v11 >= v32 )
        v19 = v32 + v11;
      v32 = v19;
    }
    else
    {
      i = 10;
    }
LABEL_11:
    v14 = &v34[16 * i];
    v15 = *(_QWORD *)v14;
    if ( *(_BYTE **)(*(_QWORD *)v14 + 8LL) != v14 )
      goto LABEL_12;
    v2 = a2;
    *v9 = v15;
    v9[1] = v14;
    *(_QWORD *)(v15 + 8) = v9;
    *(_QWORD *)v14 = v9;
  }
  for ( j = 0LL; (unsigned int)j < 0xC; j = v21 )
  {
    v21 = j + 1;
    v22 = &v34[16 * (unsigned int)j];
    v23 = (_QWORD *)*v22;
    if ( (_QWORD *)*v22 != v22 )
    {
      *v4 = v23;
      v23[1] = v4;
      if ( v21 < 0xC )
      {
        v27 = &v34[16 * v21];
        do
        {
          if ( *(_BYTE **)v27 != v27 )
          {
            v28 = 2 * j;
            **(_QWORD **)&v34[8 * v28 + 8] = *(_QWORD *)v27;
            v29 = *(_QWORD *)&v34[8 * v28 + 8];
            j = v21;
            *(_QWORD *)(*(_QWORD *)v27 + 8LL) = v29;
          }
          ++v21;
          v27 += 16;
        }
        while ( v21 < 0xC );
      }
      v30 = *(_QWORD **)&v34[16 * (unsigned int)j + 8];
      a1[2202] = v30;
      *v30 = v4;
      break;
    }
  }
  memmove((void *)(v5 + 344), Src, 0x40uLL);
  v24 = (_QWORD *)(v5 + 392);
  v25 = 2LL;
  do
  {
    v7 += *v24++;
    --v25;
  }
  while ( v25 );
  *(_QWORD *)(v5 + 336) = v7;
  *(_WORD *)(v5 + 274) = MiComputeAgeDistribution(a1, 0LL);
  result = v32;
  *(_BYTE *)(v5 + 54) = 1;
  return result;
}
