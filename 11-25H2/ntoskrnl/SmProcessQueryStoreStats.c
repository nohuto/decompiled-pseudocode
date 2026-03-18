/*
 * XREFs of SmProcessQueryStoreStats @ 0x1408DFCB4
 * Callers:
 *     PfpPrivSourceEnum @ 0x1408DED60 (PfpPrivSourceEnum.c)
 * Callees:
 *     ?SmpProcessQueryStoreStats@@YAJPEAU_EPROCESS@@PEAU_ST_STATS@@@Z @ 0x140324178 (-SmpProcessQueryStoreStats@@YAJPEAU_EPROCESS@@PEAU_ST_STATS@@@Z.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall SmProcessQueryStoreStats(struct _EPROCESS *a1, _QWORD *a2, _QWORD *a3)
{
  int StoreStats; // r9d
  __int64 v8; // r10
  char *v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rax
  _BYTE v13[12]; // [rsp+20h] [rbp-628h] BYREF
  unsigned int v14; // [rsp+2Ch] [rbp-61Ch]
  unsigned int v15; // [rsp+40h] [rbp-608h]
  char v16; // [rsp+4Ch] [rbp-5FCh] BYREF

  memset_0(v13, 0, 0x600uLL);
  StoreStats = SmpProcessQueryStoreStats(a1, (struct _ST_STATS *)v13);
  if ( StoreStats >= 0 )
  {
    if ( a2 )
    {
      v8 = v14;
      v9 = &v16;
      v10 = 0LL;
      v11 = 8LL;
      do
      {
        v12 = *(unsigned int *)v9;
        v9 += 8;
        v10 += v8 * v12;
        *a2 = v10;
        --v11;
      }
      while ( v11 );
    }
    if ( a3 )
      *a3 = (unsigned __int64)v15 << 12;
  }
  return (unsigned int)StoreStats;
}
