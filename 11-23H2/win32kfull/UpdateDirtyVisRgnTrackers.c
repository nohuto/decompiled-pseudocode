/*
 * XREFs of UpdateDirtyVisRgnTrackers @ 0x1C00E9DB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Update@CVisRgnTrackerProp@@QEAAXXZ @ 0x1C00E9E0C (-Update@CVisRgnTrackerProp@@QEAAXXZ.c)
 */

void UpdateDirtyVisRgnTrackers()
{
  struct _LIST_ENTRY *i; // rbx
  CVisRgnTrackerProp *p_Blink; // rcx

  for ( i = CVisRgnTrackerProp::s_DirtyList.Flink; i != &CVisRgnTrackerProp::s_DirtyList; i = i->Flink )
  {
    if ( i )
      p_Blink = (CVisRgnTrackerProp *)&i[-2].Blink;
    else
      p_Blink = 0LL;
    CVisRgnTrackerProp::Update(p_Blink);
  }
  CVisRgnTrackerProp::s_DirtyList.Flink = &CVisRgnTrackerProp::s_DirtyList;
  off_1C03540D8 = &CVisRgnTrackerProp::s_DirtyList;
}
