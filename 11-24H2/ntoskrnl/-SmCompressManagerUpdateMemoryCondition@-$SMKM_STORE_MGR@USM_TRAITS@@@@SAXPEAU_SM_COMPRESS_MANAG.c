/*
 * XREFs of ?SmCompressManagerUpdateMemoryCondition@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_MANAGER@1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x1404B0A90
 * Callers:
 *     ?SmUpdateMemoryConditions@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x1402F5EA4 (-SmUpdateMemoryConditions@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@K@Z.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x1402195E0 (ExReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x1402C2D30 (ExAcquireSpinLockShared.c)
 *     ?SmCompressCtxUpdatePriority@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@J@Z @ 0x1404ADAE4 (-SmCompressCtxUpdatePriority@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@J@Z.c)
 */

void __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmCompressManagerUpdateMemoryCondition(__int64 a1, int a2, int a3)
{
  __int64 v5; // rsi
  int v6; // ebx
  KIRQL v7; // r8
  unsigned int v8; // edx
  __int64 v9; // rbp
  int v10; // ecx
  __int64 v11; // rsi
  unsigned int v12; // edx
  unsigned int v13; // eax

  v5 = *(_QWORD *)(*(_QWORD *)a1 + 2016LL);
  if ( a2 == 4 )
    v6 = 7;
  else
    v6 = *((_DWORD *)`SMKM_STORE<SM_TRAITS>::SmStGetPriorityByMemoryCondition'::`2'::PriorityByMemoryCondition + a2);
  v7 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 8));
  v8 = *(_DWORD *)(a1 + 312);
  v9 = *(unsigned int *)(*(_QWORD *)a1 + 2004LL);
  v10 = *(_DWORD *)(v5 + 52);
  v11 = 0LL;
  if ( v10 || !a3 )
  {
    v12 = 1;
    goto LABEL_16;
  }
  if ( v6 <= 7 )
  {
    v8 *= 3;
LABEL_12:
    v12 = v8 >> 2;
    goto LABEL_14;
  }
  if ( v6 <= 8 )
  {
    v12 = v8 >> 1;
    goto LABEL_14;
  }
  if ( v6 <= 10 )
    goto LABEL_12;
  v12 = v8 >> 3;
LABEL_14:
  if ( v12 >= 0x10 )
    v12 = 16;
LABEL_16:
  v13 = *(_DWORD *)(*(_QWORD *)a1 + 2004LL);
  if ( v12 > (unsigned int)v9 )
    v13 = v12;
  *(_DWORD *)(a1 + 40) = v13;
  ExReleaseSpinLockShared((PEX_SPIN_LOCK)(a1 + 8), v7);
  if ( *(_DWORD *)(a1 + 316) != v6 )
  {
    *(_DWORD *)(a1 + 316) = v6;
    if ( (_DWORD)v9 )
    {
      do
      {
        SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxUpdatePriority((PEX_SPIN_LOCK)(v11 + *(_QWORD *)(a1 + 16)), v6);
        v11 += 176LL;
        --v9;
      }
      while ( v9 );
    }
  }
}
