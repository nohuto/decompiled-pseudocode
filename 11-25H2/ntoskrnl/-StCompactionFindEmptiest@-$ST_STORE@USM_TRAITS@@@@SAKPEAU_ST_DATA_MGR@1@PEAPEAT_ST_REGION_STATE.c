/*
 * XREFs of ?StCompactionFindEmptiest@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAPEAT_ST_REGION_STATE@1@KKK@Z @ 0x1405FE62C
 * Callers:
 *     ?StCompactionPerformInMem@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x1405FE778 (-StCompactionPerformInMem@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z.c)
 * Callees:
 *     memmove @ 0x1406B4940 (memmove.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StCompactionFindEmptiest(
        __int64 a1,
        char *a2,
        unsigned int a3,
        unsigned int a4,
        int a5)
{
  unsigned __int64 v6; // rcx
  char *v9; // r13
  unsigned int v10; // esi
  unsigned int v11; // ebx
  _WORD *v12; // r12
  int v13; // eax
  unsigned int v14; // ecx
  _WORD **v15; // rdi
  _WORD **v16; // r9
  bool v17; // cf
  unsigned int v18; // eax
  __int16 v20; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v21; // [rsp+70h] [rbp+18h]

  v21 = a3;
  v6 = a3;
  v20 = 0x1FFF;
  v9 = &a2[8 * a3];
  if ( a2 > v9 )
    v6 = 0LL;
  if ( v6 )
    memset64(a2, (unsigned __int64)&v20, v6);
  v10 = 0;
  v11 = 0;
  if ( *(_DWORD *)(a1 + 788) )
  {
    do
    {
      v12 = (_WORD *)(*(_QWORD *)(a1 + 1416) + 2LL * v11);
      if ( (*v12 & 0x1FFF) != 0 && (*v12 & 0x1FFFu) <= a4 )
      {
        v13 = a5;
        v14 = (unsigned __int16)*v12 >> 13;
        if ( *(_BYTE *)(a1 + 776) )
          v14 = 0;
        if ( _bittest(&v13, v14) )
        {
          if ( v11 != *(_DWORD *)(a1 + 16 * (v14 + 102LL)) )
          {
            v15 = (_WORD **)a2;
            if ( a2 < v9 )
            {
              while ( 1 )
              {
                v16 = v15 + 1;
                if ( (unsigned __int16)(*v12 & 0x1FFF) < (unsigned __int16)(**v15 & 0x1FFF) )
                  break;
                ++v15;
                if ( v16 >= (_WORD **)v9 )
                  goto LABEL_20;
              }
              memmove(v15 + 1, v15, v9 - (char *)v15 - 8);
              v17 = v10 < v21;
              v18 = v10 + 1;
              *v15 = v12;
              if ( !v17 )
                v18 = v10;
              v10 = v18;
              if ( v18 >= v21 )
                a4 = (**((_WORD **)v9 - 1) & 0x1FFF) - 1;
            }
          }
        }
      }
LABEL_20:
      ++v11;
    }
    while ( v11 != *(_DWORD *)(a1 + 788) );
  }
  return v10;
}
