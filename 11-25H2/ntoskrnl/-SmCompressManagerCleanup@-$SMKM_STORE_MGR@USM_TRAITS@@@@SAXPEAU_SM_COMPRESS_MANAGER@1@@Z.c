/*
 * XREFs of ?SmCompressManagerCleanup@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_MANAGER@1@@Z @ 0x1405FDC00
 * Callers:
 *     ?SmCleanup@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1405FDAE4 (-SmCleanup@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     ExWaitForRundownProtectionRelease @ 0x14036DCA0 (ExWaitForRundownProtectionRelease.c)
 *     ?SmDrainSList@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAT_SLIST_HEADER@@K@Z @ 0x140469924 (-SmDrainSList@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAT_SLIST_HEADER@@K@Z.c)
 *     ?SmCompressCtxUpdatePriority@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@J@Z @ 0x1404B30D4 (-SmCompressCtxUpdatePriority@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@J@Z.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmCompressManagerCleanup(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rsi
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 v6; // rbp
  void *v7; // rcx

  v1 = 0LL;
  v3 = *(unsigned int *)(*(_QWORD *)a1 + 2004LL);
  if ( *(_QWORD *)(a1 + 16) )
  {
    if ( (_DWORD)v3 )
    {
      v4 = 0LL;
      v5 = (unsigned int)v3;
      do
      {
        v6 = v4 + *(_QWORD *)(a1 + 16);
        if ( *(_QWORD *)(v6 + 104) != v6 + 104 )
          SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxUpdatePriority((PEX_SPIN_LOCK)(v4 + *(_QWORD *)(a1 + 16)), 12);
        KeSetEvent((PRKEVENT)(v6 + 80), 0, 0);
        ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(v6 + 144));
        v4 += 176LL;
        --v5;
      }
      while ( v5 );
    }
    ExFreePoolWithTag(*(PVOID *)(a1 + 16), 0);
  }
  v7 = *(void **)(a1 + 24);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  if ( *(_QWORD *)(a1 + 32) )
  {
    if ( (_DWORD)v3 )
    {
      do
      {
        SMKM_STORE_MGR<SM_TRAITS>::SmDrainSList((_SLIST_HEADER *)(v1 + *(_QWORD *)(a1 + 32)), 1);
        v1 += 16LL;
        --v3;
      }
      while ( v3 );
    }
    ExFreePoolWithTag(*(PVOID *)(a1 + 32), 0);
  }
}
