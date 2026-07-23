/*
 * XREFs of RtlpAddToMergedRange @ 0x14077D60C
 * Callers:
 *     RtlpAddIntersectingRanges @ 0x14077D3EC (RtlpAddIntersectingRanges.c)
 *     RtlpDeleteFromMergedRange @ 0x14077D738 (RtlpDeleteFromMergedRange.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpAddToMergedRange(__int64 a1, unsigned __int64 *a2, char a3)
{
  __int64 *v3; // rsi
  unsigned __int64 v4; // r9
  __int64 *v5; // r11
  char v6; // di
  unsigned __int64 *v9; // r9
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rax
  bool v12; // cf
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // rbx
  __int64 *v16; // rcx
  __int64 **v17; // r8
  __int64 v18; // rax
  unsigned __int64 v19; // rax
  char v20; // al

  v3 = (__int64 *)(a1 + 16);
  v4 = *(_QWORD *)(a1 + 16);
  v5 = 0LL;
  v6 = *((_BYTE *)a2 + 33) & 1;
  while ( 1 )
  {
    v9 = (unsigned __int64 *)(v4 - 40);
    if ( v3 == (__int64 *)(v9 + 5) )
      break;
    v10 = *v9;
    v11 = *a2;
    v12 = *a2 < *v9;
    if ( *a2 > *v9 )
    {
      v13 = *v9;
      v14 = *a2;
      if ( v9[1] < v11 )
        goto LABEL_12;
      v12 = v11 < v10;
    }
    if ( !v12 || (v13 = *v9, v14 = *a2, a2[1] >= v10) )
    {
      if ( !v6 || (v13 = *v9, v14 = *a2, (*((_BYTE *)v9 + 33) & 1) == 0) )
      {
        if ( (a3 & 1) == 0 )
          return 3221226114LL;
        *((_BYTE *)v9 + 33) |= 2u;
        *((_BYTE *)a2 + 33) |= 2u;
        v13 = *v9;
        v14 = *a2;
      }
    }
LABEL_12:
    if ( !v5 && v13 > v14 )
      v5 = (__int64 *)v9[6];
    v4 = v9[5];
  }
  v16 = (__int64 *)(a2 + 5);
  if ( v5 )
  {
    v18 = *v5;
    *v16 = *v5;
    a2[6] = (unsigned __int64)v5;
    *(_QWORD *)(v18 + 8) = v16;
    *v5 = (__int64)v16;
  }
  else
  {
    v17 = *(__int64 ***)(a1 + 24);
    if ( *v17 != (__int64 *)(a1 + 16) )
      __fastfail(3u);
    *v16 = a1 + 16;
    a2[6] = (unsigned __int64)v17;
    *v17 = v16;
    *(_QWORD *)(a1 + 24) = v16;
  }
  if ( *a2 < *(_QWORD *)a1 )
    *(_QWORD *)a1 = *a2;
  v19 = a2[1];
  if ( v19 > *(_QWORD *)(a1 + 8) )
    *(_QWORD *)(a1 + 8) = v19;
  v20 = *(_BYTE *)(a1 + 33);
  if ( (v20 & 1) != 0 && !v6 )
    *(_BYTE *)(a1 + 33) = v20 & 0xFE;
  return 0LL;
}
