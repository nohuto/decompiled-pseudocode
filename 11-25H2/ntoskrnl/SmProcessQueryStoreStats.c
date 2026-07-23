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
  int v6; // r9d
  __int64 RegionSize; // r10
  _ST_DATA_MGR_STATS::$94C4BE97FD0F81C7851F3B6009F5EE10 *Space; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 RegionsInUse; // rax
  struct _ST_STATS v13; // [rsp+20h] [rbp-628h] BYREF

  memset_0(&v13, 0, sizeof(v13));
  v6 = SmpProcessQueryStoreStats(a1, &v13);
  if ( v6 >= 0 )
  {
    if ( a2 )
    {
      RegionSize = v13.Basic.RegionSize;
      Space = v13.Basic.UserData.Space;
      v10 = 0LL;
      v11 = 8LL;
      do
      {
        RegionsInUse = Space->RegionsInUse;
        ++Space;
        v10 += RegionSize * RegionsInUse;
        *a2 = v10;
        --v11;
      }
      while ( v11 );
    }
    if ( a3 )
      *a3 = (unsigned __int64)v13.Basic.UserData.PagesStored << 12;
  }
  return (unsigned int)v6;
}
