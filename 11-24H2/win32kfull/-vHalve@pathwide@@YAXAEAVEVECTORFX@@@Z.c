/*
 * XREFs of ?vHalve@pathwide@@YAXAEAVEVECTORFX@@@Z @ 0x1400ED27C
 * Callers:
 *     ?bPolygonizePen@WIDEPENOBJ@pathwide@@QEAAHAEBVEXFORMOBJ@@J@Z @ 0x1400E9CE8 (-bPolygonizePen@WIDEPENOBJ@pathwide@@QEAAHAEBVEXFORMOBJ@@J@Z.c)
 *     ?bThicken@WIDEPENOBJ@pathwide@@AEAAHPEAU_POINTFIX@@@Z @ 0x1400EB7C0 (-bThicken@WIDEPENOBJ@pathwide@@AEAAHPEAU_POINTFIX@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall pathwide::vHalve(pathwide *this, struct EVECTORFX *a2)
{
  int v2; // eax
  int v3; // edx

  v2 = *(_DWORD *)this;
  if ( *(int *)this >= 0 )
    ++v2;
  v3 = *((_DWORD *)this + 1);
  if ( v3 >= 0 )
    ++v3;
  *(_DWORD *)this = v2 >> 1;
  *((_DWORD *)this + 1) = v3 >> 1;
}
