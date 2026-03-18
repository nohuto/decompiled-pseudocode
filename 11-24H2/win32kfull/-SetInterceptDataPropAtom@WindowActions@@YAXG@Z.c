/*
 * XREFs of ?SetInterceptDataPropAtom@WindowActions@@YAXG@Z @ 0x1402CB204
 * Callers:
 *     SetupClassAtoms @ 0x1401EBA70 (SetupClassAtoms.c)
 * Callees:
 *     <none>
 */

void __fastcall WindowActions::SetInterceptDataPropAtom(WindowActions *this, __int64 a2)
{
  *(_WORD *)(W32GetUserSessionState(this, a2) + 42328) = (_WORD)this;
}
