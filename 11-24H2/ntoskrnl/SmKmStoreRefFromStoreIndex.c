/*
 * XREFs of SmKmStoreRefFromStoreIndex @ 0x14041E240
 * Callers:
 *     SmKmStoreDeleteWhenEmptyWorker @ 0x14041E1D0 (SmKmStoreDeleteWhenEmptyWorker.c)
 *     SmGetStoreOwnerProcessId @ 0x14060D3FC (SmGetStoreOwnerProcessId.c)
 *     SmProcessListRequest @ 0x1407980E8 (SmProcessListRequest.c)
 *     SmKmStoreDelete @ 0x140A4DC40 (SmKmStoreDelete.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmKmStoreRefFromStoreIndex(__int64 a1, unsigned int a2)
{
  __int64 v2; // r8

  v2 = *(_QWORD *)(a1 + 8 * ((unsigned __int64)a2 >> 5));
  if ( v2 )
    return v2 + 40LL * (a2 & 0x1F);
  else
    return 0LL;
}
