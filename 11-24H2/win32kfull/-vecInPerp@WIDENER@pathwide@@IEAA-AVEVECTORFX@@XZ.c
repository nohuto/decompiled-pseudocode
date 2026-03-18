/*
 * XREFs of ?vecInPerp@WIDENER@pathwide@@IEAA?AVEVECTORFX@@XZ @ 0x1400E9F24
 * Callers:
 *     ?vAddJoin@WIDENER@pathwide@@IEAAXH@Z @ 0x1400E8E9C (-vAddJoin@WIDENER@pathwide@@IEAAXH@Z.c)
 * Callees:
 *     ?vVecPerpCompute@WIDENER@pathwide@@AEAAXAEAVLINEDATA@2@@Z @ 0x1400E9FB4 (-vVecPerpCompute@WIDENER@pathwide@@AEAAXAEAVLINEDATA@2@@Z.c)
 */

_QWORD *__fastcall pathwide::WIDENER::vecInPerp(pathwide::WIDENER *a1, _QWORD *a2)
{
  struct pathwide::LINEDATA *v4; // rdx
  _QWORD *result; // rax

  v4 = (struct pathwide::LINEDATA *)*((_QWORD *)a1 + 88);
  if ( (*(_DWORD *)v4 & 4) == 0 )
    pathwide::WIDENER::vVecPerpCompute(a1, v4);
  result = a2;
  *a2 = *(_QWORD *)(*((_QWORD *)a1 + 88) + 64LL);
  return result;
}
