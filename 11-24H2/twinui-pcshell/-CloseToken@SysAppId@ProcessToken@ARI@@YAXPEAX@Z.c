/*
 * XREFs of ?CloseToken@SysAppId@ProcessToken@ARI@@YAXPEAX@Z @ 0x1801B4BD0
 * Callers:
 *     ?IsProcessStronglyNamed@SysAppId@ProcessToken@ARI@@YAJPEAXPEA_N@Z @ 0x180678DEC (-IsProcessStronglyNamed@SysAppId@ProcessToken@ARI@@YAJPEAXPEA_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ARI::ProcessToken::SysAppId::CloseToken(ARI::ProcessToken::SysAppId *this, void *a2)
{
  if ( this != (ARI::ProcessToken::SysAppId *)-4LL )
    CloseHandle(this);
}
