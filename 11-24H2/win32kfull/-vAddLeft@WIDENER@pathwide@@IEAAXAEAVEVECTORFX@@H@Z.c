/*
 * XREFs of ?vAddLeft@WIDENER@pathwide@@IEAAXAEAVEVECTORFX@@H@Z @ 0x1400E8C20
 * Callers:
 *     ?vAddJoin@WIDENER@pathwide@@IEAAXH@Z @ 0x1400E8E9C (-vAddJoin@WIDENER@pathwide@@IEAAXH@Z.c)
 *     ?vAddRoundJoin@WIDENER@pathwide@@IEAAXH@Z @ 0x1400E9224 (-vAddRoundJoin@WIDENER@pathwide@@IEAAXH@Z.c)
 * Callees:
 *     ?vGrowPathAndAddPoint@WIDEPATHOBJ@pathwide@@IEAAXPEBU_POINTFIX@@PEAVEVECTORFX@@H@Z @ 0x1400ED304 (-vGrowPathAndAddPoint@WIDEPATHOBJ@pathwide@@IEAAXPEBU_POINTFIX@@PEAVEVECTORFX@@H@Z.c)
 */

void __fastcall pathwide::WIDENER::vAddLeft(pathwide::WIDENER *this, struct EVECTORFX *a2)
{
  _DWORD *v2; // r8

  v2 = (_DWORD *)*((_QWORD *)this + 138);
  if ( (unsigned __int64)v2 >= *((_QWORD *)this + 139) )
  {
    pathwide::WIDEPATHOBJ::vGrowPathAndAddPoint(
      (pathwide::WIDENER *)((char *)this + 976),
      (const struct _POINTFIX *)((char *)this + 692),
      a2,
      1);
  }
  else
  {
    *v2 = *((_DWORD *)this + 173) - *(_DWORD *)a2;
    *(_DWORD *)(*((_QWORD *)this + 138) + 4LL) = *((_DWORD *)this + 174) - *((_DWORD *)a2 + 1);
    *((_QWORD *)this + 138) += 8LL;
  }
}
