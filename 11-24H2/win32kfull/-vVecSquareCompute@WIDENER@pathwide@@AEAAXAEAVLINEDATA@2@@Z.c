/*
 * XREFs of ?vVecSquareCompute@WIDENER@pathwide@@AEAAXAEAVLINEDATA@2@@Z @ 0x1400C11DC
 * Callers:
 *     ?vAddEndCap@WIDENER@pathwide@@IEAAXXZ @ 0x1400EA198 (-vAddEndCap@WIDENER@pathwide@@IEAAXXZ.c)
 *     ?vAddStartCap@WIDENER@pathwide@@IEAAXXZ @ 0x1400EAEA0 (-vAddStartCap@WIDENER@pathwide@@IEAAXXZ.c)
 * Callees:
 *     ?efWorldLength@STYLER@pathwide@@IEAA?AVEFLOAT@@VEVECTORFX@@@Z @ 0x1400C0C10 (-efWorldLength@STYLER@pathwide@@IEAA-AVEFLOAT@@VEVECTORFX@@@Z.c)
 *     bFToL @ 0x1400E8DB0 (bFToL.c)
 */

void __fastcall pathwide::WIDENER::vVecSquareCompute(pathwide::WIDENER *this, struct pathwide::LINEDATA *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // r8
  char v6; // [rsp+40h] [rbp+8h] BYREF

  pathwide::STYLER::efWorldLength((__int64)this, (EFLOAT *)&v6, *((_QWORD *)a2 + 6));
  bFToL(v3, (char *)a2 + 56, 6LL);
  bFToL(v4, (char *)a2 + 60, v5);
  *(_DWORD *)a2 |= 2u;
}
