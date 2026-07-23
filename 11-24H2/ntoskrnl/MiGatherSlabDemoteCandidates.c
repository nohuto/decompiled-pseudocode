/*
 * XREFs of MiGatherSlabDemoteCandidates @ 0x14043C840
 * Callers:
 *     MiDemoteSlabEntriesDpc @ 0x14043B750 (MiDemoteSlabEntriesDpc.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

__int64 __fastcall MiGatherSlabDemoteCandidates(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned int v3; // edi
  unsigned __int64 v5; // rcx
  __int64 v6; // rax
  char *v8; // r15
  int v9; // r8d
  _QWORD *i; // rbx
  _QWORD **v11; // rax
  _DWORD *v12; // r13
  _QWORD *v13; // rcx
  _QWORD *v14; // rcx
  char *v15; // r14
  unsigned int v16; // r9d
  unsigned int v17; // r10d
  unsigned __int64 v18; // rbp
  unsigned int v19; // edx
  unsigned int v20; // ecx
  __int64 v21; // rax
  __int64 *v22; // r8
  unsigned __int64 v23; // r9
  __int64 v24; // rax
  __int64 v25; // rcx

  v3 = 0;
  if ( (*(_DWORD *)(a3 + 48) == 0) != *(_DWORD *)(a2 + 128) > 4u )
    return 0LL;
  v5 = *(_QWORD *)(a2 + 8);
  v6 = *(_QWORD *)a2;
  if ( (v5 & 1) != 0 )
  {
    if ( !v6 )
      return 0LL;
    v6 ^= a2;
  }
  if ( !v6 )
    return 0LL;
  v8 = (char *)(a3 + 32);
  v9 = 0;
  if ( (v5 & 1) != 0 )
  {
    if ( v5 == 1 )
      goto LABEL_28;
    i = (_QWORD *)(v5 ^ (a2 | 1));
  }
  else
  {
    i = (_QWORD *)v5;
  }
  if ( i )
  {
    while ( 1 )
    {
      v11 = (_QWORD **)i[1];
      v12 = i;
      v13 = i;
      if ( v11 )
      {
        v14 = *v11;
        for ( i = (_QWORD *)i[1]; v14; v14 = (_QWORD *)*v14 )
          i = v14;
      }
      else
      {
        while ( 1 )
        {
          i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !i || (_QWORD *)*i == v13 )
            break;
          v13 = i;
        }
      }
      if ( (v12[23] & 2) != 0 )
        goto LABEL_26;
      v15 = (char *)a3;
      v16 = v12[21];
      v17 = v16 + v12[22];
      v18 = a3 + 8LL * *(_QWORD *)v8;
      if ( a3 >= v18 )
        break;
      do
      {
        if ( !*(_DWORD *)(a3 + 48) || *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v15 + 56LL) + 128LL) <= 4u )
        {
          v19 = *(_DWORD *)(*(_QWORD *)v15 + 84LL);
          v20 = v19 + *(_DWORD *)(*(_QWORD *)v15 + 88LL);
          if ( v17 > v20 || v17 == v20 && v16 > v19 )
            break;
        }
        v15 += 8;
      }
      while ( (unsigned __int64)v15 < v18 );
      if ( (unsigned __int64)v15 >= v18 )
        break;
      memmove(v15 + 8, v15, v8 - v15 - 8);
      *(_QWORD *)v15 = v12;
      if ( v18 < (unsigned __int64)v8 )
        goto LABEL_24;
LABEL_25:
      v9 = 1;
LABEL_26:
      if ( !i )
      {
        if ( v9 )
        {
          v21 = *(_QWORD *)(a3 + 32);
          v22 = (__int64 *)a3;
          *(_QWORD *)(a3 + 40) = 0LL;
          v23 = a3 + 8 * v21;
          if ( a3 < v23 )
          {
            v24 = 0LL;
            do
            {
              v25 = *v22++;
              v24 += (unsigned int)(*(_DWORD *)(v25 + 84) + *(_DWORD *)(v25 + 88));
              *(_QWORD *)(a3 + 40) = v24;
            }
            while ( (unsigned __int64)v22 < v23 );
          }
        }
        goto LABEL_28;
      }
    }
    if ( v15 >= v8 )
      goto LABEL_26;
    *(_QWORD *)v15 = v12;
LABEL_24:
    ++*(_QWORD *)v8;
    goto LABEL_25;
  }
LABEL_28:
  LOBYTE(v3) = *(_QWORD *)(a3 + 40) >= 0x420uLL;
  return v3;
}
