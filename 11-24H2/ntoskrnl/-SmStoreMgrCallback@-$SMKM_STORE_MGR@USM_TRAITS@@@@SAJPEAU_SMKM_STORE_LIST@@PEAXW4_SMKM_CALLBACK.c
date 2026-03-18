/*
 * XREFs of ?SmStoreMgrCallback@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_LIST@@PEAXW4_SMKM_CALLBACK_TYPE@@@Z @ 0x14037DF60
 * Callers:
 *     <none>
 * Callees:
 *     ?SmFeStoreDelete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@K@Z @ 0x14037DC80 (-SmFeStoreDelete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@K@Z.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14037E000 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?SmFeEmpty@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14060A50C (-SmFeEmpty@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmStoreMgrCallback(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // r9
  __int64 result; // rax

  switch ( a3 )
  {
    case 1u:
      SMKM_STORE<SM_TRAITS>::SmStCleanup(a2);
      ExFreePoolWithTag((PVOID)a2, 0);
      break;
    case 7u:
      *(_BYTE *)(a2 + 6837) |= 2u;
      break;
    case 2u:
      SMKM_STORE_MGR<SM_TRAITS>::SmFeStoreDelete(a1, *(_DWORD *)(a2 + 6832) & 0x3FF);
      break;
    case 4u:
      SMKM_STORE_MGR<SM_TRAITS>::SmFeEmpty();
      break;
  }
  v6 = *(_QWORD *)(a1 + 2008);
  result = 0LL;
  if ( v6 )
    return guard_dispatch_icall_no_overrides(a1, a2, a3, v6);
  return result;
}
