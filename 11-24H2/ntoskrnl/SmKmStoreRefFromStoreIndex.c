/*
 * XREFs of SmKmStoreRefFromStoreIndex @ 0x14042B6B0
 * Callers:
 *     SmKmStoreDeleteWhenEmptyWorker @ 0x14042B640 (SmKmStoreDeleteWhenEmptyWorker.c)
 *     SmGetStoreOwnerProcessId @ 0x14060EE3C (SmGetStoreOwnerProcessId.c)
 *     SmProcessListRequest @ 0x140797FD8 (SmProcessListRequest.c)
 *     SmKmStoreDelete @ 0x140A55CF0 (SmKmStoreDelete.c)
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
