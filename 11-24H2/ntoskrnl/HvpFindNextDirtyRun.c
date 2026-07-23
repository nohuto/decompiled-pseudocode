/*
 * XREFs of HvpFindNextDirtyRun @ 0x1404225D0
 * Callers:
 *     HvpFindNextDirtyBlock @ 0x140967074 (HvpFindNextDirtyBlock.c)
 * Callees:
 *     <none>
 */

char __fastcall HvpFindNextDirtyRun(unsigned int *a1, unsigned int *a2, unsigned int *a3, unsigned int *a4)
{
  unsigned int v4; // esi
  unsigned int v6; // edi
  __int64 v10; // r12
  unsigned int v11; // r10d
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rax
  int v14; // r9d
  __int64 v15; // rax
  int v16; // r9d
  unsigned __int64 i; // rcx
  unsigned int v18; // r9d
  __int64 v19; // rcx
  unsigned int v20; // r11d
  unsigned int v21; // edx
  __int64 v22; // r8
  __int64 v23; // rcx
  unsigned int v24; // r10d
  unsigned int v25; // edx
  char result; // al
  __int64 v27; // r11
  unsigned int v28; // r12d
  unsigned __int64 v29; // rbx
  _DWORD *v30; // r9
  int v31; // r10d
  _DWORD *j; // rax
  unsigned int v33; // r10d
  __int64 v34; // rcx
  unsigned int v35; // r13d
  unsigned int v36; // r12d
  unsigned __int64 v38; // [rsp+58h] [rbp+28h]

  v4 = *a2;
  v6 = *a1;
  if ( *a2 < *a1 )
  {
    v10 = *((_QWORD *)a1 + 1);
    v11 = 0;
    v38 = v6 - 1;
    v12 = v10 + 4 * (v38 >> 5);
    v13 = (unsigned __int64)v4 >> 5;
    v14 = *(_DWORD *)(v10 + 4 * v13);
    v15 = v10 + 4 * v13;
    v16 = ((1 << (v4 & 0x1F)) - 1) | v14;
    for ( i = v15 + 4; ; i += 4LL )
    {
      v18 = ~v16;
      if ( v18 )
        break;
      if ( i > v12 )
        goto LABEL_18;
      v16 = *(_DWORD *)(v15 + 4);
      v15 += 4LL;
    }
    _BitScanForward64((unsigned __int64 *)&v19, v18);
    v20 = v19 + 32 * ((v15 - v10) >> 2);
    if ( v20 > v6 )
    {
LABEL_18:
      v20 = v6;
      LODWORD(v22) = 32;
      goto LABEL_15;
    }
    v21 = ~(v18 | ((1 << v19) - 1));
    while ( 1 )
    {
      if ( v21 )
      {
        LODWORD(v22) = 32;
        _BitScanForward64((unsigned __int64 *)&v23, v21);
        goto LABEL_12;
      }
      if ( v15 + 4 > v12 )
        break;
      v21 = *(_DWORD *)(v15 + 4);
      v15 += 4LL;
    }
    LODWORD(v22) = 32;
    LODWORD(v23) = 32;
LABEL_12:
    v24 = v23 + 32 * ((v15 - v10) >> 2);
    if ( v24 > v6 )
      v24 = v6;
    v11 = v24 - v20;
LABEL_15:
    if ( !v11 )
    {
LABEL_16:
      v25 = v6;
LABEL_17:
      *a2 = v6;
      result = 1;
      *a3 = v4;
      *a4 = v25;
      return result;
    }
    if ( v20 != v4 )
    {
      v25 = v20;
      v6 = v20 + v11;
      goto LABEL_17;
    }
    v4 += v11;
    if ( v4 < v6 )
    {
      v27 = *((_QWORD *)a1 + 1);
      v28 = 0;
      v29 = v27 + 4 * (v38 >> 5);
      v30 = (_DWORD *)(v27 + 4 * ((unsigned __int64)v4 >> 5));
      v31 = ((1 << (v4 & 0x1F)) - 1) | *v30;
      for ( j = v30 + 1; ; ++j )
      {
        v33 = ~v31;
        if ( v33 )
          break;
        if ( (unsigned __int64)j > v29 )
          goto LABEL_33;
        v31 = v30[1];
        ++v30;
      }
      _BitScanForward64((unsigned __int64 *)&v34, v33);
      v25 = v34 + 32 * (((__int64)v30 - v27) >> 2);
      if ( v25 > v6 )
      {
LABEL_33:
        v25 = v6;
        goto LABEL_38;
      }
      v35 = ~(v33 | ((1 << v34) - 1));
      while ( !v35 )
      {
        if ( (unsigned __int64)(v30 + 1) > v29 )
          goto LABEL_35;
        v35 = v30[1];
        ++v30;
      }
      _BitScanForward64((unsigned __int64 *)&v22, v35);
LABEL_35:
      v36 = v22 + 32 * (((__int64)v30 - v27) >> 2);
      if ( v36 > v6 )
        v36 = v6;
      v28 = v36 - v25;
LABEL_38:
      if ( v28 )
      {
        v6 = v25 + v28;
        goto LABEL_17;
      }
      goto LABEL_16;
    }
  }
  return 0;
}
