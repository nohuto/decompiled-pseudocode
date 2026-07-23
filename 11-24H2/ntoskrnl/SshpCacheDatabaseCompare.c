/*
 * XREFs of SshpCacheDatabaseCompare @ 0x14088C5C0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memcmp @ 0x1406C0E10 (memcmp.c)
 *     RtlCompareUnicodeStrings @ 0x14088C7D0 (RtlCompareUnicodeStrings.c)
 */

__int64 __fastcall SshpCacheDatabaseCompare(_RTL_AVL_TABLE *a1, _QWORD *a2, _QWORD *a3)
{
  _DWORD *TableContext; // r14
  unsigned int v4; // ebx
  int v5; // ecx
  _QWORD *v6; // rsi
  _QWORD *v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rcx
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int64 v12; // rax
  __int64 v13; // rcx
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  int v16; // r14d
  LONG v17; // eax
  bool v18; // sf
  int *v20; // r9
  __int64 v21; // rdx
  unsigned __int16 v22; // ax
  bool v23; // cf
  unsigned int v24; // ecx
  unsigned int v25; // r8d
  unsigned int v26; // edi
  unsigned int v27; // r10d
  unsigned int v28; // r11d
  _OWORD v29[2]; // [rsp+30h] [rbp-39h] BYREF
  __int128 v30; // [rsp+50h] [rbp-19h]
  _OWORD v31[2]; // [rsp+60h] [rbp-9h] BYREF
  __int128 v32; // [rsp+80h] [rbp+17h]

  TableContext = a1->TableContext;
  v4 = 0;
  v5 = *(_DWORD *)a2;
  v6 = 0LL;
  v7 = 0LL;
  memset(v29, 0, sizeof(v29));
  v30 = 0LL;
  memset(v31, 0, sizeof(v31));
  v32 = 0LL;
  if ( v5 )
  {
    if ( v5 == 1 )
    {
      v8 = a2[1];
      v6 = v29;
      *(_OWORD *)((char *)v29 + 8) = 0LL;
      v9 = *(_QWORD *)(v8 + 304);
      v10 = *(_OWORD *)(v9 + 64);
      v11 = *(_OWORD *)(v9 + 48);
      *(_QWORD *)&v30 = v9 + 80;
      *((_QWORD *)&v30 + 1) = *(_QWORD *)(v9 + 96);
      v29[0] = v10;
      v29[1] = v11;
    }
  }
  else
  {
    v6 = (_QWORD *)a2[1];
  }
  if ( *(_DWORD *)a3 )
  {
    if ( *(_DWORD *)a3 == 1 )
    {
      v12 = a3[1];
      v7 = v31;
      *(_OWORD *)((char *)v31 + 8) = 0LL;
      v13 = *(_QWORD *)(v12 + 304);
      v14 = *(_OWORD *)(v13 + 64);
      v15 = *(_OWORD *)(v13 + 48);
      *(_QWORD *)&v32 = v13 + 80;
      *((_QWORD *)&v32 + 1) = *(_QWORD *)(v13 + 96);
      v31[0] = v14;
      v31[1] = v15;
    }
  }
  else
  {
    v7 = (_QWORD *)a3[1];
  }
  v16 = TableContext[11];
  if ( (v16 & 1) == 0 || (v17 = memcmp(v6, v7, 0x10uLL), v18 = v17 < 0, !v17) )
  {
    if ( (v16 & 2) == 0 || (v17 = memcmp(v6 + 2, v7 + 2, 0x10uLL), v18 = v17 < 0, !v17) )
    {
      if ( (v16 & 4) == 0 )
        return 2;
      v17 = RtlCompareUnicodeStrings(
              *(PCWCH *)(v6[4] + 8LL),
              (unsigned __int64)*(unsigned __int16 *)v6[4] >> 1,
              *(PCWCH *)(v7[4] + 8LL),
              (unsigned __int64)*(unsigned __int16 *)v7[4] >> 1,
              0);
      v18 = v17 < 0;
      if ( !v17 )
      {
        v20 = (int *)v6[5];
        v21 = v7[5];
        if ( !v20 )
        {
          if ( v21 )
            return 1;
          return 2;
        }
        if ( !v21 )
          return v4;
        v22 = *((_WORD *)v20 + 2);
        v23 = v22 < *(_WORD *)(v21 + 4);
        if ( v22 != *(_WORD *)(v21 + 4)
          || (v24 = *v20, v23 = (unsigned int)*v20 < *(_DWORD *)v21, *v20 != *(_DWORD *)v21)
          || (v25 = v20[2], v23 = v25 < *(_DWORD *)(v21 + 8), v25 != *(_DWORD *)(v21 + 8)) )
        {
LABEL_34:
          if ( v23 )
            return v4;
          return 1;
        }
        v26 = 4 * v24 + 12;
        v27 = 0;
        if ( v26 <= 0x10 )
          v26 = 16;
        while ( v27 < v24 )
        {
          v28 = v20[v27 + 3];
          v23 = v28 < *(_DWORD *)(v21 + 4LL * v27 + 12);
          if ( v28 != *(_DWORD *)(v21 + 4LL * v27 + 12) )
            goto LABEL_34;
          v25 += v28;
          ++v27;
        }
        v17 = memcmp((char *)v20 + v26, (const void *)(v26 + v21), 2 * v25);
        v18 = v17 < 0;
        if ( !v17 )
          return 2;
      }
    }
  }
  if ( !v18 )
  {
    if ( v17 > 0 )
      return 1;
    return 2;
  }
  return v4;
}
