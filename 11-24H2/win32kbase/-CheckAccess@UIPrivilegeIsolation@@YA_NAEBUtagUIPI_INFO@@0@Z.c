/*
 * XREFs of ?CheckAccess@UIPrivilegeIsolation@@YA_NAEBUtagUIPI_INFO@@0@Z @ 0x1401A5A40
 * Callers:
 *     ?IsHandleEntryAccessibleForIL@@YAHPEAU_HANDLEENTRY@@@Z @ 0x1400CA154 (-IsHandleEntryAccessibleForIL@@YAHPEAU_HANDLEENTRY@@@Z.c)
 * Callees:
 *     ?CheckAccessEx@UIPrivilegeIsolation@@YA_NAEBUtagUIPI_INFO@@0_N@Z @ 0x1401A5A58 (-CheckAccessEx@UIPrivilegeIsolation@@YA_NAEBUtagUIPI_INFO@@0_N@Z.c)
 */

bool __fastcall UIPrivilegeIsolation::CheckAccess(
        UIPrivilegeIsolation *this,
        const struct tagUIPI_INFO *a2,
        const struct tagUIPI_INFO *a3,
        bool a4)
{
  return UIPrivilegeIsolation::CheckAccessEx(this, a2, 0LL, a4);
}
