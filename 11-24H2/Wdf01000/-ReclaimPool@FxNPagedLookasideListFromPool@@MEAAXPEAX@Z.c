/*
 * XREFs of ?ReclaimPool@FxNPagedLookasideListFromPool@@MEAAXPEAX@Z @ 0x14006AC90
 * Callers:
 *     <none>
 * Callees:
 *     FxFreeToNPagedLookasideList @ 0x14000BF30 (FxFreeToNPagedLookasideList.c)
 */

void __fastcall FxNPagedLookasideListFromPool::ReclaimPool(FxNPagedLookasideListFromPool *this, void *Pool)
{
  FxFreeToNPagedLookasideList(&this->m_PoolLookaside, Pool);
}
