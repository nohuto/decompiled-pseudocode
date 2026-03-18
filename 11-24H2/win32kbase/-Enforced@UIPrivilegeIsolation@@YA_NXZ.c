/*
 * XREFs of ?Enforced@UIPrivilegeIsolation@@YA_NXZ @ 0x1401A5B90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall UIPrivilegeIsolation::Enforced(UIPrivilegeIsolation *this)
{
  return WPP_MAIN_CB.SectorSize;
}
