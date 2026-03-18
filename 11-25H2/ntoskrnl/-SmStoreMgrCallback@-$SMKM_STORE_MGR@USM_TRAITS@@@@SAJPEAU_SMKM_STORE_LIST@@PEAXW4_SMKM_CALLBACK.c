/*
 * XREFs of ?SmStoreMgrCallback@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_LIST@@PEAXW4_SMKM_CALLBACK_TYPE@@@Z @ 0x140396160
 * Callers:
 *     <none>
 * Callees:
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140396200 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?SmFeStoreDelete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@K@Z @ 0x1403D3F50 (-SmFeStoreDelete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@K@Z.c)
 *     ?SmFeEmpty@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1405FE01C (-SmFeEmpty@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmStoreMgrCallback(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax

  switch ( a3 )
  {
    case 1:
      SMKM_STORE<SM_TRAITS>::SmStCleanup(a2);
      ExFreePoolWithTag((PVOID)a2, 0);
      break;
    case 7:
      *(_BYTE *)(a2 + 6837) |= 2u;
      break;
    case 2:
      SMKM_STORE_MGR<SM_TRAITS>::SmFeStoreDelete(a1, *(_DWORD *)(a2 + 6832) & 0x3FF);
      break;
    case 4:
      SMKM_STORE_MGR<SM_TRAITS>::SmFeEmpty();
      break;
  }
  result = 0LL;
  if ( *(_QWORD *)(a1 + 2008) )
    return guard_dispatch_icall_no_overrides(a1, a2);
  return result;
}
