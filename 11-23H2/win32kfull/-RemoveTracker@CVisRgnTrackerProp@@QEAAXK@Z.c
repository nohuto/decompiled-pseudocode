/*
 * XREFs of ?RemoveTracker@CVisRgnTrackerProp@@QEAAXK@Z @ 0x1C0026AF4
 * Callers:
 *     RemoveVisRgnTracker @ 0x1C0026AAC (RemoveVisRgnTracker.c)
 * Callees:
 *     DwmAsyncUpdateVisRgn @ 0x1C0026F84 (DwmAsyncUpdateVisRgn.c)
 *     ?FreeTrackedRegion@CVisRgnTrackerProp@@AEAAXI@Z @ 0x1C0027158 (-FreeTrackedRegion@CVisRgnTrackerProp@@AEAAXI@Z.c)
 */

void __fastcall CVisRgnTrackerProp::RemoveTracker(CVisRgnTrackerProp *this, int a2)
{
  int v3; // edx
  void *v4; // rax
  void *v5; // rax
  void *v6; // rax

  v3 = *((_DWORD *)this + 10) & ~a2;
  *((_DWORD *)this + 10) = v3;
  if ( (v3 & 8) == 0 && *((_QWORD *)this + 6) )
  {
    CVisRgnTrackerProp::FreeTrackedRegion(this, 0);
    v6 = (void *)ReferenceDwmApiPort();
    DwmAsyncUpdateVisRgn(v6, 0);
  }
  if ( (*((_DWORD *)this + 10) & 6) == 0 && *((_QWORD *)this + 7) )
  {
    CVisRgnTrackerProp::FreeTrackedRegion(this, 1u);
    v5 = (void *)ReferenceDwmApiPort();
    DwmAsyncUpdateVisRgn(v5, 0);
  }
  if ( (*((_DWORD *)this + 10) & 1) == 0 )
  {
    if ( *((_QWORD *)this + 8) )
    {
      CVisRgnTrackerProp::FreeTrackedRegion(this, 2u);
      v4 = (void *)ReferenceDwmApiPort();
      DwmAsyncUpdateVisRgn(v4, 0);
    }
  }
}
