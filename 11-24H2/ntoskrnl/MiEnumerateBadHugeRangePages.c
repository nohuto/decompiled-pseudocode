/*
 * XREFs of MiEnumerateBadHugeRangePages @ 0x140670E20
 * Callers:
 *     MiEnumerateQuarantinedBadHugeRangePages @ 0x140674B7C (MiEnumerateQuarantinedBadHugeRangePages.c)
 *     MiGetListOfPendingBadPages @ 0x140674CA0 (MiGetListOfPendingBadPages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiEnumerateBadHugeRangePages(unsigned __int64 *a1, __int64 a2, char a3)
{
  _QWORD *v3; // rax
  __int64 v4; // rdi
  unsigned __int64 j; // r9
  int v8; // r15d
  __int64 v9; // r12
  unsigned __int64 v10; // r11
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rdx
  _QWORD *v14; // rdx
  __int64 i; // r10
  unsigned __int64 v16; // rax
  __int64 v17; // r8
  unsigned __int64 v18; // r8
  _QWORD **v19; // rax
  unsigned __int64 v20; // rcx
  _QWORD *v21; // rcx

  v3 = (_QWORD *)qword_140E30060;
  v4 = 0LL;
  j = 0LL;
  while ( v3 )
  {
    j = (unsigned __int64)v3;
    v3 = (_QWORD *)*v3;
  }
  while ( j )
  {
    if ( (*(_QWORD *)(qword_140E30100 + 8LL * (*(_DWORD *)(j + 24) & 0x3FFFFF)) & 7) == 4 )
    {
      if ( (a3 & 1) == 0 )
        goto LABEL_32;
      v8 = 0;
    }
    else
    {
      if ( (a3 & 2) == 0 )
        goto LABEL_32;
      v8 = 1;
    }
    v9 = *(_QWORD *)(j + 32);
    v10 = 0LL;
    do
    {
      v11 = v10 & -(__int64)(v10 < 0x40000);
      v12 = 0x3FFFFLL;
      while ( 1 )
      {
        if ( v12 - v11 == -1LL )
          goto LABEL_13;
        v14 = (_QWORD *)(v9 + 8 * (v11 >> 6));
        for ( i = ~*v14 | ((1LL << (v11 & 0x3F)) - 1); i == -1; i = ~*v14 )
        {
          if ( (unsigned __int64)++v14 > v9 + 8 * (v12 >> 6) )
            goto LABEL_13;
        }
        _BitScanForward64(&v16, ~i);
        v13 = v16 + (((__int64)v14 - v9) >> 3 << 6);
        if ( v13 > v12 )
        {
LABEL_13:
          v13 = -1LL;
        }
        else if ( v13 != -1LL )
        {
          break;
        }
        if ( !v11 )
          break;
        v17 = v10 + 1;
        if ( v10 + 1 > 0x40000 )
          v17 = 0x40000LL;
        v12 = v17 - 1;
        v11 = 0LL;
      }
      if ( v13 < v10 || v13 == -1LL )
        break;
      v18 = (v13 + ((unsigned __int64)(*(_DWORD *)(j + 24) & 0x3FFFFF) << 18)) ^ (*a1 ^ (v13
                                                                                       + ((unsigned __int64)(*(_DWORD *)(j + 24) & 0x3FFFFF) << 18))) & 0xFFF0000000000000uLL;
      *a1 = v18;
      if ( _bittest64((const signed __int64 *)(v9 + 0x8000), v13) )
      {
        v18 |= 0x8000000000000000uLL;
        *a1 = v18;
      }
      if ( v8 )
        *a1 = v18 | 0x4000000000000000LL;
      ++a1;
      if ( ++v4 == a2 )
        return v4;
      v10 = v13 + 1;
    }
    while ( v13 + 1 < 0x40000 );
LABEL_32:
    v19 = *(_QWORD ***)(j + 8);
    v20 = j;
    if ( v19 )
    {
      v21 = *v19;
      for ( j = *(_QWORD *)(j + 8); v21; v21 = (_QWORD *)*v21 )
        j = (unsigned __int64)v21;
    }
    else
    {
      while ( 1 )
      {
        j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !j || *(_QWORD *)j == v20 )
          break;
        v20 = j;
      }
    }
  }
  return v4;
}
