/*
 * XREFs of ?RegisterForApplicationViewChanges@ApplicationViewManagerVisibilityDebouncer@@WBA@EAAJPEAUIApplicationViewChangeListener@@PEAK@Z @ 0x18030F150
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ApplicationViewManagerVisibilityDebouncer::RegisterForApplicationViewChanges(
        __int64 a1,
        struct IApplicationViewChangeListener *a2,
        unsigned int *a3)
{
  return ApplicationViewManagerVisibilityDebouncer::RegisterForApplicationViewChanges((RTL_SRWLOCK *)(a1 - 16), a2, a3);
}
