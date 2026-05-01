/*
 * XREFs of ?RegisterForApplicationViewChanges@ApplicationViewFilteredCollection@@WBI@EAAJPEAUIApplicationViewChangeListener@@PEAK@Z @ 0x1805BC660
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ApplicationViewFilteredCollection::RegisterForApplicationViewChanges(
        __int64 a1,
        struct IUnknown *a2,
        unsigned int *a3)
{
  return ApplicationViewFilteredCollection::RegisterForApplicationViewChanges((RTL_SRWLOCK *)(a1 - 24), a2, a3);
}
