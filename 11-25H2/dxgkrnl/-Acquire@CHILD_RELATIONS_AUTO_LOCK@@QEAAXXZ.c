/*
 * XREFs of ?Acquire@CHILD_RELATIONS_AUTO_LOCK@@QEAAXXZ @ 0x140064468
 * Callers:
 *     DpiFdoCreateRelatedObjects @ 0x14040B520 (DpiFdoCreateRelatedObjects.c)
 * Callees:
 *     <none>
 */

void __fastcall CHILD_RELATIONS_AUTO_LOCK::Acquire(CHILD_RELATIONS_AUTO_LOCK *this)
{
  if ( *((_BYTE *)this + 1) )
  {
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite((PERESOURCE)(*((_QWORD *)this + 1) + 3440LL), 1u);
  }
  else
  {
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)(*((_QWORD *)this + 1) + 3440LL), 1u);
  }
  *(_BYTE *)this = 1;
}
