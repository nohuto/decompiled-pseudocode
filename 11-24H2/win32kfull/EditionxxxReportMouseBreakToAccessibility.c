/*
 * XREFs of EditionxxxReportMouseBreakToAccessibility @ 0x1401D22A0
 * Callers:
 *     <none>
 * Callees:
 *     ?MSGLUA_GPQFOREGROUND@@YAXXZ @ 0x1400942AC (-MSGLUA_GPQFOREGROUND@@YAXXZ.c)
 *     ?IsGpqForegroundAccessibleOnInputThread@@YA_N_NAEBUtagUIPI_INFO_INT@@@Z @ 0x140094D88 (-IsGpqForegroundAccessibleOnInputThread@@YA_N_NAEBUtagUIPI_INFO_INT@@@Z.c)
 */

__int64 __fastcall EditionxxxReportMouseBreakToAccessibility(__int64 a1, const struct tagUIPI_INFO_INT *a2, int a3)
{
  __int16 v5; // bx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 UserSessionState; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx

  v5 = a1;
  v6 = *(unsigned int *)(W32GetUserSessionState(a1, a2) + 20636);
  if ( (v6 & 1) != 0 )
  {
    UserSessionState = W32GetUserSessionState(v7, v6);
    *(_WORD *)(UserSessionState + 20660) &= ~v5;
  }
  if ( (*(_DWORD *)(W32GetUserSessionState(v7, v6) + 20628) & 1) == 0 )
    return 1LL;
  xxxUnlatchStickyKeys();
  LOBYTE(v10) = a3 != 0;
  if ( IsGpqForegroundAccessibleOnInputThread(v10, a2) )
    return 1LL;
  MSGLUA_GPQFOREGROUND(v12, v11);
  return 0LL;
}
