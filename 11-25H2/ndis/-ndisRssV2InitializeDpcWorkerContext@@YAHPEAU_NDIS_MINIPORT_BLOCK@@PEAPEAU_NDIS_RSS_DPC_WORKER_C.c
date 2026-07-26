/*
 * XREFs of ?ndisRssV2InitializeDpcWorkerContext@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAPEAU_NDIS_RSS_DPC_WORKER_CONTEXT@@@Z @ 0x14008FFD0
 * Callers:
 *     ?ndisRssV2Initialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140096C10 (-ndisRssV2Initialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisRssV2InitializeDpcWorkerContext(PVOID DeferredContext, struct _KDPC **a2)
{
  struct _KDPC *Pool2; // rax
  struct _KDPC *v5; // rbx
  __int64 result; // rax

  *a2 = 0LL;
  Pool2 = (struct _KDPC *)ExAllocatePool2(72LL, 3208LL, 1936868430);
  v5 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  KeInitializeDpc(Pool2, (PKDEFERRED_ROUTINE)ndisEmulateRSSv1Dpc, DeferredContext);
  KeSetImportanceDpc(v5, MediumHighImportance);
  result = 0LL;
  *a2 = v5;
  return result;
}
