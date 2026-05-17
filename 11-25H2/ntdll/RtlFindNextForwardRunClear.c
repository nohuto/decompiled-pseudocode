/*
 * XREFs of RtlFindNextForwardRunClear @ 0x1800DC9A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlFindNextForwardRunClear(unsigned int *a1, unsigned int a2, unsigned int *a3)
{
  unsigned int v3; // edi
  unsigned int v4; // ebx
  __int64 v6; // rsi
  unsigned __int64 v7; // rax
  int v8; // r10d
  __int64 v9; // rax
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // rcx
  int v12; // r10d
  unsigned int v13; // r10d
  __int64 v14; // rcx
  unsigned int v15; // edx
  unsigned int v16; // r8d
  __int64 v18; // rcx
  unsigned int v19; // ebx
  unsigned int v20; // ecx

  v3 = *a1;
  v4 = 0;
  if ( *a1 <= a2 )
  {
    *a3 = a2;
    return 0LL;
  }
  else
  {
    v6 = *((_QWORD *)a1 + 1);
    v7 = (unsigned __int64)a2 >> 5;
    v8 = *(_DWORD *)(v6 + 4 * v7);
    v9 = v6 + 4 * v7;
    v10 = v6 + 4 * ((unsigned __int64)(v3 - 1) >> 5);
    v11 = v9 + 4;
    v12 = ((1 << (a2 & 0x1F)) - 1) | v8;
    while ( 1 )
    {
      v13 = ~v12;
      if ( v13 )
        break;
      if ( v11 > v10 )
        goto LABEL_11;
      v12 = *(_DWORD *)(v9 + 4);
      v9 += 4LL;
      v11 += 4LL;
    }
    _BitScanForward64((unsigned __int64 *)&v14, v13);
    v15 = v14 + 32 * ((v9 - v6) >> 2);
    if ( v15 > v3 )
    {
LABEL_11:
      v15 = v3;
      goto LABEL_12;
    }
    v16 = ~(v13 | ((1 << v14) - 1));
    while ( 1 )
    {
      if ( v16 )
      {
        _BitScanForward64((unsigned __int64 *)&v18, v16);
        goto LABEL_14;
      }
      if ( v9 + 4 > v10 )
        break;
      v16 = *(_DWORD *)(v9 + 4);
      v9 += 4LL;
    }
    LODWORD(v18) = 32;
LABEL_14:
    v19 = v3;
    v20 = 32 * ((v9 - v6) >> 2) + v18;
    if ( v20 <= v3 )
      v19 = v20;
    v4 = v19 - v15;
LABEL_12:
    *a3 = v15;
    return v4;
  }
}
