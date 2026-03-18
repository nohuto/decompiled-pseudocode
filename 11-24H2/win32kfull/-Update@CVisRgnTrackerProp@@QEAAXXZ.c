/*
 * XREFs of ?Update@CVisRgnTrackerProp@@QEAAXXZ @ 0x1400489D4
 * Callers:
 *     UpdateDirtyVisRgnTrackers @ 0x140046E20 (UpdateDirtyVisRgnTrackers.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x140049A60 (_IsTopLevelWindow.c)
 *     ?UpdateTrackerRegion@CVisRgnTrackerProp@@AEAAXKI@Z @ 0x140049F70 (-UpdateTrackerRegion@CVisRgnTrackerProp@@AEAAXKI@Z.c)
 */

void __fastcall CVisRgnTrackerProp::Update(CVisRgnTrackerProp *this)
{
  unsigned int v2; // edi
  int v3; // eax
  __int64 v4; // r9
  char v5; // cl
  unsigned int v6; // edx

  v2 = 18;
  v3 = IsTopLevelWindow(*((_QWORD *)this + 2));
  *((_BYTE *)this + 73) = 0;
  v5 = *(_BYTE *)(*(_QWORD *)(v4 + 40) + 31LL) & 0x10;
  if ( *((_BYTE *)this + 72) || v5 )
  {
    *((_BYTE *)this + 72) = v5 != 0;
    if ( !v3 && (*(_BYTE *)(*(_QWORD *)(v4 + 40) + 31LL) & 4) != 0 )
      v2 = 26;
    if ( (*((_DWORD *)this + 10) & 8) != 0 )
      CVisRgnTrackerProp::UpdateTrackerRegion(this, v2, 0);
    if ( (*((_DWORD *)this + 10) & 6) != 0 )
    {
      v6 = v2 | 4;
      if ( (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 40LL) + 31LL) & 2) == 0 )
        v6 = v2;
      CVisRgnTrackerProp::UpdateTrackerRegion(this, v6, 1u);
    }
    if ( (*((_DWORD *)this + 10) & 0xF) != 0 )
      CVisRgnTrackerProp::UpdateTrackerRegion(this, 0, 2u);
  }
}
