/*
 * XREFs of ?CreateMarginPropAtom@WindowMargins@@YA_NPEBG@Z @ 0x14026605C
 * Callers:
 *     SetupClassAtoms @ 0x1401EBA70 (SetupClassAtoms.c)
 * Callees:
 *     <none>
 */

bool __fastcall WindowMargins::CreateMarginPropAtom(WindowMargins *this, const unsigned __int16 *a2)
{
  __int16 v2; // bx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx

  v2 = UserAddAtomEx(L"SysWndMargin", 1LL, 2LL);
  *(_WORD *)(W32GetUserSessionState(v4, v3) + 42312) = v2;
  return *(_WORD *)(W32GetUserSessionState(v6, v5) + 42312) != 0;
}
