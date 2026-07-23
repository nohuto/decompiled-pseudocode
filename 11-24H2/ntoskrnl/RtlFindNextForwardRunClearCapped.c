/*
 * XREFs of RtlFindNextForwardRunClearCapped @ 0x1403C3A80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlFindNextForwardRunClearCapped(
        unsigned int *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int *a4)
{
  unsigned int v4; // esi
  unsigned int v5; // r10d
  __int64 v8; // r15
  unsigned __int64 v9; // rax
  int v10; // r11d
  __int64 v11; // rax
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // rcx
  int v14; // r11d
  unsigned int v15; // r11d
  __int64 v16; // rcx
  unsigned int v17; // edx
  unsigned int v18; // r8d
  __int64 v19; // rcx
  unsigned int v20; // r10d
  unsigned int v21; // ecx

  v4 = *a1;
  v5 = 0;
  if ( *a1 <= a2 )
  {
    *a4 = a2;
    return 0LL;
  }
  else
  {
    v8 = *((_QWORD *)a1 + 1);
    v9 = (unsigned __int64)a2 >> 5;
    v10 = *(_DWORD *)(v8 + 4 * v9);
    v11 = v8 + 4 * v9;
    v12 = v8 + 4 * ((unsigned __int64)(v4 - 1) >> 5);
    v13 = v11 + 4;
    v14 = ((1 << (a2 & 0x1F)) - 1) | v10;
    while ( 1 )
    {
      v15 = ~v14;
      if ( v15 )
        break;
      if ( v13 > v12 )
        goto LABEL_18;
      v14 = *(_DWORD *)(v11 + 4);
      v11 += 4LL;
      v13 += 4LL;
    }
    _BitScanForward64((unsigned __int64 *)&v16, v15);
    v17 = v16 + 32 * ((v11 - v8) >> 2);
    if ( v17 > v4 )
    {
LABEL_18:
      v17 = v4;
      goto LABEL_17;
    }
    v18 = ~(v15 | ((1 << v16) - 1));
    while ( 1 )
    {
      if ( v18 )
      {
        _BitScanForward64((unsigned __int64 *)&v19, v18);
        goto LABEL_13;
      }
      if ( v5 > a3 )
        break;
      v5 += 32;
      if ( v11 + 4 > v12 )
        break;
      v18 = *(_DWORD *)(v11 + 4);
      v11 += 4LL;
    }
    LODWORD(v19) = 32;
LABEL_13:
    v20 = v4;
    v21 = 32 * ((v11 - v8) >> 2) + v19;
    if ( v21 <= v4 )
      v20 = v21;
    v5 = v20 - v17;
    if ( v5 > a3 )
      v5 = a3;
LABEL_17:
    *a4 = v17;
    return v5;
  }
}
