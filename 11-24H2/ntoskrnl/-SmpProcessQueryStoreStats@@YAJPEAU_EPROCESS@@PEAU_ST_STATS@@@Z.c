/*
 * XREFs of ?SmpProcessQueryStoreStats@@YAJPEAU_EPROCESS@@PEAU_ST_STATS@@@Z @ 0x14020DD3C
 * Callers:
 *     SmQueryStoreCommitUsage @ 0x14060B030 (SmQueryStoreCommitUsage.c)
 *     EtwpLogMemInfoWs @ 0x140860034 (EtwpLogMemInfoWs.c)
 *     SmProcessQueryStoreStats @ 0x1408608B4 (SmProcessQueryStoreStats.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     ?SmStGetStoreStats@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_ST_STATS_LEVEL@@PEAU_ST_STATS@@PEAK@Z @ 0x14020DEDC (-SmStGetStoreStats@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_ST_STATS_LEVEL@@PEAU_ST_STATS@@PEAK@Z.c)
 *     SmKmStoreGet @ 0x14020DEF4 (SmKmStoreGet.c)
 *     SmpKeyedStoreEntryGet @ 0x14020DF80 (SmpKeyedStoreEntryGet.c)
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 */

__int64 __fastcall SmpProcessQueryStoreStats(struct _EPROCESS *a1, struct _ST_STATS *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  unsigned int v5; // ebx
  int v6; // esi
  __int64 v7; // rax
  __int64 v8; // rdx
  unsigned int StoreStats; // ebx
  BOOLEAN v11; // al
  int v12; // [rsp+40h] [rbp+8h] BYREF
  struct _EPROCESS *v13; // [rsp+50h] [rbp+18h]

  v13 = 0LL;
  v3 = *((_QWORD *)a1->PartitionObject + 3);
  if ( a1 == *(struct _EPROCESS **)(v3 + 2168) )
  {
    v5 = *(_DWORD *)(v3 + 2272);
    if ( v5 != -1 )
    {
      v11 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(v3 + 2112));
      v6 = v11;
      if ( !v11 )
        return (unsigned int)-1073740640;
      goto LABEL_4;
    }
    return (unsigned int)-1073741275;
  }
  v13 = a1;
  v4 = SmpKeyedStoreEntryGet(v3 + 2232);
  if ( !v4 )
    return (unsigned int)-1073741275;
  v5 = *(unsigned __int16 *)(v4 + 16);
  v6 = 0;
LABEL_4:
  v7 = SmKmStoreGet(v3, v5);
  v12 = 1536;
  StoreStats = SMKM_STORE<SM_TRAITS>::SmStGetStoreStats(v7, v8, a2, &v12);
  if ( v6 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v3 + 2112));
  return StoreStats;
}
