/*
 * XREFs of ?vInclude@ERECTFX@@QEAAXAEAU_POINTFIX@@@Z @ 0x1400E16A4
 * Callers:
 *     ?createrec@PATH_CORE@@AEAA_NPEBVEXFORMOBJR@@PEAUPATHDATAL@@PEBU_POINTFIX@@@Z @ 0x14006A178 (-createrec@PATH_CORE@@AEAA_NPEBVEXFORMOBJR@@PEAUPATHDATAL@@PEBU_POINTFIX@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ERECTFX::vInclude(ERECTFX *this, struct _POINTFIX *a2)
{
  FIX x; // eax
  FIX y; // eax

  x = a2->x;
  if ( *(_DWORD *)this > a2->x )
  {
    *(_DWORD *)this = x;
  }
  else if ( *((_DWORD *)this + 2) < x )
  {
    *((_DWORD *)this + 2) = x;
  }
  y = a2->y;
  if ( *((_DWORD *)this + 3) < y )
  {
    *((_DWORD *)this + 3) = y;
  }
  else if ( *((_DWORD *)this + 1) > y )
  {
    *((_DWORD *)this + 1) = y;
  }
}
