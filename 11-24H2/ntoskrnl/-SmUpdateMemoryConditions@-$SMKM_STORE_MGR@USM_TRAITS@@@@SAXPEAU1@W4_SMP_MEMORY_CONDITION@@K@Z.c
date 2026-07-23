/*
 * XREFs of ?SmUpdateMemoryConditions@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x1402F5EA4
 * Callers:
 *     MiStoreUpdateMemoryConditions @ 0x1402F4DDC (MiStoreUpdateMemoryConditions.c)
 * Callees:
 *     SmKmStoreDereference @ 0x14022FA28 (SmKmStoreDereference.c)
 *     ?SmStUpdateMemoryCondition@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@@Z @ 0x1402F4534 (-SmStUpdateMemoryCondition@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@@Z.c)
 *     SmKmStoreReferenceEx @ 0x1402F5F30 (SmKmStoreReferenceEx.c)
 *     ?SmCompressManagerUpdateMemoryCondition@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_MANAGER@1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x1404B0A90 (-SmCompressManagerUpdateMemoryCondition@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_MANAG.c)
 */

void __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmUpdateMemoryConditions(__int64 a1, int a2)
{
  unsigned int i; // ebx
  __int64 v5; // rax
  __int64 v6; // rsi

  if ( (*(_DWORD *)(a1 + 2000) & 0x20) != 0 )
    SMKM_STORE_MGR<SM_TRAITS>::SmCompressManagerUpdateMemoryCondition(a1 + 1264);
  for ( i = 0; i < 0x400; ++i )
  {
    v5 = SmKmStoreReferenceEx(a1, i);
    v6 = v5;
    if ( v5 )
    {
      SMKM_STORE<SM_TRAITS>::SmStUpdateMemoryCondition(v5, a2);
      SmKmStoreDereference(a1, *(_DWORD *)(v6 + 6832));
    }
  }
}
