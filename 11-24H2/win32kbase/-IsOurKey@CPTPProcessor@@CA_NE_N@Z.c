/*
 * XREFs of ?IsOurKey@CPTPProcessor@@CA_NE_N@Z @ 0x140106FC4
 * Callers:
 *     ?OnKeyEvent@CPTPProcessor@@SAXE_N@Z @ 0x140106EC4 (-OnKeyEvent@CPTPProcessor@@SAXE_N@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CPTPProcessor::IsOurKey(__int64 a1, char a2)
{
  char v2; // di
  unsigned __int64 v3; // rbx
  __int64 v4; // rcx
  unsigned __int64 v6; // rcx
  __int64 v7; // rcx

  v2 = 0;
  v3 = (unsigned __int8)a1;
  if ( !a2 && !_InterlockedCompareExchange64((volatile signed __int64 *)(W32GetUserSessionState(a1) + 3304), 0LL, 0LL) )
    return 0;
  if ( (unsigned __int8)v3 <= 0x20u )
  {
    v4 = 0x100002200LL;
    if ( _bittest64(&v4, v3) )
      return 1;
  }
  if ( (unsigned __int8)(v3 - 48) <= 0x3Fu )
  {
    v6 = 0xFFFF07FFFFFE03FFuLL;
    if ( _bittest64((const __int64 *)&v6, (unsigned int)(v3 - 48)) )
      return 1;
  }
  LOBYTE(v3) = v3 + 70;
  if ( (unsigned __int8)v3 <= 0x25u )
  {
    v7 = 0x3E0000007FLL;
    if ( _bittest64(&v7, v3) )
      return 1;
  }
  return v2;
}
