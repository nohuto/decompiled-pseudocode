/*
 * XREFs of DxgkGetPresenterViewMode @ 0x1403E1570
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

bool DxgkGetPresenterViewMode()
{
  return *((_DWORD *)DXGGLOBAL::GetGlobal() + 330) != 0;
}
