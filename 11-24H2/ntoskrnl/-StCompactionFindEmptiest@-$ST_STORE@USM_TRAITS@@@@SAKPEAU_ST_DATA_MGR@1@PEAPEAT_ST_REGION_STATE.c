/*
 * XREFs of ?StCompactionFindEmptiest@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAPEAT_ST_REGION_STATE@1@KKK@Z @ 0x1404F5648
 * Callers:
 *     ?StCompactionPerformInMem@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x1404F53C8 (-StCompactionPerformInMem@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StCompactionFindEmptiest(
        __int64 a1,
        char *a2,
        unsigned int a3,
        unsigned int a4,
        int a5)
{
  unsigned __int64 v7; // rcx
  char *v10; // r13
  unsigned int v11; // edi
  unsigned int v12; // esi
  int v13; // eax
  unsigned int v14; // ecx
  char *i; // rbx
  _WORD *v17; // [rsp+60h] [rbp+8h]
  __int16 v18; // [rsp+70h] [rbp+18h] BYREF

  v7 = a3;
  v18 = 0x1FFF;
  v10 = &a2[8 * a3];
  if ( a2 > v10 )
    v7 = 0LL;
  if ( v7 )
    memset64(a2, (unsigned __int64)&v18, v7);
  v11 = 0;
  v12 = 0;
  if ( *(_DWORD *)(a1 + 788) )
  {
    do
    {
      v17 = (_WORD *)(*(_QWORD *)(a1 + 1416) + 2LL * v12);
      if ( (*v17 & 0x1FFF) != 0 && (*v17 & 0x1FFFu) <= a4 )
      {
        v13 = a5;
        v14 = (unsigned __int16)*v17 >> 13;
        if ( *(_BYTE *)(a1 + 776) )
          v14 = 0;
        if ( _bittest(&v13, v14) && v12 != *(_DWORD *)(a1 + 16 * (v14 + 102LL)) )
        {
          for ( i = a2; i < v10; i += 8 )
          {
            if ( (unsigned __int16)(*v17 & 0x1FFF) < (unsigned __int16)(**(_WORD **)i & 0x1FFF) )
            {
              memmove(i + 8, i, v10 - i - 8);
              *(_QWORD *)i = v17;
              if ( v11 >= a3 || (++v11, v11 >= a3) )
                a4 = (**((_WORD **)v10 - 1) & 0x1FFF) - 1;
              break;
            }
          }
        }
      }
      ++v12;
    }
    while ( v12 != *(_DWORD *)(a1 + 788) );
  }
  return v11;
}
