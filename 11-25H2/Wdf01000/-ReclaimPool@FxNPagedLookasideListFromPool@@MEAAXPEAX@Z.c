/*
 * XREFs of ?ReclaimPool@FxNPagedLookasideListFromPool@@MEAAXPEAX@Z @ 0x14006C2F0
 * Callers:
 *     <none>
 * Callees:
 *     FxFreeToNPagedLookasideList @ 0x140032D00 (FxFreeToNPagedLookasideList.c)
 */

void __fastcall FxNPagedLookasideListFromPool::ReclaimPool(FxNPagedLookasideListFromPool *this, _SLIST_ENTRY *Pool)
{
  FxFreeToNPagedLookasideList(&this->m_PoolLookaside, Pool);
}
