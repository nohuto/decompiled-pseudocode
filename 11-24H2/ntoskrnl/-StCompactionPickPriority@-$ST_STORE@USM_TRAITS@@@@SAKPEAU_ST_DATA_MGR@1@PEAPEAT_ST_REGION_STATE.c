/*
 * XREFs of ?StCompactionPickPriority@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAPEAT_ST_REGION_STATE@1@K1K@Z @ 0x140447E00
 * Callers:
 *     ?StCompactionPerformInMem@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x1404F53C8 (-StCompactionPerformInMem@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StCompactionPickPriority(
        __int64 a1,
        unsigned __int16 **a2,
        unsigned int a3,
        void *a4)
{
  __int64 v4; // rbx
  unsigned __int16 **v8; // r11
  int v9; // r8d
  __int64 v10; // rcx
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 v13; // r10
  int v14; // r9d
  char *v15; // rdx
  unsigned int v16; // r8d
  int i; // ecx
  unsigned int v18; // eax
  unsigned int v19; // ebx
  unsigned __int16 *v21; // rdx
  unsigned int v22; // eax
  _DWORD v23[71]; // [rsp+20h] [rbp-168h] BYREF
  char v24; // [rsp+13Ch] [rbp-4Ch] BYREF

  v4 = a3;
  memset_0(v23, 0, 0x140uLL);
  v8 = &a2[v4];
  if ( a2 < v8 )
  {
    v9 = (unsigned __int8)*(_DWORD *)(a1 + 776);
    do
    {
      if ( v9 )
        v10 = 0LL;
      else
        v10 = **a2 >> 13;
      v11 = (unsigned int)v10;
      v12 = 5 * v10;
      v13 = (unsigned int)v23[2 * v12];
      if ( (unsigned int)v13 < 4 )
      {
        v21 = *a2;
        v23[2 * v12] = v13 + 1;
        v23[2 * v12 + 1] += *v21 & 0x1FFF;
        *(_QWORD *)&v23[10 * v11 + 2 + 2 * v13] = v21;
      }
      ++a2;
    }
    while ( a2 < v8 );
  }
  v14 = -1;
  v15 = &v24;
  v16 = 0;
  for ( i = 7; i >= 0; --i )
  {
    v18 = *((_DWORD *)v15 - 1);
    if ( v18 > 1 )
    {
      v22 = *(_DWORD *)(a1 + 816) * v18 - *(_DWORD *)v15;
      if ( v16 < v22 )
      {
        v16 = v22;
        v14 = i;
      }
    }
    v15 -= 40;
  }
  v19 = v23[10 * v14];
  if ( v19 > 4 )
    v19 = 4;
  memmove(a4, &v23[10 * v14 + 2], 8LL * v19);
  return v19;
}
