/*
 * XREFs of LdrApplyDynamicRelocations @ 0x1405ED2C8
 * Callers:
 *     MiApplyDynamicRelocations @ 0x140C5ADDC (MiApplyDynamicRelocations.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LdrApplyDynamicRelocations(
        __int64 a1,
        _DWORD *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        __int64 a7,
        __int64 a8)
{
  _DWORD *v10; // r8
  unsigned __int64 v11; // rdx
  unsigned __int64 i; // rcx
  unsigned int *v13; // r9
  unsigned int *j; // rdx
  __int64 v15; // rax
  unsigned int *v16; // r11
  unsigned __int64 v17; // r8
  unsigned int v18; // r10d
  unsigned __int64 v19; // rdi
  __int64 v20; // rax
  unsigned __int64 v21; // r8

  if ( *a2 != 1 )
    return 3221225659LL;
  v10 = a2 + 2;
  v11 = (unsigned __int64)a2 + (unsigned int)a2[1] + 8;
  if ( v11 < (unsigned __int64)v10 )
    return 3221225595LL;
  for ( i = (unsigned __int64)v10; i != v11; i += *(unsigned int *)(i + 8) + 12LL )
  {
    v13 = (unsigned int *)(i + *(unsigned int *)(i + 8) + 12LL);
    if ( i < (unsigned __int64)v10 || (unsigned __int64)v13 > v11 || (unsigned __int64)v13 < i )
      return 3221225595LL;
    if ( *(_QWORD *)i == a7 )
    {
      for ( j = (unsigned int *)(i + 12); j != v13; j = v16 )
      {
        v15 = j[1];
        if ( (unsigned int)v15 < 0xA )
          return 3221225595LL;
        if ( (v15 & 1) != 0 )
          return 3221225595LL;
        v16 = (unsigned int *)((char *)j + v15);
        if ( (unsigned __int64)j <= i || v16 > v13 || v16 < j )
          return 3221225595LL;
        v17 = a1 + *j;
        v18 = 0;
        v19 = (unsigned __int64)(v15 - 8) >> 1;
        while ( v18 < (unsigned int)v19 )
        {
          v20 = *((unsigned __int16 *)j + v18 + 4);
          if ( !(_WORD)v20 )
          {
            if ( v18 )
              break;
          }
          if ( (unsigned __int16)v20 >= 0x1000u )
            return 3221225595LL;
          v21 = v20 | v17;
          *(_QWORD *)v21 += a8 - a7;
          v17 = v21 & 0xFFFFFFFFFFFFF000uLL;
          ++v18;
        }
      }
      return 0LL;
    }
  }
  return 0LL;
}
