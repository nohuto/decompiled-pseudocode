/*
 * XREFs of ?SmUpdateMemoryConditions@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x140208210
 * Callers:
 *     MiStoreUpdateMemoryConditions @ 0x1403C1B60 (MiStoreUpdateMemoryConditions.c)
 * Callees:
 *     SmKmStoreReferenceEx @ 0x1402082A0 (SmKmStoreReferenceEx.c)
 *     SmKmStoreDereference @ 0x14034AECC (SmKmStoreDereference.c)
 *     ?SmStUpdateMemoryCondition@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@@Z @ 0x1403767C8 (-SmStUpdateMemoryCondition@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@@Z.c)
 *     ?SmCompressManagerUpdateMemoryCondition@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_MANAGER@1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x1404B6720 (-SmCompressManagerUpdateMemoryCondition@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_MANAG.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmUpdateMemoryConditions(__int64 a1, unsigned int a2)
{
  unsigned int i; // ebx
  __int64 result; // rax
  __int64 v6; // rsi

  if ( (*(_DWORD *)(a1 + 2000) & 0x20) != 0 )
    SMKM_STORE_MGR<SM_TRAITS>::SmCompressManagerUpdateMemoryCondition(a1 + 1264);
  for ( i = 0; i < 0x400; ++i )
  {
    result = SmKmStoreReferenceEx(a1, i);
    v6 = result;
    if ( result )
    {
      SMKM_STORE<SM_TRAITS>::SmStUpdateMemoryCondition(result, a2);
      result = SmKmStoreDereference(a1, *(unsigned int *)(v6 + 6832));
    }
  }
  return result;
}
