/*
 * XREFs of ?UpdateGlitchList@CDebugFrameCounter@@IEAAXAEA_K@Z @ 0x180269BB4
 * Callers:
 *     ?ProcessComposition@CComposition@@QEAAXXZ @ 0x1800E6E20 (-ProcessComposition@CComposition@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CDebugFrameCounter::UpdateGlitchList(CDebugFrameCounter *this, unsigned __int64 *a2)
{
  int v2; // r9d
  unsigned int v3; // r8d
  unsigned __int64 v4; // r10

  v2 = *((_DWORD *)this + 1037);
  v3 = *((_DWORD *)this + 1036);
  if ( v3 != v2 )
  {
    v4 = *a2 - 10000000;
    do
    {
      if ( *((_QWORD *)this + v3 + 519) >= v4 )
        break;
      v3 = (v3 + 1) % 0x3C;
      *((_DWORD *)this + 1036) = v3;
    }
    while ( v3 != v2 );
  }
}
