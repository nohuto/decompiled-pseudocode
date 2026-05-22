/*
 * XREFs of ?UpdateZoomContactsForThreshold@ManipulationInjector@@AEAAXI@Z @ 0x180110FB4
 * Callers:
 *     ?InjectZoom@ManipulationInjector@@QEAAXMK@Z @ 0x180110614 (-InjectZoom@ManipulationInjector@@QEAAXMK@Z.c)
 *     ?StartManipulation@ManipulationInjector@@AEAAXW4INTERACTION_TYPE@@UtagPOINT@@K@Z @ 0x1801109DC (-StartManipulation@ManipulationInjector@@AEAAXW4INTERACTION_TYPE@@UtagPOINT@@K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ManipulationInjector::UpdateZoomContactsForThreshold(ManipulationInjector *this)
{
  int v1; // eax
  int v2; // eax
  int v3; // edx
  int v4; // eax
  int v5; // eax

  *((_DWORD *)this + 31) = 131078;
  *((_DWORD *)this + 69) = 131078;
  if ( *(_DWORD *)this == 2 )
  {
    v1 = -*((_DWORD *)this + 183);
    if ( *((_DWORD *)this + 22) != 32 )
      v1 = *((_DWORD *)this + 183);
    v2 = v1 / 2;
    *((_DWORD *)this + 38) -= v2;
    *((_DWORD *)this + 76) += v2;
  }
  else
  {
    v3 = *((_DWORD *)this + 184);
    if ( v3 > 0 )
    {
      v4 = -v3;
      if ( *((_DWORD *)this + 22) != 32 )
        v4 = *((_DWORD *)this + 184);
      v5 = v4 / 2;
      *((_DWORD *)this + 36) -= v5;
      *((_DWORD *)this + 74) += v5;
    }
  }
}
