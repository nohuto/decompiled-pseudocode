/*
 * XREFs of ?uiDxPresentFlags@SFMLOGICALSURFACE@@QEAAIXZ @ 0x14015EBF0
 * Callers:
 *     GreGetDxSharedSurface @ 0x14015E6B0 (GreGetDxSharedSurface.c)
 *     GreGetHwndUpdateIds @ 0x140321B48 (GreGetHwndUpdateIds.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SFMLOGICALSURFACE::uiDxPresentFlags(SFMLOGICALSURFACE *this)
{
  __int64 v2; // rdx
  int v3; // ecx
  int v4; // ebx
  Gre::Base *v5; // rcx
  __int64 v6; // rdx
  int v7; // ecx

  v4 = 0;
  if ( *((_QWORD *)Gre::Base::Globals(this) + 17)
    && *(_DWORD *)(*(_QWORD *)(W32GetSessionState(v3, v2) + 96) + 100LL)
    && *((_QWORD *)Gre::Base::Globals(v5) + 17)
    && *(_DWORD *)(*(_QWORD *)(W32GetSessionState(v7, v6) + 96) + 124LL) )
  {
    v4 = 8;
  }
  return *((_DWORD *)this + 53) | (unsigned int)v4;
}
