/*
 * XREFs of ?bTurnLeftRandom@pathwide@@YAHPEAVEVECTORFX@@0@Z @ 0x1400E9688
 * Callers:
 *     ?vAddJoin@WIDENER@pathwide@@IEAAXH@Z @ 0x1400E8E9C (-vAddJoin@WIDENER@pathwide@@IEAAXH@Z.c)
 *     ?vAddRoundJoin@WIDENER@pathwide@@IEAAXH@Z @ 0x1400E9224 (-vAddRoundJoin@WIDENER@pathwide@@IEAAXH@Z.c)
 *     ?bPolygonizePen@WIDEPENOBJ@pathwide@@QEAAHAEBVEXFORMOBJ@@J@Z @ 0x1400E9CE8 (-bPolygonizePen@WIDEPENOBJ@pathwide@@QEAAHAEBVEXFORMOBJ@@J@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall pathwide::bTurnLeftRandom(pathwide *this, struct EVECTORFX *a2, struct EVECTORFX *a3)
{
  __int64 v3; // r10
  __int64 v4; // r8
  __int64 v5; // r9

  v3 = *((int *)this + 1);
  v4 = *(int *)this;
  v5 = *((int *)a2 + 1);
  if ( (int)(v3 ^ v5 ^ v4 ^ *(_DWORD *)a2) < 0 )
    return ((unsigned int)v5 ^ (unsigned int)v4) >> 31;
  else
    return v5 * v4 < v3 * *(int *)a2;
}
